#include <memory>
#include <google/protobuf/service.h>
#include <google/protobuf/message.h>
#include <google/protobuf/descriptor.h>
#include "../net_address.h"
#include "../tcp/tcp_client.h"
#include "tinypb_rpc_channel.h"
#include "tinypb_codec.h"
#include "tinypb_data.h"
#include "../../log/log.h"


namespace tinyrpc {

TinyPbRpcChannel::TinyPbRpcChannel(NetAddress::ptr addr) {
  m_client = std::make_shared<TcpClient>(addr);
}

void TinyPbRpcChannel::CallMethod(const google::protobuf::MethodDescriptor* method, 
    google::protobuf::RpcController* controller, 
    const google::protobuf::Message* request, 
    google::protobuf::Message* response, 
    google::protobuf::Closure* done) {

  TinyPbStruct pb_struct;
  pb_struct.service_full_name = method->full_name();
  if (!request->SerializeToString(&(pb_struct.pb_data))) {
    ErrorLog << "serialize error";
  }
  TinyPbCodeC* m_codec = m_client->getConnection()->getCodec();
  m_codec->encode(m_client->getConnection()->getOutBuffer(), &pb_struct);
  m_client->start();
  done->Run();
}


}