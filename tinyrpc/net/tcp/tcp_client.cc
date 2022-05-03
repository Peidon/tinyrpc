#include <sys/socket.h>
#include <arpa/inet.h>
#include "../../comm/log.h"
#include "../../coroutine/coroutine.h"
#include "../../coroutine/coroutine_hook.h"
#include "../../coroutine/coroutine_pool.h"
#include "../net_address.h"
#include "tcp_client.h" 
#include "../../comm/error_code.h"
#include "../timer.h"

namespace tinyrpc {

TcpClient::TcpClient(NetAddress::ptr addr) : m_peer_addr(addr) {

  m_family = m_peer_addr->getFamily();
  m_fd = socket(AF_INET, SOCK_STREAM, 0);
  m_local_addr = std::make_shared<tinyrpc::IPAddress>("127.0.0.1", 0);

  m_reactor = Reactor::GetReactor();
  m_connection = std::make_shared<TcpConnection>(this, m_reactor, m_fd, 128, m_peer_addr);

}

TcpClient::~TcpClient() {
  if (m_fd > 0) {
    close(m_fd);
  }
}

TcpConnection* TcpClient::getConnection() {
  if (!m_connection.get()) {
    m_connection = std::make_shared<TcpConnection>(this, m_reactor, m_fd, 128, m_peer_addr);
  }
  return m_connection.get();
}

int TcpClient::sendAndRecv() {
  bool is_timeout = false;
  tinyrpc::Coroutine* cur_cor = tinyrpc::Coroutine::GetCurrentCoroutine();
  auto timer_cb = [this, &is_timeout, cur_cor]() {
    InfoLog << "TcpClient timer out event occur";
    is_timeout = true;
    this->m_connection->setOverTimeFlag(true); 
    tinyrpc::Coroutine::Resume(cur_cor);
  };
  TimerEvent::ptr event = std::make_shared<TimerEvent>(m_max_timeout, false, timer_cb);
  m_reactor->getTimer()->addTimerEvent(event);

  while (!is_timeout) {
    DebugLog << "begin to connect";
    if (m_connection->getState() != Connected) {
      int rt = connect_hook(m_fd, reinterpret_cast<sockaddr*>(m_peer_addr->getSockAddr()), m_peer_addr->getSockLen());
      if (rt == 0) {
        DebugLog << "connect [" << m_peer_addr->toString() << "] succ!";
        m_connection->setUpClient();
        break;
      }
      if (is_timeout) {
        InfoLog << "connect timeout, break";
        goto timeout_deal;
      }
    } else {
      break;
    }
  }    

  if (m_connection->getState() != Connected) {
    std::stringstream ss;
    ss << "connect peer addr[" << m_peer_addr->toString() << "] error. sys error=" << strerror(errno);
    m_err_info = ss.str();
    return ERROR_FAILED_CONNECT;
  }

  m_connection->setUpClient();
  m_connection->output();
  if (m_connection->getOverTimer()) {
    InfoLog << "send data over time";
    goto timeout_deal;
  }

  m_connection->input();

  if (m_connection->getOverTimer()) {
    InfoLog << "read data over time";
    goto timeout_deal;
  }

  m_reactor->getTimer()->delTimerEvent(event);
  m_connection->execute();
  m_err_info = "";
  return 0;

timeout_deal:
  std::stringstream ss;
  ss << "call rpc falied, over " << m_max_timeout << " ms";
  m_err_info = ss.str();

  m_connection->setOverTimeFlag(false);
  return ERROR_RPC_CALL_TIMEOUT;

}

void TcpClient::stop() {
  if (!m_is_stop) {
    m_is_stop = true;
    m_reactor->stop();
  }
}

} // namespace name