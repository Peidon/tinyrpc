// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tinypb.proto

#include "tinypb.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

PROTOBUF_CONSTEXPR QueryReq::QueryReq(
    ::_pbi::ConstantInitialized)
  : req_no_(0)
  , id_(0){}
struct QueryReqDefaultTypeInternal {
  PROTOBUF_CONSTEXPR QueryReqDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~QueryReqDefaultTypeInternal() {}
  union {
    QueryReq _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 QueryReqDefaultTypeInternal _QueryReq_default_instance_;
PROTOBUF_CONSTEXPR QueryNameRes::QueryNameRes(
    ::_pbi::ConstantInitialized)
  : res_info_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , name_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , ret_code_(0)
  , id_(0){}
struct QueryNameResDefaultTypeInternal {
  PROTOBUF_CONSTEXPR QueryNameResDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~QueryNameResDefaultTypeInternal() {}
  union {
    QueryNameRes _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 QueryNameResDefaultTypeInternal _QueryNameRes_default_instance_;
PROTOBUF_CONSTEXPR QueryAgeRes::QueryAgeRes(
    ::_pbi::ConstantInitialized)
  : res_info_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , ret_code_(0)
  , id_(0)
  , age_(0){}
struct QueryAgeResDefaultTypeInternal {
  PROTOBUF_CONSTEXPR QueryAgeResDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~QueryAgeResDefaultTypeInternal() {}
  union {
    QueryAgeRes _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 QueryAgeResDefaultTypeInternal _QueryAgeRes_default_instance_;
static ::_pb::Metadata file_level_metadata_tinypb_2eproto[3];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_tinypb_2eproto = nullptr;
static const ::_pb::ServiceDescriptor* file_level_service_descriptors_tinypb_2eproto[1];

const uint32_t TableStruct_tinypb_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::QueryReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::QueryReq, req_no_),
  PROTOBUF_FIELD_OFFSET(::QueryReq, id_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::QueryNameRes, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::QueryNameRes, ret_code_),
  PROTOBUF_FIELD_OFFSET(::QueryNameRes, res_info_),
  PROTOBUF_FIELD_OFFSET(::QueryNameRes, id_),
  PROTOBUF_FIELD_OFFSET(::QueryNameRes, name_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::QueryAgeRes, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::QueryAgeRes, ret_code_),
  PROTOBUF_FIELD_OFFSET(::QueryAgeRes, res_info_),
  PROTOBUF_FIELD_OFFSET(::QueryAgeRes, id_),
  PROTOBUF_FIELD_OFFSET(::QueryAgeRes, age_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::QueryReq)},
  { 8, -1, -1, sizeof(::QueryNameRes)},
  { 18, -1, -1, sizeof(::QueryAgeRes)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_QueryReq_default_instance_._instance,
  &::_QueryNameRes_default_instance_._instance,
  &::_QueryAgeRes_default_instance_._instance,
};

const char descriptor_table_protodef_tinypb_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\014tinypb.proto\"&\n\010QueryReq\022\016\n\006req_no\030\001 \001"
  "(\005\022\n\n\002id\030\002 \001(\005\"L\n\014QueryNameRes\022\020\n\010ret_co"
  "de\030\001 \001(\005\022\020\n\010res_info\030\002 \001(\t\022\n\n\002id\030\003 \001(\005\022\014"
  "\n\004name\030\004 \001(\t\"J\n\013QueryAgeRes\022\020\n\010ret_code\030"
  "\001 \001(\005\022\020\n\010res_info\030\002 \001(\t\022\n\n\002id\030\003 \001(\005\022\013\n\003a"
  "ge\030\004 \001(\0052\\\n\014QueryService\022&\n\nquery_name\022\t"
  ".QueryReq\032\r.QueryNameRes\022$\n\tquery_age\022\t."
  "QueryReq\032\014.QueryAgeResB\003\200\001\001b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_tinypb_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_tinypb_2eproto = {
    false, false, 315, descriptor_table_protodef_tinypb_2eproto,
    "tinypb.proto",
    &descriptor_table_tinypb_2eproto_once, nullptr, 0, 3,
    schemas, file_default_instances, TableStruct_tinypb_2eproto::offsets,
    file_level_metadata_tinypb_2eproto, file_level_enum_descriptors_tinypb_2eproto,
    file_level_service_descriptors_tinypb_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_tinypb_2eproto_getter() {
  return &descriptor_table_tinypb_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_tinypb_2eproto(&descriptor_table_tinypb_2eproto);

// ===================================================================

class QueryReq::_Internal {
 public:
};

QueryReq::QueryReq(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:QueryReq)
}
QueryReq::QueryReq(const QueryReq& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&req_no_, &from.req_no_,
    static_cast<size_t>(reinterpret_cast<char*>(&id_) -
    reinterpret_cast<char*>(&req_no_)) + sizeof(id_));
  // @@protoc_insertion_point(copy_constructor:QueryReq)
}

inline void QueryReq::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&req_no_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&id_) -
    reinterpret_cast<char*>(&req_no_)) + sizeof(id_));
}

QueryReq::~QueryReq() {
  // @@protoc_insertion_point(destructor:QueryReq)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void QueryReq::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void QueryReq::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void QueryReq::Clear() {
// @@protoc_insertion_point(message_clear_start:QueryReq)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&req_no_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&id_) -
      reinterpret_cast<char*>(&req_no_)) + sizeof(id_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* QueryReq::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 req_no = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          req_no_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* QueryReq::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:QueryReq)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 req_no = 1;
  if (this->_internal_req_no() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_req_no(), target);
  }

  // int32 id = 2;
  if (this->_internal_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:QueryReq)
  return target;
}

size_t QueryReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:QueryReq)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 req_no = 1;
  if (this->_internal_req_no() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_req_no());
  }

  // int32 id = 2;
  if (this->_internal_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData QueryReq::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    QueryReq::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*QueryReq::GetClassData() const { return &_class_data_; }

void QueryReq::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<QueryReq *>(to)->MergeFrom(
      static_cast<const QueryReq &>(from));
}


void QueryReq::MergeFrom(const QueryReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:QueryReq)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_req_no() != 0) {
    _internal_set_req_no(from._internal_req_no());
  }
  if (from._internal_id() != 0) {
    _internal_set_id(from._internal_id());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void QueryReq::CopyFrom(const QueryReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:QueryReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool QueryReq::IsInitialized() const {
  return true;
}

void QueryReq::InternalSwap(QueryReq* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(QueryReq, id_)
      + sizeof(QueryReq::id_)
      - PROTOBUF_FIELD_OFFSET(QueryReq, req_no_)>(
          reinterpret_cast<char*>(&req_no_),
          reinterpret_cast<char*>(&other->req_no_));
}

::PROTOBUF_NAMESPACE_ID::Metadata QueryReq::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_tinypb_2eproto_getter, &descriptor_table_tinypb_2eproto_once,
      file_level_metadata_tinypb_2eproto[0]);
}

// ===================================================================

class QueryNameRes::_Internal {
 public:
};

QueryNameRes::QueryNameRes(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:QueryNameRes)
}
QueryNameRes::QueryNameRes(const QueryNameRes& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  res_info_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    res_info_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_res_info().empty()) {
    res_info_.Set(from._internal_res_info(), 
      GetArenaForAllocation());
  }
  name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    name_.Set(from._internal_name(), 
      GetArenaForAllocation());
  }
  ::memcpy(&ret_code_, &from.ret_code_,
    static_cast<size_t>(reinterpret_cast<char*>(&id_) -
    reinterpret_cast<char*>(&ret_code_)) + sizeof(id_));
  // @@protoc_insertion_point(copy_constructor:QueryNameRes)
}

inline void QueryNameRes::SharedCtor() {
res_info_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  res_info_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
name_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  name_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&ret_code_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&id_) -
    reinterpret_cast<char*>(&ret_code_)) + sizeof(id_));
}

QueryNameRes::~QueryNameRes() {
  // @@protoc_insertion_point(destructor:QueryNameRes)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void QueryNameRes::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  res_info_.Destroy();
  name_.Destroy();
}

void QueryNameRes::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void QueryNameRes::Clear() {
// @@protoc_insertion_point(message_clear_start:QueryNameRes)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  res_info_.ClearToEmpty();
  name_.ClearToEmpty();
  ::memset(&ret_code_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&id_) -
      reinterpret_cast<char*>(&ret_code_)) + sizeof(id_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* QueryNameRes::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 ret_code = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          ret_code_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string res_info = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_res_info();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "QueryNameRes.res_info"));
        } else
          goto handle_unusual;
        continue;
      // int32 id = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string name = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "QueryNameRes.name"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* QueryNameRes::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:QueryNameRes)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 ret_code = 1;
  if (this->_internal_ret_code() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_ret_code(), target);
  }

  // string res_info = 2;
  if (!this->_internal_res_info().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_res_info().data(), static_cast<int>(this->_internal_res_info().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "QueryNameRes.res_info");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_res_info(), target);
  }

  // int32 id = 3;
  if (this->_internal_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(3, this->_internal_id(), target);
  }

  // string name = 4;
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "QueryNameRes.name");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_name(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:QueryNameRes)
  return target;
}

size_t QueryNameRes::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:QueryNameRes)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string res_info = 2;
  if (!this->_internal_res_info().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_res_info());
  }

  // string name = 4;
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // int32 ret_code = 1;
  if (this->_internal_ret_code() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_ret_code());
  }

  // int32 id = 3;
  if (this->_internal_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData QueryNameRes::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    QueryNameRes::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*QueryNameRes::GetClassData() const { return &_class_data_; }

void QueryNameRes::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<QueryNameRes *>(to)->MergeFrom(
      static_cast<const QueryNameRes &>(from));
}


void QueryNameRes::MergeFrom(const QueryNameRes& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:QueryNameRes)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_res_info().empty()) {
    _internal_set_res_info(from._internal_res_info());
  }
  if (!from._internal_name().empty()) {
    _internal_set_name(from._internal_name());
  }
  if (from._internal_ret_code() != 0) {
    _internal_set_ret_code(from._internal_ret_code());
  }
  if (from._internal_id() != 0) {
    _internal_set_id(from._internal_id());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void QueryNameRes::CopyFrom(const QueryNameRes& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:QueryNameRes)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool QueryNameRes::IsInitialized() const {
  return true;
}

void QueryNameRes::InternalSwap(QueryNameRes* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &res_info_, lhs_arena,
      &other->res_info_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &name_, lhs_arena,
      &other->name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(QueryNameRes, id_)
      + sizeof(QueryNameRes::id_)
      - PROTOBUF_FIELD_OFFSET(QueryNameRes, ret_code_)>(
          reinterpret_cast<char*>(&ret_code_),
          reinterpret_cast<char*>(&other->ret_code_));
}

::PROTOBUF_NAMESPACE_ID::Metadata QueryNameRes::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_tinypb_2eproto_getter, &descriptor_table_tinypb_2eproto_once,
      file_level_metadata_tinypb_2eproto[1]);
}

// ===================================================================

class QueryAgeRes::_Internal {
 public:
};

QueryAgeRes::QueryAgeRes(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:QueryAgeRes)
}
QueryAgeRes::QueryAgeRes(const QueryAgeRes& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  res_info_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    res_info_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_res_info().empty()) {
    res_info_.Set(from._internal_res_info(), 
      GetArenaForAllocation());
  }
  ::memcpy(&ret_code_, &from.ret_code_,
    static_cast<size_t>(reinterpret_cast<char*>(&age_) -
    reinterpret_cast<char*>(&ret_code_)) + sizeof(age_));
  // @@protoc_insertion_point(copy_constructor:QueryAgeRes)
}

inline void QueryAgeRes::SharedCtor() {
res_info_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  res_info_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&ret_code_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&age_) -
    reinterpret_cast<char*>(&ret_code_)) + sizeof(age_));
}

QueryAgeRes::~QueryAgeRes() {
  // @@protoc_insertion_point(destructor:QueryAgeRes)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void QueryAgeRes::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  res_info_.Destroy();
}

void QueryAgeRes::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void QueryAgeRes::Clear() {
// @@protoc_insertion_point(message_clear_start:QueryAgeRes)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  res_info_.ClearToEmpty();
  ::memset(&ret_code_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&age_) -
      reinterpret_cast<char*>(&ret_code_)) + sizeof(age_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* QueryAgeRes::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 ret_code = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          ret_code_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string res_info = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_res_info();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "QueryAgeRes.res_info"));
        } else
          goto handle_unusual;
        continue;
      // int32 id = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 age = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          age_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* QueryAgeRes::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:QueryAgeRes)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 ret_code = 1;
  if (this->_internal_ret_code() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_ret_code(), target);
  }

  // string res_info = 2;
  if (!this->_internal_res_info().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_res_info().data(), static_cast<int>(this->_internal_res_info().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "QueryAgeRes.res_info");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_res_info(), target);
  }

  // int32 id = 3;
  if (this->_internal_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(3, this->_internal_id(), target);
  }

  // int32 age = 4;
  if (this->_internal_age() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(4, this->_internal_age(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:QueryAgeRes)
  return target;
}

size_t QueryAgeRes::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:QueryAgeRes)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string res_info = 2;
  if (!this->_internal_res_info().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_res_info());
  }

  // int32 ret_code = 1;
  if (this->_internal_ret_code() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_ret_code());
  }

  // int32 id = 3;
  if (this->_internal_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_id());
  }

  // int32 age = 4;
  if (this->_internal_age() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_age());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData QueryAgeRes::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    QueryAgeRes::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*QueryAgeRes::GetClassData() const { return &_class_data_; }

void QueryAgeRes::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<QueryAgeRes *>(to)->MergeFrom(
      static_cast<const QueryAgeRes &>(from));
}


void QueryAgeRes::MergeFrom(const QueryAgeRes& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:QueryAgeRes)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_res_info().empty()) {
    _internal_set_res_info(from._internal_res_info());
  }
  if (from._internal_ret_code() != 0) {
    _internal_set_ret_code(from._internal_ret_code());
  }
  if (from._internal_id() != 0) {
    _internal_set_id(from._internal_id());
  }
  if (from._internal_age() != 0) {
    _internal_set_age(from._internal_age());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void QueryAgeRes::CopyFrom(const QueryAgeRes& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:QueryAgeRes)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool QueryAgeRes::IsInitialized() const {
  return true;
}

void QueryAgeRes::InternalSwap(QueryAgeRes* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &res_info_, lhs_arena,
      &other->res_info_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(QueryAgeRes, age_)
      + sizeof(QueryAgeRes::age_)
      - PROTOBUF_FIELD_OFFSET(QueryAgeRes, ret_code_)>(
          reinterpret_cast<char*>(&ret_code_),
          reinterpret_cast<char*>(&other->ret_code_));
}

::PROTOBUF_NAMESPACE_ID::Metadata QueryAgeRes::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_tinypb_2eproto_getter, &descriptor_table_tinypb_2eproto_once,
      file_level_metadata_tinypb_2eproto[2]);
}

// ===================================================================

QueryService::~QueryService() {}

const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* QueryService::descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_tinypb_2eproto);
  return file_level_service_descriptors_tinypb_2eproto[0];
}

const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* QueryService::GetDescriptor() {
  return descriptor();
}

void QueryService::query_name(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                         const ::QueryReq*,
                         ::QueryNameRes*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method query_name() not implemented.");
  done->Run();
}

void QueryService::query_age(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                         const ::QueryReq*,
                         ::QueryAgeRes*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method query_age() not implemented.");
  done->Run();
}

void QueryService::CallMethod(const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method,
                             ::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                             const ::PROTOBUF_NAMESPACE_ID::Message* request,
                             ::PROTOBUF_NAMESPACE_ID::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), file_level_service_descriptors_tinypb_2eproto[0]);
  switch(method->index()) {
    case 0:
      query_name(controller,
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<const ::QueryReq*>(
                 request),
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<::QueryNameRes*>(
                 response),
             done);
      break;
    case 1:
      query_age(controller,
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<const ::QueryReq*>(
                 request),
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<::QueryAgeRes*>(
                 response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::PROTOBUF_NAMESPACE_ID::Message& QueryService::GetRequestPrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::QueryReq::default_instance();
    case 1:
      return ::QueryReq::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::PROTOBUF_NAMESPACE_ID::MessageFactory::generated_factory()
          ->GetPrototype(method->input_type());
  }
}

const ::PROTOBUF_NAMESPACE_ID::Message& QueryService::GetResponsePrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::QueryNameRes::default_instance();
    case 1:
      return ::QueryAgeRes::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::PROTOBUF_NAMESPACE_ID::MessageFactory::generated_factory()
          ->GetPrototype(method->output_type());
  }
}

QueryService_Stub::QueryService_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
QueryService_Stub::QueryService_Stub(
    ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel,
    ::PROTOBUF_NAMESPACE_ID::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::PROTOBUF_NAMESPACE_ID::Service::STUB_OWNS_CHANNEL) {}
QueryService_Stub::~QueryService_Stub() {
  if (owns_channel_) delete channel_;
}

void QueryService_Stub::query_name(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                              const ::QueryReq* request,
                              ::QueryNameRes* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}
void QueryService_Stub::query_age(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                              const ::QueryReq* request,
                              ::QueryAgeRes* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(1),
                       controller, request, response, done);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::QueryReq*
Arena::CreateMaybeMessage< ::QueryReq >(Arena* arena) {
  return Arena::CreateMessageInternal< ::QueryReq >(arena);
}
template<> PROTOBUF_NOINLINE ::QueryNameRes*
Arena::CreateMaybeMessage< ::QueryNameRes >(Arena* arena) {
  return Arena::CreateMessageInternal< ::QueryNameRes >(arena);
}
template<> PROTOBUF_NOINLINE ::QueryAgeRes*
Arena::CreateMaybeMessage< ::QueryAgeRes >(Arena* arena) {
  return Arena::CreateMessageInternal< ::QueryAgeRes >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
