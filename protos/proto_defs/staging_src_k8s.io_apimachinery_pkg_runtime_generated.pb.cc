// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: staging_src_k8s.io_apimachinery_pkg_runtime_generated.proto

#include "staging_src_k8s.io_apimachinery_pkg_runtime_generated.pb.h"

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

namespace k8s {
namespace io {
namespace apimachinery {
namespace pkg {
namespace runtime {
PROTOBUF_CONSTEXPR RawExtension::RawExtension(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.raw_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}} {}
struct RawExtensionDefaultTypeInternal {
  PROTOBUF_CONSTEXPR RawExtensionDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~RawExtensionDefaultTypeInternal() {}
  union {
    RawExtension _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 RawExtensionDefaultTypeInternal _RawExtension_default_instance_;
PROTOBUF_CONSTEXPR TypeMeta::TypeMeta(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.apiversion_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.kind_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}} {}
struct TypeMetaDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TypeMetaDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~TypeMetaDefaultTypeInternal() {}
  union {
    TypeMeta _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TypeMetaDefaultTypeInternal _TypeMeta_default_instance_;
PROTOBUF_CONSTEXPR Unknown::Unknown(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.raw_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.contentencoding_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.contenttype_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.typemeta_)*/nullptr} {}
struct UnknownDefaultTypeInternal {
  PROTOBUF_CONSTEXPR UnknownDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~UnknownDefaultTypeInternal() {}
  union {
    Unknown _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 UnknownDefaultTypeInternal _Unknown_default_instance_;
}  // namespace runtime
}  // namespace pkg
}  // namespace apimachinery
}  // namespace io
}  // namespace k8s
static ::_pb::Metadata file_level_metadata_staging_5fsrc_5fk8s_2eio_5fapimachinery_5fpkg_5fruntime_5fgenerated_2eproto[3];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_staging_5fsrc_5fk8s_2eio_5fapimachinery_5fpkg_5fruntime_5fgenerated_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_staging_5fsrc_5fk8s_2eio_5fapimachinery_5fpkg_5fruntime_5fgenerated_2eproto = nullptr;

const uint32_t TableStruct_staging_5fsrc_5fk8s_2eio_5fapimachinery_5fpkg_5fruntime_5fgenerated_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::k8s::io::apimachinery::pkg::runtime::RawExtension, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::k8s::io::apimachinery::pkg::runtime::RawExtension, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::k8s::io::apimachinery::pkg::runtime::RawExtension, _impl_.raw_),
  0,
  PROTOBUF_FIELD_OFFSET(::k8s::io::apimachinery::pkg::runtime::TypeMeta, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::k8s::io::apimachinery::pkg::runtime::TypeMeta, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::k8s::io::apimachinery::pkg::runtime::TypeMeta, _impl_.apiversion_),
  PROTOBUF_FIELD_OFFSET(::k8s::io::apimachinery::pkg::runtime::TypeMeta, _impl_.kind_),
  0,
  1,
  PROTOBUF_FIELD_OFFSET(::k8s::io::apimachinery::pkg::runtime::Unknown, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::k8s::io::apimachinery::pkg::runtime::Unknown, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::k8s::io::apimachinery::pkg::runtime::Unknown, _impl_.typemeta_),
  PROTOBUF_FIELD_OFFSET(::k8s::io::apimachinery::pkg::runtime::Unknown, _impl_.raw_),
  PROTOBUF_FIELD_OFFSET(::k8s::io::apimachinery::pkg::runtime::Unknown, _impl_.contentencoding_),
  PROTOBUF_FIELD_OFFSET(::k8s::io::apimachinery::pkg::runtime::Unknown, _impl_.contenttype_),
  3,
  0,
  1,
  2,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, -1, sizeof(::k8s::io::apimachinery::pkg::runtime::RawExtension)},
  { 8, 16, -1, sizeof(::k8s::io::apimachinery::pkg::runtime::TypeMeta)},
  { 18, 28, -1, sizeof(::k8s::io::apimachinery::pkg::runtime::Unknown)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::k8s::io::apimachinery::pkg::runtime::_RawExtension_default_instance_._instance,
  &::k8s::io::apimachinery::pkg::runtime::_TypeMeta_default_instance_._instance,
  &::k8s::io::apimachinery::pkg::runtime::_Unknown_default_instance_._instance,
};

const char descriptor_table_protodef_staging_5fsrc_5fk8s_2eio_5fapimachinery_5fpkg_5fruntime_5fgenerated_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n;staging_src_k8s.io_apimachinery_pkg_ru"
  "ntime_generated.proto\022\037k8s.io.apimachine"
  "ry.pkg.runtime\"\033\n\014RawExtension\022\013\n\003raw\030\001 "
  "\001(\014\",\n\010TypeMeta\022\022\n\napiVersion\030\001 \001(\014\022\014\n\004k"
  "ind\030\002 \001(\014\"\201\001\n\007Unknown\022;\n\010typeMeta\030\001 \001(\0132"
  ").k8s.io.apimachinery.pkg.runtime.TypeMe"
  "ta\022\013\n\003raw\030\002 \001(\014\022\027\n\017contentEncoding\030\003 \001(\014"
  "\022\023\n\013contentType\030\004 \001(\014B!Z\037k8s.io/apimachi"
  "nery/pkg/runtime"
  ;
static ::_pbi::once_flag descriptor_table_staging_5fsrc_5fk8s_2eio_5fapimachinery_5fpkg_5fruntime_5fgenerated_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_staging_5fsrc_5fk8s_2eio_5fapimachinery_5fpkg_5fruntime_5fgenerated_2eproto = {
    false, false, 336, descriptor_table_protodef_staging_5fsrc_5fk8s_2eio_5fapimachinery_5fpkg_5fruntime_5fgenerated_2eproto,
    "staging_src_k8s.io_apimachinery_pkg_runtime_generated.proto",
    &descriptor_table_staging_5fsrc_5fk8s_2eio_5fapimachinery_5fpkg_5fruntime_5fgenerated_2eproto_once, nullptr, 0, 3,
    schemas, file_default_instances, TableStruct_staging_5fsrc_5fk8s_2eio_5fapimachinery_5fpkg_5fruntime_5fgenerated_2eproto::offsets,
    file_level_metadata_staging_5fsrc_5fk8s_2eio_5fapimachinery_5fpkg_5fruntime_5fgenerated_2eproto, file_level_enum_descriptors_staging_5fsrc_5fk8s_2eio_5fapimachinery_5fpkg_5fruntime_5fgenerated_2eproto,
    file_level_service_descriptors_staging_5fsrc_5fk8s_2eio_5fapimachinery_5fpkg_5fruntime_5fgenerated_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_staging_5fsrc_5fk8s_2eio_5fapimachinery_5fpkg_5fruntime_5fgenerated_2eproto_getter() {
  return &descriptor_table_staging_5fsrc_5fk8s_2eio_5fapimachinery_5fpkg_5fruntime_5fgenerated_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_staging_5fsrc_5fk8s_2eio_5fapimachinery_5fpkg_5fruntime_5fgenerated_2eproto(&descriptor_table_staging_5fsrc_5fk8s_2eio_5fapimachinery_5fpkg_5fruntime_5fgenerated_2eproto);
namespace k8s {
namespace io {
namespace apimachinery {
namespace pkg {
namespace runtime {

// ===================================================================

class RawExtension::_Internal {
 public:
  using HasBits = decltype(std::declval<RawExtension>()._impl_._has_bits_);
  static void set_has_raw(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

RawExtension::RawExtension(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:k8s.io.apimachinery.pkg.runtime.RawExtension)
}
RawExtension::RawExtension(const RawExtension& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  RawExtension* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.raw_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.raw_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.raw_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_raw()) {
    _this->_impl_.raw_.Set(from._internal_raw(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:k8s.io.apimachinery.pkg.runtime.RawExtension)
}

inline void RawExtension::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.raw_){}
  };
  _impl_.raw_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.raw_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

RawExtension::~RawExtension() {
  // @@protoc_insertion_point(destructor:k8s.io.apimachinery.pkg.runtime.RawExtension)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void RawExtension::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.raw_.Destroy();
}

void RawExtension::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void RawExtension::Clear() {
// @@protoc_insertion_point(message_clear_start:k8s.io.apimachinery.pkg.runtime.RawExtension)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.raw_.ClearNonDefaultToEmpty();
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* RawExtension::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional bytes raw = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_raw();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
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
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* RawExtension::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:k8s.io.apimachinery.pkg.runtime.RawExtension)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional bytes raw = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_raw(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:k8s.io.apimachinery.pkg.runtime.RawExtension)
  return target;
}

size_t RawExtension::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:k8s.io.apimachinery.pkg.runtime.RawExtension)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional bytes raw = 1;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_raw());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData RawExtension::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    RawExtension::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*RawExtension::GetClassData() const { return &_class_data_; }


void RawExtension::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<RawExtension*>(&to_msg);
  auto& from = static_cast<const RawExtension&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:k8s.io.apimachinery.pkg.runtime.RawExtension)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_raw()) {
    _this->_internal_set_raw(from._internal_raw());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void RawExtension::CopyFrom(const RawExtension& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:k8s.io.apimachinery.pkg.runtime.RawExtension)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RawExtension::IsInitialized() const {
  return true;
}

void RawExtension::InternalSwap(RawExtension* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.raw_, lhs_arena,
      &other->_impl_.raw_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata RawExtension::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_staging_5fsrc_5fk8s_2eio_5fapimachinery_5fpkg_5fruntime_5fgenerated_2eproto_getter, &descriptor_table_staging_5fsrc_5fk8s_2eio_5fapimachinery_5fpkg_5fruntime_5fgenerated_2eproto_once,
      file_level_metadata_staging_5fsrc_5fk8s_2eio_5fapimachinery_5fpkg_5fruntime_5fgenerated_2eproto[0]);
}

// ===================================================================

class TypeMeta::_Internal {
 public:
  using HasBits = decltype(std::declval<TypeMeta>()._impl_._has_bits_);
  static void set_has_apiversion(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_kind(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

TypeMeta::TypeMeta(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:k8s.io.apimachinery.pkg.runtime.TypeMeta)
}
TypeMeta::TypeMeta(const TypeMeta& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  TypeMeta* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.apiversion_){}
    , decltype(_impl_.kind_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.apiversion_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.apiversion_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_apiversion()) {
    _this->_impl_.apiversion_.Set(from._internal_apiversion(), 
      _this->GetArenaForAllocation());
  }
  _impl_.kind_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.kind_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_kind()) {
    _this->_impl_.kind_.Set(from._internal_kind(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:k8s.io.apimachinery.pkg.runtime.TypeMeta)
}

inline void TypeMeta::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.apiversion_){}
    , decltype(_impl_.kind_){}
  };
  _impl_.apiversion_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.apiversion_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.kind_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.kind_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

TypeMeta::~TypeMeta() {
  // @@protoc_insertion_point(destructor:k8s.io.apimachinery.pkg.runtime.TypeMeta)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void TypeMeta::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.apiversion_.Destroy();
  _impl_.kind_.Destroy();
}

void TypeMeta::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void TypeMeta::Clear() {
// @@protoc_insertion_point(message_clear_start:k8s.io.apimachinery.pkg.runtime.TypeMeta)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.apiversion_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.kind_.ClearNonDefaultToEmpty();
    }
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TypeMeta::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional bytes apiVersion = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_apiversion();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bytes kind = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_kind();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
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
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* TypeMeta::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:k8s.io.apimachinery.pkg.runtime.TypeMeta)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional bytes apiVersion = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_apiversion(), target);
  }

  // optional bytes kind = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_kind(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:k8s.io.apimachinery.pkg.runtime.TypeMeta)
  return target;
}

size_t TypeMeta::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:k8s.io.apimachinery.pkg.runtime.TypeMeta)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional bytes apiVersion = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_apiversion());
    }

    // optional bytes kind = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_kind());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData TypeMeta::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    TypeMeta::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*TypeMeta::GetClassData() const { return &_class_data_; }


void TypeMeta::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<TypeMeta*>(&to_msg);
  auto& from = static_cast<const TypeMeta&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:k8s.io.apimachinery.pkg.runtime.TypeMeta)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_apiversion(from._internal_apiversion());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_kind(from._internal_kind());
    }
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void TypeMeta::CopyFrom(const TypeMeta& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:k8s.io.apimachinery.pkg.runtime.TypeMeta)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TypeMeta::IsInitialized() const {
  return true;
}

void TypeMeta::InternalSwap(TypeMeta* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.apiversion_, lhs_arena,
      &other->_impl_.apiversion_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.kind_, lhs_arena,
      &other->_impl_.kind_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata TypeMeta::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_staging_5fsrc_5fk8s_2eio_5fapimachinery_5fpkg_5fruntime_5fgenerated_2eproto_getter, &descriptor_table_staging_5fsrc_5fk8s_2eio_5fapimachinery_5fpkg_5fruntime_5fgenerated_2eproto_once,
      file_level_metadata_staging_5fsrc_5fk8s_2eio_5fapimachinery_5fpkg_5fruntime_5fgenerated_2eproto[1]);
}

// ===================================================================

class Unknown::_Internal {
 public:
  using HasBits = decltype(std::declval<Unknown>()._impl_._has_bits_);
  static const ::k8s::io::apimachinery::pkg::runtime::TypeMeta& typemeta(const Unknown* msg);
  static void set_has_typemeta(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_raw(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_contentencoding(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_contenttype(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

const ::k8s::io::apimachinery::pkg::runtime::TypeMeta&
Unknown::_Internal::typemeta(const Unknown* msg) {
  return *msg->_impl_.typemeta_;
}
Unknown::Unknown(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:k8s.io.apimachinery.pkg.runtime.Unknown)
}
Unknown::Unknown(const Unknown& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Unknown* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.raw_){}
    , decltype(_impl_.contentencoding_){}
    , decltype(_impl_.contenttype_){}
    , decltype(_impl_.typemeta_){nullptr}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.raw_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.raw_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_raw()) {
    _this->_impl_.raw_.Set(from._internal_raw(), 
      _this->GetArenaForAllocation());
  }
  _impl_.contentencoding_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.contentencoding_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_contentencoding()) {
    _this->_impl_.contentencoding_.Set(from._internal_contentencoding(), 
      _this->GetArenaForAllocation());
  }
  _impl_.contenttype_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.contenttype_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_contenttype()) {
    _this->_impl_.contenttype_.Set(from._internal_contenttype(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_typemeta()) {
    _this->_impl_.typemeta_ = new ::k8s::io::apimachinery::pkg::runtime::TypeMeta(*from._impl_.typemeta_);
  }
  // @@protoc_insertion_point(copy_constructor:k8s.io.apimachinery.pkg.runtime.Unknown)
}

inline void Unknown::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.raw_){}
    , decltype(_impl_.contentencoding_){}
    , decltype(_impl_.contenttype_){}
    , decltype(_impl_.typemeta_){nullptr}
  };
  _impl_.raw_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.raw_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.contentencoding_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.contentencoding_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.contenttype_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.contenttype_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Unknown::~Unknown() {
  // @@protoc_insertion_point(destructor:k8s.io.apimachinery.pkg.runtime.Unknown)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Unknown::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.raw_.Destroy();
  _impl_.contentencoding_.Destroy();
  _impl_.contenttype_.Destroy();
  if (this != internal_default_instance()) delete _impl_.typemeta_;
}

void Unknown::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Unknown::Clear() {
// @@protoc_insertion_point(message_clear_start:k8s.io.apimachinery.pkg.runtime.Unknown)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.raw_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.contentencoding_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      _impl_.contenttype_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000008u) {
      GOOGLE_DCHECK(_impl_.typemeta_ != nullptr);
      _impl_.typemeta_->Clear();
    }
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Unknown::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional .k8s.io.apimachinery.pkg.runtime.TypeMeta typeMeta = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_typemeta(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bytes raw = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_raw();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bytes contentEncoding = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_contentencoding();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bytes contentType = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_contenttype();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
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
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Unknown::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:k8s.io.apimachinery.pkg.runtime.Unknown)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional .k8s.io.apimachinery.pkg.runtime.TypeMeta typeMeta = 1;
  if (cached_has_bits & 0x00000008u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::typemeta(this),
        _Internal::typemeta(this).GetCachedSize(), target, stream);
  }

  // optional bytes raw = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_raw(), target);
  }

  // optional bytes contentEncoding = 3;
  if (cached_has_bits & 0x00000002u) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_contentencoding(), target);
  }

  // optional bytes contentType = 4;
  if (cached_has_bits & 0x00000004u) {
    target = stream->WriteBytesMaybeAliased(
        4, this->_internal_contenttype(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:k8s.io.apimachinery.pkg.runtime.Unknown)
  return target;
}

size_t Unknown::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:k8s.io.apimachinery.pkg.runtime.Unknown)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional bytes raw = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_raw());
    }

    // optional bytes contentEncoding = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_contentencoding());
    }

    // optional bytes contentType = 4;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_contenttype());
    }

    // optional .k8s.io.apimachinery.pkg.runtime.TypeMeta typeMeta = 1;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.typemeta_);
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Unknown::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Unknown::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Unknown::GetClassData() const { return &_class_data_; }


void Unknown::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Unknown*>(&to_msg);
  auto& from = static_cast<const Unknown&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:k8s.io.apimachinery.pkg.runtime.Unknown)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_raw(from._internal_raw());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_contentencoding(from._internal_contentencoding());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_internal_set_contenttype(from._internal_contenttype());
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_internal_mutable_typemeta()->::k8s::io::apimachinery::pkg::runtime::TypeMeta::MergeFrom(
          from._internal_typemeta());
    }
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Unknown::CopyFrom(const Unknown& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:k8s.io.apimachinery.pkg.runtime.Unknown)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Unknown::IsInitialized() const {
  return true;
}

void Unknown::InternalSwap(Unknown* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.raw_, lhs_arena,
      &other->_impl_.raw_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.contentencoding_, lhs_arena,
      &other->_impl_.contentencoding_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.contenttype_, lhs_arena,
      &other->_impl_.contenttype_, rhs_arena
  );
  swap(_impl_.typemeta_, other->_impl_.typemeta_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Unknown::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_staging_5fsrc_5fk8s_2eio_5fapimachinery_5fpkg_5fruntime_5fgenerated_2eproto_getter, &descriptor_table_staging_5fsrc_5fk8s_2eio_5fapimachinery_5fpkg_5fruntime_5fgenerated_2eproto_once,
      file_level_metadata_staging_5fsrc_5fk8s_2eio_5fapimachinery_5fpkg_5fruntime_5fgenerated_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace runtime
}  // namespace pkg
}  // namespace apimachinery
}  // namespace io
}  // namespace k8s
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::k8s::io::apimachinery::pkg::runtime::RawExtension*
Arena::CreateMaybeMessage< ::k8s::io::apimachinery::pkg::runtime::RawExtension >(Arena* arena) {
  return Arena::CreateMessageInternal< ::k8s::io::apimachinery::pkg::runtime::RawExtension >(arena);
}
template<> PROTOBUF_NOINLINE ::k8s::io::apimachinery::pkg::runtime::TypeMeta*
Arena::CreateMaybeMessage< ::k8s::io::apimachinery::pkg::runtime::TypeMeta >(Arena* arena) {
  return Arena::CreateMessageInternal< ::k8s::io::apimachinery::pkg::runtime::TypeMeta >(arena);
}
template<> PROTOBUF_NOINLINE ::k8s::io::apimachinery::pkg::runtime::Unknown*
Arena::CreateMaybeMessage< ::k8s::io::apimachinery::pkg::runtime::Unknown >(Arena* arena) {
  return Arena::CreateMessageInternal< ::k8s::io::apimachinery::pkg::runtime::Unknown >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
