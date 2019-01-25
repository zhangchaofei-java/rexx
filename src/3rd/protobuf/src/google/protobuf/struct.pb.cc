
#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include <google/protobuf/struct.pb.h>

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace google {
namespace protobuf {

namespace {

const ::google::protobuf::Descriptor* Struct_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Struct_reflection_ = NULL;
const ::google::protobuf::Descriptor* Struct_FieldsEntry_descriptor_ = NULL;
const ::google::protobuf::Descriptor* Value_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Value_reflection_ = NULL;
struct ValueOneofInstance {
  int null_value_;
  double number_value_;
  ::google::protobuf::internal::ArenaStringPtr string_value_;
  bool bool_value_;
  const ::google::protobuf::Struct* struct_value_;
  const ::google::protobuf::ListValue* list_value_;
}* Value_default_oneof_instance_ = NULL;
const ::google::protobuf::Descriptor* ListValue_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ListValue_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* NullValue_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_google_2fprotobuf_2fstruct_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_google_2fprotobuf_2fstruct_2eproto() {
  protobuf_AddDesc_google_2fprotobuf_2fstruct_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "google/protobuf/struct.proto");
  GOOGLE_CHECK(file != NULL);
  Struct_descriptor_ = file->message_type(0);
  static const int Struct_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Struct, fields_),
  };
  Struct_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Struct_descriptor_,
      Struct::default_instance_,
      Struct_offsets_,
      -1,
      -1,
      -1,
      sizeof(Struct),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Struct, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Struct, _is_default_instance_));
  Struct_FieldsEntry_descriptor_ = Struct_descriptor_->nested_type(0);
  Value_descriptor_ = file->message_type(1);
  static const int Value_offsets_[7] = {
    PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET(Value_default_oneof_instance_, null_value_),
    PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET(Value_default_oneof_instance_, number_value_),
    PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET(Value_default_oneof_instance_, string_value_),
    PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET(Value_default_oneof_instance_, bool_value_),
    PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET(Value_default_oneof_instance_, struct_value_),
    PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET(Value_default_oneof_instance_, list_value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Value, kind_),
  };
  Value_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Value_descriptor_,
      Value::default_instance_,
      Value_offsets_,
      -1,
      -1,
      -1,
      Value_default_oneof_instance_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Value, _oneof_case_[0]),
      sizeof(Value),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Value, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Value, _is_default_instance_));
  ListValue_descriptor_ = file->message_type(2);
  static const int ListValue_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ListValue, values_),
  };
  ListValue_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ListValue_descriptor_,
      ListValue::default_instance_,
      ListValue_offsets_,
      -1,
      -1,
      -1,
      sizeof(ListValue),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ListValue, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ListValue, _is_default_instance_));
  NullValue_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_google_2fprotobuf_2fstruct_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Struct_descriptor_, &Struct::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
        Struct_FieldsEntry_descriptor_,
        ::google::protobuf::internal::MapEntry<
            ::std::string,
            ::google::protobuf::Value,
            ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
            ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
            0>::CreateDefaultInstance(
                Struct_FieldsEntry_descriptor_));
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Value_descriptor_, &Value::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ListValue_descriptor_, &ListValue::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_google_2fprotobuf_2fstruct_2eproto() {
  delete Struct::default_instance_;
  delete Struct_reflection_;
  delete Value::default_instance_;
  delete Value_default_oneof_instance_;
  delete Value_reflection_;
  delete ListValue::default_instance_;
  delete ListValue_reflection_;
}

void protobuf_AddDesc_google_2fprotobuf_2fstruct_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_google_2fprotobuf_2fstruct_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\034google/protobuf/struct.proto\022\017google.p"
    "rotobuf\"\204\001\n\006Struct\0223\n\006fields\030\001 \003(\0132#.goo"
    "gle.protobuf.Struct.FieldsEntry\032E\n\013Field"
    "sEntry\022\013\n\003key\030\001 \001(\t\022%\n\005value\030\002 \001(\0132\026.goo"
    "gle.protobuf.Value:\0028\001\"\352\001\n\005Value\0220\n\nnull"
    "_value\030\001 \001(\0162\032.google.protobuf.NullValue"
    "H\000\022\026\n\014number_value\030\002 \001(\001H\000\022\026\n\014string_val"
    "ue\030\003 \001(\tH\000\022\024\n\nbool_value\030\004 \001(\010H\000\022/\n\014stru"
    "ct_value\030\005 \001(\0132\027.google.protobuf.StructH"
    "\000\0220\n\nlist_value\030\006 \001(\0132\032.google.protobuf."
    "ListValueH\000B\006\n\004kind\"3\n\tListValue\022&\n\006valu"
    "es\030\001 \003(\0132\026.google.protobuf.Value*\033\n\tNull"
    "Value\022\016\n\nNULL_VALUE\020\000B\201\001\n\023com.google.pro"
    "tobufB\013StructProtoP\001Z1github.com/golang/"
    "protobuf/ptypes/struct;structpb\240\001\001\242\002\003GPB"
    "\252\002\036Google.Protobuf.WellKnownTypesb\006proto"
    "3", 641);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/struct.proto", &protobuf_RegisterTypes);
  Struct::default_instance_ = new Struct();
  Value::default_instance_ = new Value();
  Value_default_oneof_instance_ = new ValueOneofInstance();
  ListValue::default_instance_ = new ListValue();
  Struct::default_instance_->InitAsDefaultInstance();
  Value::default_instance_->InitAsDefaultInstance();
  ListValue::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fprotobuf_2fstruct_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fprotobuf_2fstruct_2eproto {
  StaticDescriptorInitializer_google_2fprotobuf_2fstruct_2eproto() {
    protobuf_AddDesc_google_2fprotobuf_2fstruct_2eproto();
  }
} static_descriptor_initializer_google_2fprotobuf_2fstruct_2eproto_;
const ::google::protobuf::EnumDescriptor* NullValue_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return NullValue_descriptor_;
}
bool NullValue_IsValid(int value) {
  switch(value) {
    case 0:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Struct::kFieldsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Struct::Struct()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.Struct)
}

void Struct::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Struct::Struct(const Struct& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.Struct)
}

void Struct::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  fields_.SetAssignDescriptorCallback(
      protobuf_AssignDescriptorsOnce);
  fields_.SetEntryDescriptor(
      &::google::protobuf::Struct_FieldsEntry_descriptor_);
}

Struct::~Struct() {
  // @@protoc_insertion_point(destructor:google.protobuf.Struct)
  SharedDtor();
}

void Struct::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Struct::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Struct::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Struct_descriptor_;
}

const Struct& Struct::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fstruct_2eproto();
  return *default_instance_;
}

Struct* Struct::default_instance_ = NULL;

Struct* Struct::New(::google::protobuf::Arena* arena) const {
  Struct* n = new Struct;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Struct::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.Struct)
  fields_.Clear();
}

bool Struct::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.Struct)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // map<string, .google.protobuf.Value> fields = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_fields:
          Struct_FieldsEntry::Parser< ::google::protobuf::internal::MapField<
              ::std::string, ::google::protobuf::Value,
              ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
              ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
              0 >,
            ::google::protobuf::Map< ::std::string, ::google::protobuf::Value > > parser(&fields_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            parser.key().data(), parser.key().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.protobuf.Struct.FieldsEntry.key"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_fields;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.Struct)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.Struct)
  return false;
#undef DO_
}

void Struct::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.Struct)
  // map<string, .google.protobuf.Value> fields = 1;
  if (!this->fields().empty()) {
    typedef ::google::protobuf::Map< ::std::string, ::google::protobuf::Value >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::google::protobuf::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), p->first.length(),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "google.protobuf.Struct.FieldsEntry.key");
      }
    };

    if (output->IsSerializationDeterminstic() &&
        this->fields().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->fields().size()]);
      typedef ::google::protobuf::Map< ::std::string, ::google::protobuf::Value >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::std::string, ::google::protobuf::Value >::const_iterator
          it = this->fields().begin();
          it != this->fields().end(); ++it, ++n) {
        items[n] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[n], Less());
      ::google::protobuf::scoped_ptr<Struct_FieldsEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(fields_.NewEntryWrapper(
            items[i]->first, items[i]->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            1, *entry, output);
        Utf8Check::Check(items[i]);
      }
    } else {
      ::google::protobuf::scoped_ptr<Struct_FieldsEntry> entry;
      for (::google::protobuf::Map< ::std::string, ::google::protobuf::Value >::const_iterator
          it = this->fields().begin();
          it != this->fields().end(); ++it) {
        entry.reset(fields_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            1, *entry, output);
        Utf8Check::Check(&*it);
      }
    }
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.Struct)
}

::google::protobuf::uint8* Struct::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.Struct)
  // map<string, .google.protobuf.Value> fields = 1;
  if (!this->fields().empty()) {
    typedef ::google::protobuf::Map< ::std::string, ::google::protobuf::Value >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::google::protobuf::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), p->first.length(),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "google.protobuf.Struct.FieldsEntry.key");
      }
    };

    if (deterministic &&
        this->fields().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->fields().size()]);
      typedef ::google::protobuf::Map< ::std::string, ::google::protobuf::Value >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::std::string, ::google::protobuf::Value >::const_iterator
          it = this->fields().begin();
          it != this->fields().end(); ++it, ++n) {
        items[n] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[n], Less());
      ::google::protobuf::scoped_ptr<Struct_FieldsEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(fields_.NewEntryWrapper(
            items[i]->first, items[i]->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       1, *entry, deterministic, target);
;
        Utf8Check::Check(items[i]);
      }
    } else {
      ::google::protobuf::scoped_ptr<Struct_FieldsEntry> entry;
      for (::google::protobuf::Map< ::std::string, ::google::protobuf::Value >::const_iterator
          it = this->fields().begin();
          it != this->fields().end(); ++it) {
        entry.reset(fields_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       1, *entry, deterministic, target);
;
        Utf8Check::Check(&*it);
      }
    }
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.Struct)
  return target;
}

int Struct::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.Struct)
  int total_size = 0;

  // map<string, .google.protobuf.Value> fields = 1;
  total_size += 1 * this->fields_size();
  {
    ::google::protobuf::scoped_ptr<Struct_FieldsEntry> entry;
    for (::google::protobuf::Map< ::std::string, ::google::protobuf::Value >::const_iterator
        it = this->fields().begin();
        it != this->fields().end(); ++it) {
      entry.reset(fields_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Struct::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.Struct)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Struct* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Struct>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.Struct)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.Struct)
    MergeFrom(*source);
  }
}

void Struct::MergeFrom(const Struct& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.Struct)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  fields_.MergeFrom(from.fields_);
}

void Struct::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.Struct)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Struct::CopyFrom(const Struct& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.Struct)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Struct::IsInitialized() const {

  return true;
}

void Struct::Swap(Struct* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Struct::InternalSwap(Struct* other) {
  fields_.Swap(&other->fields_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Struct::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Struct_descriptor_;
  metadata.reflection = Struct_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Struct

// map<string, .google.protobuf.Value> fields = 1;
int Struct::fields_size() const {
  return fields_.size();
}
void Struct::clear_fields() {
  fields_.Clear();
}
 const ::google::protobuf::Map< ::std::string, ::google::protobuf::Value >&
Struct::fields() const {
  // @@protoc_insertion_point(field_map:google.protobuf.Struct.fields)
  return fields_.GetMap();
}
 ::google::protobuf::Map< ::std::string, ::google::protobuf::Value >*
Struct::mutable_fields() {
  // @@protoc_insertion_point(field_mutable_map:google.protobuf.Struct.fields)
  return fields_.MutableMap();
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Value::kNullValueFieldNumber;
const int Value::kNumberValueFieldNumber;
const int Value::kStringValueFieldNumber;
const int Value::kBoolValueFieldNumber;
const int Value::kStructValueFieldNumber;
const int Value::kListValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Value::Value()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.Value)
}

void Value::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  Value_default_oneof_instance_->null_value_ = 0;
  Value_default_oneof_instance_->number_value_ = 0;
  Value_default_oneof_instance_->string_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  Value_default_oneof_instance_->bool_value_ = false;
  Value_default_oneof_instance_->struct_value_ = const_cast< ::google::protobuf::Struct*>(&::google::protobuf::Struct::default_instance());
  Value_default_oneof_instance_->list_value_ = const_cast< ::google::protobuf::ListValue*>(&::google::protobuf::ListValue::default_instance());
}

Value::Value(const Value& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.Value)
}

void Value::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  clear_has_kind();
}

Value::~Value() {
  // @@protoc_insertion_point(destructor:google.protobuf.Value)
  SharedDtor();
}

void Value::SharedDtor() {
  if (has_kind()) {
    clear_kind();
  }
  if (this != default_instance_) {
  }
}

void Value::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Value::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Value_descriptor_;
}

const Value& Value::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fstruct_2eproto();
  return *default_instance_;
}

Value* Value::default_instance_ = NULL;

Value* Value::New(::google::protobuf::Arena* arena) const {
  Value* n = new Value;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Value::clear_kind() {
// @@protoc_insertion_point(one_of_clear_start:google.protobuf.Value)
  switch(kind_case()) {
    case kNullValue: {
      // No need to clear
      break;
    }
    case kNumberValue: {
      // No need to clear
      break;
    }
    case kStringValue: {
      kind_.string_value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
      break;
    }
    case kBoolValue: {
      // No need to clear
      break;
    }
    case kStructValue: {
      delete kind_.struct_value_;
      break;
    }
    case kListValue: {
      delete kind_.list_value_;
      break;
    }
    case KIND_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = KIND_NOT_SET;
}


void Value::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.Value)
  clear_kind();
}

bool Value::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.Value)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .google.protobuf.NullValue null_value = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_null_value(static_cast< ::google::protobuf::NullValue >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_number_value;
        break;
      }

      // optional double number_value = 2;
      case 2: {
        if (tag == 17) {
         parse_number_value:
          clear_kind();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &kind_.number_value_)));
          set_has_number_value();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_string_value;
        break;
      }

      // optional string string_value = 3;
      case 3: {
        if (tag == 26) {
         parse_string_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_string_value()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->string_value().data(), this->string_value().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.protobuf.Value.string_value"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_bool_value;
        break;
      }

      // optional bool bool_value = 4;
      case 4: {
        if (tag == 32) {
         parse_bool_value:
          clear_kind();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &kind_.bool_value_)));
          set_has_bool_value();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_struct_value;
        break;
      }

      // optional .google.protobuf.Struct struct_value = 5;
      case 5: {
        if (tag == 42) {
         parse_struct_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_struct_value()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_list_value;
        break;
      }

      // optional .google.protobuf.ListValue list_value = 6;
      case 6: {
        if (tag == 50) {
         parse_list_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_list_value()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.Value)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.Value)
  return false;
#undef DO_
}

void Value::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.Value)
  // optional .google.protobuf.NullValue null_value = 1;
  if (has_null_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->null_value(), output);
  }

  // optional double number_value = 2;
  if (has_number_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->number_value(), output);
  }

  // optional string string_value = 3;
  if (has_string_value()) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->string_value().data(), this->string_value().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Value.string_value");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->string_value(), output);
  }

  // optional bool bool_value = 4;
  if (has_bool_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->bool_value(), output);
  }

  // optional .google.protobuf.Struct struct_value = 5;
  if (has_struct_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, *kind_.struct_value_, output);
  }

  // optional .google.protobuf.ListValue list_value = 6;
  if (has_list_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, *kind_.list_value_, output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.Value)
}

::google::protobuf::uint8* Value::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.Value)
  // optional .google.protobuf.NullValue null_value = 1;
  if (has_null_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->null_value(), target);
  }

  // optional double number_value = 2;
  if (has_number_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->number_value(), target);
  }

  // optional string string_value = 3;
  if (has_string_value()) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->string_value().data(), this->string_value().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Value.string_value");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->string_value(), target);
  }

  // optional bool bool_value = 4;
  if (has_bool_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->bool_value(), target);
  }

  // optional .google.protobuf.Struct struct_value = 5;
  if (has_struct_value()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        5, *kind_.struct_value_, false, target);
  }

  // optional .google.protobuf.ListValue list_value = 6;
  if (has_list_value()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        6, *kind_.list_value_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.Value)
  return target;
}

int Value::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.Value)
  int total_size = 0;

  switch (kind_case()) {
    // optional .google.protobuf.NullValue null_value = 1;
    case kNullValue: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->null_value());
      break;
    }
    // optional double number_value = 2;
    case kNumberValue: {
      total_size += 1 + 8;
      break;
    }
    // optional string string_value = 3;
    case kStringValue: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->string_value());
      break;
    }
    // optional bool bool_value = 4;
    case kBoolValue: {
      total_size += 1 + 1;
      break;
    }
    // optional .google.protobuf.Struct struct_value = 5;
    case kStructValue: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *kind_.struct_value_);
      break;
    }
    // optional .google.protobuf.ListValue list_value = 6;
    case kListValue: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *kind_.list_value_);
      break;
    }
    case KIND_NOT_SET: {
      break;
    }
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Value::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.Value)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Value* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Value>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.Value)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.Value)
    MergeFrom(*source);
  }
}

void Value::MergeFrom(const Value& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.Value)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  switch (from.kind_case()) {
    case kNullValue: {
      set_null_value(from.null_value());
      break;
    }
    case kNumberValue: {
      set_number_value(from.number_value());
      break;
    }
    case kStringValue: {
      set_string_value(from.string_value());
      break;
    }
    case kBoolValue: {
      set_bool_value(from.bool_value());
      break;
    }
    case kStructValue: {
      mutable_struct_value()->::google::protobuf::Struct::MergeFrom(from.struct_value());
      break;
    }
    case kListValue: {
      mutable_list_value()->::google::protobuf::ListValue::MergeFrom(from.list_value());
      break;
    }
    case KIND_NOT_SET: {
      break;
    }
  }
}

void Value::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.Value)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Value::CopyFrom(const Value& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.Value)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Value::IsInitialized() const {

  return true;
}

void Value::Swap(Value* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Value::InternalSwap(Value* other) {
  std::swap(kind_, other->kind_);
  std::swap(_oneof_case_[0], other->_oneof_case_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Value::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Value_descriptor_;
  metadata.reflection = Value_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Value

// optional .google.protobuf.NullValue null_value = 1;
bool Value::has_null_value() const {
  return kind_case() == kNullValue;
}
void Value::set_has_null_value() {
  _oneof_case_[0] = kNullValue;
}
void Value::clear_null_value() {
  if (has_null_value()) {
    kind_.null_value_ = 0;
    clear_has_kind();
  }
}
 ::google::protobuf::NullValue Value::null_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Value.null_value)
  if (has_null_value()) {
    return static_cast< ::google::protobuf::NullValue >(kind_.null_value_);
  }
  return static_cast< ::google::protobuf::NullValue >(0);
}
 void Value::set_null_value(::google::protobuf::NullValue value) {
  if (!has_null_value()) {
    clear_kind();
    set_has_null_value();
  }
  kind_.null_value_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.Value.null_value)
}

// optional double number_value = 2;
bool Value::has_number_value() const {
  return kind_case() == kNumberValue;
}
void Value::set_has_number_value() {
  _oneof_case_[0] = kNumberValue;
}
void Value::clear_number_value() {
  if (has_number_value()) {
    kind_.number_value_ = 0;
    clear_has_kind();
  }
}
 double Value::number_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Value.number_value)
  if (has_number_value()) {
    return kind_.number_value_;
  }
  return 0;
}
 void Value::set_number_value(double value) {
  if (!has_number_value()) {
    clear_kind();
    set_has_number_value();
  }
  kind_.number_value_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.Value.number_value)
}

// optional string string_value = 3;
bool Value::has_string_value() const {
  return kind_case() == kStringValue;
}
void Value::set_has_string_value() {
  _oneof_case_[0] = kStringValue;
}
void Value::clear_string_value() {
  if (has_string_value()) {
    kind_.string_value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    clear_has_kind();
  }
}
 const ::std::string& Value::string_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Value.string_value)
  if (has_string_value()) {
    return kind_.string_value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  return *&::google::protobuf::internal::GetEmptyStringAlreadyInited();
}
 void Value::set_string_value(const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.protobuf.Value.string_value)
  if (!has_string_value()) {
    clear_kind();
    set_has_string_value();
    kind_.string_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  kind_.string_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.Value.string_value)
}
 void Value::set_string_value(const char* value) {
  if (!has_string_value()) {
    clear_kind();
    set_has_string_value();
    kind_.string_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  kind_.string_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.Value.string_value)
}
 void Value::set_string_value(const char* value, size_t size) {
  if (!has_string_value()) {
    clear_kind();
    set_has_string_value();
    kind_.string_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  kind_.string_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Value.string_value)
}
 ::std::string* Value::mutable_string_value() {
  if (!has_string_value()) {
    clear_kind();
    set_has_string_value();
    kind_.string_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_mutable:google.protobuf.Value.string_value)
  return kind_.string_value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Value::release_string_value() {
  // @@protoc_insertion_point(field_release:google.protobuf.Value.string_value)
  if (has_string_value()) {
    clear_has_kind();
    return kind_.string_value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  } else {
    return NULL;
  }
}
 void Value::set_allocated_string_value(::std::string* string_value) {
  if (!has_string_value()) {
    kind_.string_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  clear_kind();
  if (string_value != NULL) {
    set_has_string_value();
    kind_.string_value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
        string_value);
  }
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Value.string_value)
}

// optional bool bool_value = 4;
bool Value::has_bool_value() const {
  return kind_case() == kBoolValue;
}
void Value::set_has_bool_value() {
  _oneof_case_[0] = kBoolValue;
}
void Value::clear_bool_value() {
  if (has_bool_value()) {
    kind_.bool_value_ = false;
    clear_has_kind();
  }
}
 bool Value::bool_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Value.bool_value)
  if (has_bool_value()) {
    return kind_.bool_value_;
  }
  return false;
}
 void Value::set_bool_value(bool value) {
  if (!has_bool_value()) {
    clear_kind();
    set_has_bool_value();
  }
  kind_.bool_value_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.Value.bool_value)
}

// optional .google.protobuf.Struct struct_value = 5;
bool Value::has_struct_value() const {
  return kind_case() == kStructValue;
}
void Value::set_has_struct_value() {
  _oneof_case_[0] = kStructValue;
}
void Value::clear_struct_value() {
  if (has_struct_value()) {
    delete kind_.struct_value_;
    clear_has_kind();
  }
}
 const ::google::protobuf::Struct& Value::struct_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Value.struct_value)
  return has_struct_value()
      ? *kind_.struct_value_
      : ::google::protobuf::Struct::default_instance();
}
::google::protobuf::Struct* Value::mutable_struct_value() {
  if (!has_struct_value()) {
    clear_kind();
    set_has_struct_value();
    kind_.struct_value_ = new ::google::protobuf::Struct;
  }
  // @@protoc_insertion_point(field_mutable:google.protobuf.Value.struct_value)
  return kind_.struct_value_;
}
::google::protobuf::Struct* Value::release_struct_value() {
  // @@protoc_insertion_point(field_release:google.protobuf.Value.struct_value)
  if (has_struct_value()) {
    clear_has_kind();
    ::google::protobuf::Struct* temp = kind_.struct_value_;
    kind_.struct_value_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void Value::set_allocated_struct_value(::google::protobuf::Struct* struct_value) {
  clear_kind();
  if (struct_value) {
    set_has_struct_value();
    kind_.struct_value_ = struct_value;
  }
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Value.struct_value)
}

// optional .google.protobuf.ListValue list_value = 6;
bool Value::has_list_value() const {
  return kind_case() == kListValue;
}
void Value::set_has_list_value() {
  _oneof_case_[0] = kListValue;
}
void Value::clear_list_value() {
  if (has_list_value()) {
    delete kind_.list_value_;
    clear_has_kind();
  }
}
 const ::google::protobuf::ListValue& Value::list_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Value.list_value)
  return has_list_value()
      ? *kind_.list_value_
      : ::google::protobuf::ListValue::default_instance();
}
::google::protobuf::ListValue* Value::mutable_list_value() {
  if (!has_list_value()) {
    clear_kind();
    set_has_list_value();
    kind_.list_value_ = new ::google::protobuf::ListValue;
  }
  // @@protoc_insertion_point(field_mutable:google.protobuf.Value.list_value)
  return kind_.list_value_;
}
::google::protobuf::ListValue* Value::release_list_value() {
  // @@protoc_insertion_point(field_release:google.protobuf.Value.list_value)
  if (has_list_value()) {
    clear_has_kind();
    ::google::protobuf::ListValue* temp = kind_.list_value_;
    kind_.list_value_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void Value::set_allocated_list_value(::google::protobuf::ListValue* list_value) {
  clear_kind();
  if (list_value) {
    set_has_list_value();
    kind_.list_value_ = list_value;
  }
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Value.list_value)
}

bool Value::has_kind() const {
  return kind_case() != KIND_NOT_SET;
}
void Value::clear_has_kind() {
  _oneof_case_[0] = KIND_NOT_SET;
}
Value::KindCase Value::kind_case() const {
  return Value::KindCase(_oneof_case_[0]);
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ListValue::kValuesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ListValue::ListValue()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.ListValue)
}

void ListValue::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

ListValue::ListValue(const ListValue& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.ListValue)
}

void ListValue::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

ListValue::~ListValue() {
  // @@protoc_insertion_point(destructor:google.protobuf.ListValue)
  SharedDtor();
}

void ListValue::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ListValue::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ListValue::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ListValue_descriptor_;
}

const ListValue& ListValue::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fstruct_2eproto();
  return *default_instance_;
}

ListValue* ListValue::default_instance_ = NULL;

ListValue* ListValue::New(::google::protobuf::Arena* arena) const {
  ListValue* n = new ListValue;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ListValue::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.ListValue)
  values_.Clear();
}

bool ListValue::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.ListValue)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .google.protobuf.Value values = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_values:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_values()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_values;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.ListValue)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.ListValue)
  return false;
#undef DO_
}

void ListValue::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.ListValue)
  // repeated .google.protobuf.Value values = 1;
  for (unsigned int i = 0, n = this->values_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->values(i), output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.ListValue)
}

::google::protobuf::uint8* ListValue::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.ListValue)
  // repeated .google.protobuf.Value values = 1;
  for (unsigned int i = 0, n = this->values_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->values(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.ListValue)
  return target;
}

int ListValue::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.ListValue)
  int total_size = 0;

  // repeated .google.protobuf.Value values = 1;
  total_size += 1 * this->values_size();
  for (int i = 0; i < this->values_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->values(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ListValue::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.ListValue)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const ListValue* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ListValue>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.ListValue)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.ListValue)
    MergeFrom(*source);
  }
}

void ListValue::MergeFrom(const ListValue& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.ListValue)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  values_.MergeFrom(from.values_);
}

void ListValue::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.ListValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ListValue::CopyFrom(const ListValue& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.ListValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ListValue::IsInitialized() const {

  return true;
}

void ListValue::Swap(ListValue* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ListValue::InternalSwap(ListValue* other) {
  values_.UnsafeArenaSwap(&other->values_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ListValue::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ListValue_descriptor_;
  metadata.reflection = ListValue_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ListValue

// repeated .google.protobuf.Value values = 1;
int ListValue::values_size() const {
  return values_.size();
}
void ListValue::clear_values() {
  values_.Clear();
}
const ::google::protobuf::Value& ListValue::values(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.ListValue.values)
  return values_.Get(index);
}
::google::protobuf::Value* ListValue::mutable_values(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.ListValue.values)
  return values_.Mutable(index);
}
::google::protobuf::Value* ListValue::add_values() {
  // @@protoc_insertion_point(field_add:google.protobuf.ListValue.values)
  return values_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::Value >*
ListValue::mutable_values() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.ListValue.values)
  return &values_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Value >&
ListValue::values() const {
  // @@protoc_insertion_point(field_list:google.protobuf.ListValue.values)
  return values_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
