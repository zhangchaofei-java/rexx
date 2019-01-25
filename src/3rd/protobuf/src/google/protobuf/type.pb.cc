
#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include <google/protobuf/type.pb.h>

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

const ::google::protobuf::Descriptor* Type_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Type_reflection_ = NULL;
const ::google::protobuf::Descriptor* Field_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Field_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Field_Kind_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* Field_Cardinality_descriptor_ = NULL;
const ::google::protobuf::Descriptor* Enum_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Enum_reflection_ = NULL;
const ::google::protobuf::Descriptor* EnumValue_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  EnumValue_reflection_ = NULL;
const ::google::protobuf::Descriptor* Option_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Option_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Syntax_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_google_2fprotobuf_2ftype_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_google_2fprotobuf_2ftype_2eproto() {
  protobuf_AddDesc_google_2fprotobuf_2ftype_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "google/protobuf/type.proto");
  GOOGLE_CHECK(file != NULL);
  Type_descriptor_ = file->message_type(0);
  static const int Type_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Type, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Type, fields_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Type, oneofs_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Type, options_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Type, source_context_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Type, syntax_),
  };
  Type_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Type_descriptor_,
      Type::default_instance_,
      Type_offsets_,
      -1,
      -1,
      -1,
      sizeof(Type),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Type, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Type, _is_default_instance_));
  Field_descriptor_ = file->message_type(1);
  static const int Field_offsets_[10] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Field, kind_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Field, cardinality_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Field, number_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Field, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Field, type_url_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Field, oneof_index_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Field, packed_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Field, options_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Field, json_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Field, default_value_),
  };
  Field_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Field_descriptor_,
      Field::default_instance_,
      Field_offsets_,
      -1,
      -1,
      -1,
      sizeof(Field),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Field, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Field, _is_default_instance_));
  Field_Kind_descriptor_ = Field_descriptor_->enum_type(0);
  Field_Cardinality_descriptor_ = Field_descriptor_->enum_type(1);
  Enum_descriptor_ = file->message_type(2);
  static const int Enum_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Enum, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Enum, enumvalue_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Enum, options_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Enum, source_context_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Enum, syntax_),
  };
  Enum_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Enum_descriptor_,
      Enum::default_instance_,
      Enum_offsets_,
      -1,
      -1,
      -1,
      sizeof(Enum),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Enum, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Enum, _is_default_instance_));
  EnumValue_descriptor_ = file->message_type(3);
  static const int EnumValue_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EnumValue, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EnumValue, number_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EnumValue, options_),
  };
  EnumValue_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      EnumValue_descriptor_,
      EnumValue::default_instance_,
      EnumValue_offsets_,
      -1,
      -1,
      -1,
      sizeof(EnumValue),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EnumValue, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EnumValue, _is_default_instance_));
  Option_descriptor_ = file->message_type(4);
  static const int Option_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Option, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Option, value_),
  };
  Option_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Option_descriptor_,
      Option::default_instance_,
      Option_offsets_,
      -1,
      -1,
      -1,
      sizeof(Option),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Option, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Option, _is_default_instance_));
  Syntax_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_google_2fprotobuf_2ftype_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Type_descriptor_, &Type::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Field_descriptor_, &Field::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Enum_descriptor_, &Enum::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      EnumValue_descriptor_, &EnumValue::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Option_descriptor_, &Option::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_google_2fprotobuf_2ftype_2eproto() {
  delete Type::default_instance_;
  delete Type_reflection_;
  delete Field::default_instance_;
  delete Field_reflection_;
  delete Enum::default_instance_;
  delete Enum_reflection_;
  delete EnumValue::default_instance_;
  delete EnumValue_reflection_;
  delete Option::default_instance_;
  delete Option_reflection_;
}

void protobuf_AddDesc_google_2fprotobuf_2ftype_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_google_2fprotobuf_2ftype_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::protobuf_AddDesc_google_2fprotobuf_2fany_2eproto();
  ::google::protobuf::protobuf_AddDesc_google_2fprotobuf_2fsource_5fcontext_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\032google/protobuf/type.proto\022\017google.pro"
    "tobuf\032\031google/protobuf/any.proto\032$google"
    "/protobuf/source_context.proto\"\327\001\n\004Type\022"
    "\014\n\004name\030\001 \001(\t\022&\n\006fields\030\002 \003(\0132\026.google.p"
    "rotobuf.Field\022\016\n\006oneofs\030\003 \003(\t\022(\n\007options"
    "\030\004 \003(\0132\027.google.protobuf.Option\0226\n\016sourc"
    "e_context\030\005 \001(\0132\036.google.protobuf.Source"
    "Context\022\'\n\006syntax\030\006 \001(\0162\027.google.protobu"
    "f.Syntax\"\325\005\n\005Field\022)\n\004kind\030\001 \001(\0162\033.googl"
    "e.protobuf.Field.Kind\0227\n\013cardinality\030\002 \001"
    "(\0162\".google.protobuf.Field.Cardinality\022\016"
    "\n\006number\030\003 \001(\005\022\014\n\004name\030\004 \001(\t\022\020\n\010type_url"
    "\030\006 \001(\t\022\023\n\013oneof_index\030\007 \001(\005\022\016\n\006packed\030\010 "
    "\001(\010\022(\n\007options\030\t \003(\0132\027.google.protobuf.O"
    "ption\022\021\n\tjson_name\030\n \001(\t\022\025\n\rdefault_valu"
    "e\030\013 \001(\t\"\310\002\n\004Kind\022\020\n\014TYPE_UNKNOWN\020\000\022\017\n\013TY"
    "PE_DOUBLE\020\001\022\016\n\nTYPE_FLOAT\020\002\022\016\n\nTYPE_INT6"
    "4\020\003\022\017\n\013TYPE_UINT64\020\004\022\016\n\nTYPE_INT32\020\005\022\020\n\014"
    "TYPE_FIXED64\020\006\022\020\n\014TYPE_FIXED32\020\007\022\r\n\tTYPE"
    "_BOOL\020\010\022\017\n\013TYPE_STRING\020\t\022\016\n\nTYPE_GROUP\020\n"
    "\022\020\n\014TYPE_MESSAGE\020\013\022\016\n\nTYPE_BYTES\020\014\022\017\n\013TY"
    "PE_UINT32\020\r\022\r\n\tTYPE_ENUM\020\016\022\021\n\rTYPE_SFIXE"
    "D32\020\017\022\021\n\rTYPE_SFIXED64\020\020\022\017\n\013TYPE_SINT32\020"
    "\021\022\017\n\013TYPE_SINT64\020\022\"t\n\013Cardinality\022\027\n\023CAR"
    "DINALITY_UNKNOWN\020\000\022\030\n\024CARDINALITY_OPTION"
    "AL\020\001\022\030\n\024CARDINALITY_REQUIRED\020\002\022\030\n\024CARDIN"
    "ALITY_REPEATED\020\003\"\316\001\n\004Enum\022\014\n\004name\030\001 \001(\t\022"
    "-\n\tenumvalue\030\002 \003(\0132\032.google.protobuf.Enu"
    "mValue\022(\n\007options\030\003 \003(\0132\027.google.protobu"
    "f.Option\0226\n\016source_context\030\004 \001(\0132\036.googl"
    "e.protobuf.SourceContext\022\'\n\006syntax\030\005 \001(\016"
    "2\027.google.protobuf.Syntax\"S\n\tEnumValue\022\014"
    "\n\004name\030\001 \001(\t\022\016\n\006number\030\002 \001(\005\022(\n\007options\030"
    "\003 \003(\0132\027.google.protobuf.Option\";\n\006Option"
    "\022\014\n\004name\030\001 \001(\t\022#\n\005value\030\002 \001(\0132\024.google.p"
    "rotobuf.Any*.\n\006Syntax\022\021\n\rSYNTAX_PROTO2\020\000"
    "\022\021\n\rSYNTAX_PROTO3\020\001BL\n\023com.google.protob"
    "ufB\tTypeProtoP\001\240\001\001\242\002\003GPB\252\002\036Google.Protob"
    "uf.WellKnownTypesb\006proto3", 1545);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/type.proto", &protobuf_RegisterTypes);
  Type::default_instance_ = new Type();
  Field::default_instance_ = new Field();
  Enum::default_instance_ = new Enum();
  EnumValue::default_instance_ = new EnumValue();
  Option::default_instance_ = new Option();
  Type::default_instance_->InitAsDefaultInstance();
  Field::default_instance_->InitAsDefaultInstance();
  Enum::default_instance_->InitAsDefaultInstance();
  EnumValue::default_instance_->InitAsDefaultInstance();
  Option::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fprotobuf_2ftype_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fprotobuf_2ftype_2eproto {
  StaticDescriptorInitializer_google_2fprotobuf_2ftype_2eproto() {
    protobuf_AddDesc_google_2fprotobuf_2ftype_2eproto();
  }
} static_descriptor_initializer_google_2fprotobuf_2ftype_2eproto_;
const ::google::protobuf::EnumDescriptor* Syntax_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Syntax_descriptor_;
}
bool Syntax_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Type::kNameFieldNumber;
const int Type::kFieldsFieldNumber;
const int Type::kOneofsFieldNumber;
const int Type::kOptionsFieldNumber;
const int Type::kSourceContextFieldNumber;
const int Type::kSyntaxFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Type::Type()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.Type)
}

void Type::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  source_context_ = const_cast< ::google::protobuf::SourceContext*>(&::google::protobuf::SourceContext::default_instance());
}

Type::Type(const Type& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.Type)
}

void Type::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  source_context_ = NULL;
  syntax_ = 0;
}

Type::~Type() {
  // @@protoc_insertion_point(destructor:google.protobuf.Type)
  SharedDtor();
}

void Type::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
    delete source_context_;
  }
}

void Type::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Type::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Type_descriptor_;
}

const Type& Type::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2ftype_2eproto();
  return *default_instance_;
}

Type* Type::default_instance_ = NULL;

Type* Type::New(::google::protobuf::Arena* arena) const {
  Type* n = new Type;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Type::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.Type)
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && source_context_ != NULL) delete source_context_;
  source_context_ = NULL;
  syntax_ = 0;
  fields_.Clear();
  oneofs_.Clear();
  options_.Clear();
}

bool Type::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.Type)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.protobuf.Type.name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_fields;
        break;
      }

      // repeated .google.protobuf.Field fields = 2;
      case 2: {
        if (tag == 18) {
         parse_fields:
          DO_(input->IncrementRecursionDepth());
         parse_loop_fields:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_fields()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_loop_fields;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectTag(26)) goto parse_oneofs;
        break;
      }

      // repeated string oneofs = 3;
      case 3: {
        if (tag == 26) {
         parse_oneofs:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_oneofs()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->oneofs(this->oneofs_size() - 1).data(),
            this->oneofs(this->oneofs_size() - 1).length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.protobuf.Type.oneofs"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_oneofs;
        if (input->ExpectTag(34)) goto parse_options;
        break;
      }

      // repeated .google.protobuf.Option options = 4;
      case 4: {
        if (tag == 34) {
         parse_options:
          DO_(input->IncrementRecursionDepth());
         parse_loop_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_options()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_loop_options;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectTag(42)) goto parse_source_context;
        break;
      }

      // optional .google.protobuf.SourceContext source_context = 5;
      case 5: {
        if (tag == 42) {
         parse_source_context:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_source_context()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_syntax;
        break;
      }

      // optional .google.protobuf.Syntax syntax = 6;
      case 6: {
        if (tag == 48) {
         parse_syntax:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_syntax(static_cast< ::google::protobuf::Syntax >(value));
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
  // @@protoc_insertion_point(parse_success:google.protobuf.Type)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.Type)
  return false;
#undef DO_
}

void Type::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.Type)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Type.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // repeated .google.protobuf.Field fields = 2;
  for (unsigned int i = 0, n = this->fields_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->fields(i), output);
  }

  // repeated string oneofs = 3;
  for (int i = 0; i < this->oneofs_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->oneofs(i).data(), this->oneofs(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Type.oneofs");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->oneofs(i), output);
  }

  // repeated .google.protobuf.Option options = 4;
  for (unsigned int i = 0, n = this->options_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->options(i), output);
  }

  // optional .google.protobuf.SourceContext source_context = 5;
  if (this->has_source_context()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, *this->source_context_, output);
  }

  // optional .google.protobuf.Syntax syntax = 6;
  if (this->syntax() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      6, this->syntax(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.Type)
}

::google::protobuf::uint8* Type::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.Type)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Type.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // repeated .google.protobuf.Field fields = 2;
  for (unsigned int i = 0, n = this->fields_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->fields(i), false, target);
  }

  // repeated string oneofs = 3;
  for (int i = 0; i < this->oneofs_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->oneofs(i).data(), this->oneofs(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Type.oneofs");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(3, this->oneofs(i), target);
  }

  // repeated .google.protobuf.Option options = 4;
  for (unsigned int i = 0, n = this->options_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, this->options(i), false, target);
  }

  // optional .google.protobuf.SourceContext source_context = 5;
  if (this->has_source_context()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        5, *this->source_context_, false, target);
  }

  // optional .google.protobuf.Syntax syntax = 6;
  if (this->syntax() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      6, this->syntax(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.Type)
  return target;
}

int Type::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.Type)
  int total_size = 0;

  // optional string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // optional .google.protobuf.SourceContext source_context = 5;
  if (this->has_source_context()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->source_context_);
  }

  // optional .google.protobuf.Syntax syntax = 6;
  if (this->syntax() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->syntax());
  }

  // repeated .google.protobuf.Field fields = 2;
  total_size += 1 * this->fields_size();
  for (int i = 0; i < this->fields_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->fields(i));
  }

  // repeated string oneofs = 3;
  total_size += 1 * this->oneofs_size();
  for (int i = 0; i < this->oneofs_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->oneofs(i));
  }

  // repeated .google.protobuf.Option options = 4;
  total_size += 1 * this->options_size();
  for (int i = 0; i < this->options_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->options(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Type::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.Type)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Type* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Type>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.Type)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.Type)
    MergeFrom(*source);
  }
}

void Type::MergeFrom(const Type& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.Type)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  fields_.MergeFrom(from.fields_);
  oneofs_.MergeFrom(from.oneofs_);
  options_.MergeFrom(from.options_);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.has_source_context()) {
    mutable_source_context()->::google::protobuf::SourceContext::MergeFrom(from.source_context());
  }
  if (from.syntax() != 0) {
    set_syntax(from.syntax());
  }
}

void Type::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.Type)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Type::CopyFrom(const Type& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.Type)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Type::IsInitialized() const {

  return true;
}

void Type::Swap(Type* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Type::InternalSwap(Type* other) {
  name_.Swap(&other->name_);
  fields_.UnsafeArenaSwap(&other->fields_);
  oneofs_.UnsafeArenaSwap(&other->oneofs_);
  options_.UnsafeArenaSwap(&other->options_);
  std::swap(source_context_, other->source_context_);
  std::swap(syntax_, other->syntax_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Type::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Type_descriptor_;
  metadata.reflection = Type_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Type

// optional string name = 1;
void Type::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Type::name() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Type.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Type::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.Type.name)
}
 void Type::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.Type.name)
}
 void Type::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Type.name)
}
 ::std::string* Type::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.Type.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Type::release_name() {
  // @@protoc_insertion_point(field_release:google.protobuf.Type.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Type::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Type.name)
}

// repeated .google.protobuf.Field fields = 2;
int Type::fields_size() const {
  return fields_.size();
}
void Type::clear_fields() {
  fields_.Clear();
}
const ::google::protobuf::Field& Type::fields(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.Type.fields)
  return fields_.Get(index);
}
::google::protobuf::Field* Type::mutable_fields(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.Type.fields)
  return fields_.Mutable(index);
}
::google::protobuf::Field* Type::add_fields() {
  // @@protoc_insertion_point(field_add:google.protobuf.Type.fields)
  return fields_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::Field >*
Type::mutable_fields() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.Type.fields)
  return &fields_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Field >&
Type::fields() const {
  // @@protoc_insertion_point(field_list:google.protobuf.Type.fields)
  return fields_;
}

// repeated string oneofs = 3;
int Type::oneofs_size() const {
  return oneofs_.size();
}
void Type::clear_oneofs() {
  oneofs_.Clear();
}
 const ::std::string& Type::oneofs(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.Type.oneofs)
  return oneofs_.Get(index);
}
 ::std::string* Type::mutable_oneofs(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.Type.oneofs)
  return oneofs_.Mutable(index);
}
 void Type::set_oneofs(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.protobuf.Type.oneofs)
  oneofs_.Mutable(index)->assign(value);
}
 void Type::set_oneofs(int index, const char* value) {
  oneofs_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.protobuf.Type.oneofs)
}
 void Type::set_oneofs(int index, const char* value, size_t size) {
  oneofs_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Type.oneofs)
}
 ::std::string* Type::add_oneofs() {
  // @@protoc_insertion_point(field_add_mutable:google.protobuf.Type.oneofs)
  return oneofs_.Add();
}
 void Type::add_oneofs(const ::std::string& value) {
  oneofs_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.protobuf.Type.oneofs)
}
 void Type::add_oneofs(const char* value) {
  oneofs_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.protobuf.Type.oneofs)
}
 void Type::add_oneofs(const char* value, size_t size) {
  oneofs_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.protobuf.Type.oneofs)
}
 const ::google::protobuf::RepeatedPtrField< ::std::string>&
Type::oneofs() const {
  // @@protoc_insertion_point(field_list:google.protobuf.Type.oneofs)
  return oneofs_;
}
 ::google::protobuf::RepeatedPtrField< ::std::string>*
Type::mutable_oneofs() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.Type.oneofs)
  return &oneofs_;
}

// repeated .google.protobuf.Option options = 4;
int Type::options_size() const {
  return options_.size();
}
void Type::clear_options() {
  options_.Clear();
}
const ::google::protobuf::Option& Type::options(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.Type.options)
  return options_.Get(index);
}
::google::protobuf::Option* Type::mutable_options(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.Type.options)
  return options_.Mutable(index);
}
::google::protobuf::Option* Type::add_options() {
  // @@protoc_insertion_point(field_add:google.protobuf.Type.options)
  return options_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::Option >*
Type::mutable_options() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.Type.options)
  return &options_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Option >&
Type::options() const {
  // @@protoc_insertion_point(field_list:google.protobuf.Type.options)
  return options_;
}

// optional .google.protobuf.SourceContext source_context = 5;
bool Type::has_source_context() const {
  return !_is_default_instance_ && source_context_ != NULL;
}
void Type::clear_source_context() {
  if (GetArenaNoVirtual() == NULL && source_context_ != NULL) delete source_context_;
  source_context_ = NULL;
}
const ::google::protobuf::SourceContext& Type::source_context() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Type.source_context)
  return source_context_ != NULL ? *source_context_ : *default_instance_->source_context_;
}
::google::protobuf::SourceContext* Type::mutable_source_context() {
  
  if (source_context_ == NULL) {
    source_context_ = new ::google::protobuf::SourceContext;
  }
  // @@protoc_insertion_point(field_mutable:google.protobuf.Type.source_context)
  return source_context_;
}
::google::protobuf::SourceContext* Type::release_source_context() {
  // @@protoc_insertion_point(field_release:google.protobuf.Type.source_context)
  
  ::google::protobuf::SourceContext* temp = source_context_;
  source_context_ = NULL;
  return temp;
}
void Type::set_allocated_source_context(::google::protobuf::SourceContext* source_context) {
  delete source_context_;
  source_context_ = source_context;
  if (source_context) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Type.source_context)
}

// optional .google.protobuf.Syntax syntax = 6;
void Type::clear_syntax() {
  syntax_ = 0;
}
 ::google::protobuf::Syntax Type::syntax() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Type.syntax)
  return static_cast< ::google::protobuf::Syntax >(syntax_);
}
 void Type::set_syntax(::google::protobuf::Syntax value) {
  
  syntax_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.Type.syntax)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

const ::google::protobuf::EnumDescriptor* Field_Kind_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Field_Kind_descriptor_;
}
bool Field_Kind_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Field_Kind Field::TYPE_UNKNOWN;
const Field_Kind Field::TYPE_DOUBLE;
const Field_Kind Field::TYPE_FLOAT;
const Field_Kind Field::TYPE_INT64;
const Field_Kind Field::TYPE_UINT64;
const Field_Kind Field::TYPE_INT32;
const Field_Kind Field::TYPE_FIXED64;
const Field_Kind Field::TYPE_FIXED32;
const Field_Kind Field::TYPE_BOOL;
const Field_Kind Field::TYPE_STRING;
const Field_Kind Field::TYPE_GROUP;
const Field_Kind Field::TYPE_MESSAGE;
const Field_Kind Field::TYPE_BYTES;
const Field_Kind Field::TYPE_UINT32;
const Field_Kind Field::TYPE_ENUM;
const Field_Kind Field::TYPE_SFIXED32;
const Field_Kind Field::TYPE_SFIXED64;
const Field_Kind Field::TYPE_SINT32;
const Field_Kind Field::TYPE_SINT64;
const Field_Kind Field::Kind_MIN;
const Field_Kind Field::Kind_MAX;
const int Field::Kind_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
const ::google::protobuf::EnumDescriptor* Field_Cardinality_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Field_Cardinality_descriptor_;
}
bool Field_Cardinality_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Field_Cardinality Field::CARDINALITY_UNKNOWN;
const Field_Cardinality Field::CARDINALITY_OPTIONAL;
const Field_Cardinality Field::CARDINALITY_REQUIRED;
const Field_Cardinality Field::CARDINALITY_REPEATED;
const Field_Cardinality Field::Cardinality_MIN;
const Field_Cardinality Field::Cardinality_MAX;
const int Field::Cardinality_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Field::kKindFieldNumber;
const int Field::kCardinalityFieldNumber;
const int Field::kNumberFieldNumber;
const int Field::kNameFieldNumber;
const int Field::kTypeUrlFieldNumber;
const int Field::kOneofIndexFieldNumber;
const int Field::kPackedFieldNumber;
const int Field::kOptionsFieldNumber;
const int Field::kJsonNameFieldNumber;
const int Field::kDefaultValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Field::Field()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.Field)
}

void Field::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Field::Field(const Field& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.Field)
}

void Field::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  kind_ = 0;
  cardinality_ = 0;
  number_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  type_url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  oneof_index_ = 0;
  packed_ = false;
  json_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  default_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Field::~Field() {
  // @@protoc_insertion_point(destructor:google.protobuf.Field)
  SharedDtor();
}

void Field::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  type_url_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  json_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  default_value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Field::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Field::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Field_descriptor_;
}

const Field& Field::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2ftype_2eproto();
  return *default_instance_;
}

Field* Field::default_instance_ = NULL;

Field* Field::New(::google::protobuf::Arena* arena) const {
  Field* n = new Field;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Field::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.Field)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(Field, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<Field*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(kind_, cardinality_);
  ZR_(number_, oneof_index_);
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  type_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  packed_ = false;
  json_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  default_value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

  options_.Clear();
}

bool Field::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.Field)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .google.protobuf.Field.Kind kind = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_kind(static_cast< ::google::protobuf::Field_Kind >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_cardinality;
        break;
      }

      // optional .google.protobuf.Field.Cardinality cardinality = 2;
      case 2: {
        if (tag == 16) {
         parse_cardinality:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_cardinality(static_cast< ::google::protobuf::Field_Cardinality >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_number;
        break;
      }

      // optional int32 number = 3;
      case 3: {
        if (tag == 24) {
         parse_number:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &number_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_name;
        break;
      }

      // optional string name = 4;
      case 4: {
        if (tag == 34) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.protobuf.Field.name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_type_url;
        break;
      }

      // optional string type_url = 6;
      case 6: {
        if (tag == 50) {
         parse_type_url:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_type_url()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->type_url().data(), this->type_url().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.protobuf.Field.type_url"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(56)) goto parse_oneof_index;
        break;
      }

      // optional int32 oneof_index = 7;
      case 7: {
        if (tag == 56) {
         parse_oneof_index:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &oneof_index_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(64)) goto parse_packed;
        break;
      }

      // optional bool packed = 8;
      case 8: {
        if (tag == 64) {
         parse_packed:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &packed_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(74)) goto parse_options;
        break;
      }

      // repeated .google.protobuf.Option options = 9;
      case 9: {
        if (tag == 74) {
         parse_options:
          DO_(input->IncrementRecursionDepth());
         parse_loop_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_options()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(74)) goto parse_loop_options;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectTag(82)) goto parse_json_name;
        break;
      }

      // optional string json_name = 10;
      case 10: {
        if (tag == 82) {
         parse_json_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_json_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->json_name().data(), this->json_name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.protobuf.Field.json_name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(90)) goto parse_default_value;
        break;
      }

      // optional string default_value = 11;
      case 11: {
        if (tag == 90) {
         parse_default_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_default_value()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->default_value().data(), this->default_value().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.protobuf.Field.default_value"));
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
  // @@protoc_insertion_point(parse_success:google.protobuf.Field)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.Field)
  return false;
#undef DO_
}

void Field::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.Field)
  // optional .google.protobuf.Field.Kind kind = 1;
  if (this->kind() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->kind(), output);
  }

  // optional .google.protobuf.Field.Cardinality cardinality = 2;
  if (this->cardinality() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->cardinality(), output);
  }

  // optional int32 number = 3;
  if (this->number() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->number(), output);
  }

  // optional string name = 4;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Field.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->name(), output);
  }

  // optional string type_url = 6;
  if (this->type_url().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->type_url().data(), this->type_url().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Field.type_url");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->type_url(), output);
  }

  // optional int32 oneof_index = 7;
  if (this->oneof_index() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->oneof_index(), output);
  }

  // optional bool packed = 8;
  if (this->packed() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(8, this->packed(), output);
  }

  // repeated .google.protobuf.Option options = 9;
  for (unsigned int i = 0, n = this->options_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, this->options(i), output);
  }

  // optional string json_name = 10;
  if (this->json_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->json_name().data(), this->json_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Field.json_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      10, this->json_name(), output);
  }

  // optional string default_value = 11;
  if (this->default_value().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->default_value().data(), this->default_value().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Field.default_value");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      11, this->default_value(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.Field)
}

::google::protobuf::uint8* Field::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.Field)
  // optional .google.protobuf.Field.Kind kind = 1;
  if (this->kind() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->kind(), target);
  }

  // optional .google.protobuf.Field.Cardinality cardinality = 2;
  if (this->cardinality() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->cardinality(), target);
  }

  // optional int32 number = 3;
  if (this->number() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->number(), target);
  }

  // optional string name = 4;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Field.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->name(), target);
  }

  // optional string type_url = 6;
  if (this->type_url().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->type_url().data(), this->type_url().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Field.type_url");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->type_url(), target);
  }

  // optional int32 oneof_index = 7;
  if (this->oneof_index() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->oneof_index(), target);
  }

  // optional bool packed = 8;
  if (this->packed() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(8, this->packed(), target);
  }

  // repeated .google.protobuf.Option options = 9;
  for (unsigned int i = 0, n = this->options_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        9, this->options(i), false, target);
  }

  // optional string json_name = 10;
  if (this->json_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->json_name().data(), this->json_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Field.json_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        10, this->json_name(), target);
  }

  // optional string default_value = 11;
  if (this->default_value().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->default_value().data(), this->default_value().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Field.default_value");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        11, this->default_value(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.Field)
  return target;
}

int Field::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.Field)
  int total_size = 0;

  // optional .google.protobuf.Field.Kind kind = 1;
  if (this->kind() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->kind());
  }

  // optional .google.protobuf.Field.Cardinality cardinality = 2;
  if (this->cardinality() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->cardinality());
  }

  // optional int32 number = 3;
  if (this->number() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->number());
  }

  // optional string name = 4;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // optional string type_url = 6;
  if (this->type_url().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->type_url());
  }

  // optional int32 oneof_index = 7;
  if (this->oneof_index() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->oneof_index());
  }

  // optional bool packed = 8;
  if (this->packed() != 0) {
    total_size += 1 + 1;
  }

  // optional string json_name = 10;
  if (this->json_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->json_name());
  }

  // optional string default_value = 11;
  if (this->default_value().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->default_value());
  }

  // repeated .google.protobuf.Option options = 9;
  total_size += 1 * this->options_size();
  for (int i = 0; i < this->options_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->options(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Field::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.Field)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Field* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Field>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.Field)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.Field)
    MergeFrom(*source);
  }
}

void Field::MergeFrom(const Field& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.Field)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  options_.MergeFrom(from.options_);
  if (from.kind() != 0) {
    set_kind(from.kind());
  }
  if (from.cardinality() != 0) {
    set_cardinality(from.cardinality());
  }
  if (from.number() != 0) {
    set_number(from.number());
  }
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.type_url().size() > 0) {

    type_url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.type_url_);
  }
  if (from.oneof_index() != 0) {
    set_oneof_index(from.oneof_index());
  }
  if (from.packed() != 0) {
    set_packed(from.packed());
  }
  if (from.json_name().size() > 0) {

    json_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.json_name_);
  }
  if (from.default_value().size() > 0) {

    default_value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.default_value_);
  }
}

void Field::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.Field)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Field::CopyFrom(const Field& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.Field)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Field::IsInitialized() const {

  return true;
}

void Field::Swap(Field* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Field::InternalSwap(Field* other) {
  std::swap(kind_, other->kind_);
  std::swap(cardinality_, other->cardinality_);
  std::swap(number_, other->number_);
  name_.Swap(&other->name_);
  type_url_.Swap(&other->type_url_);
  std::swap(oneof_index_, other->oneof_index_);
  std::swap(packed_, other->packed_);
  options_.UnsafeArenaSwap(&other->options_);
  json_name_.Swap(&other->json_name_);
  default_value_.Swap(&other->default_value_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Field::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Field_descriptor_;
  metadata.reflection = Field_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Field

// optional .google.protobuf.Field.Kind kind = 1;
void Field::clear_kind() {
  kind_ = 0;
}
 ::google::protobuf::Field_Kind Field::kind() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Field.kind)
  return static_cast< ::google::protobuf::Field_Kind >(kind_);
}
 void Field::set_kind(::google::protobuf::Field_Kind value) {
  
  kind_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.Field.kind)
}

// optional .google.protobuf.Field.Cardinality cardinality = 2;
void Field::clear_cardinality() {
  cardinality_ = 0;
}
 ::google::protobuf::Field_Cardinality Field::cardinality() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Field.cardinality)
  return static_cast< ::google::protobuf::Field_Cardinality >(cardinality_);
}
 void Field::set_cardinality(::google::protobuf::Field_Cardinality value) {
  
  cardinality_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.Field.cardinality)
}

// optional int32 number = 3;
void Field::clear_number() {
  number_ = 0;
}
 ::google::protobuf::int32 Field::number() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Field.number)
  return number_;
}
 void Field::set_number(::google::protobuf::int32 value) {
  
  number_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.Field.number)
}

// optional string name = 4;
void Field::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Field::name() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Field.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Field::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.Field.name)
}
 void Field::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.Field.name)
}
 void Field::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Field.name)
}
 ::std::string* Field::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.Field.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Field::release_name() {
  // @@protoc_insertion_point(field_release:google.protobuf.Field.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Field::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Field.name)
}

// optional string type_url = 6;
void Field::clear_type_url() {
  type_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Field::type_url() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Field.type_url)
  return type_url_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Field::set_type_url(const ::std::string& value) {
  
  type_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.Field.type_url)
}
 void Field::set_type_url(const char* value) {
  
  type_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.Field.type_url)
}
 void Field::set_type_url(const char* value, size_t size) {
  
  type_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Field.type_url)
}
 ::std::string* Field::mutable_type_url() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.Field.type_url)
  return type_url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Field::release_type_url() {
  // @@protoc_insertion_point(field_release:google.protobuf.Field.type_url)
  
  return type_url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Field::set_allocated_type_url(::std::string* type_url) {
  if (type_url != NULL) {
    
  } else {
    
  }
  type_url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type_url);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Field.type_url)
}

// optional int32 oneof_index = 7;
void Field::clear_oneof_index() {
  oneof_index_ = 0;
}
 ::google::protobuf::int32 Field::oneof_index() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Field.oneof_index)
  return oneof_index_;
}
 void Field::set_oneof_index(::google::protobuf::int32 value) {
  
  oneof_index_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.Field.oneof_index)
}

// optional bool packed = 8;
void Field::clear_packed() {
  packed_ = false;
}
 bool Field::packed() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Field.packed)
  return packed_;
}
 void Field::set_packed(bool value) {
  
  packed_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.Field.packed)
}

// repeated .google.protobuf.Option options = 9;
int Field::options_size() const {
  return options_.size();
}
void Field::clear_options() {
  options_.Clear();
}
const ::google::protobuf::Option& Field::options(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.Field.options)
  return options_.Get(index);
}
::google::protobuf::Option* Field::mutable_options(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.Field.options)
  return options_.Mutable(index);
}
::google::protobuf::Option* Field::add_options() {
  // @@protoc_insertion_point(field_add:google.protobuf.Field.options)
  return options_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::Option >*
Field::mutable_options() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.Field.options)
  return &options_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Option >&
Field::options() const {
  // @@protoc_insertion_point(field_list:google.protobuf.Field.options)
  return options_;
}

// optional string json_name = 10;
void Field::clear_json_name() {
  json_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Field::json_name() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Field.json_name)
  return json_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Field::set_json_name(const ::std::string& value) {
  
  json_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.Field.json_name)
}
 void Field::set_json_name(const char* value) {
  
  json_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.Field.json_name)
}
 void Field::set_json_name(const char* value, size_t size) {
  
  json_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Field.json_name)
}
 ::std::string* Field::mutable_json_name() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.Field.json_name)
  return json_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Field::release_json_name() {
  // @@protoc_insertion_point(field_release:google.protobuf.Field.json_name)
  
  return json_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Field::set_allocated_json_name(::std::string* json_name) {
  if (json_name != NULL) {
    
  } else {
    
  }
  json_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), json_name);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Field.json_name)
}

// optional string default_value = 11;
void Field::clear_default_value() {
  default_value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Field::default_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Field.default_value)
  return default_value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Field::set_default_value(const ::std::string& value) {
  
  default_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.Field.default_value)
}
 void Field::set_default_value(const char* value) {
  
  default_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.Field.default_value)
}
 void Field::set_default_value(const char* value, size_t size) {
  
  default_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Field.default_value)
}
 ::std::string* Field::mutable_default_value() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.Field.default_value)
  return default_value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Field::release_default_value() {
  // @@protoc_insertion_point(field_release:google.protobuf.Field.default_value)
  
  return default_value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Field::set_allocated_default_value(::std::string* default_value) {
  if (default_value != NULL) {
    
  } else {
    
  }
  default_value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), default_value);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Field.default_value)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Enum::kNameFieldNumber;
const int Enum::kEnumvalueFieldNumber;
const int Enum::kOptionsFieldNumber;
const int Enum::kSourceContextFieldNumber;
const int Enum::kSyntaxFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Enum::Enum()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.Enum)
}

void Enum::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  source_context_ = const_cast< ::google::protobuf::SourceContext*>(&::google::protobuf::SourceContext::default_instance());
}

Enum::Enum(const Enum& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.Enum)
}

void Enum::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  source_context_ = NULL;
  syntax_ = 0;
}

Enum::~Enum() {
  // @@protoc_insertion_point(destructor:google.protobuf.Enum)
  SharedDtor();
}

void Enum::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
    delete source_context_;
  }
}

void Enum::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Enum::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Enum_descriptor_;
}

const Enum& Enum::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2ftype_2eproto();
  return *default_instance_;
}

Enum* Enum::default_instance_ = NULL;

Enum* Enum::New(::google::protobuf::Arena* arena) const {
  Enum* n = new Enum;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Enum::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.Enum)
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && source_context_ != NULL) delete source_context_;
  source_context_ = NULL;
  syntax_ = 0;
  enumvalue_.Clear();
  options_.Clear();
}

bool Enum::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.Enum)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.protobuf.Enum.name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_enumvalue;
        break;
      }

      // repeated .google.protobuf.EnumValue enumvalue = 2;
      case 2: {
        if (tag == 18) {
         parse_enumvalue:
          DO_(input->IncrementRecursionDepth());
         parse_loop_enumvalue:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_enumvalue()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_loop_enumvalue;
        if (input->ExpectTag(26)) goto parse_loop_options;
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      // repeated .google.protobuf.Option options = 3;
      case 3: {
        if (tag == 26) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_options()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_loop_options;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectTag(34)) goto parse_source_context;
        break;
      }

      // optional .google.protobuf.SourceContext source_context = 4;
      case 4: {
        if (tag == 34) {
         parse_source_context:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_source_context()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_syntax;
        break;
      }

      // optional .google.protobuf.Syntax syntax = 5;
      case 5: {
        if (tag == 40) {
         parse_syntax:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_syntax(static_cast< ::google::protobuf::Syntax >(value));
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
  // @@protoc_insertion_point(parse_success:google.protobuf.Enum)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.Enum)
  return false;
#undef DO_
}

void Enum::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.Enum)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Enum.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // repeated .google.protobuf.EnumValue enumvalue = 2;
  for (unsigned int i = 0, n = this->enumvalue_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->enumvalue(i), output);
  }

  // repeated .google.protobuf.Option options = 3;
  for (unsigned int i = 0, n = this->options_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->options(i), output);
  }

  // optional .google.protobuf.SourceContext source_context = 4;
  if (this->has_source_context()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *this->source_context_, output);
  }

  // optional .google.protobuf.Syntax syntax = 5;
  if (this->syntax() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      5, this->syntax(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.Enum)
}

::google::protobuf::uint8* Enum::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.Enum)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Enum.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // repeated .google.protobuf.EnumValue enumvalue = 2;
  for (unsigned int i = 0, n = this->enumvalue_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->enumvalue(i), false, target);
  }

  // repeated .google.protobuf.Option options = 3;
  for (unsigned int i = 0, n = this->options_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, this->options(i), false, target);
  }

  // optional .google.protobuf.SourceContext source_context = 4;
  if (this->has_source_context()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, *this->source_context_, false, target);
  }

  // optional .google.protobuf.Syntax syntax = 5;
  if (this->syntax() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      5, this->syntax(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.Enum)
  return target;
}

int Enum::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.Enum)
  int total_size = 0;

  // optional string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // optional .google.protobuf.SourceContext source_context = 4;
  if (this->has_source_context()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->source_context_);
  }

  // optional .google.protobuf.Syntax syntax = 5;
  if (this->syntax() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->syntax());
  }

  // repeated .google.protobuf.EnumValue enumvalue = 2;
  total_size += 1 * this->enumvalue_size();
  for (int i = 0; i < this->enumvalue_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->enumvalue(i));
  }

  // repeated .google.protobuf.Option options = 3;
  total_size += 1 * this->options_size();
  for (int i = 0; i < this->options_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->options(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Enum::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.Enum)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Enum* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Enum>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.Enum)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.Enum)
    MergeFrom(*source);
  }
}

void Enum::MergeFrom(const Enum& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.Enum)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  enumvalue_.MergeFrom(from.enumvalue_);
  options_.MergeFrom(from.options_);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.has_source_context()) {
    mutable_source_context()->::google::protobuf::SourceContext::MergeFrom(from.source_context());
  }
  if (from.syntax() != 0) {
    set_syntax(from.syntax());
  }
}

void Enum::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.Enum)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Enum::CopyFrom(const Enum& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.Enum)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Enum::IsInitialized() const {

  return true;
}

void Enum::Swap(Enum* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Enum::InternalSwap(Enum* other) {
  name_.Swap(&other->name_);
  enumvalue_.UnsafeArenaSwap(&other->enumvalue_);
  options_.UnsafeArenaSwap(&other->options_);
  std::swap(source_context_, other->source_context_);
  std::swap(syntax_, other->syntax_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Enum::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Enum_descriptor_;
  metadata.reflection = Enum_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Enum

// optional string name = 1;
void Enum::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Enum::name() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Enum.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Enum::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.Enum.name)
}
 void Enum::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.Enum.name)
}
 void Enum::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Enum.name)
}
 ::std::string* Enum::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.Enum.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Enum::release_name() {
  // @@protoc_insertion_point(field_release:google.protobuf.Enum.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Enum::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Enum.name)
}

// repeated .google.protobuf.EnumValue enumvalue = 2;
int Enum::enumvalue_size() const {
  return enumvalue_.size();
}
void Enum::clear_enumvalue() {
  enumvalue_.Clear();
}
const ::google::protobuf::EnumValue& Enum::enumvalue(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.Enum.enumvalue)
  return enumvalue_.Get(index);
}
::google::protobuf::EnumValue* Enum::mutable_enumvalue(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.Enum.enumvalue)
  return enumvalue_.Mutable(index);
}
::google::protobuf::EnumValue* Enum::add_enumvalue() {
  // @@protoc_insertion_point(field_add:google.protobuf.Enum.enumvalue)
  return enumvalue_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::EnumValue >*
Enum::mutable_enumvalue() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.Enum.enumvalue)
  return &enumvalue_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::EnumValue >&
Enum::enumvalue() const {
  // @@protoc_insertion_point(field_list:google.protobuf.Enum.enumvalue)
  return enumvalue_;
}

// repeated .google.protobuf.Option options = 3;
int Enum::options_size() const {
  return options_.size();
}
void Enum::clear_options() {
  options_.Clear();
}
const ::google::protobuf::Option& Enum::options(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.Enum.options)
  return options_.Get(index);
}
::google::protobuf::Option* Enum::mutable_options(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.Enum.options)
  return options_.Mutable(index);
}
::google::protobuf::Option* Enum::add_options() {
  // @@protoc_insertion_point(field_add:google.protobuf.Enum.options)
  return options_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::Option >*
Enum::mutable_options() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.Enum.options)
  return &options_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Option >&
Enum::options() const {
  // @@protoc_insertion_point(field_list:google.protobuf.Enum.options)
  return options_;
}

// optional .google.protobuf.SourceContext source_context = 4;
bool Enum::has_source_context() const {
  return !_is_default_instance_ && source_context_ != NULL;
}
void Enum::clear_source_context() {
  if (GetArenaNoVirtual() == NULL && source_context_ != NULL) delete source_context_;
  source_context_ = NULL;
}
const ::google::protobuf::SourceContext& Enum::source_context() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Enum.source_context)
  return source_context_ != NULL ? *source_context_ : *default_instance_->source_context_;
}
::google::protobuf::SourceContext* Enum::mutable_source_context() {
  
  if (source_context_ == NULL) {
    source_context_ = new ::google::protobuf::SourceContext;
  }
  // @@protoc_insertion_point(field_mutable:google.protobuf.Enum.source_context)
  return source_context_;
}
::google::protobuf::SourceContext* Enum::release_source_context() {
  // @@protoc_insertion_point(field_release:google.protobuf.Enum.source_context)
  
  ::google::protobuf::SourceContext* temp = source_context_;
  source_context_ = NULL;
  return temp;
}
void Enum::set_allocated_source_context(::google::protobuf::SourceContext* source_context) {
  delete source_context_;
  source_context_ = source_context;
  if (source_context) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Enum.source_context)
}

// optional .google.protobuf.Syntax syntax = 5;
void Enum::clear_syntax() {
  syntax_ = 0;
}
 ::google::protobuf::Syntax Enum::syntax() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Enum.syntax)
  return static_cast< ::google::protobuf::Syntax >(syntax_);
}
 void Enum::set_syntax(::google::protobuf::Syntax value) {
  
  syntax_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.Enum.syntax)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EnumValue::kNameFieldNumber;
const int EnumValue::kNumberFieldNumber;
const int EnumValue::kOptionsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EnumValue::EnumValue()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.EnumValue)
}

void EnumValue::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

EnumValue::EnumValue(const EnumValue& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.EnumValue)
}

void EnumValue::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  number_ = 0;
}

EnumValue::~EnumValue() {
  // @@protoc_insertion_point(destructor:google.protobuf.EnumValue)
  SharedDtor();
}

void EnumValue::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void EnumValue::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* EnumValue::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EnumValue_descriptor_;
}

const EnumValue& EnumValue::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2ftype_2eproto();
  return *default_instance_;
}

EnumValue* EnumValue::default_instance_ = NULL;

EnumValue* EnumValue::New(::google::protobuf::Arena* arena) const {
  EnumValue* n = new EnumValue;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void EnumValue::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.EnumValue)
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  number_ = 0;
  options_.Clear();
}

bool EnumValue::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.EnumValue)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.protobuf.EnumValue.name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_number;
        break;
      }

      // optional int32 number = 2;
      case 2: {
        if (tag == 16) {
         parse_number:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &number_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_options;
        break;
      }

      // repeated .google.protobuf.Option options = 3;
      case 3: {
        if (tag == 26) {
         parse_options:
          DO_(input->IncrementRecursionDepth());
         parse_loop_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_options()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_loop_options;
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
  // @@protoc_insertion_point(parse_success:google.protobuf.EnumValue)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.EnumValue)
  return false;
#undef DO_
}

void EnumValue::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.EnumValue)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.EnumValue.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // optional int32 number = 2;
  if (this->number() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->number(), output);
  }

  // repeated .google.protobuf.Option options = 3;
  for (unsigned int i = 0, n = this->options_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->options(i), output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.EnumValue)
}

::google::protobuf::uint8* EnumValue::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.EnumValue)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.EnumValue.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // optional int32 number = 2;
  if (this->number() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->number(), target);
  }

  // repeated .google.protobuf.Option options = 3;
  for (unsigned int i = 0, n = this->options_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, this->options(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.EnumValue)
  return target;
}

int EnumValue::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.EnumValue)
  int total_size = 0;

  // optional string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // optional int32 number = 2;
  if (this->number() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->number());
  }

  // repeated .google.protobuf.Option options = 3;
  total_size += 1 * this->options_size();
  for (int i = 0; i < this->options_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->options(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EnumValue::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.EnumValue)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const EnumValue* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const EnumValue>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.EnumValue)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.EnumValue)
    MergeFrom(*source);
  }
}

void EnumValue::MergeFrom(const EnumValue& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.EnumValue)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  options_.MergeFrom(from.options_);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.number() != 0) {
    set_number(from.number());
  }
}

void EnumValue::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.EnumValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EnumValue::CopyFrom(const EnumValue& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.EnumValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EnumValue::IsInitialized() const {

  return true;
}

void EnumValue::Swap(EnumValue* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EnumValue::InternalSwap(EnumValue* other) {
  name_.Swap(&other->name_);
  std::swap(number_, other->number_);
  options_.UnsafeArenaSwap(&other->options_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata EnumValue::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = EnumValue_descriptor_;
  metadata.reflection = EnumValue_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// EnumValue

// optional string name = 1;
void EnumValue::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& EnumValue::name() const {
  // @@protoc_insertion_point(field_get:google.protobuf.EnumValue.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void EnumValue::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.EnumValue.name)
}
 void EnumValue::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.EnumValue.name)
}
 void EnumValue::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.EnumValue.name)
}
 ::std::string* EnumValue::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.EnumValue.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* EnumValue::release_name() {
  // @@protoc_insertion_point(field_release:google.protobuf.EnumValue.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void EnumValue::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.EnumValue.name)
}

// optional int32 number = 2;
void EnumValue::clear_number() {
  number_ = 0;
}
 ::google::protobuf::int32 EnumValue::number() const {
  // @@protoc_insertion_point(field_get:google.protobuf.EnumValue.number)
  return number_;
}
 void EnumValue::set_number(::google::protobuf::int32 value) {
  
  number_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.EnumValue.number)
}

// repeated .google.protobuf.Option options = 3;
int EnumValue::options_size() const {
  return options_.size();
}
void EnumValue::clear_options() {
  options_.Clear();
}
const ::google::protobuf::Option& EnumValue::options(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.EnumValue.options)
  return options_.Get(index);
}
::google::protobuf::Option* EnumValue::mutable_options(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.EnumValue.options)
  return options_.Mutable(index);
}
::google::protobuf::Option* EnumValue::add_options() {
  // @@protoc_insertion_point(field_add:google.protobuf.EnumValue.options)
  return options_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::Option >*
EnumValue::mutable_options() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.EnumValue.options)
  return &options_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Option >&
EnumValue::options() const {
  // @@protoc_insertion_point(field_list:google.protobuf.EnumValue.options)
  return options_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Option::kNameFieldNumber;
const int Option::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Option::Option()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.Option)
}

void Option::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  value_ = const_cast< ::google::protobuf::Any*>(&::google::protobuf::Any::default_instance());
}

Option::Option(const Option& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.Option)
}

void Option::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_ = NULL;
}

Option::~Option() {
  // @@protoc_insertion_point(destructor:google.protobuf.Option)
  SharedDtor();
}

void Option::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
    delete value_;
  }
}

void Option::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Option::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Option_descriptor_;
}

const Option& Option::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2ftype_2eproto();
  return *default_instance_;
}

Option* Option::default_instance_ = NULL;

Option* Option::New(::google::protobuf::Arena* arena) const {
  Option* n = new Option;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Option::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.Option)
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && value_ != NULL) delete value_;
  value_ = NULL;
}

bool Option::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.Option)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.protobuf.Option.name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_value;
        break;
      }

      // optional .google.protobuf.Any value = 2;
      case 2: {
        if (tag == 18) {
         parse_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_value()));
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
  // @@protoc_insertion_point(parse_success:google.protobuf.Option)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.Option)
  return false;
#undef DO_
}

void Option::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.Option)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Option.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // optional .google.protobuf.Any value = 2;
  if (this->has_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->value_, output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.Option)
}

::google::protobuf::uint8* Option::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.Option)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Option.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // optional .google.protobuf.Any value = 2;
  if (this->has_value()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->value_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.Option)
  return target;
}

int Option::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.Option)
  int total_size = 0;

  // optional string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // optional .google.protobuf.Any value = 2;
  if (this->has_value()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->value_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Option::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.Option)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Option* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Option>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.Option)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.Option)
    MergeFrom(*source);
  }
}

void Option::MergeFrom(const Option& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.Option)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.has_value()) {
    mutable_value()->::google::protobuf::Any::MergeFrom(from.value());
  }
}

void Option::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.Option)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Option::CopyFrom(const Option& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.Option)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Option::IsInitialized() const {

  return true;
}

void Option::Swap(Option* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Option::InternalSwap(Option* other) {
  name_.Swap(&other->name_);
  std::swap(value_, other->value_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Option::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Option_descriptor_;
  metadata.reflection = Option_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Option

// optional string name = 1;
void Option::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Option::name() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Option.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Option::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.Option.name)
}
 void Option::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.Option.name)
}
 void Option::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Option.name)
}
 ::std::string* Option::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.Option.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Option::release_name() {
  // @@protoc_insertion_point(field_release:google.protobuf.Option.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Option::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Option.name)
}

// optional .google.protobuf.Any value = 2;
bool Option::has_value() const {
  return !_is_default_instance_ && value_ != NULL;
}
void Option::clear_value() {
  if (GetArenaNoVirtual() == NULL && value_ != NULL) delete value_;
  value_ = NULL;
}
const ::google::protobuf::Any& Option::value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Option.value)
  return value_ != NULL ? *value_ : *default_instance_->value_;
}
::google::protobuf::Any* Option::mutable_value() {
  
  if (value_ == NULL) {
    value_ = new ::google::protobuf::Any;
  }
  // @@protoc_insertion_point(field_mutable:google.protobuf.Option.value)
  return value_;
}
::google::protobuf::Any* Option::release_value() {
  // @@protoc_insertion_point(field_release:google.protobuf.Option.value)
  
  ::google::protobuf::Any* temp = value_;
  value_ = NULL;
  return temp;
}
void Option::set_allocated_value(::google::protobuf::Any* value) {
  delete value_;
  value_ = value;
  if (value) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Option.value)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
