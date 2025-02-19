// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_test_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_test_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021006 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_test_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_test_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_test_2eproto;
class Pod;
struct PodDefaultTypeInternal;
extern PodDefaultTypeInternal _Pod_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Pod* Arena::CreateMaybeMessage<::Pod>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Pod final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Pod) */ {
 public:
  inline Pod() : Pod(nullptr) {}
  ~Pod() override;
  explicit PROTOBUF_CONSTEXPR Pod(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Pod(const Pod& from);
  Pod(Pod&& from) noexcept
    : Pod() {
    *this = ::std::move(from);
  }

  inline Pod& operator=(const Pod& from) {
    CopyFrom(from);
    return *this;
  }
  inline Pod& operator=(Pod&& from) noexcept {
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

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const Pod& default_instance() {
    return *internal_default_instance();
  }
  static inline const Pod* internal_default_instance() {
    return reinterpret_cast<const Pod*>(
               &_Pod_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Pod& a, Pod& b) {
    a.Swap(&b);
  }
  inline void Swap(Pod* other) {
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
  void UnsafeArenaSwap(Pod* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Pod* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Pod>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Pod& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Pod& from) {
    Pod::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Pod* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Pod";
  }
  protected:
  explicit Pod(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUidFieldNumber = 1,
    kNameFieldNumber = 2,
    kNamespaceFieldNumber = 3,
  };
  // required bytes uid = 1;
  bool has_uid() const;
  private:
  bool _internal_has_uid() const;
  public:
  void clear_uid();
  const std::string& uid() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_uid(ArgT0&& arg0, ArgT... args);
  std::string* mutable_uid();
  PROTOBUF_NODISCARD std::string* release_uid();
  void set_allocated_uid(std::string* uid);
  private:
  const std::string& _internal_uid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_uid(const std::string& value);
  std::string* _internal_mutable_uid();
  public:

  // required bytes name = 2;
  bool has_name() const;
  private:
  bool _internal_has_name() const;
  public:
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

  // required bytes namespace = 3;
  bool has_namespace_() const;
  private:
  bool _internal_has_namespace_() const;
  public:
  void clear_namespace_();
  const std::string& namespace_() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_namespace_(ArgT0&& arg0, ArgT... args);
  std::string* mutable_namespace_();
  PROTOBUF_NODISCARD std::string* release_namespace_();
  void set_allocated_namespace_(std::string* namespace_);
  private:
  const std::string& _internal_namespace_() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_namespace_(const std::string& value);
  std::string* _internal_mutable_namespace_();
  public:

  // @@protoc_insertion_point(class_scope:Pod)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr uid_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr namespace__;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_test_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Pod

// required bytes uid = 1;
inline bool Pod::_internal_has_uid() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Pod::has_uid() const {
  return _internal_has_uid();
}
inline void Pod::clear_uid() {
  _impl_.uid_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Pod::uid() const {
  // @@protoc_insertion_point(field_get:Pod.uid)
  return _internal_uid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Pod::set_uid(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.uid_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Pod.uid)
}
inline std::string* Pod::mutable_uid() {
  std::string* _s = _internal_mutable_uid();
  // @@protoc_insertion_point(field_mutable:Pod.uid)
  return _s;
}
inline const std::string& Pod::_internal_uid() const {
  return _impl_.uid_.Get();
}
inline void Pod::_internal_set_uid(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.uid_.Set(value, GetArenaForAllocation());
}
inline std::string* Pod::_internal_mutable_uid() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.uid_.Mutable(GetArenaForAllocation());
}
inline std::string* Pod::release_uid() {
  // @@protoc_insertion_point(field_release:Pod.uid)
  if (!_internal_has_uid()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.uid_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.uid_.IsDefault()) {
    _impl_.uid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void Pod::set_allocated_uid(std::string* uid) {
  if (uid != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.uid_.SetAllocated(uid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.uid_.IsDefault()) {
    _impl_.uid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Pod.uid)
}

// required bytes name = 2;
inline bool Pod::_internal_has_name() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Pod::has_name() const {
  return _internal_has_name();
}
inline void Pod::clear_name() {
  _impl_.name_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Pod::name() const {
  // @@protoc_insertion_point(field_get:Pod.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Pod::set_name(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000002u;
 _impl_.name_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Pod.name)
}
inline std::string* Pod::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:Pod.name)
  return _s;
}
inline const std::string& Pod::_internal_name() const {
  return _impl_.name_.Get();
}
inline void Pod::_internal_set_name(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* Pod::_internal_mutable_name() {
  _impl_._has_bits_[0] |= 0x00000002u;
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* Pod::release_name() {
  // @@protoc_insertion_point(field_release:Pod.name)
  if (!_internal_has_name()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000002u;
  auto* p = _impl_.name_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void Pod::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Pod.name)
}

// required bytes namespace = 3;
inline bool Pod::_internal_has_namespace_() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Pod::has_namespace_() const {
  return _internal_has_namespace_();
}
inline void Pod::clear_namespace_() {
  _impl_.namespace__.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline const std::string& Pod::namespace_() const {
  // @@protoc_insertion_point(field_get:Pod.namespace)
  return _internal_namespace_();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Pod::set_namespace_(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000004u;
 _impl_.namespace__.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Pod.namespace)
}
inline std::string* Pod::mutable_namespace_() {
  std::string* _s = _internal_mutable_namespace_();
  // @@protoc_insertion_point(field_mutable:Pod.namespace)
  return _s;
}
inline const std::string& Pod::_internal_namespace_() const {
  return _impl_.namespace__.Get();
}
inline void Pod::_internal_set_namespace_(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.namespace__.Set(value, GetArenaForAllocation());
}
inline std::string* Pod::_internal_mutable_namespace_() {
  _impl_._has_bits_[0] |= 0x00000004u;
  return _impl_.namespace__.Mutable(GetArenaForAllocation());
}
inline std::string* Pod::release_namespace_() {
  // @@protoc_insertion_point(field_release:Pod.namespace)
  if (!_internal_has_namespace_()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000004u;
  auto* p = _impl_.namespace__.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.namespace__.IsDefault()) {
    _impl_.namespace__.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void Pod::set_allocated_namespace_(std::string* namespace_) {
  if (namespace_ != nullptr) {
    _impl_._has_bits_[0] |= 0x00000004u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000004u;
  }
  _impl_.namespace__.SetAllocated(namespace_, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.namespace__.IsDefault()) {
    _impl_.namespace__.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Pod.namespace)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_test_2eproto
