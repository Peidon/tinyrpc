// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tinypb.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_tinypb_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_tinypb_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/service.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_tinypb_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_tinypb_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tinypb_2eproto;
class QueryAgeRes;
struct QueryAgeResDefaultTypeInternal;
extern QueryAgeResDefaultTypeInternal _QueryAgeRes_default_instance_;
class QueryNameRes;
struct QueryNameResDefaultTypeInternal;
extern QueryNameResDefaultTypeInternal _QueryNameRes_default_instance_;
class QueryReq;
struct QueryReqDefaultTypeInternal;
extern QueryReqDefaultTypeInternal _QueryReq_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::QueryAgeRes* Arena::CreateMaybeMessage<::QueryAgeRes>(Arena*);
template<> ::QueryNameRes* Arena::CreateMaybeMessage<::QueryNameRes>(Arena*);
template<> ::QueryReq* Arena::CreateMaybeMessage<::QueryReq>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class QueryReq final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:QueryReq) */ {
 public:
  inline QueryReq() : QueryReq(nullptr) {}
  ~QueryReq() override;
  explicit PROTOBUF_CONSTEXPR QueryReq(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  QueryReq(const QueryReq& from);
  QueryReq(QueryReq&& from) noexcept
    : QueryReq() {
    *this = ::std::move(from);
  }

  inline QueryReq& operator=(const QueryReq& from) {
    CopyFrom(from);
    return *this;
  }
  inline QueryReq& operator=(QueryReq&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const QueryReq& default_instance() {
    return *internal_default_instance();
  }
  static inline const QueryReq* internal_default_instance() {
    return reinterpret_cast<const QueryReq*>(
               &_QueryReq_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(QueryReq& a, QueryReq& b) {
    a.Swap(&b);
  }
  inline void Swap(QueryReq* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(QueryReq* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  QueryReq* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<QueryReq>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const QueryReq& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const QueryReq& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(QueryReq* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "QueryReq";
  }
  protected:
  explicit QueryReq(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kReqNoFieldNumber = 1,
    kIdFieldNumber = 2,
  };
  // int32 req_no = 1;
  void clear_req_no();
  int32_t req_no() const;
  void set_req_no(int32_t value);
  private:
  int32_t _internal_req_no() const;
  void _internal_set_req_no(int32_t value);
  public:

  // int32 id = 2;
  void clear_id();
  int32_t id() const;
  void set_id(int32_t value);
  private:
  int32_t _internal_id() const;
  void _internal_set_id(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:QueryReq)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  int32_t req_no_;
  int32_t id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_tinypb_2eproto;
};
// -------------------------------------------------------------------

class QueryNameRes final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:QueryNameRes) */ {
 public:
  inline QueryNameRes() : QueryNameRes(nullptr) {}
  ~QueryNameRes() override;
  explicit PROTOBUF_CONSTEXPR QueryNameRes(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  QueryNameRes(const QueryNameRes& from);
  QueryNameRes(QueryNameRes&& from) noexcept
    : QueryNameRes() {
    *this = ::std::move(from);
  }

  inline QueryNameRes& operator=(const QueryNameRes& from) {
    CopyFrom(from);
    return *this;
  }
  inline QueryNameRes& operator=(QueryNameRes&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const QueryNameRes& default_instance() {
    return *internal_default_instance();
  }
  static inline const QueryNameRes* internal_default_instance() {
    return reinterpret_cast<const QueryNameRes*>(
               &_QueryNameRes_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(QueryNameRes& a, QueryNameRes& b) {
    a.Swap(&b);
  }
  inline void Swap(QueryNameRes* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(QueryNameRes* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  QueryNameRes* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<QueryNameRes>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const QueryNameRes& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const QueryNameRes& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(QueryNameRes* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "QueryNameRes";
  }
  protected:
  explicit QueryNameRes(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResInfoFieldNumber = 2,
    kNameFieldNumber = 4,
    kRetCodeFieldNumber = 1,
    kIdFieldNumber = 3,
  };
  // string res_info = 2;
  void clear_res_info();
  const std::string& res_info() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_res_info(ArgT0&& arg0, ArgT... args);
  std::string* mutable_res_info();
  PROTOBUF_NODISCARD std::string* release_res_info();
  void set_allocated_res_info(std::string* res_info);
  private:
  const std::string& _internal_res_info() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_res_info(const std::string& value);
  std::string* _internal_mutable_res_info();
  public:

  // string name = 4;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // int32 ret_code = 1;
  void clear_ret_code();
  int32_t ret_code() const;
  void set_ret_code(int32_t value);
  private:
  int32_t _internal_ret_code() const;
  void _internal_set_ret_code(int32_t value);
  public:

  // int32 id = 3;
  void clear_id();
  int32_t id() const;
  void set_id(int32_t value);
  private:
  int32_t _internal_id() const;
  void _internal_set_id(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:QueryNameRes)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr res_info_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  int32_t ret_code_;
  int32_t id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_tinypb_2eproto;
};
// -------------------------------------------------------------------

class QueryAgeRes final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:QueryAgeRes) */ {
 public:
  inline QueryAgeRes() : QueryAgeRes(nullptr) {}
  ~QueryAgeRes() override;
  explicit PROTOBUF_CONSTEXPR QueryAgeRes(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  QueryAgeRes(const QueryAgeRes& from);
  QueryAgeRes(QueryAgeRes&& from) noexcept
    : QueryAgeRes() {
    *this = ::std::move(from);
  }

  inline QueryAgeRes& operator=(const QueryAgeRes& from) {
    CopyFrom(from);
    return *this;
  }
  inline QueryAgeRes& operator=(QueryAgeRes&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const QueryAgeRes& default_instance() {
    return *internal_default_instance();
  }
  static inline const QueryAgeRes* internal_default_instance() {
    return reinterpret_cast<const QueryAgeRes*>(
               &_QueryAgeRes_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(QueryAgeRes& a, QueryAgeRes& b) {
    a.Swap(&b);
  }
  inline void Swap(QueryAgeRes* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(QueryAgeRes* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  QueryAgeRes* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<QueryAgeRes>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const QueryAgeRes& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const QueryAgeRes& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(QueryAgeRes* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "QueryAgeRes";
  }
  protected:
  explicit QueryAgeRes(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResInfoFieldNumber = 2,
    kRetCodeFieldNumber = 1,
    kIdFieldNumber = 3,
    kAgeFieldNumber = 4,
  };
  // string res_info = 2;
  void clear_res_info();
  const std::string& res_info() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_res_info(ArgT0&& arg0, ArgT... args);
  std::string* mutable_res_info();
  PROTOBUF_NODISCARD std::string* release_res_info();
  void set_allocated_res_info(std::string* res_info);
  private:
  const std::string& _internal_res_info() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_res_info(const std::string& value);
  std::string* _internal_mutable_res_info();
  public:

  // int32 ret_code = 1;
  void clear_ret_code();
  int32_t ret_code() const;
  void set_ret_code(int32_t value);
  private:
  int32_t _internal_ret_code() const;
  void _internal_set_ret_code(int32_t value);
  public:

  // int32 id = 3;
  void clear_id();
  int32_t id() const;
  void set_id(int32_t value);
  private:
  int32_t _internal_id() const;
  void _internal_set_id(int32_t value);
  public:

  // int32 age = 4;
  void clear_age();
  int32_t age() const;
  void set_age(int32_t value);
  private:
  int32_t _internal_age() const;
  void _internal_set_age(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:QueryAgeRes)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr res_info_;
  int32_t ret_code_;
  int32_t id_;
  int32_t age_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_tinypb_2eproto;
};
// ===================================================================

class QueryService_Stub;

class QueryService : public ::PROTOBUF_NAMESPACE_ID::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline QueryService() {};
 public:
  virtual ~QueryService();

  typedef QueryService_Stub Stub;

  static const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* descriptor();

  virtual void query_name(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                       const ::QueryReq* request,
                       ::QueryNameRes* response,
                       ::google::protobuf::Closure* done);
  virtual void query_age(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                       const ::QueryReq* request,
                       ::QueryAgeRes* response,
                       ::google::protobuf::Closure* done);

  // implements Service ----------------------------------------------

  const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method,
                  ::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                  const ::PROTOBUF_NAMESPACE_ID::Message* request,
                  ::PROTOBUF_NAMESPACE_ID::Message* response,
                  ::google::protobuf::Closure* done);
  const ::PROTOBUF_NAMESPACE_ID::Message& GetRequestPrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const;
  const ::PROTOBUF_NAMESPACE_ID::Message& GetResponsePrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(QueryService);
};

class QueryService_Stub : public QueryService {
 public:
  QueryService_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel);
  QueryService_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel,
                   ::PROTOBUF_NAMESPACE_ID::Service::ChannelOwnership ownership);
  ~QueryService_Stub();

  inline ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel() { return channel_; }

  // implements QueryService ------------------------------------------

  void query_name(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                       const ::QueryReq* request,
                       ::QueryNameRes* response,
                       ::google::protobuf::Closure* done);
  void query_age(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                       const ::QueryReq* request,
                       ::QueryAgeRes* response,
                       ::google::protobuf::Closure* done);
 private:
  ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(QueryService_Stub);
};


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// QueryReq

// int32 req_no = 1;
inline void QueryReq::clear_req_no() {
  req_no_ = 0;
}
inline int32_t QueryReq::_internal_req_no() const {
  return req_no_;
}
inline int32_t QueryReq::req_no() const {
  // @@protoc_insertion_point(field_get:QueryReq.req_no)
  return _internal_req_no();
}
inline void QueryReq::_internal_set_req_no(int32_t value) {
  
  req_no_ = value;
}
inline void QueryReq::set_req_no(int32_t value) {
  _internal_set_req_no(value);
  // @@protoc_insertion_point(field_set:QueryReq.req_no)
}

// int32 id = 2;
inline void QueryReq::clear_id() {
  id_ = 0;
}
inline int32_t QueryReq::_internal_id() const {
  return id_;
}
inline int32_t QueryReq::id() const {
  // @@protoc_insertion_point(field_get:QueryReq.id)
  return _internal_id();
}
inline void QueryReq::_internal_set_id(int32_t value) {
  
  id_ = value;
}
inline void QueryReq::set_id(int32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:QueryReq.id)
}

// -------------------------------------------------------------------

// QueryNameRes

// int32 ret_code = 1;
inline void QueryNameRes::clear_ret_code() {
  ret_code_ = 0;
}
inline int32_t QueryNameRes::_internal_ret_code() const {
  return ret_code_;
}
inline int32_t QueryNameRes::ret_code() const {
  // @@protoc_insertion_point(field_get:QueryNameRes.ret_code)
  return _internal_ret_code();
}
inline void QueryNameRes::_internal_set_ret_code(int32_t value) {
  
  ret_code_ = value;
}
inline void QueryNameRes::set_ret_code(int32_t value) {
  _internal_set_ret_code(value);
  // @@protoc_insertion_point(field_set:QueryNameRes.ret_code)
}

// string res_info = 2;
inline void QueryNameRes::clear_res_info() {
  res_info_.ClearToEmpty();
}
inline const std::string& QueryNameRes::res_info() const {
  // @@protoc_insertion_point(field_get:QueryNameRes.res_info)
  return _internal_res_info();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void QueryNameRes::set_res_info(ArgT0&& arg0, ArgT... args) {
 
 res_info_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:QueryNameRes.res_info)
}
inline std::string* QueryNameRes::mutable_res_info() {
  std::string* _s = _internal_mutable_res_info();
  // @@protoc_insertion_point(field_mutable:QueryNameRes.res_info)
  return _s;
}
inline const std::string& QueryNameRes::_internal_res_info() const {
  return res_info_.Get();
}
inline void QueryNameRes::_internal_set_res_info(const std::string& value) {
  
  res_info_.Set(value, GetArenaForAllocation());
}
inline std::string* QueryNameRes::_internal_mutable_res_info() {
  
  return res_info_.Mutable(GetArenaForAllocation());
}
inline std::string* QueryNameRes::release_res_info() {
  // @@protoc_insertion_point(field_release:QueryNameRes.res_info)
  return res_info_.Release();
}
inline void QueryNameRes::set_allocated_res_info(std::string* res_info) {
  if (res_info != nullptr) {
    
  } else {
    
  }
  res_info_.SetAllocated(res_info, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (res_info_.IsDefault()) {
    res_info_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:QueryNameRes.res_info)
}

// int32 id = 3;
inline void QueryNameRes::clear_id() {
  id_ = 0;
}
inline int32_t QueryNameRes::_internal_id() const {
  return id_;
}
inline int32_t QueryNameRes::id() const {
  // @@protoc_insertion_point(field_get:QueryNameRes.id)
  return _internal_id();
}
inline void QueryNameRes::_internal_set_id(int32_t value) {
  
  id_ = value;
}
inline void QueryNameRes::set_id(int32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:QueryNameRes.id)
}

// string name = 4;
inline void QueryNameRes::clear_name() {
  name_.ClearToEmpty();
}
inline const std::string& QueryNameRes::name() const {
  // @@protoc_insertion_point(field_get:QueryNameRes.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void QueryNameRes::set_name(ArgT0&& arg0, ArgT... args) {
 
 name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:QueryNameRes.name)
}
inline std::string* QueryNameRes::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:QueryNameRes.name)
  return _s;
}
inline const std::string& QueryNameRes::_internal_name() const {
  return name_.Get();
}
inline void QueryNameRes::_internal_set_name(const std::string& value) {
  
  name_.Set(value, GetArenaForAllocation());
}
inline std::string* QueryNameRes::_internal_mutable_name() {
  
  return name_.Mutable(GetArenaForAllocation());
}
inline std::string* QueryNameRes::release_name() {
  // @@protoc_insertion_point(field_release:QueryNameRes.name)
  return name_.Release();
}
inline void QueryNameRes::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (name_.IsDefault()) {
    name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:QueryNameRes.name)
}

// -------------------------------------------------------------------

// QueryAgeRes

// int32 ret_code = 1;
inline void QueryAgeRes::clear_ret_code() {
  ret_code_ = 0;
}
inline int32_t QueryAgeRes::_internal_ret_code() const {
  return ret_code_;
}
inline int32_t QueryAgeRes::ret_code() const {
  // @@protoc_insertion_point(field_get:QueryAgeRes.ret_code)
  return _internal_ret_code();
}
inline void QueryAgeRes::_internal_set_ret_code(int32_t value) {
  
  ret_code_ = value;
}
inline void QueryAgeRes::set_ret_code(int32_t value) {
  _internal_set_ret_code(value);
  // @@protoc_insertion_point(field_set:QueryAgeRes.ret_code)
}

// string res_info = 2;
inline void QueryAgeRes::clear_res_info() {
  res_info_.ClearToEmpty();
}
inline const std::string& QueryAgeRes::res_info() const {
  // @@protoc_insertion_point(field_get:QueryAgeRes.res_info)
  return _internal_res_info();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void QueryAgeRes::set_res_info(ArgT0&& arg0, ArgT... args) {
 
 res_info_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:QueryAgeRes.res_info)
}
inline std::string* QueryAgeRes::mutable_res_info() {
  std::string* _s = _internal_mutable_res_info();
  // @@protoc_insertion_point(field_mutable:QueryAgeRes.res_info)
  return _s;
}
inline const std::string& QueryAgeRes::_internal_res_info() const {
  return res_info_.Get();
}
inline void QueryAgeRes::_internal_set_res_info(const std::string& value) {
  
  res_info_.Set(value, GetArenaForAllocation());
}
inline std::string* QueryAgeRes::_internal_mutable_res_info() {
  
  return res_info_.Mutable(GetArenaForAllocation());
}
inline std::string* QueryAgeRes::release_res_info() {
  // @@protoc_insertion_point(field_release:QueryAgeRes.res_info)
  return res_info_.Release();
}
inline void QueryAgeRes::set_allocated_res_info(std::string* res_info) {
  if (res_info != nullptr) {
    
  } else {
    
  }
  res_info_.SetAllocated(res_info, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (res_info_.IsDefault()) {
    res_info_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:QueryAgeRes.res_info)
}

// int32 id = 3;
inline void QueryAgeRes::clear_id() {
  id_ = 0;
}
inline int32_t QueryAgeRes::_internal_id() const {
  return id_;
}
inline int32_t QueryAgeRes::id() const {
  // @@protoc_insertion_point(field_get:QueryAgeRes.id)
  return _internal_id();
}
inline void QueryAgeRes::_internal_set_id(int32_t value) {
  
  id_ = value;
}
inline void QueryAgeRes::set_id(int32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:QueryAgeRes.id)
}

// int32 age = 4;
inline void QueryAgeRes::clear_age() {
  age_ = 0;
}
inline int32_t QueryAgeRes::_internal_age() const {
  return age_;
}
inline int32_t QueryAgeRes::age() const {
  // @@protoc_insertion_point(field_get:QueryAgeRes.age)
  return _internal_age();
}
inline void QueryAgeRes::_internal_set_age(int32_t value) {
  
  age_ = value;
}
inline void QueryAgeRes::set_age(int32_t value) {
  _internal_set_age(value);
  // @@protoc_insertion_point(field_set:QueryAgeRes.age)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_tinypb_2eproto
