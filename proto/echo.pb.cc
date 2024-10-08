// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: echo.proto
// Protobuf C++ Version: 5.28.0

#include "echo.pb.h"

#include <algorithm>
#include <type_traits>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace echo {

inline constexpr EchoRequest::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : message_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR EchoRequest::EchoRequest(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct EchoRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR EchoRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~EchoRequestDefaultTypeInternal() {}
  union {
    EchoRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 EchoRequestDefaultTypeInternal _EchoRequest_default_instance_;

inline constexpr EchoReply::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : message_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR EchoReply::EchoReply(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct EchoReplyDefaultTypeInternal {
  PROTOBUF_CONSTEXPR EchoReplyDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~EchoReplyDefaultTypeInternal() {}
  union {
    EchoReply _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 EchoReplyDefaultTypeInternal _EchoReply_default_instance_;
}  // namespace echo
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_echo_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_echo_2eproto = nullptr;
const ::uint32_t
    TableStruct_echo_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::echo::EchoRequest, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::echo::EchoRequest, _impl_.message_),
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::echo::EchoReply, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::echo::EchoReply, _impl_.message_),
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::echo::EchoRequest)},
        {9, -1, -1, sizeof(::echo::EchoReply)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::echo::_EchoRequest_default_instance_._instance,
    &::echo::_EchoReply_default_instance_._instance,
};
const char descriptor_table_protodef_echo_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n\necho.proto\022\004echo\"\036\n\013EchoRequest\022\017\n\007mes"
    "sage\030\001 \001(\t\"\034\n\tEchoReply\022\017\n\007message\030\001 \001(\t"
    "28\n\004Echo\0220\n\010SayHello\022\021.echo.EchoRequest\032"
    "\017.echo.EchoReply\"\000b\006proto3"
};
static ::absl::once_flag descriptor_table_echo_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_echo_2eproto = {
    false,
    false,
    146,
    descriptor_table_protodef_echo_2eproto,
    "echo.proto",
    &descriptor_table_echo_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_echo_2eproto::offsets,
    file_level_enum_descriptors_echo_2eproto,
    file_level_service_descriptors_echo_2eproto,
};
namespace echo {
// ===================================================================

class EchoRequest::_Internal {
 public:
};

EchoRequest::EchoRequest(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:echo.EchoRequest)
}
inline PROTOBUF_NDEBUG_INLINE EchoRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::echo::EchoRequest& from_msg)
      : message_(arena, from.message_),
        _cached_size_{0} {}

EchoRequest::EchoRequest(
    ::google::protobuf::Arena* arena,
    const EchoRequest& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  EchoRequest* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);

  // @@protoc_insertion_point(copy_constructor:echo.EchoRequest)
}
inline PROTOBUF_NDEBUG_INLINE EchoRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : message_(arena),
        _cached_size_{0} {}

inline void EchoRequest::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
EchoRequest::~EchoRequest() {
  // @@protoc_insertion_point(destructor:echo.EchoRequest)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void EchoRequest::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.message_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::MessageLite::ClassDataFull
    EchoRequest::_class_data_ = {
        ::google::protobuf::Message::ClassData{
            &_EchoRequest_default_instance_._instance,
            &_table_.header,
            nullptr,  // OnDemandRegisterArenaDtor
            nullptr,  // IsInitialized
            &EchoRequest::MergeImpl,
#if defined(PROTOBUF_CUSTOM_VTABLE)
            ::google::protobuf::Message::GetDeleteImpl<EchoRequest>(),
            ::google::protobuf::Message::GetNewImpl<EchoRequest>(),
            ::google::protobuf::Message::GetClearImpl<EchoRequest>(), &EchoRequest::ByteSizeLong,
                &EchoRequest::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
            PROTOBUF_FIELD_OFFSET(EchoRequest, _impl_._cached_size_),
            false,
        },
        &EchoRequest::kDescriptorMethods,
        &descriptor_table_echo_2eproto,
        nullptr,  // tracker
};
const ::google::protobuf::MessageLite::ClassData* EchoRequest::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 32, 2> EchoRequest::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    _class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::echo::EchoRequest>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // string message = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(EchoRequest, _impl_.message_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string message = 1;
    {PROTOBUF_FIELD_OFFSET(EchoRequest, _impl_.message_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\20\7\0\0\0\0\0\0"
    "echo.EchoRequest"
    "message"
  }},
};

PROTOBUF_NOINLINE void EchoRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:echo.EchoRequest)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.message_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* EchoRequest::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const EchoRequest& this_ = static_cast<const EchoRequest&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* EchoRequest::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const EchoRequest& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:echo.EchoRequest)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          // string message = 1;
          if (!this_._internal_message().empty()) {
            const std::string& _s = this_._internal_message();
            ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "echo.EchoRequest.message");
            target = stream->WriteStringMaybeAliased(1, _s, target);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:echo.EchoRequest)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t EchoRequest::ByteSizeLong(const MessageLite& base) {
          const EchoRequest& this_ = static_cast<const EchoRequest&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t EchoRequest::ByteSizeLong() const {
          const EchoRequest& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:echo.EchoRequest)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

           {
            // string message = 1;
            if (!this_._internal_message().empty()) {
              total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                              this_._internal_message());
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void EchoRequest::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<EchoRequest*>(&to_msg);
  auto& from = static_cast<const EchoRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:echo.EchoRequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_message().empty()) {
    _this->_internal_set_message(from._internal_message());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void EchoRequest::CopyFrom(const EchoRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:echo.EchoRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void EchoRequest::InternalSwap(EchoRequest* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.message_, &other->_impl_.message_, arena);
}

::google::protobuf::Metadata EchoRequest::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// ===================================================================

class EchoReply::_Internal {
 public:
};

EchoReply::EchoReply(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:echo.EchoReply)
}
inline PROTOBUF_NDEBUG_INLINE EchoReply::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::echo::EchoReply& from_msg)
      : message_(arena, from.message_),
        _cached_size_{0} {}

EchoReply::EchoReply(
    ::google::protobuf::Arena* arena,
    const EchoReply& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  EchoReply* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);

  // @@protoc_insertion_point(copy_constructor:echo.EchoReply)
}
inline PROTOBUF_NDEBUG_INLINE EchoReply::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : message_(arena),
        _cached_size_{0} {}

inline void EchoReply::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
EchoReply::~EchoReply() {
  // @@protoc_insertion_point(destructor:echo.EchoReply)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void EchoReply::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.message_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::MessageLite::ClassDataFull
    EchoReply::_class_data_ = {
        ::google::protobuf::Message::ClassData{
            &_EchoReply_default_instance_._instance,
            &_table_.header,
            nullptr,  // OnDemandRegisterArenaDtor
            nullptr,  // IsInitialized
            &EchoReply::MergeImpl,
#if defined(PROTOBUF_CUSTOM_VTABLE)
            ::google::protobuf::Message::GetDeleteImpl<EchoReply>(),
            ::google::protobuf::Message::GetNewImpl<EchoReply>(),
            ::google::protobuf::Message::GetClearImpl<EchoReply>(), &EchoReply::ByteSizeLong,
                &EchoReply::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
            PROTOBUF_FIELD_OFFSET(EchoReply, _impl_._cached_size_),
            false,
        },
        &EchoReply::kDescriptorMethods,
        &descriptor_table_echo_2eproto,
        nullptr,  // tracker
};
const ::google::protobuf::MessageLite::ClassData* EchoReply::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 30, 2> EchoReply::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    _class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::echo::EchoReply>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // string message = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(EchoReply, _impl_.message_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string message = 1;
    {PROTOBUF_FIELD_OFFSET(EchoReply, _impl_.message_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\16\7\0\0\0\0\0\0"
    "echo.EchoReply"
    "message"
  }},
};

PROTOBUF_NOINLINE void EchoReply::Clear() {
// @@protoc_insertion_point(message_clear_start:echo.EchoReply)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.message_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* EchoReply::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const EchoReply& this_ = static_cast<const EchoReply&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* EchoReply::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const EchoReply& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:echo.EchoReply)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          // string message = 1;
          if (!this_._internal_message().empty()) {
            const std::string& _s = this_._internal_message();
            ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "echo.EchoReply.message");
            target = stream->WriteStringMaybeAliased(1, _s, target);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:echo.EchoReply)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t EchoReply::ByteSizeLong(const MessageLite& base) {
          const EchoReply& this_ = static_cast<const EchoReply&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t EchoReply::ByteSizeLong() const {
          const EchoReply& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:echo.EchoReply)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

           {
            // string message = 1;
            if (!this_._internal_message().empty()) {
              total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                              this_._internal_message());
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void EchoReply::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<EchoReply*>(&to_msg);
  auto& from = static_cast<const EchoReply&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:echo.EchoReply)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_message().empty()) {
    _this->_internal_set_message(from._internal_message());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void EchoReply::CopyFrom(const EchoReply& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:echo.EchoReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void EchoReply::InternalSwap(EchoReply* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.message_, &other->_impl_.message_, arena);
}

::google::protobuf::Metadata EchoReply::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace echo
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ PROTOBUF_UNUSED =
        (::_pbi::AddDescriptors(&descriptor_table_echo_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
