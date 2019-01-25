
#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include <google/protobuf/descriptor.pb.h>

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

const ::google::protobuf::Descriptor* FileDescriptorSet_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FileDescriptorSet_reflection_ = NULL;
const ::google::protobuf::Descriptor* FileDescriptorProto_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FileDescriptorProto_reflection_ = NULL;
const ::google::protobuf::Descriptor* DescriptorProto_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DescriptorProto_reflection_ = NULL;
const ::google::protobuf::Descriptor* DescriptorProto_ExtensionRange_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DescriptorProto_ExtensionRange_reflection_ = NULL;
const ::google::protobuf::Descriptor* DescriptorProto_ReservedRange_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DescriptorProto_ReservedRange_reflection_ = NULL;
const ::google::protobuf::Descriptor* FieldDescriptorProto_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FieldDescriptorProto_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* FieldDescriptorProto_Type_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* FieldDescriptorProto_Label_descriptor_ = NULL;
const ::google::protobuf::Descriptor* OneofDescriptorProto_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  OneofDescriptorProto_reflection_ = NULL;
const ::google::protobuf::Descriptor* EnumDescriptorProto_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  EnumDescriptorProto_reflection_ = NULL;
const ::google::protobuf::Descriptor* EnumValueDescriptorProto_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  EnumValueDescriptorProto_reflection_ = NULL;
const ::google::protobuf::Descriptor* ServiceDescriptorProto_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ServiceDescriptorProto_reflection_ = NULL;
const ::google::protobuf::Descriptor* MethodDescriptorProto_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MethodDescriptorProto_reflection_ = NULL;
const ::google::protobuf::Descriptor* FileOptions_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FileOptions_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* FileOptions_OptimizeMode_descriptor_ = NULL;
const ::google::protobuf::Descriptor* MessageOptions_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MessageOptions_reflection_ = NULL;
const ::google::protobuf::Descriptor* FieldOptions_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FieldOptions_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* FieldOptions_CType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* FieldOptions_JSType_descriptor_ = NULL;
const ::google::protobuf::Descriptor* OneofOptions_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  OneofOptions_reflection_ = NULL;
const ::google::protobuf::Descriptor* EnumOptions_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  EnumOptions_reflection_ = NULL;
const ::google::protobuf::Descriptor* EnumValueOptions_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  EnumValueOptions_reflection_ = NULL;
const ::google::protobuf::Descriptor* ServiceOptions_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ServiceOptions_reflection_ = NULL;
const ::google::protobuf::Descriptor* MethodOptions_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MethodOptions_reflection_ = NULL;
const ::google::protobuf::Descriptor* UninterpretedOption_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  UninterpretedOption_reflection_ = NULL;
const ::google::protobuf::Descriptor* UninterpretedOption_NamePart_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  UninterpretedOption_NamePart_reflection_ = NULL;
const ::google::protobuf::Descriptor* SourceCodeInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SourceCodeInfo_reflection_ = NULL;
const ::google::protobuf::Descriptor* SourceCodeInfo_Location_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SourceCodeInfo_Location_reflection_ = NULL;
const ::google::protobuf::Descriptor* GeneratedCodeInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GeneratedCodeInfo_reflection_ = NULL;
const ::google::protobuf::Descriptor* GeneratedCodeInfo_Annotation_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GeneratedCodeInfo_Annotation_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_google_2fprotobuf_2fdescriptor_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_google_2fprotobuf_2fdescriptor_2eproto() {
  protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "google/protobuf/descriptor.proto");
  GOOGLE_CHECK(file != NULL);
  FileDescriptorSet_descriptor_ = file->message_type(0);
  static const int FileDescriptorSet_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileDescriptorSet, file_),
  };
  FileDescriptorSet_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      FileDescriptorSet_descriptor_,
      FileDescriptorSet::default_instance_,
      FileDescriptorSet_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileDescriptorSet, _has_bits_[0]),
      -1,
      -1,
      sizeof(FileDescriptorSet),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileDescriptorSet, _internal_metadata_),
      -1);
  FileDescriptorProto_descriptor_ = file->message_type(1);
  static const int FileDescriptorProto_offsets_[12] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileDescriptorProto, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileDescriptorProto, package_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileDescriptorProto, dependency_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileDescriptorProto, public_dependency_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileDescriptorProto, weak_dependency_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileDescriptorProto, message_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileDescriptorProto, enum_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileDescriptorProto, service_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileDescriptorProto, extension_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileDescriptorProto, options_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileDescriptorProto, source_code_info_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileDescriptorProto, syntax_),
  };
  FileDescriptorProto_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      FileDescriptorProto_descriptor_,
      FileDescriptorProto::default_instance_,
      FileDescriptorProto_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileDescriptorProto, _has_bits_[0]),
      -1,
      -1,
      sizeof(FileDescriptorProto),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileDescriptorProto, _internal_metadata_),
      -1);
  DescriptorProto_descriptor_ = file->message_type(2);
  static const int DescriptorProto_offsets_[10] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DescriptorProto, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DescriptorProto, field_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DescriptorProto, extension_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DescriptorProto, nested_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DescriptorProto, enum_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DescriptorProto, extension_range_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DescriptorProto, oneof_decl_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DescriptorProto, options_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DescriptorProto, reserved_range_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DescriptorProto, reserved_name_),
  };
  DescriptorProto_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      DescriptorProto_descriptor_,
      DescriptorProto::default_instance_,
      DescriptorProto_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DescriptorProto, _has_bits_[0]),
      -1,
      -1,
      sizeof(DescriptorProto),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DescriptorProto, _internal_metadata_),
      -1);
  DescriptorProto_ExtensionRange_descriptor_ = DescriptorProto_descriptor_->nested_type(0);
  static const int DescriptorProto_ExtensionRange_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DescriptorProto_ExtensionRange, start_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DescriptorProto_ExtensionRange, end_),
  };
  DescriptorProto_ExtensionRange_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      DescriptorProto_ExtensionRange_descriptor_,
      DescriptorProto_ExtensionRange::default_instance_,
      DescriptorProto_ExtensionRange_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DescriptorProto_ExtensionRange, _has_bits_[0]),
      -1,
      -1,
      sizeof(DescriptorProto_ExtensionRange),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DescriptorProto_ExtensionRange, _internal_metadata_),
      -1);
  DescriptorProto_ReservedRange_descriptor_ = DescriptorProto_descriptor_->nested_type(1);
  static const int DescriptorProto_ReservedRange_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DescriptorProto_ReservedRange, start_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DescriptorProto_ReservedRange, end_),
  };
  DescriptorProto_ReservedRange_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      DescriptorProto_ReservedRange_descriptor_,
      DescriptorProto_ReservedRange::default_instance_,
      DescriptorProto_ReservedRange_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DescriptorProto_ReservedRange, _has_bits_[0]),
      -1,
      -1,
      sizeof(DescriptorProto_ReservedRange),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DescriptorProto_ReservedRange, _internal_metadata_),
      -1);
  FieldDescriptorProto_descriptor_ = file->message_type(3);
  static const int FieldDescriptorProto_offsets_[10] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FieldDescriptorProto, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FieldDescriptorProto, number_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FieldDescriptorProto, label_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FieldDescriptorProto, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FieldDescriptorProto, type_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FieldDescriptorProto, extendee_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FieldDescriptorProto, default_value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FieldDescriptorProto, oneof_index_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FieldDescriptorProto, json_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FieldDescriptorProto, options_),
  };
  FieldDescriptorProto_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      FieldDescriptorProto_descriptor_,
      FieldDescriptorProto::default_instance_,
      FieldDescriptorProto_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FieldDescriptorProto, _has_bits_[0]),
      -1,
      -1,
      sizeof(FieldDescriptorProto),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FieldDescriptorProto, _internal_metadata_),
      -1);
  FieldDescriptorProto_Type_descriptor_ = FieldDescriptorProto_descriptor_->enum_type(0);
  FieldDescriptorProto_Label_descriptor_ = FieldDescriptorProto_descriptor_->enum_type(1);
  OneofDescriptorProto_descriptor_ = file->message_type(4);
  static const int OneofDescriptorProto_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OneofDescriptorProto, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OneofDescriptorProto, options_),
  };
  OneofDescriptorProto_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      OneofDescriptorProto_descriptor_,
      OneofDescriptorProto::default_instance_,
      OneofDescriptorProto_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OneofDescriptorProto, _has_bits_[0]),
      -1,
      -1,
      sizeof(OneofDescriptorProto),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OneofDescriptorProto, _internal_metadata_),
      -1);
  EnumDescriptorProto_descriptor_ = file->message_type(5);
  static const int EnumDescriptorProto_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EnumDescriptorProto, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EnumDescriptorProto, value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EnumDescriptorProto, options_),
  };
  EnumDescriptorProto_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      EnumDescriptorProto_descriptor_,
      EnumDescriptorProto::default_instance_,
      EnumDescriptorProto_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EnumDescriptorProto, _has_bits_[0]),
      -1,
      -1,
      sizeof(EnumDescriptorProto),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EnumDescriptorProto, _internal_metadata_),
      -1);
  EnumValueDescriptorProto_descriptor_ = file->message_type(6);
  static const int EnumValueDescriptorProto_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EnumValueDescriptorProto, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EnumValueDescriptorProto, number_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EnumValueDescriptorProto, options_),
  };
  EnumValueDescriptorProto_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      EnumValueDescriptorProto_descriptor_,
      EnumValueDescriptorProto::default_instance_,
      EnumValueDescriptorProto_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EnumValueDescriptorProto, _has_bits_[0]),
      -1,
      -1,
      sizeof(EnumValueDescriptorProto),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EnumValueDescriptorProto, _internal_metadata_),
      -1);
  ServiceDescriptorProto_descriptor_ = file->message_type(7);
  static const int ServiceDescriptorProto_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServiceDescriptorProto, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServiceDescriptorProto, method_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServiceDescriptorProto, options_),
  };
  ServiceDescriptorProto_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ServiceDescriptorProto_descriptor_,
      ServiceDescriptorProto::default_instance_,
      ServiceDescriptorProto_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServiceDescriptorProto, _has_bits_[0]),
      -1,
      -1,
      sizeof(ServiceDescriptorProto),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServiceDescriptorProto, _internal_metadata_),
      -1);
  MethodDescriptorProto_descriptor_ = file->message_type(8);
  static const int MethodDescriptorProto_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MethodDescriptorProto, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MethodDescriptorProto, input_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MethodDescriptorProto, output_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MethodDescriptorProto, options_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MethodDescriptorProto, client_streaming_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MethodDescriptorProto, server_streaming_),
  };
  MethodDescriptorProto_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      MethodDescriptorProto_descriptor_,
      MethodDescriptorProto::default_instance_,
      MethodDescriptorProto_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MethodDescriptorProto, _has_bits_[0]),
      -1,
      -1,
      sizeof(MethodDescriptorProto),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MethodDescriptorProto, _internal_metadata_),
      -1);
  FileOptions_descriptor_ = file->message_type(9);
  static const int FileOptions_offsets_[15] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileOptions, java_package_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileOptions, java_outer_classname_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileOptions, java_multiple_files_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileOptions, java_generate_equals_and_hash_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileOptions, java_string_check_utf8_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileOptions, optimize_for_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileOptions, go_package_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileOptions, cc_generic_services_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileOptions, java_generic_services_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileOptions, py_generic_services_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileOptions, deprecated_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileOptions, cc_enable_arenas_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileOptions, objc_class_prefix_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileOptions, csharp_namespace_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileOptions, uninterpreted_option_),
  };
  FileOptions_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      FileOptions_descriptor_,
      FileOptions::default_instance_,
      FileOptions_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileOptions, _has_bits_[0]),
      -1,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileOptions, _extensions_),
      sizeof(FileOptions),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileOptions, _internal_metadata_),
      -1);
  FileOptions_OptimizeMode_descriptor_ = FileOptions_descriptor_->enum_type(0);
  MessageOptions_descriptor_ = file->message_type(10);
  static const int MessageOptions_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageOptions, message_set_wire_format_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageOptions, no_standard_descriptor_accessor_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageOptions, deprecated_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageOptions, map_entry_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageOptions, uninterpreted_option_),
  };
  MessageOptions_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      MessageOptions_descriptor_,
      MessageOptions::default_instance_,
      MessageOptions_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageOptions, _has_bits_[0]),
      -1,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageOptions, _extensions_),
      sizeof(MessageOptions),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageOptions, _internal_metadata_),
      -1);
  FieldOptions_descriptor_ = file->message_type(11);
  static const int FieldOptions_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FieldOptions, ctype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FieldOptions, packed_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FieldOptions, jstype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FieldOptions, lazy_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FieldOptions, deprecated_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FieldOptions, weak_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FieldOptions, uninterpreted_option_),
  };
  FieldOptions_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      FieldOptions_descriptor_,
      FieldOptions::default_instance_,
      FieldOptions_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FieldOptions, _has_bits_[0]),
      -1,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FieldOptions, _extensions_),
      sizeof(FieldOptions),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FieldOptions, _internal_metadata_),
      -1);
  FieldOptions_CType_descriptor_ = FieldOptions_descriptor_->enum_type(0);
  FieldOptions_JSType_descriptor_ = FieldOptions_descriptor_->enum_type(1);
  OneofOptions_descriptor_ = file->message_type(12);
  static const int OneofOptions_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OneofOptions, uninterpreted_option_),
  };
  OneofOptions_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      OneofOptions_descriptor_,
      OneofOptions::default_instance_,
      OneofOptions_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OneofOptions, _has_bits_[0]),
      -1,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OneofOptions, _extensions_),
      sizeof(OneofOptions),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OneofOptions, _internal_metadata_),
      -1);
  EnumOptions_descriptor_ = file->message_type(13);
  static const int EnumOptions_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EnumOptions, allow_alias_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EnumOptions, deprecated_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EnumOptions, uninterpreted_option_),
  };
  EnumOptions_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      EnumOptions_descriptor_,
      EnumOptions::default_instance_,
      EnumOptions_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EnumOptions, _has_bits_[0]),
      -1,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EnumOptions, _extensions_),
      sizeof(EnumOptions),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EnumOptions, _internal_metadata_),
      -1);
  EnumValueOptions_descriptor_ = file->message_type(14);
  static const int EnumValueOptions_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EnumValueOptions, deprecated_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EnumValueOptions, uninterpreted_option_),
  };
  EnumValueOptions_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      EnumValueOptions_descriptor_,
      EnumValueOptions::default_instance_,
      EnumValueOptions_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EnumValueOptions, _has_bits_[0]),
      -1,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EnumValueOptions, _extensions_),
      sizeof(EnumValueOptions),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EnumValueOptions, _internal_metadata_),
      -1);
  ServiceOptions_descriptor_ = file->message_type(15);
  static const int ServiceOptions_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServiceOptions, deprecated_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServiceOptions, uninterpreted_option_),
  };
  ServiceOptions_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ServiceOptions_descriptor_,
      ServiceOptions::default_instance_,
      ServiceOptions_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServiceOptions, _has_bits_[0]),
      -1,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServiceOptions, _extensions_),
      sizeof(ServiceOptions),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServiceOptions, _internal_metadata_),
      -1);
  MethodOptions_descriptor_ = file->message_type(16);
  static const int MethodOptions_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MethodOptions, deprecated_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MethodOptions, uninterpreted_option_),
  };
  MethodOptions_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      MethodOptions_descriptor_,
      MethodOptions::default_instance_,
      MethodOptions_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MethodOptions, _has_bits_[0]),
      -1,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MethodOptions, _extensions_),
      sizeof(MethodOptions),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MethodOptions, _internal_metadata_),
      -1);
  UninterpretedOption_descriptor_ = file->message_type(17);
  static const int UninterpretedOption_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UninterpretedOption, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UninterpretedOption, identifier_value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UninterpretedOption, positive_int_value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UninterpretedOption, negative_int_value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UninterpretedOption, double_value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UninterpretedOption, string_value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UninterpretedOption, aggregate_value_),
  };
  UninterpretedOption_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      UninterpretedOption_descriptor_,
      UninterpretedOption::default_instance_,
      UninterpretedOption_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UninterpretedOption, _has_bits_[0]),
      -1,
      -1,
      sizeof(UninterpretedOption),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UninterpretedOption, _internal_metadata_),
      -1);
  UninterpretedOption_NamePart_descriptor_ = UninterpretedOption_descriptor_->nested_type(0);
  static const int UninterpretedOption_NamePart_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UninterpretedOption_NamePart, name_part_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UninterpretedOption_NamePart, is_extension_),
  };
  UninterpretedOption_NamePart_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      UninterpretedOption_NamePart_descriptor_,
      UninterpretedOption_NamePart::default_instance_,
      UninterpretedOption_NamePart_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UninterpretedOption_NamePart, _has_bits_[0]),
      -1,
      -1,
      sizeof(UninterpretedOption_NamePart),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UninterpretedOption_NamePart, _internal_metadata_),
      -1);
  SourceCodeInfo_descriptor_ = file->message_type(18);
  static const int SourceCodeInfo_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SourceCodeInfo, location_),
  };
  SourceCodeInfo_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      SourceCodeInfo_descriptor_,
      SourceCodeInfo::default_instance_,
      SourceCodeInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SourceCodeInfo, _has_bits_[0]),
      -1,
      -1,
      sizeof(SourceCodeInfo),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SourceCodeInfo, _internal_metadata_),
      -1);
  SourceCodeInfo_Location_descriptor_ = SourceCodeInfo_descriptor_->nested_type(0);
  static const int SourceCodeInfo_Location_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SourceCodeInfo_Location, path_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SourceCodeInfo_Location, span_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SourceCodeInfo_Location, leading_comments_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SourceCodeInfo_Location, trailing_comments_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SourceCodeInfo_Location, leading_detached_comments_),
  };
  SourceCodeInfo_Location_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      SourceCodeInfo_Location_descriptor_,
      SourceCodeInfo_Location::default_instance_,
      SourceCodeInfo_Location_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SourceCodeInfo_Location, _has_bits_[0]),
      -1,
      -1,
      sizeof(SourceCodeInfo_Location),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SourceCodeInfo_Location, _internal_metadata_),
      -1);
  GeneratedCodeInfo_descriptor_ = file->message_type(19);
  static const int GeneratedCodeInfo_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GeneratedCodeInfo, annotation_),
  };
  GeneratedCodeInfo_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      GeneratedCodeInfo_descriptor_,
      GeneratedCodeInfo::default_instance_,
      GeneratedCodeInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GeneratedCodeInfo, _has_bits_[0]),
      -1,
      -1,
      sizeof(GeneratedCodeInfo),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GeneratedCodeInfo, _internal_metadata_),
      -1);
  GeneratedCodeInfo_Annotation_descriptor_ = GeneratedCodeInfo_descriptor_->nested_type(0);
  static const int GeneratedCodeInfo_Annotation_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GeneratedCodeInfo_Annotation, path_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GeneratedCodeInfo_Annotation, source_file_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GeneratedCodeInfo_Annotation, begin_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GeneratedCodeInfo_Annotation, end_),
  };
  GeneratedCodeInfo_Annotation_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      GeneratedCodeInfo_Annotation_descriptor_,
      GeneratedCodeInfo_Annotation::default_instance_,
      GeneratedCodeInfo_Annotation_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GeneratedCodeInfo_Annotation, _has_bits_[0]),
      -1,
      -1,
      sizeof(GeneratedCodeInfo_Annotation),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GeneratedCodeInfo_Annotation, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_google_2fprotobuf_2fdescriptor_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      FileDescriptorSet_descriptor_, &FileDescriptorSet::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      FileDescriptorProto_descriptor_, &FileDescriptorProto::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      DescriptorProto_descriptor_, &DescriptorProto::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      DescriptorProto_ExtensionRange_descriptor_, &DescriptorProto_ExtensionRange::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      DescriptorProto_ReservedRange_descriptor_, &DescriptorProto_ReservedRange::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      FieldDescriptorProto_descriptor_, &FieldDescriptorProto::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      OneofDescriptorProto_descriptor_, &OneofDescriptorProto::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      EnumDescriptorProto_descriptor_, &EnumDescriptorProto::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      EnumValueDescriptorProto_descriptor_, &EnumValueDescriptorProto::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ServiceDescriptorProto_descriptor_, &ServiceDescriptorProto::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      MethodDescriptorProto_descriptor_, &MethodDescriptorProto::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      FileOptions_descriptor_, &FileOptions::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      MessageOptions_descriptor_, &MessageOptions::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      FieldOptions_descriptor_, &FieldOptions::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      OneofOptions_descriptor_, &OneofOptions::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      EnumOptions_descriptor_, &EnumOptions::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      EnumValueOptions_descriptor_, &EnumValueOptions::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ServiceOptions_descriptor_, &ServiceOptions::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      MethodOptions_descriptor_, &MethodOptions::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      UninterpretedOption_descriptor_, &UninterpretedOption::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      UninterpretedOption_NamePart_descriptor_, &UninterpretedOption_NamePart::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      SourceCodeInfo_descriptor_, &SourceCodeInfo::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      SourceCodeInfo_Location_descriptor_, &SourceCodeInfo_Location::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      GeneratedCodeInfo_descriptor_, &GeneratedCodeInfo::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      GeneratedCodeInfo_Annotation_descriptor_, &GeneratedCodeInfo_Annotation::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_google_2fprotobuf_2fdescriptor_2eproto() {
  delete FileDescriptorSet::default_instance_;
  delete FileDescriptorSet_reflection_;
  delete FileDescriptorProto::default_instance_;
  delete FileDescriptorProto_reflection_;
  delete DescriptorProto::default_instance_;
  delete DescriptorProto_reflection_;
  delete DescriptorProto_ExtensionRange::default_instance_;
  delete DescriptorProto_ExtensionRange_reflection_;
  delete DescriptorProto_ReservedRange::default_instance_;
  delete DescriptorProto_ReservedRange_reflection_;
  delete FieldDescriptorProto::default_instance_;
  delete FieldDescriptorProto_reflection_;
  delete OneofDescriptorProto::default_instance_;
  delete OneofDescriptorProto_reflection_;
  delete EnumDescriptorProto::default_instance_;
  delete EnumDescriptorProto_reflection_;
  delete EnumValueDescriptorProto::default_instance_;
  delete EnumValueDescriptorProto_reflection_;
  delete ServiceDescriptorProto::default_instance_;
  delete ServiceDescriptorProto_reflection_;
  delete MethodDescriptorProto::default_instance_;
  delete MethodDescriptorProto_reflection_;
  delete FileOptions::default_instance_;
  delete FileOptions_reflection_;
  delete MessageOptions::default_instance_;
  delete MessageOptions_reflection_;
  delete FieldOptions::default_instance_;
  delete FieldOptions_reflection_;
  delete OneofOptions::default_instance_;
  delete OneofOptions_reflection_;
  delete EnumOptions::default_instance_;
  delete EnumOptions_reflection_;
  delete EnumValueOptions::default_instance_;
  delete EnumValueOptions_reflection_;
  delete ServiceOptions::default_instance_;
  delete ServiceOptions_reflection_;
  delete MethodOptions::default_instance_;
  delete MethodOptions_reflection_;
  delete UninterpretedOption::default_instance_;
  delete UninterpretedOption_reflection_;
  delete UninterpretedOption_NamePart::default_instance_;
  delete UninterpretedOption_NamePart_reflection_;
  delete SourceCodeInfo::default_instance_;
  delete SourceCodeInfo_reflection_;
  delete SourceCodeInfo_Location::default_instance_;
  delete SourceCodeInfo_Location_reflection_;
  delete GeneratedCodeInfo::default_instance_;
  delete GeneratedCodeInfo_reflection_;
  delete GeneratedCodeInfo_Annotation::default_instance_;
  delete GeneratedCodeInfo_Annotation_reflection_;
}

void protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n google/protobuf/descriptor.proto\022\017goog"
    "le.protobuf\"G\n\021FileDescriptorSet\0222\n\004file"
    "\030\001 \003(\0132$.google.protobuf.FileDescriptorP"
    "roto\"\333\003\n\023FileDescriptorProto\022\014\n\004name\030\001 \001"
    "(\t\022\017\n\007package\030\002 \001(\t\022\022\n\ndependency\030\003 \003(\t\022"
    "\031\n\021public_dependency\030\n \003(\005\022\027\n\017weak_depen"
    "dency\030\013 \003(\005\0226\n\014message_type\030\004 \003(\0132 .goog"
    "le.protobuf.DescriptorProto\0227\n\tenum_type"
    "\030\005 \003(\0132$.google.protobuf.EnumDescriptorP"
    "roto\0228\n\007service\030\006 \003(\0132\'.google.protobuf."
    "ServiceDescriptorProto\0228\n\textension\030\007 \003("
    "\0132%.google.protobuf.FieldDescriptorProto"
    "\022-\n\007options\030\010 \001(\0132\034.google.protobuf.File"
    "Options\0229\n\020source_code_info\030\t \001(\0132\037.goog"
    "le.protobuf.SourceCodeInfo\022\016\n\006syntax\030\014 \001"
    "(\t\"\360\004\n\017DescriptorProto\022\014\n\004name\030\001 \001(\t\0224\n\005"
    "field\030\002 \003(\0132%.google.protobuf.FieldDescr"
    "iptorProto\0228\n\textension\030\006 \003(\0132%.google.p"
    "rotobuf.FieldDescriptorProto\0225\n\013nested_t"
    "ype\030\003 \003(\0132 .google.protobuf.DescriptorPr"
    "oto\0227\n\tenum_type\030\004 \003(\0132$.google.protobuf"
    ".EnumDescriptorProto\022H\n\017extension_range\030"
    "\005 \003(\0132/.google.protobuf.DescriptorProto."
    "ExtensionRange\0229\n\noneof_decl\030\010 \003(\0132%.goo"
    "gle.protobuf.OneofDescriptorProto\0220\n\007opt"
    "ions\030\007 \001(\0132\037.google.protobuf.MessageOpti"
    "ons\022F\n\016reserved_range\030\t \003(\0132..google.pro"
    "tobuf.DescriptorProto.ReservedRange\022\025\n\rr"
    "eserved_name\030\n \003(\t\032,\n\016ExtensionRange\022\r\n\005"
    "start\030\001 \001(\005\022\013\n\003end\030\002 \001(\005\032+\n\rReservedRang"
    "e\022\r\n\005start\030\001 \001(\005\022\013\n\003end\030\002 \001(\005\"\274\005\n\024FieldD"
    "escriptorProto\022\014\n\004name\030\001 \001(\t\022\016\n\006number\030\003"
    " \001(\005\022:\n\005label\030\004 \001(\0162+.google.protobuf.Fi"
    "eldDescriptorProto.Label\0228\n\004type\030\005 \001(\0162*"
    ".google.protobuf.FieldDescriptorProto.Ty"
    "pe\022\021\n\ttype_name\030\006 \001(\t\022\020\n\010extendee\030\002 \001(\t\022"
    "\025\n\rdefault_value\030\007 \001(\t\022\023\n\013oneof_index\030\t "
    "\001(\005\022\021\n\tjson_name\030\n \001(\t\022.\n\007options\030\010 \001(\0132"
    "\035.google.protobuf.FieldOptions\"\266\002\n\004Type\022"
    "\017\n\013TYPE_DOUBLE\020\001\022\016\n\nTYPE_FLOAT\020\002\022\016\n\nTYPE"
    "_INT64\020\003\022\017\n\013TYPE_UINT64\020\004\022\016\n\nTYPE_INT32\020"
    "\005\022\020\n\014TYPE_FIXED64\020\006\022\020\n\014TYPE_FIXED32\020\007\022\r\n"
    "\tTYPE_BOOL\020\010\022\017\n\013TYPE_STRING\020\t\022\016\n\nTYPE_GR"
    "OUP\020\n\022\020\n\014TYPE_MESSAGE\020\013\022\016\n\nTYPE_BYTES\020\014\022"
    "\017\n\013TYPE_UINT32\020\r\022\r\n\tTYPE_ENUM\020\016\022\021\n\rTYPE_"
    "SFIXED32\020\017\022\021\n\rTYPE_SFIXED64\020\020\022\017\n\013TYPE_SI"
    "NT32\020\021\022\017\n\013TYPE_SINT64\020\022\"C\n\005Label\022\022\n\016LABE"
    "L_OPTIONAL\020\001\022\022\n\016LABEL_REQUIRED\020\002\022\022\n\016LABE"
    "L_REPEATED\020\003\"T\n\024OneofDescriptorProto\022\014\n\004"
    "name\030\001 \001(\t\022.\n\007options\030\002 \001(\0132\035.google.pro"
    "tobuf.OneofOptions\"\214\001\n\023EnumDescriptorPro"
    "to\022\014\n\004name\030\001 \001(\t\0228\n\005value\030\002 \003(\0132).google"
    ".protobuf.EnumValueDescriptorProto\022-\n\007op"
    "tions\030\003 \001(\0132\034.google.protobuf.EnumOption"
    "s\"l\n\030EnumValueDescriptorProto\022\014\n\004name\030\001 "
    "\001(\t\022\016\n\006number\030\002 \001(\005\0222\n\007options\030\003 \001(\0132!.g"
    "oogle.protobuf.EnumValueOptions\"\220\001\n\026Serv"
    "iceDescriptorProto\022\014\n\004name\030\001 \001(\t\0226\n\006meth"
    "od\030\002 \003(\0132&.google.protobuf.MethodDescrip"
    "torProto\0220\n\007options\030\003 \001(\0132\037.google.proto"
    "buf.ServiceOptions\"\301\001\n\025MethodDescriptorP"
    "roto\022\014\n\004name\030\001 \001(\t\022\022\n\ninput_type\030\002 \001(\t\022\023"
    "\n\013output_type\030\003 \001(\t\022/\n\007options\030\004 \001(\0132\036.g"
    "oogle.protobuf.MethodOptions\022\037\n\020client_s"
    "treaming\030\005 \001(\010:\005false\022\037\n\020server_streamin"
    "g\030\006 \001(\010:\005false\"\207\005\n\013FileOptions\022\024\n\014java_p"
    "ackage\030\001 \001(\t\022\034\n\024java_outer_classname\030\010 \001"
    "(\t\022\"\n\023java_multiple_files\030\n \001(\010:\005false\022,"
    "\n\035java_generate_equals_and_hash\030\024 \001(\010:\005f"
    "alse\022%\n\026java_string_check_utf8\030\033 \001(\010:\005fa"
    "lse\022F\n\014optimize_for\030\t \001(\0162).google.proto"
    "buf.FileOptions.OptimizeMode:\005SPEED\022\022\n\ng"
    "o_package\030\013 \001(\t\022\"\n\023cc_generic_services\030\020"
    " \001(\010:\005false\022$\n\025java_generic_services\030\021 \001"
    "(\010:\005false\022\"\n\023py_generic_services\030\022 \001(\010:\005"
    "false\022\031\n\ndeprecated\030\027 \001(\010:\005false\022\037\n\020cc_e"
    "nable_arenas\030\037 \001(\010:\005false\022\031\n\021objc_class_"
    "prefix\030$ \001(\t\022\030\n\020csharp_namespace\030% \001(\t\022C"
    "\n\024uninterpreted_option\030\347\007 \003(\0132$.google.p"
    "rotobuf.UninterpretedOption\":\n\014OptimizeM"
    "ode\022\t\n\005SPEED\020\001\022\r\n\tCODE_SIZE\020\002\022\020\n\014LITE_RU"
    "NTIME\020\003*\t\010\350\007\020\200\200\200\200\002J\004\010&\020\'\"\346\001\n\016MessageOpti"
    "ons\022&\n\027message_set_wire_format\030\001 \001(\010:\005fa"
    "lse\022.\n\037no_standard_descriptor_accessor\030\002"
    " \001(\010:\005false\022\031\n\ndeprecated\030\003 \001(\010:\005false\022\021"
    "\n\tmap_entry\030\007 \001(\010\022C\n\024uninterpreted_optio"
    "n\030\347\007 \003(\0132$.google.protobuf.Uninterpreted"
    "Option*\t\010\350\007\020\200\200\200\200\002\"\230\003\n\014FieldOptions\022:\n\005ct"
    "ype\030\001 \001(\0162#.google.protobuf.FieldOptions"
    ".CType:\006STRING\022\016\n\006packed\030\002 \001(\010\022\?\n\006jstype"
    "\030\006 \001(\0162$.google.protobuf.FieldOptions.JS"
    "Type:\tJS_NORMAL\022\023\n\004lazy\030\005 \001(\010:\005false\022\031\n\n"
    "deprecated\030\003 \001(\010:\005false\022\023\n\004weak\030\n \001(\010:\005f"
    "alse\022C\n\024uninterpreted_option\030\347\007 \003(\0132$.go"
    "ogle.protobuf.UninterpretedOption\"/\n\005CTy"
    "pe\022\n\n\006STRING\020\000\022\010\n\004CORD\020\001\022\020\n\014STRING_PIECE"
    "\020\002\"5\n\006JSType\022\r\n\tJS_NORMAL\020\000\022\r\n\tJS_STRING"
    "\020\001\022\r\n\tJS_NUMBER\020\002*\t\010\350\007\020\200\200\200\200\002\"^\n\014OneofOpt"
    "ions\022C\n\024uninterpreted_option\030\347\007 \003(\0132$.go"
    "ogle.protobuf.UninterpretedOption*\t\010\350\007\020\200"
    "\200\200\200\002\"\215\001\n\013EnumOptions\022\023\n\013allow_alias\030\002 \001("
    "\010\022\031\n\ndeprecated\030\003 \001(\010:\005false\022C\n\024uninterp"
    "reted_option\030\347\007 \003(\0132$.google.protobuf.Un"
    "interpretedOption*\t\010\350\007\020\200\200\200\200\002\"}\n\020EnumValu"
    "eOptions\022\031\n\ndeprecated\030\001 \001(\010:\005false\022C\n\024u"
    "ninterpreted_option\030\347\007 \003(\0132$.google.prot"
    "obuf.UninterpretedOption*\t\010\350\007\020\200\200\200\200\002\"{\n\016S"
    "erviceOptions\022\031\n\ndeprecated\030! \001(\010:\005false"
    "\022C\n\024uninterpreted_option\030\347\007 \003(\0132$.google"
    ".protobuf.UninterpretedOption*\t\010\350\007\020\200\200\200\200\002"
    "\"z\n\rMethodOptions\022\031\n\ndeprecated\030! \001(\010:\005f"
    "alse\022C\n\024uninterpreted_option\030\347\007 \003(\0132$.go"
    "ogle.protobuf.UninterpretedOption*\t\010\350\007\020\200"
    "\200\200\200\002\"\236\002\n\023UninterpretedOption\022;\n\004name\030\002 \003"
    "(\0132-.google.protobuf.UninterpretedOption"
    ".NamePart\022\030\n\020identifier_value\030\003 \001(\t\022\032\n\022p"
    "ositive_int_value\030\004 \001(\004\022\032\n\022negative_int_"
    "value\030\005 \001(\003\022\024\n\014double_value\030\006 \001(\001\022\024\n\014str"
    "ing_value\030\007 \001(\014\022\027\n\017aggregate_value\030\010 \001(\t"
    "\0323\n\010NamePart\022\021\n\tname_part\030\001 \002(\t\022\024\n\014is_ex"
    "tension\030\002 \002(\010\"\325\001\n\016SourceCodeInfo\022:\n\010loca"
    "tion\030\001 \003(\0132(.google.protobuf.SourceCodeI"
    "nfo.Location\032\206\001\n\010Location\022\020\n\004path\030\001 \003(\005B"
    "\002\020\001\022\020\n\004span\030\002 \003(\005B\002\020\001\022\030\n\020leading_comment"
    "s\030\003 \001(\t\022\031\n\021trailing_comments\030\004 \001(\t\022!\n\031le"
    "ading_detached_comments\030\006 \003(\t\"\247\001\n\021Genera"
    "tedCodeInfo\022A\n\nannotation\030\001 \003(\0132-.google"
    ".protobuf.GeneratedCodeInfo.Annotation\032O"
    "\n\nAnnotation\022\020\n\004path\030\001 \003(\005B\002\020\001\022\023\n\013source"
    "_file\030\002 \001(\t\022\r\n\005begin\030\003 \001(\005\022\013\n\003end\030\004 \001(\005B"
    "[\n\023com.google.protobufB\020DescriptorProtos"
    "H\001Z\ndescriptor\240\001\001\242\002\003GPB\252\002\032Google.Protobu"
    "f.Reflection", 5292);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/descriptor.proto", &protobuf_RegisterTypes);
  FileDescriptorSet::default_instance_ = new FileDescriptorSet();
  FileDescriptorProto::default_instance_ = new FileDescriptorProto();
  DescriptorProto::default_instance_ = new DescriptorProto();
  DescriptorProto_ExtensionRange::default_instance_ = new DescriptorProto_ExtensionRange();
  DescriptorProto_ReservedRange::default_instance_ = new DescriptorProto_ReservedRange();
  FieldDescriptorProto::default_instance_ = new FieldDescriptorProto();
  OneofDescriptorProto::default_instance_ = new OneofDescriptorProto();
  EnumDescriptorProto::default_instance_ = new EnumDescriptorProto();
  EnumValueDescriptorProto::default_instance_ = new EnumValueDescriptorProto();
  ServiceDescriptorProto::default_instance_ = new ServiceDescriptorProto();
  MethodDescriptorProto::default_instance_ = new MethodDescriptorProto();
  FileOptions::default_instance_ = new FileOptions();
  MessageOptions::default_instance_ = new MessageOptions();
  FieldOptions::default_instance_ = new FieldOptions();
  OneofOptions::default_instance_ = new OneofOptions();
  EnumOptions::default_instance_ = new EnumOptions();
  EnumValueOptions::default_instance_ = new EnumValueOptions();
  ServiceOptions::default_instance_ = new ServiceOptions();
  MethodOptions::default_instance_ = new MethodOptions();
  UninterpretedOption::default_instance_ = new UninterpretedOption();
  UninterpretedOption_NamePart::default_instance_ = new UninterpretedOption_NamePart();
  SourceCodeInfo::default_instance_ = new SourceCodeInfo();
  SourceCodeInfo_Location::default_instance_ = new SourceCodeInfo_Location();
  GeneratedCodeInfo::default_instance_ = new GeneratedCodeInfo();
  GeneratedCodeInfo_Annotation::default_instance_ = new GeneratedCodeInfo_Annotation();
  FileDescriptorSet::default_instance_->InitAsDefaultInstance();
  FileDescriptorProto::default_instance_->InitAsDefaultInstance();
  DescriptorProto::default_instance_->InitAsDefaultInstance();
  DescriptorProto_ExtensionRange::default_instance_->InitAsDefaultInstance();
  DescriptorProto_ReservedRange::default_instance_->InitAsDefaultInstance();
  FieldDescriptorProto::default_instance_->InitAsDefaultInstance();
  OneofDescriptorProto::default_instance_->InitAsDefaultInstance();
  EnumDescriptorProto::default_instance_->InitAsDefaultInstance();
  EnumValueDescriptorProto::default_instance_->InitAsDefaultInstance();
  ServiceDescriptorProto::default_instance_->InitAsDefaultInstance();
  MethodDescriptorProto::default_instance_->InitAsDefaultInstance();
  FileOptions::default_instance_->InitAsDefaultInstance();
  MessageOptions::default_instance_->InitAsDefaultInstance();
  FieldOptions::default_instance_->InitAsDefaultInstance();
  OneofOptions::default_instance_->InitAsDefaultInstance();
  EnumOptions::default_instance_->InitAsDefaultInstance();
  EnumValueOptions::default_instance_->InitAsDefaultInstance();
  ServiceOptions::default_instance_->InitAsDefaultInstance();
  MethodOptions::default_instance_->InitAsDefaultInstance();
  UninterpretedOption::default_instance_->InitAsDefaultInstance();
  UninterpretedOption_NamePart::default_instance_->InitAsDefaultInstance();
  SourceCodeInfo::default_instance_->InitAsDefaultInstance();
  SourceCodeInfo_Location::default_instance_->InitAsDefaultInstance();
  GeneratedCodeInfo::default_instance_->InitAsDefaultInstance();
  GeneratedCodeInfo_Annotation::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fprotobuf_2fdescriptor_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fprotobuf_2fdescriptor_2eproto {
  StaticDescriptorInitializer_google_2fprotobuf_2fdescriptor_2eproto() {
    protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  }
} static_descriptor_initializer_google_2fprotobuf_2fdescriptor_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int FileDescriptorSet::kFileFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

FileDescriptorSet::FileDescriptorSet()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.FileDescriptorSet)
}

void FileDescriptorSet::InitAsDefaultInstance() {
}

FileDescriptorSet::FileDescriptorSet(const FileDescriptorSet& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.FileDescriptorSet)
}

void FileDescriptorSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FileDescriptorSet::~FileDescriptorSet() {
  // @@protoc_insertion_point(destructor:google.protobuf.FileDescriptorSet)
  SharedDtor();
}

void FileDescriptorSet::SharedDtor() {
  if (this != default_instance_) {
  }
}

void FileDescriptorSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FileDescriptorSet::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FileDescriptorSet_descriptor_;
}

const FileDescriptorSet& FileDescriptorSet::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  return *default_instance_;
}

FileDescriptorSet* FileDescriptorSet::default_instance_ = NULL;

FileDescriptorSet* FileDescriptorSet::New(::google::protobuf::Arena* arena) const {
  FileDescriptorSet* n = new FileDescriptorSet;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void FileDescriptorSet::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.FileDescriptorSet)
  file_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool FileDescriptorSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.FileDescriptorSet)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .google.protobuf.FileDescriptorProto file = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_file:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_file()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_file;
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.FileDescriptorSet)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.FileDescriptorSet)
  return false;
#undef DO_
}

void FileDescriptorSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.FileDescriptorSet)
  // repeated .google.protobuf.FileDescriptorProto file = 1;
  for (unsigned int i = 0, n = this->file_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->file(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.FileDescriptorSet)
}

::google::protobuf::uint8* FileDescriptorSet::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.FileDescriptorSet)
  // repeated .google.protobuf.FileDescriptorProto file = 1;
  for (unsigned int i = 0, n = this->file_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->file(i), false, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.FileDescriptorSet)
  return target;
}

int FileDescriptorSet::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.FileDescriptorSet)
  int total_size = 0;

  // repeated .google.protobuf.FileDescriptorProto file = 1;
  total_size += 1 * this->file_size();
  for (int i = 0; i < this->file_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->file(i));
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FileDescriptorSet::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.FileDescriptorSet)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const FileDescriptorSet* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const FileDescriptorSet>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.FileDescriptorSet)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.FileDescriptorSet)
    MergeFrom(*source);
  }
}

void FileDescriptorSet::MergeFrom(const FileDescriptorSet& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.FileDescriptorSet)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  file_.MergeFrom(from.file_);
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void FileDescriptorSet::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.FileDescriptorSet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FileDescriptorSet::CopyFrom(const FileDescriptorSet& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.FileDescriptorSet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FileDescriptorSet::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->file())) return false;
  return true;
}

void FileDescriptorSet::Swap(FileDescriptorSet* other) {
  if (other == this) return;
  InternalSwap(other);
}
void FileDescriptorSet::InternalSwap(FileDescriptorSet* other) {
  file_.UnsafeArenaSwap(&other->file_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata FileDescriptorSet::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FileDescriptorSet_descriptor_;
  metadata.reflection = FileDescriptorSet_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// FileDescriptorSet

// repeated .google.protobuf.FileDescriptorProto file = 1;
int FileDescriptorSet::file_size() const {
  return file_.size();
}
void FileDescriptorSet::clear_file() {
  file_.Clear();
}
const ::google::protobuf::FileDescriptorProto& FileDescriptorSet::file(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.FileDescriptorSet.file)
  return file_.Get(index);
}
::google::protobuf::FileDescriptorProto* FileDescriptorSet::mutable_file(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.FileDescriptorSet.file)
  return file_.Mutable(index);
}
::google::protobuf::FileDescriptorProto* FileDescriptorSet::add_file() {
  // @@protoc_insertion_point(field_add:google.protobuf.FileDescriptorSet.file)
  return file_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::FileDescriptorProto >*
FileDescriptorSet::mutable_file() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.FileDescriptorSet.file)
  return &file_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::FileDescriptorProto >&
FileDescriptorSet::file() const {
  // @@protoc_insertion_point(field_list:google.protobuf.FileDescriptorSet.file)
  return file_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int FileDescriptorProto::kNameFieldNumber;
const int FileDescriptorProto::kPackageFieldNumber;
const int FileDescriptorProto::kDependencyFieldNumber;
const int FileDescriptorProto::kPublicDependencyFieldNumber;
const int FileDescriptorProto::kWeakDependencyFieldNumber;
const int FileDescriptorProto::kMessageTypeFieldNumber;
const int FileDescriptorProto::kEnumTypeFieldNumber;
const int FileDescriptorProto::kServiceFieldNumber;
const int FileDescriptorProto::kExtensionFieldNumber;
const int FileDescriptorProto::kOptionsFieldNumber;
const int FileDescriptorProto::kSourceCodeInfoFieldNumber;
const int FileDescriptorProto::kSyntaxFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

FileDescriptorProto::FileDescriptorProto()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.FileDescriptorProto)
}

void FileDescriptorProto::InitAsDefaultInstance() {
  options_ = const_cast< ::google::protobuf::FileOptions*>(&::google::protobuf::FileOptions::default_instance());
  source_code_info_ = const_cast< ::google::protobuf::SourceCodeInfo*>(&::google::protobuf::SourceCodeInfo::default_instance());
}

FileDescriptorProto::FileDescriptorProto(const FileDescriptorProto& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.FileDescriptorProto)
}

void FileDescriptorProto::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  package_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  options_ = NULL;
  source_code_info_ = NULL;
  syntax_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FileDescriptorProto::~FileDescriptorProto() {
  // @@protoc_insertion_point(destructor:google.protobuf.FileDescriptorProto)
  SharedDtor();
}

void FileDescriptorProto::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  package_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  syntax_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
    delete options_;
    delete source_code_info_;
  }
}

void FileDescriptorProto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FileDescriptorProto::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FileDescriptorProto_descriptor_;
}

const FileDescriptorProto& FileDescriptorProto::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  return *default_instance_;
}

FileDescriptorProto* FileDescriptorProto::default_instance_ = NULL;

FileDescriptorProto* FileDescriptorProto::New(::google::protobuf::Arena* arena) const {
  FileDescriptorProto* n = new FileDescriptorProto;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void FileDescriptorProto::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.FileDescriptorProto)
  if (_has_bits_[0 / 32] & 3u) {
    if (has_name()) {
      name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_package()) {
      package_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }
  if (_has_bits_[8 / 32] & 3584u) {
    if (has_options()) {
      if (options_ != NULL) options_->::google::protobuf::FileOptions::Clear();
    }
    if (has_source_code_info()) {
      if (source_code_info_ != NULL) source_code_info_->::google::protobuf::SourceCodeInfo::Clear();
    }
    if (has_syntax()) {
      syntax_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }
  dependency_.Clear();
  public_dependency_.Clear();
  weak_dependency_.Clear();
  message_type_.Clear();
  enum_type_.Clear();
  service_.Clear();
  extension_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool FileDescriptorProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.FileDescriptorProto)
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
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.FileDescriptorProto.name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_package;
        break;
      }

      // optional string package = 2;
      case 2: {
        if (tag == 18) {
         parse_package:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_package()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->package().data(), this->package().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.FileDescriptorProto.package");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_dependency;
        break;
      }

      // repeated string dependency = 3;
      case 3: {
        if (tag == 26) {
         parse_dependency:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_dependency()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->dependency(this->dependency_size() - 1).data(),
            this->dependency(this->dependency_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.FileDescriptorProto.dependency");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_dependency;
        if (input->ExpectTag(34)) goto parse_message_type;
        break;
      }

      // repeated .google.protobuf.DescriptorProto message_type = 4;
      case 4: {
        if (tag == 34) {
         parse_message_type:
          DO_(input->IncrementRecursionDepth());
         parse_loop_message_type:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_message_type()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_loop_message_type;
        if (input->ExpectTag(42)) goto parse_loop_enum_type;
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      // repeated .google.protobuf.EnumDescriptorProto enum_type = 5;
      case 5: {
        if (tag == 42) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_enum_type:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_enum_type()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_loop_enum_type;
        if (input->ExpectTag(50)) goto parse_loop_service;
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      // repeated .google.protobuf.ServiceDescriptorProto service = 6;
      case 6: {
        if (tag == 50) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_service:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_service()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_loop_service;
        if (input->ExpectTag(58)) goto parse_loop_extension;
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      // repeated .google.protobuf.FieldDescriptorProto extension = 7;
      case 7: {
        if (tag == 58) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_extension:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_extension()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_loop_extension;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectTag(66)) goto parse_options;
        break;
      }

      // optional .google.protobuf.FileOptions options = 8;
      case 8: {
        if (tag == 66) {
         parse_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_options()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(74)) goto parse_source_code_info;
        break;
      }

      // optional .google.protobuf.SourceCodeInfo source_code_info = 9;
      case 9: {
        if (tag == 74) {
         parse_source_code_info:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_source_code_info()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(80)) goto parse_public_dependency;
        break;
      }

      // repeated int32 public_dependency = 10;
      case 10: {
        if (tag == 80) {
         parse_public_dependency:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 80, input, this->mutable_public_dependency())));
        } else if (tag == 82) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_public_dependency())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(80)) goto parse_public_dependency;
        if (input->ExpectTag(88)) goto parse_weak_dependency;
        break;
      }

      // repeated int32 weak_dependency = 11;
      case 11: {
        if (tag == 88) {
         parse_weak_dependency:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 88, input, this->mutable_weak_dependency())));
        } else if (tag == 90) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_weak_dependency())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(88)) goto parse_weak_dependency;
        if (input->ExpectTag(98)) goto parse_syntax;
        break;
      }

      // optional string syntax = 12;
      case 12: {
        if (tag == 98) {
         parse_syntax:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_syntax()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->syntax().data(), this->syntax().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.FileDescriptorProto.syntax");
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.FileDescriptorProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.FileDescriptorProto)
  return false;
#undef DO_
}

void FileDescriptorProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.FileDescriptorProto)
  // optional string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.FileDescriptorProto.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // optional string package = 2;
  if (has_package()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->package().data(), this->package().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.FileDescriptorProto.package");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->package(), output);
  }

  // repeated string dependency = 3;
  for (int i = 0; i < this->dependency_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->dependency(i).data(), this->dependency(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.FileDescriptorProto.dependency");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->dependency(i), output);
  }

  // repeated .google.protobuf.DescriptorProto message_type = 4;
  for (unsigned int i = 0, n = this->message_type_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->message_type(i), output);
  }

  // repeated .google.protobuf.EnumDescriptorProto enum_type = 5;
  for (unsigned int i = 0, n = this->enum_type_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->enum_type(i), output);
  }

  // repeated .google.protobuf.ServiceDescriptorProto service = 6;
  for (unsigned int i = 0, n = this->service_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->service(i), output);
  }

  // repeated .google.protobuf.FieldDescriptorProto extension = 7;
  for (unsigned int i = 0, n = this->extension_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, this->extension(i), output);
  }

  // optional .google.protobuf.FileOptions options = 8;
  if (has_options()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, *this->options_, output);
  }

  // optional .google.protobuf.SourceCodeInfo source_code_info = 9;
  if (has_source_code_info()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, *this->source_code_info_, output);
  }

  // repeated int32 public_dependency = 10;
  for (int i = 0; i < this->public_dependency_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      10, this->public_dependency(i), output);
  }

  // repeated int32 weak_dependency = 11;
  for (int i = 0; i < this->weak_dependency_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      11, this->weak_dependency(i), output);
  }

  // optional string syntax = 12;
  if (has_syntax()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->syntax().data(), this->syntax().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.FileDescriptorProto.syntax");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      12, this->syntax(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.FileDescriptorProto)
}

::google::protobuf::uint8* FileDescriptorProto::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.FileDescriptorProto)
  // optional string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.FileDescriptorProto.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // optional string package = 2;
  if (has_package()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->package().data(), this->package().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.FileDescriptorProto.package");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->package(), target);
  }

  // repeated string dependency = 3;
  for (int i = 0; i < this->dependency_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->dependency(i).data(), this->dependency(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.FileDescriptorProto.dependency");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(3, this->dependency(i), target);
  }

  // repeated .google.protobuf.DescriptorProto message_type = 4;
  for (unsigned int i = 0, n = this->message_type_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, this->message_type(i), false, target);
  }

  // repeated .google.protobuf.EnumDescriptorProto enum_type = 5;
  for (unsigned int i = 0, n = this->enum_type_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        5, this->enum_type(i), false, target);
  }

  // repeated .google.protobuf.ServiceDescriptorProto service = 6;
  for (unsigned int i = 0, n = this->service_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        6, this->service(i), false, target);
  }

  // repeated .google.protobuf.FieldDescriptorProto extension = 7;
  for (unsigned int i = 0, n = this->extension_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        7, this->extension(i), false, target);
  }

  // optional .google.protobuf.FileOptions options = 8;
  if (has_options()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        8, *this->options_, false, target);
  }

  // optional .google.protobuf.SourceCodeInfo source_code_info = 9;
  if (has_source_code_info()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        9, *this->source_code_info_, false, target);
  }

  // repeated int32 public_dependency = 10;
  for (int i = 0; i < this->public_dependency_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(10, this->public_dependency(i), target);
  }

  // repeated int32 weak_dependency = 11;
  for (int i = 0; i < this->weak_dependency_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(11, this->weak_dependency(i), target);
  }

  // optional string syntax = 12;
  if (has_syntax()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->syntax().data(), this->syntax().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.FileDescriptorProto.syntax");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        12, this->syntax(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.FileDescriptorProto)
  return target;
}

int FileDescriptorProto::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.FileDescriptorProto)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 3u) {
    // optional string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional string package = 2;
    if (has_package()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->package());
    }

  }
  if (_has_bits_[9 / 32] & 3584u) {
    // optional .google.protobuf.FileOptions options = 8;
    if (has_options()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->options_);
    }

    // optional .google.protobuf.SourceCodeInfo source_code_info = 9;
    if (has_source_code_info()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->source_code_info_);
    }

    // optional string syntax = 12;
    if (has_syntax()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->syntax());
    }

  }
  // repeated string dependency = 3;
  total_size += 1 * this->dependency_size();
  for (int i = 0; i < this->dependency_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->dependency(i));
  }

  // repeated int32 public_dependency = 10;
  {
    int data_size = 0;
    for (int i = 0; i < this->public_dependency_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->public_dependency(i));
    }
    total_size += 1 * this->public_dependency_size() + data_size;
  }

  // repeated int32 weak_dependency = 11;
  {
    int data_size = 0;
    for (int i = 0; i < this->weak_dependency_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->weak_dependency(i));
    }
    total_size += 1 * this->weak_dependency_size() + data_size;
  }

  // repeated .google.protobuf.DescriptorProto message_type = 4;
  total_size += 1 * this->message_type_size();
  for (int i = 0; i < this->message_type_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->message_type(i));
  }

  // repeated .google.protobuf.EnumDescriptorProto enum_type = 5;
  total_size += 1 * this->enum_type_size();
  for (int i = 0; i < this->enum_type_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->enum_type(i));
  }

  // repeated .google.protobuf.ServiceDescriptorProto service = 6;
  total_size += 1 * this->service_size();
  for (int i = 0; i < this->service_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->service(i));
  }

  // repeated .google.protobuf.FieldDescriptorProto extension = 7;
  total_size += 1 * this->extension_size();
  for (int i = 0; i < this->extension_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->extension(i));
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FileDescriptorProto::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.FileDescriptorProto)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const FileDescriptorProto* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const FileDescriptorProto>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.FileDescriptorProto)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.FileDescriptorProto)
    MergeFrom(*source);
  }
}

void FileDescriptorProto::MergeFrom(const FileDescriptorProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.FileDescriptorProto)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  dependency_.MergeFrom(from.dependency_);
  public_dependency_.MergeFrom(from.public_dependency_);
  weak_dependency_.MergeFrom(from.weak_dependency_);
  message_type_.MergeFrom(from.message_type_);
  enum_type_.MergeFrom(from.enum_type_);
  service_.MergeFrom(from.service_);
  extension_.MergeFrom(from.extension_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (from.has_package()) {
      set_has_package();
      package_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.package_);
    }
  }
  if (from._has_bits_[9 / 32] & (0xffu << (9 % 32))) {
    if (from.has_options()) {
      mutable_options()->::google::protobuf::FileOptions::MergeFrom(from.options());
    }
    if (from.has_source_code_info()) {
      mutable_source_code_info()->::google::protobuf::SourceCodeInfo::MergeFrom(from.source_code_info());
    }
    if (from.has_syntax()) {
      set_has_syntax();
      syntax_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.syntax_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void FileDescriptorProto::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.FileDescriptorProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FileDescriptorProto::CopyFrom(const FileDescriptorProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.FileDescriptorProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FileDescriptorProto::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->message_type())) return false;
  if (!::google::protobuf::internal::AllAreInitialized(this->enum_type())) return false;
  if (!::google::protobuf::internal::AllAreInitialized(this->service())) return false;
  if (!::google::protobuf::internal::AllAreInitialized(this->extension())) return false;
  if (has_options()) {
    if (!this->options_->IsInitialized()) return false;
  }
  return true;
}

void FileDescriptorProto::Swap(FileDescriptorProto* other) {
  if (other == this) return;
  InternalSwap(other);
}
void FileDescriptorProto::InternalSwap(FileDescriptorProto* other) {
  name_.Swap(&other->name_);
  package_.Swap(&other->package_);
  dependency_.UnsafeArenaSwap(&other->dependency_);
  public_dependency_.UnsafeArenaSwap(&other->public_dependency_);
  weak_dependency_.UnsafeArenaSwap(&other->weak_dependency_);
  message_type_.UnsafeArenaSwap(&other->message_type_);
  enum_type_.UnsafeArenaSwap(&other->enum_type_);
  service_.UnsafeArenaSwap(&other->service_);
  extension_.UnsafeArenaSwap(&other->extension_);
  std::swap(options_, other->options_);
  std::swap(source_code_info_, other->source_code_info_);
  syntax_.Swap(&other->syntax_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata FileDescriptorProto::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FileDescriptorProto_descriptor_;
  metadata.reflection = FileDescriptorProto_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// FileDescriptorProto

// optional string name = 1;
bool FileDescriptorProto::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void FileDescriptorProto::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
void FileDescriptorProto::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
void FileDescriptorProto::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
 const ::std::string& FileDescriptorProto::name() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FileDescriptorProto.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void FileDescriptorProto::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.FileDescriptorProto.name)
}
 void FileDescriptorProto::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.FileDescriptorProto.name)
}
 void FileDescriptorProto::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.FileDescriptorProto.name)
}
 ::std::string* FileDescriptorProto::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:google.protobuf.FileDescriptorProto.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* FileDescriptorProto::release_name() {
  // @@protoc_insertion_point(field_release:google.protobuf.FileDescriptorProto.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void FileDescriptorProto::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.FileDescriptorProto.name)
}

// optional string package = 2;
bool FileDescriptorProto::has_package() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void FileDescriptorProto::set_has_package() {
  _has_bits_[0] |= 0x00000002u;
}
void FileDescriptorProto::clear_has_package() {
  _has_bits_[0] &= ~0x00000002u;
}
void FileDescriptorProto::clear_package() {
  package_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_package();
}
 const ::std::string& FileDescriptorProto::package() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FileDescriptorProto.package)
  return package_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void FileDescriptorProto::set_package(const ::std::string& value) {
  set_has_package();
  package_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.FileDescriptorProto.package)
}
 void FileDescriptorProto::set_package(const char* value) {
  set_has_package();
  package_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.FileDescriptorProto.package)
}
 void FileDescriptorProto::set_package(const char* value, size_t size) {
  set_has_package();
  package_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.FileDescriptorProto.package)
}
 ::std::string* FileDescriptorProto::mutable_package() {
  set_has_package();
  // @@protoc_insertion_point(field_mutable:google.protobuf.FileDescriptorProto.package)
  return package_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* FileDescriptorProto::release_package() {
  // @@protoc_insertion_point(field_release:google.protobuf.FileDescriptorProto.package)
  clear_has_package();
  return package_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void FileDescriptorProto::set_allocated_package(::std::string* package) {
  if (package != NULL) {
    set_has_package();
  } else {
    clear_has_package();
  }
  package_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), package);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.FileDescriptorProto.package)
}

// repeated string dependency = 3;
int FileDescriptorProto::dependency_size() const {
  return dependency_.size();
}
void FileDescriptorProto::clear_dependency() {
  dependency_.Clear();
}
 const ::std::string& FileDescriptorProto::dependency(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.FileDescriptorProto.dependency)
  return dependency_.Get(index);
}
 ::std::string* FileDescriptorProto::mutable_dependency(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.FileDescriptorProto.dependency)
  return dependency_.Mutable(index);
}
 void FileDescriptorProto::set_dependency(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.protobuf.FileDescriptorProto.dependency)
  dependency_.Mutable(index)->assign(value);
}
 void FileDescriptorProto::set_dependency(int index, const char* value) {
  dependency_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.protobuf.FileDescriptorProto.dependency)
}
 void FileDescriptorProto::set_dependency(int index, const char* value, size_t size) {
  dependency_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.FileDescriptorProto.dependency)
}
 ::std::string* FileDescriptorProto::add_dependency() {
  // @@protoc_insertion_point(field_add_mutable:google.protobuf.FileDescriptorProto.dependency)
  return dependency_.Add();
}
 void FileDescriptorProto::add_dependency(const ::std::string& value) {
  dependency_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.protobuf.FileDescriptorProto.dependency)
}
 void FileDescriptorProto::add_dependency(const char* value) {
  dependency_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.protobuf.FileDescriptorProto.dependency)
}
 void FileDescriptorProto::add_dependency(const char* value, size_t size) {
  dependency_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.protobuf.FileDescriptorProto.dependency)
}
 const ::google::protobuf::RepeatedPtrField< ::std::string>&
FileDescriptorProto::dependency() const {
  // @@protoc_insertion_point(field_list:google.protobuf.FileDescriptorProto.dependency)
  return dependency_;
}
 ::google::protobuf::RepeatedPtrField< ::std::string>*
FileDescriptorProto::mutable_dependency() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.FileDescriptorProto.dependency)
  return &dependency_;
}

// repeated int32 public_dependency = 10;
int FileDescriptorProto::public_dependency_size() const {
  return public_dependency_.size();
}
void FileDescriptorProto::clear_public_dependency() {
  public_dependency_.Clear();
}
 ::google::protobuf::int32 FileDescriptorProto::public_dependency(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.FileDescriptorProto.public_dependency)
  return public_dependency_.Get(index);
}
 void FileDescriptorProto::set_public_dependency(int index, ::google::protobuf::int32 value) {
  public_dependency_.Set(index, value);
  // @@protoc_insertion_point(field_set:google.protobuf.FileDescriptorProto.public_dependency)
}
 void FileDescriptorProto::add_public_dependency(::google::protobuf::int32 value) {
  public_dependency_.Add(value);
  // @@protoc_insertion_point(field_add:google.protobuf.FileDescriptorProto.public_dependency)
}
 const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
FileDescriptorProto::public_dependency() const {
  // @@protoc_insertion_point(field_list:google.protobuf.FileDescriptorProto.public_dependency)
  return public_dependency_;
}
 ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
FileDescriptorProto::mutable_public_dependency() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.FileDescriptorProto.public_dependency)
  return &public_dependency_;
}

// repeated int32 weak_dependency = 11;
int FileDescriptorProto::weak_dependency_size() const {
  return weak_dependency_.size();
}
void FileDescriptorProto::clear_weak_dependency() {
  weak_dependency_.Clear();
}
 ::google::protobuf::int32 FileDescriptorProto::weak_dependency(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.FileDescriptorProto.weak_dependency)
  return weak_dependency_.Get(index);
}
 void FileDescriptorProto::set_weak_dependency(int index, ::google::protobuf::int32 value) {
  weak_dependency_.Set(index, value);
  // @@protoc_insertion_point(field_set:google.protobuf.FileDescriptorProto.weak_dependency)
}
 void FileDescriptorProto::add_weak_dependency(::google::protobuf::int32 value) {
  weak_dependency_.Add(value);
  // @@protoc_insertion_point(field_add:google.protobuf.FileDescriptorProto.weak_dependency)
}
 const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
FileDescriptorProto::weak_dependency() const {
  // @@protoc_insertion_point(field_list:google.protobuf.FileDescriptorProto.weak_dependency)
  return weak_dependency_;
}
 ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
FileDescriptorProto::mutable_weak_dependency() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.FileDescriptorProto.weak_dependency)
  return &weak_dependency_;
}

// repeated .google.protobuf.DescriptorProto message_type = 4;
int FileDescriptorProto::message_type_size() const {
  return message_type_.size();
}
void FileDescriptorProto::clear_message_type() {
  message_type_.Clear();
}
const ::google::protobuf::DescriptorProto& FileDescriptorProto::message_type(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.FileDescriptorProto.message_type)
  return message_type_.Get(index);
}
::google::protobuf::DescriptorProto* FileDescriptorProto::mutable_message_type(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.FileDescriptorProto.message_type)
  return message_type_.Mutable(index);
}
::google::protobuf::DescriptorProto* FileDescriptorProto::add_message_type() {
  // @@protoc_insertion_point(field_add:google.protobuf.FileDescriptorProto.message_type)
  return message_type_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::DescriptorProto >*
FileDescriptorProto::mutable_message_type() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.FileDescriptorProto.message_type)
  return &message_type_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::DescriptorProto >&
FileDescriptorProto::message_type() const {
  // @@protoc_insertion_point(field_list:google.protobuf.FileDescriptorProto.message_type)
  return message_type_;
}

// repeated .google.protobuf.EnumDescriptorProto enum_type = 5;
int FileDescriptorProto::enum_type_size() const {
  return enum_type_.size();
}
void FileDescriptorProto::clear_enum_type() {
  enum_type_.Clear();
}
const ::google::protobuf::EnumDescriptorProto& FileDescriptorProto::enum_type(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.FileDescriptorProto.enum_type)
  return enum_type_.Get(index);
}
::google::protobuf::EnumDescriptorProto* FileDescriptorProto::mutable_enum_type(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.FileDescriptorProto.enum_type)
  return enum_type_.Mutable(index);
}
::google::protobuf::EnumDescriptorProto* FileDescriptorProto::add_enum_type() {
  // @@protoc_insertion_point(field_add:google.protobuf.FileDescriptorProto.enum_type)
  return enum_type_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::EnumDescriptorProto >*
FileDescriptorProto::mutable_enum_type() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.FileDescriptorProto.enum_type)
  return &enum_type_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::EnumDescriptorProto >&
FileDescriptorProto::enum_type() const {
  // @@protoc_insertion_point(field_list:google.protobuf.FileDescriptorProto.enum_type)
  return enum_type_;
}

// repeated .google.protobuf.ServiceDescriptorProto service = 6;
int FileDescriptorProto::service_size() const {
  return service_.size();
}
void FileDescriptorProto::clear_service() {
  service_.Clear();
}
const ::google::protobuf::ServiceDescriptorProto& FileDescriptorProto::service(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.FileDescriptorProto.service)
  return service_.Get(index);
}
::google::protobuf::ServiceDescriptorProto* FileDescriptorProto::mutable_service(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.FileDescriptorProto.service)
  return service_.Mutable(index);
}
::google::protobuf::ServiceDescriptorProto* FileDescriptorProto::add_service() {
  // @@protoc_insertion_point(field_add:google.protobuf.FileDescriptorProto.service)
  return service_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::ServiceDescriptorProto >*
FileDescriptorProto::mutable_service() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.FileDescriptorProto.service)
  return &service_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::ServiceDescriptorProto >&
FileDescriptorProto::service() const {
  // @@protoc_insertion_point(field_list:google.protobuf.FileDescriptorProto.service)
  return service_;
}

// repeated .google.protobuf.FieldDescriptorProto extension = 7;
int FileDescriptorProto::extension_size() const {
  return extension_.size();
}
void FileDescriptorProto::clear_extension() {
  extension_.Clear();
}
const ::google::protobuf::FieldDescriptorProto& FileDescriptorProto::extension(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.FileDescriptorProto.extension)
  return extension_.Get(index);
}
::google::protobuf::FieldDescriptorProto* FileDescriptorProto::mutable_extension(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.FileDescriptorProto.extension)
  return extension_.Mutable(index);
}
::google::protobuf::FieldDescriptorProto* FileDescriptorProto::add_extension() {
  // @@protoc_insertion_point(field_add:google.protobuf.FileDescriptorProto.extension)
  return extension_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::FieldDescriptorProto >*
FileDescriptorProto::mutable_extension() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.FileDescriptorProto.extension)
  return &extension_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::FieldDescriptorProto >&
FileDescriptorProto::extension() const {
  // @@protoc_insertion_point(field_list:google.protobuf.FileDescriptorProto.extension)
  return extension_;
}

// optional .google.protobuf.FileOptions options = 8;
bool FileDescriptorProto::has_options() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
void FileDescriptorProto::set_has_options() {
  _has_bits_[0] |= 0x00000200u;
}
void FileDescriptorProto::clear_has_options() {
  _has_bits_[0] &= ~0x00000200u;
}
void FileDescriptorProto::clear_options() {
  if (options_ != NULL) options_->::google::protobuf::FileOptions::Clear();
  clear_has_options();
}
const ::google::protobuf::FileOptions& FileDescriptorProto::options() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FileDescriptorProto.options)
  return options_ != NULL ? *options_ : *default_instance_->options_;
}
::google::protobuf::FileOptions* FileDescriptorProto::mutable_options() {
  set_has_options();
  if (options_ == NULL) {
    options_ = new ::google::protobuf::FileOptions;
  }
  // @@protoc_insertion_point(field_mutable:google.protobuf.FileDescriptorProto.options)
  return options_;
}
::google::protobuf::FileOptions* FileDescriptorProto::release_options() {
  // @@protoc_insertion_point(field_release:google.protobuf.FileDescriptorProto.options)
  clear_has_options();
  ::google::protobuf::FileOptions* temp = options_;
  options_ = NULL;
  return temp;
}
void FileDescriptorProto::set_allocated_options(::google::protobuf::FileOptions* options) {
  delete options_;
  options_ = options;
  if (options) {
    set_has_options();
  } else {
    clear_has_options();
  }
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.FileDescriptorProto.options)
}

// optional .google.protobuf.SourceCodeInfo source_code_info = 9;
bool FileDescriptorProto::has_source_code_info() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
void FileDescriptorProto::set_has_source_code_info() {
  _has_bits_[0] |= 0x00000400u;
}
void FileDescriptorProto::clear_has_source_code_info() {
  _has_bits_[0] &= ~0x00000400u;
}
void FileDescriptorProto::clear_source_code_info() {
  if (source_code_info_ != NULL) source_code_info_->::google::protobuf::SourceCodeInfo::Clear();
  clear_has_source_code_info();
}
const ::google::protobuf::SourceCodeInfo& FileDescriptorProto::source_code_info() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FileDescriptorProto.source_code_info)
  return source_code_info_ != NULL ? *source_code_info_ : *default_instance_->source_code_info_;
}
::google::protobuf::SourceCodeInfo* FileDescriptorProto::mutable_source_code_info() {
  set_has_source_code_info();
  if (source_code_info_ == NULL) {
    source_code_info_ = new ::google::protobuf::SourceCodeInfo;
  }
  // @@protoc_insertion_point(field_mutable:google.protobuf.FileDescriptorProto.source_code_info)
  return source_code_info_;
}
::google::protobuf::SourceCodeInfo* FileDescriptorProto::release_source_code_info() {
  // @@protoc_insertion_point(field_release:google.protobuf.FileDescriptorProto.source_code_info)
  clear_has_source_code_info();
  ::google::protobuf::SourceCodeInfo* temp = source_code_info_;
  source_code_info_ = NULL;
  return temp;
}
void FileDescriptorProto::set_allocated_source_code_info(::google::protobuf::SourceCodeInfo* source_code_info) {
  delete source_code_info_;
  source_code_info_ = source_code_info;
  if (source_code_info) {
    set_has_source_code_info();
  } else {
    clear_has_source_code_info();
  }
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.FileDescriptorProto.source_code_info)
}

// optional string syntax = 12;
bool FileDescriptorProto::has_syntax() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
void FileDescriptorProto::set_has_syntax() {
  _has_bits_[0] |= 0x00000800u;
}
void FileDescriptorProto::clear_has_syntax() {
  _has_bits_[0] &= ~0x00000800u;
}
void FileDescriptorProto::clear_syntax() {
  syntax_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_syntax();
}
 const ::std::string& FileDescriptorProto::syntax() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FileDescriptorProto.syntax)
  return syntax_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void FileDescriptorProto::set_syntax(const ::std::string& value) {
  set_has_syntax();
  syntax_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.FileDescriptorProto.syntax)
}
 void FileDescriptorProto::set_syntax(const char* value) {
  set_has_syntax();
  syntax_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.FileDescriptorProto.syntax)
}
 void FileDescriptorProto::set_syntax(const char* value, size_t size) {
  set_has_syntax();
  syntax_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.FileDescriptorProto.syntax)
}
 ::std::string* FileDescriptorProto::mutable_syntax() {
  set_has_syntax();
  // @@protoc_insertion_point(field_mutable:google.protobuf.FileDescriptorProto.syntax)
  return syntax_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* FileDescriptorProto::release_syntax() {
  // @@protoc_insertion_point(field_release:google.protobuf.FileDescriptorProto.syntax)
  clear_has_syntax();
  return syntax_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void FileDescriptorProto::set_allocated_syntax(::std::string* syntax) {
  if (syntax != NULL) {
    set_has_syntax();
  } else {
    clear_has_syntax();
  }
  syntax_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), syntax);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.FileDescriptorProto.syntax)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int DescriptorProto_ExtensionRange::kStartFieldNumber;
const int DescriptorProto_ExtensionRange::kEndFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

DescriptorProto_ExtensionRange::DescriptorProto_ExtensionRange()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.DescriptorProto.ExtensionRange)
}

void DescriptorProto_ExtensionRange::InitAsDefaultInstance() {
}

DescriptorProto_ExtensionRange::DescriptorProto_ExtensionRange(const DescriptorProto_ExtensionRange& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.DescriptorProto.ExtensionRange)
}

void DescriptorProto_ExtensionRange::SharedCtor() {
  _cached_size_ = 0;
  start_ = 0;
  end_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DescriptorProto_ExtensionRange::~DescriptorProto_ExtensionRange() {
  // @@protoc_insertion_point(destructor:google.protobuf.DescriptorProto.ExtensionRange)
  SharedDtor();
}

void DescriptorProto_ExtensionRange::SharedDtor() {
  if (this != default_instance_) {
  }
}

void DescriptorProto_ExtensionRange::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DescriptorProto_ExtensionRange::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DescriptorProto_ExtensionRange_descriptor_;
}

const DescriptorProto_ExtensionRange& DescriptorProto_ExtensionRange::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  return *default_instance_;
}

DescriptorProto_ExtensionRange* DescriptorProto_ExtensionRange::default_instance_ = NULL;

DescriptorProto_ExtensionRange* DescriptorProto_ExtensionRange::New(::google::protobuf::Arena* arena) const {
  DescriptorProto_ExtensionRange* n = new DescriptorProto_ExtensionRange;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void DescriptorProto_ExtensionRange::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.DescriptorProto.ExtensionRange)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(DescriptorProto_ExtensionRange, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<DescriptorProto_ExtensionRange*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(start_, end_);

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool DescriptorProto_ExtensionRange::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.DescriptorProto.ExtensionRange)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 start = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &start_)));
          set_has_start();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_end;
        break;
      }

      // optional int32 end = 2;
      case 2: {
        if (tag == 16) {
         parse_end:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &end_)));
          set_has_end();
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.DescriptorProto.ExtensionRange)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.DescriptorProto.ExtensionRange)
  return false;
#undef DO_
}

void DescriptorProto_ExtensionRange::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.DescriptorProto.ExtensionRange)
  // optional int32 start = 1;
  if (has_start()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->start(), output);
  }

  // optional int32 end = 2;
  if (has_end()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->end(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.DescriptorProto.ExtensionRange)
}

::google::protobuf::uint8* DescriptorProto_ExtensionRange::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.DescriptorProto.ExtensionRange)
  // optional int32 start = 1;
  if (has_start()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->start(), target);
  }

  // optional int32 end = 2;
  if (has_end()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->end(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.DescriptorProto.ExtensionRange)
  return target;
}

int DescriptorProto_ExtensionRange::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.DescriptorProto.ExtensionRange)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 3u) {
    // optional int32 start = 1;
    if (has_start()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->start());
    }

    // optional int32 end = 2;
    if (has_end()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->end());
    }

  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DescriptorProto_ExtensionRange::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.DescriptorProto.ExtensionRange)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const DescriptorProto_ExtensionRange* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const DescriptorProto_ExtensionRange>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.DescriptorProto.ExtensionRange)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.DescriptorProto.ExtensionRange)
    MergeFrom(*source);
  }
}

void DescriptorProto_ExtensionRange::MergeFrom(const DescriptorProto_ExtensionRange& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.DescriptorProto.ExtensionRange)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_start()) {
      set_start(from.start());
    }
    if (from.has_end()) {
      set_end(from.end());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void DescriptorProto_ExtensionRange::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.DescriptorProto.ExtensionRange)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DescriptorProto_ExtensionRange::CopyFrom(const DescriptorProto_ExtensionRange& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.DescriptorProto.ExtensionRange)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DescriptorProto_ExtensionRange::IsInitialized() const {

  return true;
}

void DescriptorProto_ExtensionRange::Swap(DescriptorProto_ExtensionRange* other) {
  if (other == this) return;
  InternalSwap(other);
}
void DescriptorProto_ExtensionRange::InternalSwap(DescriptorProto_ExtensionRange* other) {
  std::swap(start_, other->start_);
  std::swap(end_, other->end_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata DescriptorProto_ExtensionRange::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DescriptorProto_ExtensionRange_descriptor_;
  metadata.reflection = DescriptorProto_ExtensionRange_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int DescriptorProto_ReservedRange::kStartFieldNumber;
const int DescriptorProto_ReservedRange::kEndFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

DescriptorProto_ReservedRange::DescriptorProto_ReservedRange()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.DescriptorProto.ReservedRange)
}

void DescriptorProto_ReservedRange::InitAsDefaultInstance() {
}

DescriptorProto_ReservedRange::DescriptorProto_ReservedRange(const DescriptorProto_ReservedRange& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.DescriptorProto.ReservedRange)
}

void DescriptorProto_ReservedRange::SharedCtor() {
  _cached_size_ = 0;
  start_ = 0;
  end_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DescriptorProto_ReservedRange::~DescriptorProto_ReservedRange() {
  // @@protoc_insertion_point(destructor:google.protobuf.DescriptorProto.ReservedRange)
  SharedDtor();
}

void DescriptorProto_ReservedRange::SharedDtor() {
  if (this != default_instance_) {
  }
}

void DescriptorProto_ReservedRange::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DescriptorProto_ReservedRange::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DescriptorProto_ReservedRange_descriptor_;
}

const DescriptorProto_ReservedRange& DescriptorProto_ReservedRange::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  return *default_instance_;
}

DescriptorProto_ReservedRange* DescriptorProto_ReservedRange::default_instance_ = NULL;

DescriptorProto_ReservedRange* DescriptorProto_ReservedRange::New(::google::protobuf::Arena* arena) const {
  DescriptorProto_ReservedRange* n = new DescriptorProto_ReservedRange;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void DescriptorProto_ReservedRange::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.DescriptorProto.ReservedRange)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(DescriptorProto_ReservedRange, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<DescriptorProto_ReservedRange*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(start_, end_);

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool DescriptorProto_ReservedRange::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.DescriptorProto.ReservedRange)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 start = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &start_)));
          set_has_start();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_end;
        break;
      }

      // optional int32 end = 2;
      case 2: {
        if (tag == 16) {
         parse_end:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &end_)));
          set_has_end();
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.DescriptorProto.ReservedRange)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.DescriptorProto.ReservedRange)
  return false;
#undef DO_
}

void DescriptorProto_ReservedRange::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.DescriptorProto.ReservedRange)
  // optional int32 start = 1;
  if (has_start()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->start(), output);
  }

  // optional int32 end = 2;
  if (has_end()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->end(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.DescriptorProto.ReservedRange)
}

::google::protobuf::uint8* DescriptorProto_ReservedRange::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.DescriptorProto.ReservedRange)
  // optional int32 start = 1;
  if (has_start()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->start(), target);
  }

  // optional int32 end = 2;
  if (has_end()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->end(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.DescriptorProto.ReservedRange)
  return target;
}

int DescriptorProto_ReservedRange::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.DescriptorProto.ReservedRange)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 3u) {
    // optional int32 start = 1;
    if (has_start()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->start());
    }

    // optional int32 end = 2;
    if (has_end()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->end());
    }

  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DescriptorProto_ReservedRange::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.DescriptorProto.ReservedRange)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const DescriptorProto_ReservedRange* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const DescriptorProto_ReservedRange>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.DescriptorProto.ReservedRange)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.DescriptorProto.ReservedRange)
    MergeFrom(*source);
  }
}

void DescriptorProto_ReservedRange::MergeFrom(const DescriptorProto_ReservedRange& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.DescriptorProto.ReservedRange)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_start()) {
      set_start(from.start());
    }
    if (from.has_end()) {
      set_end(from.end());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void DescriptorProto_ReservedRange::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.DescriptorProto.ReservedRange)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DescriptorProto_ReservedRange::CopyFrom(const DescriptorProto_ReservedRange& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.DescriptorProto.ReservedRange)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DescriptorProto_ReservedRange::IsInitialized() const {

  return true;
}

void DescriptorProto_ReservedRange::Swap(DescriptorProto_ReservedRange* other) {
  if (other == this) return;
  InternalSwap(other);
}
void DescriptorProto_ReservedRange::InternalSwap(DescriptorProto_ReservedRange* other) {
  std::swap(start_, other->start_);
  std::swap(end_, other->end_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata DescriptorProto_ReservedRange::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DescriptorProto_ReservedRange_descriptor_;
  metadata.reflection = DescriptorProto_ReservedRange_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int DescriptorProto::kNameFieldNumber;
const int DescriptorProto::kFieldFieldNumber;
const int DescriptorProto::kExtensionFieldNumber;
const int DescriptorProto::kNestedTypeFieldNumber;
const int DescriptorProto::kEnumTypeFieldNumber;
const int DescriptorProto::kExtensionRangeFieldNumber;
const int DescriptorProto::kOneofDeclFieldNumber;
const int DescriptorProto::kOptionsFieldNumber;
const int DescriptorProto::kReservedRangeFieldNumber;
const int DescriptorProto::kReservedNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

DescriptorProto::DescriptorProto()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.DescriptorProto)
}

void DescriptorProto::InitAsDefaultInstance() {
  options_ = const_cast< ::google::protobuf::MessageOptions*>(&::google::protobuf::MessageOptions::default_instance());
}

DescriptorProto::DescriptorProto(const DescriptorProto& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.DescriptorProto)
}

void DescriptorProto::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  options_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DescriptorProto::~DescriptorProto() {
  // @@protoc_insertion_point(destructor:google.protobuf.DescriptorProto)
  SharedDtor();
}

void DescriptorProto::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
    delete options_;
  }
}

void DescriptorProto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DescriptorProto::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DescriptorProto_descriptor_;
}

const DescriptorProto& DescriptorProto::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  return *default_instance_;
}

DescriptorProto* DescriptorProto::default_instance_ = NULL;

DescriptorProto* DescriptorProto::New(::google::protobuf::Arena* arena) const {
  DescriptorProto* n = new DescriptorProto;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void DescriptorProto::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.DescriptorProto)
  if (_has_bits_[0 / 32] & 129u) {
    if (has_name()) {
      name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_options()) {
      if (options_ != NULL) options_->::google::protobuf::MessageOptions::Clear();
    }
  }
  field_.Clear();
  extension_.Clear();
  nested_type_.Clear();
  enum_type_.Clear();
  extension_range_.Clear();
  oneof_decl_.Clear();
  reserved_range_.Clear();
  reserved_name_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool DescriptorProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.DescriptorProto)
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
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.DescriptorProto.name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_field;
        break;
      }

      // repeated .google.protobuf.FieldDescriptorProto field = 2;
      case 2: {
        if (tag == 18) {
         parse_field:
          DO_(input->IncrementRecursionDepth());
         parse_loop_field:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_field()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_loop_field;
        if (input->ExpectTag(26)) goto parse_loop_nested_type;
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      // repeated .google.protobuf.DescriptorProto nested_type = 3;
      case 3: {
        if (tag == 26) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_nested_type:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_nested_type()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_loop_nested_type;
        if (input->ExpectTag(34)) goto parse_loop_enum_type;
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      // repeated .google.protobuf.EnumDescriptorProto enum_type = 4;
      case 4: {
        if (tag == 34) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_enum_type:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_enum_type()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_loop_enum_type;
        if (input->ExpectTag(42)) goto parse_loop_extension_range;
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      // repeated .google.protobuf.DescriptorProto.ExtensionRange extension_range = 5;
      case 5: {
        if (tag == 42) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_extension_range:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_extension_range()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_loop_extension_range;
        if (input->ExpectTag(50)) goto parse_loop_extension;
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      // repeated .google.protobuf.FieldDescriptorProto extension = 6;
      case 6: {
        if (tag == 50) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_extension:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_extension()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_loop_extension;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectTag(58)) goto parse_options;
        break;
      }

      // optional .google.protobuf.MessageOptions options = 7;
      case 7: {
        if (tag == 58) {
         parse_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_options()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(66)) goto parse_oneof_decl;
        break;
      }

      // repeated .google.protobuf.OneofDescriptorProto oneof_decl = 8;
      case 8: {
        if (tag == 66) {
         parse_oneof_decl:
          DO_(input->IncrementRecursionDepth());
         parse_loop_oneof_decl:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_oneof_decl()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(66)) goto parse_loop_oneof_decl;
        if (input->ExpectTag(74)) goto parse_loop_reserved_range;
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      // repeated .google.protobuf.DescriptorProto.ReservedRange reserved_range = 9;
      case 9: {
        if (tag == 74) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_reserved_range:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_reserved_range()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(74)) goto parse_loop_reserved_range;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectTag(82)) goto parse_reserved_name;
        break;
      }

      // repeated string reserved_name = 10;
      case 10: {
        if (tag == 82) {
         parse_reserved_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_reserved_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->reserved_name(this->reserved_name_size() - 1).data(),
            this->reserved_name(this->reserved_name_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.DescriptorProto.reserved_name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(82)) goto parse_reserved_name;
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.DescriptorProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.DescriptorProto)
  return false;
#undef DO_
}

void DescriptorProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.DescriptorProto)
  // optional string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.DescriptorProto.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // repeated .google.protobuf.FieldDescriptorProto field = 2;
  for (unsigned int i = 0, n = this->field_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->field(i), output);
  }

  // repeated .google.protobuf.DescriptorProto nested_type = 3;
  for (unsigned int i = 0, n = this->nested_type_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->nested_type(i), output);
  }

  // repeated .google.protobuf.EnumDescriptorProto enum_type = 4;
  for (unsigned int i = 0, n = this->enum_type_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->enum_type(i), output);
  }

  // repeated .google.protobuf.DescriptorProto.ExtensionRange extension_range = 5;
  for (unsigned int i = 0, n = this->extension_range_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->extension_range(i), output);
  }

  // repeated .google.protobuf.FieldDescriptorProto extension = 6;
  for (unsigned int i = 0, n = this->extension_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->extension(i), output);
  }

  // optional .google.protobuf.MessageOptions options = 7;
  if (has_options()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, *this->options_, output);
  }

  // repeated .google.protobuf.OneofDescriptorProto oneof_decl = 8;
  for (unsigned int i = 0, n = this->oneof_decl_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, this->oneof_decl(i), output);
  }

  // repeated .google.protobuf.DescriptorProto.ReservedRange reserved_range = 9;
  for (unsigned int i = 0, n = this->reserved_range_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, this->reserved_range(i), output);
  }

  // repeated string reserved_name = 10;
  for (int i = 0; i < this->reserved_name_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->reserved_name(i).data(), this->reserved_name(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.DescriptorProto.reserved_name");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      10, this->reserved_name(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.DescriptorProto)
}

::google::protobuf::uint8* DescriptorProto::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.DescriptorProto)
  // optional string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.DescriptorProto.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // repeated .google.protobuf.FieldDescriptorProto field = 2;
  for (unsigned int i = 0, n = this->field_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->field(i), false, target);
  }

  // repeated .google.protobuf.DescriptorProto nested_type = 3;
  for (unsigned int i = 0, n = this->nested_type_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, this->nested_type(i), false, target);
  }

  // repeated .google.protobuf.EnumDescriptorProto enum_type = 4;
  for (unsigned int i = 0, n = this->enum_type_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, this->enum_type(i), false, target);
  }

  // repeated .google.protobuf.DescriptorProto.ExtensionRange extension_range = 5;
  for (unsigned int i = 0, n = this->extension_range_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        5, this->extension_range(i), false, target);
  }

  // repeated .google.protobuf.FieldDescriptorProto extension = 6;
  for (unsigned int i = 0, n = this->extension_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        6, this->extension(i), false, target);
  }

  // optional .google.protobuf.MessageOptions options = 7;
  if (has_options()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        7, *this->options_, false, target);
  }

  // repeated .google.protobuf.OneofDescriptorProto oneof_decl = 8;
  for (unsigned int i = 0, n = this->oneof_decl_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        8, this->oneof_decl(i), false, target);
  }

  // repeated .google.protobuf.DescriptorProto.ReservedRange reserved_range = 9;
  for (unsigned int i = 0, n = this->reserved_range_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        9, this->reserved_range(i), false, target);
  }

  // repeated string reserved_name = 10;
  for (int i = 0; i < this->reserved_name_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->reserved_name(i).data(), this->reserved_name(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.DescriptorProto.reserved_name");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(10, this->reserved_name(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.DescriptorProto)
  return target;
}

int DescriptorProto::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.DescriptorProto)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 129u) {
    // optional string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional .google.protobuf.MessageOptions options = 7;
    if (has_options()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->options_);
    }

  }
  // repeated .google.protobuf.FieldDescriptorProto field = 2;
  total_size += 1 * this->field_size();
  for (int i = 0; i < this->field_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->field(i));
  }

  // repeated .google.protobuf.FieldDescriptorProto extension = 6;
  total_size += 1 * this->extension_size();
  for (int i = 0; i < this->extension_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->extension(i));
  }

  // repeated .google.protobuf.DescriptorProto nested_type = 3;
  total_size += 1 * this->nested_type_size();
  for (int i = 0; i < this->nested_type_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->nested_type(i));
  }

  // repeated .google.protobuf.EnumDescriptorProto enum_type = 4;
  total_size += 1 * this->enum_type_size();
  for (int i = 0; i < this->enum_type_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->enum_type(i));
  }

  // repeated .google.protobuf.DescriptorProto.ExtensionRange extension_range = 5;
  total_size += 1 * this->extension_range_size();
  for (int i = 0; i < this->extension_range_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->extension_range(i));
  }

  // repeated .google.protobuf.OneofDescriptorProto oneof_decl = 8;
  total_size += 1 * this->oneof_decl_size();
  for (int i = 0; i < this->oneof_decl_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->oneof_decl(i));
  }

  // repeated .google.protobuf.DescriptorProto.ReservedRange reserved_range = 9;
  total_size += 1 * this->reserved_range_size();
  for (int i = 0; i < this->reserved_range_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->reserved_range(i));
  }

  // repeated string reserved_name = 10;
  total_size += 1 * this->reserved_name_size();
  for (int i = 0; i < this->reserved_name_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->reserved_name(i));
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DescriptorProto::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.DescriptorProto)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const DescriptorProto* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const DescriptorProto>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.DescriptorProto)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.DescriptorProto)
    MergeFrom(*source);
  }
}

void DescriptorProto::MergeFrom(const DescriptorProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.DescriptorProto)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  field_.MergeFrom(from.field_);
  extension_.MergeFrom(from.extension_);
  nested_type_.MergeFrom(from.nested_type_);
  enum_type_.MergeFrom(from.enum_type_);
  extension_range_.MergeFrom(from.extension_range_);
  oneof_decl_.MergeFrom(from.oneof_decl_);
  reserved_range_.MergeFrom(from.reserved_range_);
  reserved_name_.MergeFrom(from.reserved_name_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (from.has_options()) {
      mutable_options()->::google::protobuf::MessageOptions::MergeFrom(from.options());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void DescriptorProto::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.DescriptorProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DescriptorProto::CopyFrom(const DescriptorProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.DescriptorProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DescriptorProto::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->field())) return false;
  if (!::google::protobuf::internal::AllAreInitialized(this->extension())) return false;
  if (!::google::protobuf::internal::AllAreInitialized(this->nested_type())) return false;
  if (!::google::protobuf::internal::AllAreInitialized(this->enum_type())) return false;
  if (!::google::protobuf::internal::AllAreInitialized(this->oneof_decl())) return false;
  if (has_options()) {
    if (!this->options_->IsInitialized()) return false;
  }
  return true;
}

void DescriptorProto::Swap(DescriptorProto* other) {
  if (other == this) return;
  InternalSwap(other);
}
void DescriptorProto::InternalSwap(DescriptorProto* other) {
  name_.Swap(&other->name_);
  field_.UnsafeArenaSwap(&other->field_);
  extension_.UnsafeArenaSwap(&other->extension_);
  nested_type_.UnsafeArenaSwap(&other->nested_type_);
  enum_type_.UnsafeArenaSwap(&other->enum_type_);
  extension_range_.UnsafeArenaSwap(&other->extension_range_);
  oneof_decl_.UnsafeArenaSwap(&other->oneof_decl_);
  std::swap(options_, other->options_);
  reserved_range_.UnsafeArenaSwap(&other->reserved_range_);
  reserved_name_.UnsafeArenaSwap(&other->reserved_name_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata DescriptorProto::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DescriptorProto_descriptor_;
  metadata.reflection = DescriptorProto_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// DescriptorProto_ExtensionRange

// optional int32 start = 1;
bool DescriptorProto_ExtensionRange::has_start() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void DescriptorProto_ExtensionRange::set_has_start() {
  _has_bits_[0] |= 0x00000001u;
}
void DescriptorProto_ExtensionRange::clear_has_start() {
  _has_bits_[0] &= ~0x00000001u;
}
void DescriptorProto_ExtensionRange::clear_start() {
  start_ = 0;
  clear_has_start();
}
 ::google::protobuf::int32 DescriptorProto_ExtensionRange::start() const {
  // @@protoc_insertion_point(field_get:google.protobuf.DescriptorProto.ExtensionRange.start)
  return start_;
}
 void DescriptorProto_ExtensionRange::set_start(::google::protobuf::int32 value) {
  set_has_start();
  start_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.DescriptorProto.ExtensionRange.start)
}

// optional int32 end = 2;
bool DescriptorProto_ExtensionRange::has_end() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void DescriptorProto_ExtensionRange::set_has_end() {
  _has_bits_[0] |= 0x00000002u;
}
void DescriptorProto_ExtensionRange::clear_has_end() {
  _has_bits_[0] &= ~0x00000002u;
}
void DescriptorProto_ExtensionRange::clear_end() {
  end_ = 0;
  clear_has_end();
}
 ::google::protobuf::int32 DescriptorProto_ExtensionRange::end() const {
  // @@protoc_insertion_point(field_get:google.protobuf.DescriptorProto.ExtensionRange.end)
  return end_;
}
 void DescriptorProto_ExtensionRange::set_end(::google::protobuf::int32 value) {
  set_has_end();
  end_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.DescriptorProto.ExtensionRange.end)
}

// -------------------------------------------------------------------

// DescriptorProto_ReservedRange

// optional int32 start = 1;
bool DescriptorProto_ReservedRange::has_start() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void DescriptorProto_ReservedRange::set_has_start() {
  _has_bits_[0] |= 0x00000001u;
}
void DescriptorProto_ReservedRange::clear_has_start() {
  _has_bits_[0] &= ~0x00000001u;
}
void DescriptorProto_ReservedRange::clear_start() {
  start_ = 0;
  clear_has_start();
}
 ::google::protobuf::int32 DescriptorProto_ReservedRange::start() const {
  // @@protoc_insertion_point(field_get:google.protobuf.DescriptorProto.ReservedRange.start)
  return start_;
}
 void DescriptorProto_ReservedRange::set_start(::google::protobuf::int32 value) {
  set_has_start();
  start_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.DescriptorProto.ReservedRange.start)
}

// optional int32 end = 2;
bool DescriptorProto_ReservedRange::has_end() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void DescriptorProto_ReservedRange::set_has_end() {
  _has_bits_[0] |= 0x00000002u;
}
void DescriptorProto_ReservedRange::clear_has_end() {
  _has_bits_[0] &= ~0x00000002u;
}
void DescriptorProto_ReservedRange::clear_end() {
  end_ = 0;
  clear_has_end();
}
 ::google::protobuf::int32 DescriptorProto_ReservedRange::end() const {
  // @@protoc_insertion_point(field_get:google.protobuf.DescriptorProto.ReservedRange.end)
  return end_;
}
 void DescriptorProto_ReservedRange::set_end(::google::protobuf::int32 value) {
  set_has_end();
  end_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.DescriptorProto.ReservedRange.end)
}

// -------------------------------------------------------------------

// DescriptorProto

// optional string name = 1;
bool DescriptorProto::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void DescriptorProto::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
void DescriptorProto::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
void DescriptorProto::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
 const ::std::string& DescriptorProto::name() const {
  // @@protoc_insertion_point(field_get:google.protobuf.DescriptorProto.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void DescriptorProto::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.DescriptorProto.name)
}
 void DescriptorProto::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.DescriptorProto.name)
}
 void DescriptorProto::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.DescriptorProto.name)
}
 ::std::string* DescriptorProto::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:google.protobuf.DescriptorProto.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* DescriptorProto::release_name() {
  // @@protoc_insertion_point(field_release:google.protobuf.DescriptorProto.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void DescriptorProto::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.DescriptorProto.name)
}

// repeated .google.protobuf.FieldDescriptorProto field = 2;
int DescriptorProto::field_size() const {
  return field_.size();
}
void DescriptorProto::clear_field() {
  field_.Clear();
}
const ::google::protobuf::FieldDescriptorProto& DescriptorProto::field(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.DescriptorProto.field)
  return field_.Get(index);
}
::google::protobuf::FieldDescriptorProto* DescriptorProto::mutable_field(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.DescriptorProto.field)
  return field_.Mutable(index);
}
::google::protobuf::FieldDescriptorProto* DescriptorProto::add_field() {
  // @@protoc_insertion_point(field_add:google.protobuf.DescriptorProto.field)
  return field_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::FieldDescriptorProto >*
DescriptorProto::mutable_field() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.DescriptorProto.field)
  return &field_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::FieldDescriptorProto >&
DescriptorProto::field() const {
  // @@protoc_insertion_point(field_list:google.protobuf.DescriptorProto.field)
  return field_;
}

// repeated .google.protobuf.FieldDescriptorProto extension = 6;
int DescriptorProto::extension_size() const {
  return extension_.size();
}
void DescriptorProto::clear_extension() {
  extension_.Clear();
}
const ::google::protobuf::FieldDescriptorProto& DescriptorProto::extension(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.DescriptorProto.extension)
  return extension_.Get(index);
}
::google::protobuf::FieldDescriptorProto* DescriptorProto::mutable_extension(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.DescriptorProto.extension)
  return extension_.Mutable(index);
}
::google::protobuf::FieldDescriptorProto* DescriptorProto::add_extension() {
  // @@protoc_insertion_point(field_add:google.protobuf.DescriptorProto.extension)
  return extension_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::FieldDescriptorProto >*
DescriptorProto::mutable_extension() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.DescriptorProto.extension)
  return &extension_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::FieldDescriptorProto >&
DescriptorProto::extension() const {
  // @@protoc_insertion_point(field_list:google.protobuf.DescriptorProto.extension)
  return extension_;
}

// repeated .google.protobuf.DescriptorProto nested_type = 3;
int DescriptorProto::nested_type_size() const {
  return nested_type_.size();
}
void DescriptorProto::clear_nested_type() {
  nested_type_.Clear();
}
const ::google::protobuf::DescriptorProto& DescriptorProto::nested_type(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.DescriptorProto.nested_type)
  return nested_type_.Get(index);
}
::google::protobuf::DescriptorProto* DescriptorProto::mutable_nested_type(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.DescriptorProto.nested_type)
  return nested_type_.Mutable(index);
}
::google::protobuf::DescriptorProto* DescriptorProto::add_nested_type() {
  // @@protoc_insertion_point(field_add:google.protobuf.DescriptorProto.nested_type)
  return nested_type_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::DescriptorProto >*
DescriptorProto::mutable_nested_type() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.DescriptorProto.nested_type)
  return &nested_type_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::DescriptorProto >&
DescriptorProto::nested_type() const {
  // @@protoc_insertion_point(field_list:google.protobuf.DescriptorProto.nested_type)
  return nested_type_;
}

// repeated .google.protobuf.EnumDescriptorProto enum_type = 4;
int DescriptorProto::enum_type_size() const {
  return enum_type_.size();
}
void DescriptorProto::clear_enum_type() {
  enum_type_.Clear();
}
const ::google::protobuf::EnumDescriptorProto& DescriptorProto::enum_type(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.DescriptorProto.enum_type)
  return enum_type_.Get(index);
}
::google::protobuf::EnumDescriptorProto* DescriptorProto::mutable_enum_type(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.DescriptorProto.enum_type)
  return enum_type_.Mutable(index);
}
::google::protobuf::EnumDescriptorProto* DescriptorProto::add_enum_type() {
  // @@protoc_insertion_point(field_add:google.protobuf.DescriptorProto.enum_type)
  return enum_type_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::EnumDescriptorProto >*
DescriptorProto::mutable_enum_type() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.DescriptorProto.enum_type)
  return &enum_type_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::EnumDescriptorProto >&
DescriptorProto::enum_type() const {
  // @@protoc_insertion_point(field_list:google.protobuf.DescriptorProto.enum_type)
  return enum_type_;
}

// repeated .google.protobuf.DescriptorProto.ExtensionRange extension_range = 5;
int DescriptorProto::extension_range_size() const {
  return extension_range_.size();
}
void DescriptorProto::clear_extension_range() {
  extension_range_.Clear();
}
const ::google::protobuf::DescriptorProto_ExtensionRange& DescriptorProto::extension_range(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.DescriptorProto.extension_range)
  return extension_range_.Get(index);
}
::google::protobuf::DescriptorProto_ExtensionRange* DescriptorProto::mutable_extension_range(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.DescriptorProto.extension_range)
  return extension_range_.Mutable(index);
}
::google::protobuf::DescriptorProto_ExtensionRange* DescriptorProto::add_extension_range() {
  // @@protoc_insertion_point(field_add:google.protobuf.DescriptorProto.extension_range)
  return extension_range_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::DescriptorProto_ExtensionRange >*
DescriptorProto::mutable_extension_range() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.DescriptorProto.extension_range)
  return &extension_range_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::DescriptorProto_ExtensionRange >&
DescriptorProto::extension_range() const {
  // @@protoc_insertion_point(field_list:google.protobuf.DescriptorProto.extension_range)
  return extension_range_;
}

// repeated .google.protobuf.OneofDescriptorProto oneof_decl = 8;
int DescriptorProto::oneof_decl_size() const {
  return oneof_decl_.size();
}
void DescriptorProto::clear_oneof_decl() {
  oneof_decl_.Clear();
}
const ::google::protobuf::OneofDescriptorProto& DescriptorProto::oneof_decl(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.DescriptorProto.oneof_decl)
  return oneof_decl_.Get(index);
}
::google::protobuf::OneofDescriptorProto* DescriptorProto::mutable_oneof_decl(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.DescriptorProto.oneof_decl)
  return oneof_decl_.Mutable(index);
}
::google::protobuf::OneofDescriptorProto* DescriptorProto::add_oneof_decl() {
  // @@protoc_insertion_point(field_add:google.protobuf.DescriptorProto.oneof_decl)
  return oneof_decl_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::OneofDescriptorProto >*
DescriptorProto::mutable_oneof_decl() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.DescriptorProto.oneof_decl)
  return &oneof_decl_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::OneofDescriptorProto >&
DescriptorProto::oneof_decl() const {
  // @@protoc_insertion_point(field_list:google.protobuf.DescriptorProto.oneof_decl)
  return oneof_decl_;
}

// optional .google.protobuf.MessageOptions options = 7;
bool DescriptorProto::has_options() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
void DescriptorProto::set_has_options() {
  _has_bits_[0] |= 0x00000080u;
}
void DescriptorProto::clear_has_options() {
  _has_bits_[0] &= ~0x00000080u;
}
void DescriptorProto::clear_options() {
  if (options_ != NULL) options_->::google::protobuf::MessageOptions::Clear();
  clear_has_options();
}
const ::google::protobuf::MessageOptions& DescriptorProto::options() const {
  // @@protoc_insertion_point(field_get:google.protobuf.DescriptorProto.options)
  return options_ != NULL ? *options_ : *default_instance_->options_;
}
::google::protobuf::MessageOptions* DescriptorProto::mutable_options() {
  set_has_options();
  if (options_ == NULL) {
    options_ = new ::google::protobuf::MessageOptions;
  }
  // @@protoc_insertion_point(field_mutable:google.protobuf.DescriptorProto.options)
  return options_;
}
::google::protobuf::MessageOptions* DescriptorProto::release_options() {
  // @@protoc_insertion_point(field_release:google.protobuf.DescriptorProto.options)
  clear_has_options();
  ::google::protobuf::MessageOptions* temp = options_;
  options_ = NULL;
  return temp;
}
void DescriptorProto::set_allocated_options(::google::protobuf::MessageOptions* options) {
  delete options_;
  options_ = options;
  if (options) {
    set_has_options();
  } else {
    clear_has_options();
  }
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.DescriptorProto.options)
}

// repeated .google.protobuf.DescriptorProto.ReservedRange reserved_range = 9;
int DescriptorProto::reserved_range_size() const {
  return reserved_range_.size();
}
void DescriptorProto::clear_reserved_range() {
  reserved_range_.Clear();
}
const ::google::protobuf::DescriptorProto_ReservedRange& DescriptorProto::reserved_range(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.DescriptorProto.reserved_range)
  return reserved_range_.Get(index);
}
::google::protobuf::DescriptorProto_ReservedRange* DescriptorProto::mutable_reserved_range(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.DescriptorProto.reserved_range)
  return reserved_range_.Mutable(index);
}
::google::protobuf::DescriptorProto_ReservedRange* DescriptorProto::add_reserved_range() {
  // @@protoc_insertion_point(field_add:google.protobuf.DescriptorProto.reserved_range)
  return reserved_range_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::DescriptorProto_ReservedRange >*
DescriptorProto::mutable_reserved_range() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.DescriptorProto.reserved_range)
  return &reserved_range_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::DescriptorProto_ReservedRange >&
DescriptorProto::reserved_range() const {
  // @@protoc_insertion_point(field_list:google.protobuf.DescriptorProto.reserved_range)
  return reserved_range_;
}

// repeated string reserved_name = 10;
int DescriptorProto::reserved_name_size() const {
  return reserved_name_.size();
}
void DescriptorProto::clear_reserved_name() {
  reserved_name_.Clear();
}
 const ::std::string& DescriptorProto::reserved_name(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.DescriptorProto.reserved_name)
  return reserved_name_.Get(index);
}
 ::std::string* DescriptorProto::mutable_reserved_name(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.DescriptorProto.reserved_name)
  return reserved_name_.Mutable(index);
}
 void DescriptorProto::set_reserved_name(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.protobuf.DescriptorProto.reserved_name)
  reserved_name_.Mutable(index)->assign(value);
}
 void DescriptorProto::set_reserved_name(int index, const char* value) {
  reserved_name_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.protobuf.DescriptorProto.reserved_name)
}
 void DescriptorProto::set_reserved_name(int index, const char* value, size_t size) {
  reserved_name_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.DescriptorProto.reserved_name)
}
 ::std::string* DescriptorProto::add_reserved_name() {
  // @@protoc_insertion_point(field_add_mutable:google.protobuf.DescriptorProto.reserved_name)
  return reserved_name_.Add();
}
 void DescriptorProto::add_reserved_name(const ::std::string& value) {
  reserved_name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.protobuf.DescriptorProto.reserved_name)
}
 void DescriptorProto::add_reserved_name(const char* value) {
  reserved_name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.protobuf.DescriptorProto.reserved_name)
}
 void DescriptorProto::add_reserved_name(const char* value, size_t size) {
  reserved_name_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.protobuf.DescriptorProto.reserved_name)
}
 const ::google::protobuf::RepeatedPtrField< ::std::string>&
DescriptorProto::reserved_name() const {
  // @@protoc_insertion_point(field_list:google.protobuf.DescriptorProto.reserved_name)
  return reserved_name_;
}
 ::google::protobuf::RepeatedPtrField< ::std::string>*
DescriptorProto::mutable_reserved_name() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.DescriptorProto.reserved_name)
  return &reserved_name_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

const ::google::protobuf::EnumDescriptor* FieldDescriptorProto_Type_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FieldDescriptorProto_Type_descriptor_;
}
bool FieldDescriptorProto_Type_IsValid(int value) {
  switch(value) {
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
const FieldDescriptorProto_Type FieldDescriptorProto::TYPE_DOUBLE;
const FieldDescriptorProto_Type FieldDescriptorProto::TYPE_FLOAT;
const FieldDescriptorProto_Type FieldDescriptorProto::TYPE_INT64;
const FieldDescriptorProto_Type FieldDescriptorProto::TYPE_UINT64;
const FieldDescriptorProto_Type FieldDescriptorProto::TYPE_INT32;
const FieldDescriptorProto_Type FieldDescriptorProto::TYPE_FIXED64;
const FieldDescriptorProto_Type FieldDescriptorProto::TYPE_FIXED32;
const FieldDescriptorProto_Type FieldDescriptorProto::TYPE_BOOL;
const FieldDescriptorProto_Type FieldDescriptorProto::TYPE_STRING;
const FieldDescriptorProto_Type FieldDescriptorProto::TYPE_GROUP;
const FieldDescriptorProto_Type FieldDescriptorProto::TYPE_MESSAGE;
const FieldDescriptorProto_Type FieldDescriptorProto::TYPE_BYTES;
const FieldDescriptorProto_Type FieldDescriptorProto::TYPE_UINT32;
const FieldDescriptorProto_Type FieldDescriptorProto::TYPE_ENUM;
const FieldDescriptorProto_Type FieldDescriptorProto::TYPE_SFIXED32;
const FieldDescriptorProto_Type FieldDescriptorProto::TYPE_SFIXED64;
const FieldDescriptorProto_Type FieldDescriptorProto::TYPE_SINT32;
const FieldDescriptorProto_Type FieldDescriptorProto::TYPE_SINT64;
const FieldDescriptorProto_Type FieldDescriptorProto::Type_MIN;
const FieldDescriptorProto_Type FieldDescriptorProto::Type_MAX;
const int FieldDescriptorProto::Type_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
const ::google::protobuf::EnumDescriptor* FieldDescriptorProto_Label_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FieldDescriptorProto_Label_descriptor_;
}
bool FieldDescriptorProto_Label_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const FieldDescriptorProto_Label FieldDescriptorProto::LABEL_OPTIONAL;
const FieldDescriptorProto_Label FieldDescriptorProto::LABEL_REQUIRED;
const FieldDescriptorProto_Label FieldDescriptorProto::LABEL_REPEATED;
const FieldDescriptorProto_Label FieldDescriptorProto::Label_MIN;
const FieldDescriptorProto_Label FieldDescriptorProto::Label_MAX;
const int FieldDescriptorProto::Label_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int FieldDescriptorProto::kNameFieldNumber;
const int FieldDescriptorProto::kNumberFieldNumber;
const int FieldDescriptorProto::kLabelFieldNumber;
const int FieldDescriptorProto::kTypeFieldNumber;
const int FieldDescriptorProto::kTypeNameFieldNumber;
const int FieldDescriptorProto::kExtendeeFieldNumber;
const int FieldDescriptorProto::kDefaultValueFieldNumber;
const int FieldDescriptorProto::kOneofIndexFieldNumber;
const int FieldDescriptorProto::kJsonNameFieldNumber;
const int FieldDescriptorProto::kOptionsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

FieldDescriptorProto::FieldDescriptorProto()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.FieldDescriptorProto)
}

void FieldDescriptorProto::InitAsDefaultInstance() {
  options_ = const_cast< ::google::protobuf::FieldOptions*>(&::google::protobuf::FieldOptions::default_instance());
}

FieldDescriptorProto::FieldDescriptorProto(const FieldDescriptorProto& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.FieldDescriptorProto)
}

void FieldDescriptorProto::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  number_ = 0;
  label_ = 1;
  type_ = 1;
  type_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  extendee_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  default_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  oneof_index_ = 0;
  json_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  options_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FieldDescriptorProto::~FieldDescriptorProto() {
  // @@protoc_insertion_point(destructor:google.protobuf.FieldDescriptorProto)
  SharedDtor();
}

void FieldDescriptorProto::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  type_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  extendee_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  default_value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  json_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
    delete options_;
  }
}

void FieldDescriptorProto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FieldDescriptorProto::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FieldDescriptorProto_descriptor_;
}

const FieldDescriptorProto& FieldDescriptorProto::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  return *default_instance_;
}

FieldDescriptorProto* FieldDescriptorProto::default_instance_ = NULL;

FieldDescriptorProto* FieldDescriptorProto::New(::google::protobuf::Arena* arena) const {
  FieldDescriptorProto* n = new FieldDescriptorProto;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void FieldDescriptorProto::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.FieldDescriptorProto)
  if (_has_bits_[0 / 32] & 255u) {
    if (has_name()) {
      name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    number_ = 0;
    label_ = 1;
    type_ = 1;
    if (has_type_name()) {
      type_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_extendee()) {
      extendee_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_default_value()) {
      default_value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    oneof_index_ = 0;
  }
  if (_has_bits_[8 / 32] & 768u) {
    if (has_json_name()) {
      json_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_options()) {
      if (options_ != NULL) options_->::google::protobuf::FieldOptions::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool FieldDescriptorProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.FieldDescriptorProto)
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
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.FieldDescriptorProto.name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_extendee;
        break;
      }

      // optional string extendee = 2;
      case 2: {
        if (tag == 18) {
         parse_extendee:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_extendee()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->extendee().data(), this->extendee().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.FieldDescriptorProto.extendee");
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
          set_has_number();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_label;
        break;
      }

      // optional .google.protobuf.FieldDescriptorProto.Label label = 4;
      case 4: {
        if (tag == 32) {
         parse_label:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::google::protobuf::FieldDescriptorProto_Label_IsValid(value)) {
            set_label(static_cast< ::google::protobuf::FieldDescriptorProto_Label >(value));
          } else {
            mutable_unknown_fields()->AddVarint(4, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_type;
        break;
      }

      // optional .google.protobuf.FieldDescriptorProto.Type type = 5;
      case 5: {
        if (tag == 40) {
         parse_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::google::protobuf::FieldDescriptorProto_Type_IsValid(value)) {
            set_type(static_cast< ::google::protobuf::FieldDescriptorProto_Type >(value));
          } else {
            mutable_unknown_fields()->AddVarint(5, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_type_name;
        break;
      }

      // optional string type_name = 6;
      case 6: {
        if (tag == 50) {
         parse_type_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_type_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->type_name().data(), this->type_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.FieldDescriptorProto.type_name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_default_value;
        break;
      }

      // optional string default_value = 7;
      case 7: {
        if (tag == 58) {
         parse_default_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_default_value()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->default_value().data(), this->default_value().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.FieldDescriptorProto.default_value");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(66)) goto parse_options;
        break;
      }

      // optional .google.protobuf.FieldOptions options = 8;
      case 8: {
        if (tag == 66) {
         parse_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_options()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(72)) goto parse_oneof_index;
        break;
      }

      // optional int32 oneof_index = 9;
      case 9: {
        if (tag == 72) {
         parse_oneof_index:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &oneof_index_)));
          set_has_oneof_index();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(82)) goto parse_json_name;
        break;
      }

      // optional string json_name = 10;
      case 10: {
        if (tag == 82) {
         parse_json_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_json_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->json_name().data(), this->json_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.FieldDescriptorProto.json_name");
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.FieldDescriptorProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.FieldDescriptorProto)
  return false;
#undef DO_
}

void FieldDescriptorProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.FieldDescriptorProto)
  // optional string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.FieldDescriptorProto.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // optional string extendee = 2;
  if (has_extendee()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->extendee().data(), this->extendee().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.FieldDescriptorProto.extendee");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->extendee(), output);
  }

  // optional int32 number = 3;
  if (has_number()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->number(), output);
  }

  // optional .google.protobuf.FieldDescriptorProto.Label label = 4;
  if (has_label()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->label(), output);
  }

  // optional .google.protobuf.FieldDescriptorProto.Type type = 5;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      5, this->type(), output);
  }

  // optional string type_name = 6;
  if (has_type_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->type_name().data(), this->type_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.FieldDescriptorProto.type_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->type_name(), output);
  }

  // optional string default_value = 7;
  if (has_default_value()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->default_value().data(), this->default_value().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.FieldDescriptorProto.default_value");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      7, this->default_value(), output);
  }

  // optional .google.protobuf.FieldOptions options = 8;
  if (has_options()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, *this->options_, output);
  }

  // optional int32 oneof_index = 9;
  if (has_oneof_index()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->oneof_index(), output);
  }

  // optional string json_name = 10;
  if (has_json_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->json_name().data(), this->json_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.FieldDescriptorProto.json_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      10, this->json_name(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.FieldDescriptorProto)
}

::google::protobuf::uint8* FieldDescriptorProto::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.FieldDescriptorProto)
  // optional string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.FieldDescriptorProto.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // optional string extendee = 2;
  if (has_extendee()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->extendee().data(), this->extendee().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.FieldDescriptorProto.extendee");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->extendee(), target);
  }

  // optional int32 number = 3;
  if (has_number()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->number(), target);
  }

  // optional .google.protobuf.FieldDescriptorProto.Label label = 4;
  if (has_label()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      4, this->label(), target);
  }

  // optional .google.protobuf.FieldDescriptorProto.Type type = 5;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      5, this->type(), target);
  }

  // optional string type_name = 6;
  if (has_type_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->type_name().data(), this->type_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.FieldDescriptorProto.type_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->type_name(), target);
  }

  // optional string default_value = 7;
  if (has_default_value()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->default_value().data(), this->default_value().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.FieldDescriptorProto.default_value");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        7, this->default_value(), target);
  }

  // optional .google.protobuf.FieldOptions options = 8;
  if (has_options()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        8, *this->options_, false, target);
  }

  // optional int32 oneof_index = 9;
  if (has_oneof_index()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->oneof_index(), target);
  }

  // optional string json_name = 10;
  if (has_json_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->json_name().data(), this->json_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.FieldDescriptorProto.json_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        10, this->json_name(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.FieldDescriptorProto)
  return target;
}

int FieldDescriptorProto::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.FieldDescriptorProto)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 255u) {
    // optional string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional int32 number = 3;
    if (has_number()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->number());
    }

    // optional .google.protobuf.FieldDescriptorProto.Label label = 4;
    if (has_label()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->label());
    }

    // optional .google.protobuf.FieldDescriptorProto.Type type = 5;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // optional string type_name = 6;
    if (has_type_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->type_name());
    }

    // optional string extendee = 2;
    if (has_extendee()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->extendee());
    }

    // optional string default_value = 7;
    if (has_default_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->default_value());
    }

    // optional int32 oneof_index = 9;
    if (has_oneof_index()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->oneof_index());
    }

  }
  if (_has_bits_[8 / 32] & 768u) {
    // optional string json_name = 10;
    if (has_json_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->json_name());
    }

    // optional .google.protobuf.FieldOptions options = 8;
    if (has_options()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->options_);
    }

  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FieldDescriptorProto::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.FieldDescriptorProto)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const FieldDescriptorProto* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const FieldDescriptorProto>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.FieldDescriptorProto)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.FieldDescriptorProto)
    MergeFrom(*source);
  }
}

void FieldDescriptorProto::MergeFrom(const FieldDescriptorProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.FieldDescriptorProto)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (from.has_number()) {
      set_number(from.number());
    }
    if (from.has_label()) {
      set_label(from.label());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_type_name()) {
      set_has_type_name();
      type_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.type_name_);
    }
    if (from.has_extendee()) {
      set_has_extendee();
      extendee_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.extendee_);
    }
    if (from.has_default_value()) {
      set_has_default_value();
      default_value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.default_value_);
    }
    if (from.has_oneof_index()) {
      set_oneof_index(from.oneof_index());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_json_name()) {
      set_has_json_name();
      json_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.json_name_);
    }
    if (from.has_options()) {
      mutable_options()->::google::protobuf::FieldOptions::MergeFrom(from.options());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void FieldDescriptorProto::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.FieldDescriptorProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FieldDescriptorProto::CopyFrom(const FieldDescriptorProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.FieldDescriptorProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FieldDescriptorProto::IsInitialized() const {

  if (has_options()) {
    if (!this->options_->IsInitialized()) return false;
  }
  return true;
}

void FieldDescriptorProto::Swap(FieldDescriptorProto* other) {
  if (other == this) return;
  InternalSwap(other);
}
void FieldDescriptorProto::InternalSwap(FieldDescriptorProto* other) {
  name_.Swap(&other->name_);
  std::swap(number_, other->number_);
  std::swap(label_, other->label_);
  std::swap(type_, other->type_);
  type_name_.Swap(&other->type_name_);
  extendee_.Swap(&other->extendee_);
  default_value_.Swap(&other->default_value_);
  std::swap(oneof_index_, other->oneof_index_);
  json_name_.Swap(&other->json_name_);
  std::swap(options_, other->options_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata FieldDescriptorProto::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FieldDescriptorProto_descriptor_;
  metadata.reflection = FieldDescriptorProto_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// FieldDescriptorProto

// optional string name = 1;
bool FieldDescriptorProto::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void FieldDescriptorProto::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
void FieldDescriptorProto::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
void FieldDescriptorProto::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
 const ::std::string& FieldDescriptorProto::name() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FieldDescriptorProto.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void FieldDescriptorProto::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.FieldDescriptorProto.name)
}
 void FieldDescriptorProto::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.FieldDescriptorProto.name)
}
 void FieldDescriptorProto::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.FieldDescriptorProto.name)
}
 ::std::string* FieldDescriptorProto::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:google.protobuf.FieldDescriptorProto.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* FieldDescriptorProto::release_name() {
  // @@protoc_insertion_point(field_release:google.protobuf.FieldDescriptorProto.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void FieldDescriptorProto::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.FieldDescriptorProto.name)
}

// optional int32 number = 3;
bool FieldDescriptorProto::has_number() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void FieldDescriptorProto::set_has_number() {
  _has_bits_[0] |= 0x00000002u;
}
void FieldDescriptorProto::clear_has_number() {
  _has_bits_[0] &= ~0x00000002u;
}
void FieldDescriptorProto::clear_number() {
  number_ = 0;
  clear_has_number();
}
 ::google::protobuf::int32 FieldDescriptorProto::number() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FieldDescriptorProto.number)
  return number_;
}
 void FieldDescriptorProto::set_number(::google::protobuf::int32 value) {
  set_has_number();
  number_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.FieldDescriptorProto.number)
}

// optional .google.protobuf.FieldDescriptorProto.Label label = 4;
bool FieldDescriptorProto::has_label() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void FieldDescriptorProto::set_has_label() {
  _has_bits_[0] |= 0x00000004u;
}
void FieldDescriptorProto::clear_has_label() {
  _has_bits_[0] &= ~0x00000004u;
}
void FieldDescriptorProto::clear_label() {
  label_ = 1;
  clear_has_label();
}
 ::google::protobuf::FieldDescriptorProto_Label FieldDescriptorProto::label() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FieldDescriptorProto.label)
  return static_cast< ::google::protobuf::FieldDescriptorProto_Label >(label_);
}
 void FieldDescriptorProto::set_label(::google::protobuf::FieldDescriptorProto_Label value) {
  assert(::google::protobuf::FieldDescriptorProto_Label_IsValid(value));
  set_has_label();
  label_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.FieldDescriptorProto.label)
}

// optional .google.protobuf.FieldDescriptorProto.Type type = 5;
bool FieldDescriptorProto::has_type() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void FieldDescriptorProto::set_has_type() {
  _has_bits_[0] |= 0x00000008u;
}
void FieldDescriptorProto::clear_has_type() {
  _has_bits_[0] &= ~0x00000008u;
}
void FieldDescriptorProto::clear_type() {
  type_ = 1;
  clear_has_type();
}
 ::google::protobuf::FieldDescriptorProto_Type FieldDescriptorProto::type() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FieldDescriptorProto.type)
  return static_cast< ::google::protobuf::FieldDescriptorProto_Type >(type_);
}
 void FieldDescriptorProto::set_type(::google::protobuf::FieldDescriptorProto_Type value) {
  assert(::google::protobuf::FieldDescriptorProto_Type_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.FieldDescriptorProto.type)
}

// optional string type_name = 6;
bool FieldDescriptorProto::has_type_name() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void FieldDescriptorProto::set_has_type_name() {
  _has_bits_[0] |= 0x00000010u;
}
void FieldDescriptorProto::clear_has_type_name() {
  _has_bits_[0] &= ~0x00000010u;
}
void FieldDescriptorProto::clear_type_name() {
  type_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_type_name();
}
 const ::std::string& FieldDescriptorProto::type_name() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FieldDescriptorProto.type_name)
  return type_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void FieldDescriptorProto::set_type_name(const ::std::string& value) {
  set_has_type_name();
  type_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.FieldDescriptorProto.type_name)
}
 void FieldDescriptorProto::set_type_name(const char* value) {
  set_has_type_name();
  type_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.FieldDescriptorProto.type_name)
}
 void FieldDescriptorProto::set_type_name(const char* value, size_t size) {
  set_has_type_name();
  type_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.FieldDescriptorProto.type_name)
}
 ::std::string* FieldDescriptorProto::mutable_type_name() {
  set_has_type_name();
  // @@protoc_insertion_point(field_mutable:google.protobuf.FieldDescriptorProto.type_name)
  return type_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* FieldDescriptorProto::release_type_name() {
  // @@protoc_insertion_point(field_release:google.protobuf.FieldDescriptorProto.type_name)
  clear_has_type_name();
  return type_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void FieldDescriptorProto::set_allocated_type_name(::std::string* type_name) {
  if (type_name != NULL) {
    set_has_type_name();
  } else {
    clear_has_type_name();
  }
  type_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type_name);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.FieldDescriptorProto.type_name)
}

// optional string extendee = 2;
bool FieldDescriptorProto::has_extendee() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void FieldDescriptorProto::set_has_extendee() {
  _has_bits_[0] |= 0x00000020u;
}
void FieldDescriptorProto::clear_has_extendee() {
  _has_bits_[0] &= ~0x00000020u;
}
void FieldDescriptorProto::clear_extendee() {
  extendee_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_extendee();
}
 const ::std::string& FieldDescriptorProto::extendee() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FieldDescriptorProto.extendee)
  return extendee_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void FieldDescriptorProto::set_extendee(const ::std::string& value) {
  set_has_extendee();
  extendee_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.FieldDescriptorProto.extendee)
}
 void FieldDescriptorProto::set_extendee(const char* value) {
  set_has_extendee();
  extendee_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.FieldDescriptorProto.extendee)
}
 void FieldDescriptorProto::set_extendee(const char* value, size_t size) {
  set_has_extendee();
  extendee_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.FieldDescriptorProto.extendee)
}
 ::std::string* FieldDescriptorProto::mutable_extendee() {
  set_has_extendee();
  // @@protoc_insertion_point(field_mutable:google.protobuf.FieldDescriptorProto.extendee)
  return extendee_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* FieldDescriptorProto::release_extendee() {
  // @@protoc_insertion_point(field_release:google.protobuf.FieldDescriptorProto.extendee)
  clear_has_extendee();
  return extendee_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void FieldDescriptorProto::set_allocated_extendee(::std::string* extendee) {
  if (extendee != NULL) {
    set_has_extendee();
  } else {
    clear_has_extendee();
  }
  extendee_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), extendee);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.FieldDescriptorProto.extendee)
}

// optional string default_value = 7;
bool FieldDescriptorProto::has_default_value() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
void FieldDescriptorProto::set_has_default_value() {
  _has_bits_[0] |= 0x00000040u;
}
void FieldDescriptorProto::clear_has_default_value() {
  _has_bits_[0] &= ~0x00000040u;
}
void FieldDescriptorProto::clear_default_value() {
  default_value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_default_value();
}
 const ::std::string& FieldDescriptorProto::default_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FieldDescriptorProto.default_value)
  return default_value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void FieldDescriptorProto::set_default_value(const ::std::string& value) {
  set_has_default_value();
  default_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.FieldDescriptorProto.default_value)
}
 void FieldDescriptorProto::set_default_value(const char* value) {
  set_has_default_value();
  default_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.FieldDescriptorProto.default_value)
}
 void FieldDescriptorProto::set_default_value(const char* value, size_t size) {
  set_has_default_value();
  default_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.FieldDescriptorProto.default_value)
}
 ::std::string* FieldDescriptorProto::mutable_default_value() {
  set_has_default_value();
  // @@protoc_insertion_point(field_mutable:google.protobuf.FieldDescriptorProto.default_value)
  return default_value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* FieldDescriptorProto::release_default_value() {
  // @@protoc_insertion_point(field_release:google.protobuf.FieldDescriptorProto.default_value)
  clear_has_default_value();
  return default_value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void FieldDescriptorProto::set_allocated_default_value(::std::string* default_value) {
  if (default_value != NULL) {
    set_has_default_value();
  } else {
    clear_has_default_value();
  }
  default_value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), default_value);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.FieldDescriptorProto.default_value)
}

// optional int32 oneof_index = 9;
bool FieldDescriptorProto::has_oneof_index() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
void FieldDescriptorProto::set_has_oneof_index() {
  _has_bits_[0] |= 0x00000080u;
}
void FieldDescriptorProto::clear_has_oneof_index() {
  _has_bits_[0] &= ~0x00000080u;
}
void FieldDescriptorProto::clear_oneof_index() {
  oneof_index_ = 0;
  clear_has_oneof_index();
}
 ::google::protobuf::int32 FieldDescriptorProto::oneof_index() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FieldDescriptorProto.oneof_index)
  return oneof_index_;
}
 void FieldDescriptorProto::set_oneof_index(::google::protobuf::int32 value) {
  set_has_oneof_index();
  oneof_index_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.FieldDescriptorProto.oneof_index)
}

// optional string json_name = 10;
bool FieldDescriptorProto::has_json_name() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
void FieldDescriptorProto::set_has_json_name() {
  _has_bits_[0] |= 0x00000100u;
}
void FieldDescriptorProto::clear_has_json_name() {
  _has_bits_[0] &= ~0x00000100u;
}
void FieldDescriptorProto::clear_json_name() {
  json_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_json_name();
}
 const ::std::string& FieldDescriptorProto::json_name() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FieldDescriptorProto.json_name)
  return json_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void FieldDescriptorProto::set_json_name(const ::std::string& value) {
  set_has_json_name();
  json_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.FieldDescriptorProto.json_name)
}
 void FieldDescriptorProto::set_json_name(const char* value) {
  set_has_json_name();
  json_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.FieldDescriptorProto.json_name)
}
 void FieldDescriptorProto::set_json_name(const char* value, size_t size) {
  set_has_json_name();
  json_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.FieldDescriptorProto.json_name)
}
 ::std::string* FieldDescriptorProto::mutable_json_name() {
  set_has_json_name();
  // @@protoc_insertion_point(field_mutable:google.protobuf.FieldDescriptorProto.json_name)
  return json_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* FieldDescriptorProto::release_json_name() {
  // @@protoc_insertion_point(field_release:google.protobuf.FieldDescriptorProto.json_name)
  clear_has_json_name();
  return json_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void FieldDescriptorProto::set_allocated_json_name(::std::string* json_name) {
  if (json_name != NULL) {
    set_has_json_name();
  } else {
    clear_has_json_name();
  }
  json_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), json_name);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.FieldDescriptorProto.json_name)
}

// optional .google.protobuf.FieldOptions options = 8;
bool FieldDescriptorProto::has_options() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
void FieldDescriptorProto::set_has_options() {
  _has_bits_[0] |= 0x00000200u;
}
void FieldDescriptorProto::clear_has_options() {
  _has_bits_[0] &= ~0x00000200u;
}
void FieldDescriptorProto::clear_options() {
  if (options_ != NULL) options_->::google::protobuf::FieldOptions::Clear();
  clear_has_options();
}
const ::google::protobuf::FieldOptions& FieldDescriptorProto::options() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FieldDescriptorProto.options)
  return options_ != NULL ? *options_ : *default_instance_->options_;
}
::google::protobuf::FieldOptions* FieldDescriptorProto::mutable_options() {
  set_has_options();
  if (options_ == NULL) {
    options_ = new ::google::protobuf::FieldOptions;
  }
  // @@protoc_insertion_point(field_mutable:google.protobuf.FieldDescriptorProto.options)
  return options_;
}
::google::protobuf::FieldOptions* FieldDescriptorProto::release_options() {
  // @@protoc_insertion_point(field_release:google.protobuf.FieldDescriptorProto.options)
  clear_has_options();
  ::google::protobuf::FieldOptions* temp = options_;
  options_ = NULL;
  return temp;
}
void FieldDescriptorProto::set_allocated_options(::google::protobuf::FieldOptions* options) {
  delete options_;
  options_ = options;
  if (options) {
    set_has_options();
  } else {
    clear_has_options();
  }
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.FieldDescriptorProto.options)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int OneofDescriptorProto::kNameFieldNumber;
const int OneofDescriptorProto::kOptionsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

OneofDescriptorProto::OneofDescriptorProto()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.OneofDescriptorProto)
}

void OneofDescriptorProto::InitAsDefaultInstance() {
  options_ = const_cast< ::google::protobuf::OneofOptions*>(&::google::protobuf::OneofOptions::default_instance());
}

OneofDescriptorProto::OneofDescriptorProto(const OneofDescriptorProto& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.OneofDescriptorProto)
}

void OneofDescriptorProto::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  options_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

OneofDescriptorProto::~OneofDescriptorProto() {
  // @@protoc_insertion_point(destructor:google.protobuf.OneofDescriptorProto)
  SharedDtor();
}

void OneofDescriptorProto::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
    delete options_;
  }
}

void OneofDescriptorProto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OneofDescriptorProto::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OneofDescriptorProto_descriptor_;
}

const OneofDescriptorProto& OneofDescriptorProto::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  return *default_instance_;
}

OneofDescriptorProto* OneofDescriptorProto::default_instance_ = NULL;

OneofDescriptorProto* OneofDescriptorProto::New(::google::protobuf::Arena* arena) const {
  OneofDescriptorProto* n = new OneofDescriptorProto;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void OneofDescriptorProto::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.OneofDescriptorProto)
  if (_has_bits_[0 / 32] & 3u) {
    if (has_name()) {
      name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_options()) {
      if (options_ != NULL) options_->::google::protobuf::OneofOptions::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool OneofDescriptorProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.OneofDescriptorProto)
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
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.OneofDescriptorProto.name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_options;
        break;
      }

      // optional .google.protobuf.OneofOptions options = 2;
      case 2: {
        if (tag == 18) {
         parse_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_options()));
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.OneofDescriptorProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.OneofDescriptorProto)
  return false;
#undef DO_
}

void OneofDescriptorProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.OneofDescriptorProto)
  // optional string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.OneofDescriptorProto.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // optional .google.protobuf.OneofOptions options = 2;
  if (has_options()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->options_, output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.OneofDescriptorProto)
}

::google::protobuf::uint8* OneofDescriptorProto::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.OneofDescriptorProto)
  // optional string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.OneofDescriptorProto.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // optional .google.protobuf.OneofOptions options = 2;
  if (has_options()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->options_, false, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.OneofDescriptorProto)
  return target;
}

int OneofDescriptorProto::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.OneofDescriptorProto)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 3u) {
    // optional string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional .google.protobuf.OneofOptions options = 2;
    if (has_options()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->options_);
    }

  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void OneofDescriptorProto::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.OneofDescriptorProto)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const OneofDescriptorProto* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const OneofDescriptorProto>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.OneofDescriptorProto)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.OneofDescriptorProto)
    MergeFrom(*source);
  }
}

void OneofDescriptorProto::MergeFrom(const OneofDescriptorProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.OneofDescriptorProto)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (from.has_options()) {
      mutable_options()->::google::protobuf::OneofOptions::MergeFrom(from.options());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void OneofDescriptorProto::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.OneofDescriptorProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OneofDescriptorProto::CopyFrom(const OneofDescriptorProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.OneofDescriptorProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OneofDescriptorProto::IsInitialized() const {

  if (has_options()) {
    if (!this->options_->IsInitialized()) return false;
  }
  return true;
}

void OneofDescriptorProto::Swap(OneofDescriptorProto* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OneofDescriptorProto::InternalSwap(OneofDescriptorProto* other) {
  name_.Swap(&other->name_);
  std::swap(options_, other->options_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata OneofDescriptorProto::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = OneofDescriptorProto_descriptor_;
  metadata.reflection = OneofDescriptorProto_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// OneofDescriptorProto

// optional string name = 1;
bool OneofDescriptorProto::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void OneofDescriptorProto::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
void OneofDescriptorProto::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
void OneofDescriptorProto::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
 const ::std::string& OneofDescriptorProto::name() const {
  // @@protoc_insertion_point(field_get:google.protobuf.OneofDescriptorProto.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void OneofDescriptorProto::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.OneofDescriptorProto.name)
}
 void OneofDescriptorProto::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.OneofDescriptorProto.name)
}
 void OneofDescriptorProto::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.OneofDescriptorProto.name)
}
 ::std::string* OneofDescriptorProto::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:google.protobuf.OneofDescriptorProto.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* OneofDescriptorProto::release_name() {
  // @@protoc_insertion_point(field_release:google.protobuf.OneofDescriptorProto.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void OneofDescriptorProto::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.OneofDescriptorProto.name)
}

// optional .google.protobuf.OneofOptions options = 2;
bool OneofDescriptorProto::has_options() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void OneofDescriptorProto::set_has_options() {
  _has_bits_[0] |= 0x00000002u;
}
void OneofDescriptorProto::clear_has_options() {
  _has_bits_[0] &= ~0x00000002u;
}
void OneofDescriptorProto::clear_options() {
  if (options_ != NULL) options_->::google::protobuf::OneofOptions::Clear();
  clear_has_options();
}
const ::google::protobuf::OneofOptions& OneofDescriptorProto::options() const {
  // @@protoc_insertion_point(field_get:google.protobuf.OneofDescriptorProto.options)
  return options_ != NULL ? *options_ : *default_instance_->options_;
}
::google::protobuf::OneofOptions* OneofDescriptorProto::mutable_options() {
  set_has_options();
  if (options_ == NULL) {
    options_ = new ::google::protobuf::OneofOptions;
  }
  // @@protoc_insertion_point(field_mutable:google.protobuf.OneofDescriptorProto.options)
  return options_;
}
::google::protobuf::OneofOptions* OneofDescriptorProto::release_options() {
  // @@protoc_insertion_point(field_release:google.protobuf.OneofDescriptorProto.options)
  clear_has_options();
  ::google::protobuf::OneofOptions* temp = options_;
  options_ = NULL;
  return temp;
}
void OneofDescriptorProto::set_allocated_options(::google::protobuf::OneofOptions* options) {
  delete options_;
  options_ = options;
  if (options) {
    set_has_options();
  } else {
    clear_has_options();
  }
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.OneofDescriptorProto.options)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EnumDescriptorProto::kNameFieldNumber;
const int EnumDescriptorProto::kValueFieldNumber;
const int EnumDescriptorProto::kOptionsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EnumDescriptorProto::EnumDescriptorProto()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.EnumDescriptorProto)
}

void EnumDescriptorProto::InitAsDefaultInstance() {
  options_ = const_cast< ::google::protobuf::EnumOptions*>(&::google::protobuf::EnumOptions::default_instance());
}

EnumDescriptorProto::EnumDescriptorProto(const EnumDescriptorProto& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.EnumDescriptorProto)
}

void EnumDescriptorProto::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  options_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

EnumDescriptorProto::~EnumDescriptorProto() {
  // @@protoc_insertion_point(destructor:google.protobuf.EnumDescriptorProto)
  SharedDtor();
}

void EnumDescriptorProto::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
    delete options_;
  }
}

void EnumDescriptorProto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* EnumDescriptorProto::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EnumDescriptorProto_descriptor_;
}

const EnumDescriptorProto& EnumDescriptorProto::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  return *default_instance_;
}

EnumDescriptorProto* EnumDescriptorProto::default_instance_ = NULL;

EnumDescriptorProto* EnumDescriptorProto::New(::google::protobuf::Arena* arena) const {
  EnumDescriptorProto* n = new EnumDescriptorProto;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void EnumDescriptorProto::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.EnumDescriptorProto)
  if (_has_bits_[0 / 32] & 5u) {
    if (has_name()) {
      name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_options()) {
      if (options_ != NULL) options_->::google::protobuf::EnumOptions::Clear();
    }
  }
  value_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool EnumDescriptorProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.EnumDescriptorProto)
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
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.EnumDescriptorProto.name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_value;
        break;
      }

      // repeated .google.protobuf.EnumValueDescriptorProto value = 2;
      case 2: {
        if (tag == 18) {
         parse_value:
          DO_(input->IncrementRecursionDepth());
         parse_loop_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_value()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_loop_value;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectTag(26)) goto parse_options;
        break;
      }

      // optional .google.protobuf.EnumOptions options = 3;
      case 3: {
        if (tag == 26) {
         parse_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_options()));
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.EnumDescriptorProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.EnumDescriptorProto)
  return false;
#undef DO_
}

void EnumDescriptorProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.EnumDescriptorProto)
  // optional string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.EnumDescriptorProto.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // repeated .google.protobuf.EnumValueDescriptorProto value = 2;
  for (unsigned int i = 0, n = this->value_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->value(i), output);
  }

  // optional .google.protobuf.EnumOptions options = 3;
  if (has_options()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->options_, output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.EnumDescriptorProto)
}

::google::protobuf::uint8* EnumDescriptorProto::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.EnumDescriptorProto)
  // optional string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.EnumDescriptorProto.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // repeated .google.protobuf.EnumValueDescriptorProto value = 2;
  for (unsigned int i = 0, n = this->value_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->value(i), false, target);
  }

  // optional .google.protobuf.EnumOptions options = 3;
  if (has_options()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->options_, false, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.EnumDescriptorProto)
  return target;
}

int EnumDescriptorProto::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.EnumDescriptorProto)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 5u) {
    // optional string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional .google.protobuf.EnumOptions options = 3;
    if (has_options()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->options_);
    }

  }
  // repeated .google.protobuf.EnumValueDescriptorProto value = 2;
  total_size += 1 * this->value_size();
  for (int i = 0; i < this->value_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->value(i));
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EnumDescriptorProto::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.EnumDescriptorProto)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const EnumDescriptorProto* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const EnumDescriptorProto>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.EnumDescriptorProto)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.EnumDescriptorProto)
    MergeFrom(*source);
  }
}

void EnumDescriptorProto::MergeFrom(const EnumDescriptorProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.EnumDescriptorProto)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  value_.MergeFrom(from.value_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (from.has_options()) {
      mutable_options()->::google::protobuf::EnumOptions::MergeFrom(from.options());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void EnumDescriptorProto::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.EnumDescriptorProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EnumDescriptorProto::CopyFrom(const EnumDescriptorProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.EnumDescriptorProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EnumDescriptorProto::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->value())) return false;
  if (has_options()) {
    if (!this->options_->IsInitialized()) return false;
  }
  return true;
}

void EnumDescriptorProto::Swap(EnumDescriptorProto* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EnumDescriptorProto::InternalSwap(EnumDescriptorProto* other) {
  name_.Swap(&other->name_);
  value_.UnsafeArenaSwap(&other->value_);
  std::swap(options_, other->options_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata EnumDescriptorProto::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = EnumDescriptorProto_descriptor_;
  metadata.reflection = EnumDescriptorProto_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// EnumDescriptorProto

// optional string name = 1;
bool EnumDescriptorProto::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void EnumDescriptorProto::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
void EnumDescriptorProto::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
void EnumDescriptorProto::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
 const ::std::string& EnumDescriptorProto::name() const {
  // @@protoc_insertion_point(field_get:google.protobuf.EnumDescriptorProto.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void EnumDescriptorProto::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.EnumDescriptorProto.name)
}
 void EnumDescriptorProto::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.EnumDescriptorProto.name)
}
 void EnumDescriptorProto::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.EnumDescriptorProto.name)
}
 ::std::string* EnumDescriptorProto::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:google.protobuf.EnumDescriptorProto.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* EnumDescriptorProto::release_name() {
  // @@protoc_insertion_point(field_release:google.protobuf.EnumDescriptorProto.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void EnumDescriptorProto::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.EnumDescriptorProto.name)
}

// repeated .google.protobuf.EnumValueDescriptorProto value = 2;
int EnumDescriptorProto::value_size() const {
  return value_.size();
}
void EnumDescriptorProto::clear_value() {
  value_.Clear();
}
const ::google::protobuf::EnumValueDescriptorProto& EnumDescriptorProto::value(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.EnumDescriptorProto.value)
  return value_.Get(index);
}
::google::protobuf::EnumValueDescriptorProto* EnumDescriptorProto::mutable_value(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.EnumDescriptorProto.value)
  return value_.Mutable(index);
}
::google::protobuf::EnumValueDescriptorProto* EnumDescriptorProto::add_value() {
  // @@protoc_insertion_point(field_add:google.protobuf.EnumDescriptorProto.value)
  return value_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::EnumValueDescriptorProto >*
EnumDescriptorProto::mutable_value() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.EnumDescriptorProto.value)
  return &value_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::EnumValueDescriptorProto >&
EnumDescriptorProto::value() const {
  // @@protoc_insertion_point(field_list:google.protobuf.EnumDescriptorProto.value)
  return value_;
}

// optional .google.protobuf.EnumOptions options = 3;
bool EnumDescriptorProto::has_options() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void EnumDescriptorProto::set_has_options() {
  _has_bits_[0] |= 0x00000004u;
}
void EnumDescriptorProto::clear_has_options() {
  _has_bits_[0] &= ~0x00000004u;
}
void EnumDescriptorProto::clear_options() {
  if (options_ != NULL) options_->::google::protobuf::EnumOptions::Clear();
  clear_has_options();
}
const ::google::protobuf::EnumOptions& EnumDescriptorProto::options() const {
  // @@protoc_insertion_point(field_get:google.protobuf.EnumDescriptorProto.options)
  return options_ != NULL ? *options_ : *default_instance_->options_;
}
::google::protobuf::EnumOptions* EnumDescriptorProto::mutable_options() {
  set_has_options();
  if (options_ == NULL) {
    options_ = new ::google::protobuf::EnumOptions;
  }
  // @@protoc_insertion_point(field_mutable:google.protobuf.EnumDescriptorProto.options)
  return options_;
}
::google::protobuf::EnumOptions* EnumDescriptorProto::release_options() {
  // @@protoc_insertion_point(field_release:google.protobuf.EnumDescriptorProto.options)
  clear_has_options();
  ::google::protobuf::EnumOptions* temp = options_;
  options_ = NULL;
  return temp;
}
void EnumDescriptorProto::set_allocated_options(::google::protobuf::EnumOptions* options) {
  delete options_;
  options_ = options;
  if (options) {
    set_has_options();
  } else {
    clear_has_options();
  }
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.EnumDescriptorProto.options)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EnumValueDescriptorProto::kNameFieldNumber;
const int EnumValueDescriptorProto::kNumberFieldNumber;
const int EnumValueDescriptorProto::kOptionsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EnumValueDescriptorProto::EnumValueDescriptorProto()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.EnumValueDescriptorProto)
}

void EnumValueDescriptorProto::InitAsDefaultInstance() {
  options_ = const_cast< ::google::protobuf::EnumValueOptions*>(&::google::protobuf::EnumValueOptions::default_instance());
}

EnumValueDescriptorProto::EnumValueDescriptorProto(const EnumValueDescriptorProto& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.EnumValueDescriptorProto)
}

void EnumValueDescriptorProto::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  number_ = 0;
  options_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

EnumValueDescriptorProto::~EnumValueDescriptorProto() {
  // @@protoc_insertion_point(destructor:google.protobuf.EnumValueDescriptorProto)
  SharedDtor();
}

void EnumValueDescriptorProto::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
    delete options_;
  }
}

void EnumValueDescriptorProto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* EnumValueDescriptorProto::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EnumValueDescriptorProto_descriptor_;
}

const EnumValueDescriptorProto& EnumValueDescriptorProto::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  return *default_instance_;
}

EnumValueDescriptorProto* EnumValueDescriptorProto::default_instance_ = NULL;

EnumValueDescriptorProto* EnumValueDescriptorProto::New(::google::protobuf::Arena* arena) const {
  EnumValueDescriptorProto* n = new EnumValueDescriptorProto;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void EnumValueDescriptorProto::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.EnumValueDescriptorProto)
  if (_has_bits_[0 / 32] & 7u) {
    if (has_name()) {
      name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    number_ = 0;
    if (has_options()) {
      if (options_ != NULL) options_->::google::protobuf::EnumValueOptions::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool EnumValueDescriptorProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.EnumValueDescriptorProto)
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
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.EnumValueDescriptorProto.name");
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
          set_has_number();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_options;
        break;
      }

      // optional .google.protobuf.EnumValueOptions options = 3;
      case 3: {
        if (tag == 26) {
         parse_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_options()));
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.EnumValueDescriptorProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.EnumValueDescriptorProto)
  return false;
#undef DO_
}

void EnumValueDescriptorProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.EnumValueDescriptorProto)
  // optional string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.EnumValueDescriptorProto.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // optional int32 number = 2;
  if (has_number()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->number(), output);
  }

  // optional .google.protobuf.EnumValueOptions options = 3;
  if (has_options()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->options_, output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.EnumValueDescriptorProto)
}

::google::protobuf::uint8* EnumValueDescriptorProto::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.EnumValueDescriptorProto)
  // optional string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.EnumValueDescriptorProto.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // optional int32 number = 2;
  if (has_number()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->number(), target);
  }

  // optional .google.protobuf.EnumValueOptions options = 3;
  if (has_options()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->options_, false, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.EnumValueDescriptorProto)
  return target;
}

int EnumValueDescriptorProto::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.EnumValueDescriptorProto)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 7u) {
    // optional string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional int32 number = 2;
    if (has_number()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->number());
    }

    // optional .google.protobuf.EnumValueOptions options = 3;
    if (has_options()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->options_);
    }

  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EnumValueDescriptorProto::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.EnumValueDescriptorProto)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const EnumValueDescriptorProto* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const EnumValueDescriptorProto>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.EnumValueDescriptorProto)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.EnumValueDescriptorProto)
    MergeFrom(*source);
  }
}

void EnumValueDescriptorProto::MergeFrom(const EnumValueDescriptorProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.EnumValueDescriptorProto)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (from.has_number()) {
      set_number(from.number());
    }
    if (from.has_options()) {
      mutable_options()->::google::protobuf::EnumValueOptions::MergeFrom(from.options());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void EnumValueDescriptorProto::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.EnumValueDescriptorProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EnumValueDescriptorProto::CopyFrom(const EnumValueDescriptorProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.EnumValueDescriptorProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EnumValueDescriptorProto::IsInitialized() const {

  if (has_options()) {
    if (!this->options_->IsInitialized()) return false;
  }
  return true;
}

void EnumValueDescriptorProto::Swap(EnumValueDescriptorProto* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EnumValueDescriptorProto::InternalSwap(EnumValueDescriptorProto* other) {
  name_.Swap(&other->name_);
  std::swap(number_, other->number_);
  std::swap(options_, other->options_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata EnumValueDescriptorProto::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = EnumValueDescriptorProto_descriptor_;
  metadata.reflection = EnumValueDescriptorProto_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// EnumValueDescriptorProto

// optional string name = 1;
bool EnumValueDescriptorProto::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void EnumValueDescriptorProto::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
void EnumValueDescriptorProto::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
void EnumValueDescriptorProto::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
 const ::std::string& EnumValueDescriptorProto::name() const {
  // @@protoc_insertion_point(field_get:google.protobuf.EnumValueDescriptorProto.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void EnumValueDescriptorProto::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.EnumValueDescriptorProto.name)
}
 void EnumValueDescriptorProto::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.EnumValueDescriptorProto.name)
}
 void EnumValueDescriptorProto::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.EnumValueDescriptorProto.name)
}
 ::std::string* EnumValueDescriptorProto::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:google.protobuf.EnumValueDescriptorProto.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* EnumValueDescriptorProto::release_name() {
  // @@protoc_insertion_point(field_release:google.protobuf.EnumValueDescriptorProto.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void EnumValueDescriptorProto::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.EnumValueDescriptorProto.name)
}

// optional int32 number = 2;
bool EnumValueDescriptorProto::has_number() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void EnumValueDescriptorProto::set_has_number() {
  _has_bits_[0] |= 0x00000002u;
}
void EnumValueDescriptorProto::clear_has_number() {
  _has_bits_[0] &= ~0x00000002u;
}
void EnumValueDescriptorProto::clear_number() {
  number_ = 0;
  clear_has_number();
}
 ::google::protobuf::int32 EnumValueDescriptorProto::number() const {
  // @@protoc_insertion_point(field_get:google.protobuf.EnumValueDescriptorProto.number)
  return number_;
}
 void EnumValueDescriptorProto::set_number(::google::protobuf::int32 value) {
  set_has_number();
  number_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.EnumValueDescriptorProto.number)
}

// optional .google.protobuf.EnumValueOptions options = 3;
bool EnumValueDescriptorProto::has_options() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void EnumValueDescriptorProto::set_has_options() {
  _has_bits_[0] |= 0x00000004u;
}
void EnumValueDescriptorProto::clear_has_options() {
  _has_bits_[0] &= ~0x00000004u;
}
void EnumValueDescriptorProto::clear_options() {
  if (options_ != NULL) options_->::google::protobuf::EnumValueOptions::Clear();
  clear_has_options();
}
const ::google::protobuf::EnumValueOptions& EnumValueDescriptorProto::options() const {
  // @@protoc_insertion_point(field_get:google.protobuf.EnumValueDescriptorProto.options)
  return options_ != NULL ? *options_ : *default_instance_->options_;
}
::google::protobuf::EnumValueOptions* EnumValueDescriptorProto::mutable_options() {
  set_has_options();
  if (options_ == NULL) {
    options_ = new ::google::protobuf::EnumValueOptions;
  }
  // @@protoc_insertion_point(field_mutable:google.protobuf.EnumValueDescriptorProto.options)
  return options_;
}
::google::protobuf::EnumValueOptions* EnumValueDescriptorProto::release_options() {
  // @@protoc_insertion_point(field_release:google.protobuf.EnumValueDescriptorProto.options)
  clear_has_options();
  ::google::protobuf::EnumValueOptions* temp = options_;
  options_ = NULL;
  return temp;
}
void EnumValueDescriptorProto::set_allocated_options(::google::protobuf::EnumValueOptions* options) {
  delete options_;
  options_ = options;
  if (options) {
    set_has_options();
  } else {
    clear_has_options();
  }
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.EnumValueDescriptorProto.options)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ServiceDescriptorProto::kNameFieldNumber;
const int ServiceDescriptorProto::kMethodFieldNumber;
const int ServiceDescriptorProto::kOptionsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ServiceDescriptorProto::ServiceDescriptorProto()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.ServiceDescriptorProto)
}

void ServiceDescriptorProto::InitAsDefaultInstance() {
  options_ = const_cast< ::google::protobuf::ServiceOptions*>(&::google::protobuf::ServiceOptions::default_instance());
}

ServiceDescriptorProto::ServiceDescriptorProto(const ServiceDescriptorProto& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.ServiceDescriptorProto)
}

void ServiceDescriptorProto::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  options_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ServiceDescriptorProto::~ServiceDescriptorProto() {
  // @@protoc_insertion_point(destructor:google.protobuf.ServiceDescriptorProto)
  SharedDtor();
}

void ServiceDescriptorProto::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
    delete options_;
  }
}

void ServiceDescriptorProto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ServiceDescriptorProto::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ServiceDescriptorProto_descriptor_;
}

const ServiceDescriptorProto& ServiceDescriptorProto::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  return *default_instance_;
}

ServiceDescriptorProto* ServiceDescriptorProto::default_instance_ = NULL;

ServiceDescriptorProto* ServiceDescriptorProto::New(::google::protobuf::Arena* arena) const {
  ServiceDescriptorProto* n = new ServiceDescriptorProto;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ServiceDescriptorProto::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.ServiceDescriptorProto)
  if (_has_bits_[0 / 32] & 5u) {
    if (has_name()) {
      name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_options()) {
      if (options_ != NULL) options_->::google::protobuf::ServiceOptions::Clear();
    }
  }
  method_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool ServiceDescriptorProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.ServiceDescriptorProto)
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
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.ServiceDescriptorProto.name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_method;
        break;
      }

      // repeated .google.protobuf.MethodDescriptorProto method = 2;
      case 2: {
        if (tag == 18) {
         parse_method:
          DO_(input->IncrementRecursionDepth());
         parse_loop_method:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_method()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_loop_method;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectTag(26)) goto parse_options;
        break;
      }

      // optional .google.protobuf.ServiceOptions options = 3;
      case 3: {
        if (tag == 26) {
         parse_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_options()));
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.ServiceDescriptorProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.ServiceDescriptorProto)
  return false;
#undef DO_
}

void ServiceDescriptorProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.ServiceDescriptorProto)
  // optional string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.ServiceDescriptorProto.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // repeated .google.protobuf.MethodDescriptorProto method = 2;
  for (unsigned int i = 0, n = this->method_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->method(i), output);
  }

  // optional .google.protobuf.ServiceOptions options = 3;
  if (has_options()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->options_, output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.ServiceDescriptorProto)
}

::google::protobuf::uint8* ServiceDescriptorProto::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.ServiceDescriptorProto)
  // optional string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.ServiceDescriptorProto.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // repeated .google.protobuf.MethodDescriptorProto method = 2;
  for (unsigned int i = 0, n = this->method_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->method(i), false, target);
  }

  // optional .google.protobuf.ServiceOptions options = 3;
  if (has_options()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->options_, false, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.ServiceDescriptorProto)
  return target;
}

int ServiceDescriptorProto::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.ServiceDescriptorProto)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 5u) {
    // optional string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional .google.protobuf.ServiceOptions options = 3;
    if (has_options()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->options_);
    }

  }
  // repeated .google.protobuf.MethodDescriptorProto method = 2;
  total_size += 1 * this->method_size();
  for (int i = 0; i < this->method_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->method(i));
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ServiceDescriptorProto::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.ServiceDescriptorProto)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const ServiceDescriptorProto* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ServiceDescriptorProto>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.ServiceDescriptorProto)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.ServiceDescriptorProto)
    MergeFrom(*source);
  }
}

void ServiceDescriptorProto::MergeFrom(const ServiceDescriptorProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.ServiceDescriptorProto)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  method_.MergeFrom(from.method_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (from.has_options()) {
      mutable_options()->::google::protobuf::ServiceOptions::MergeFrom(from.options());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void ServiceDescriptorProto::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.ServiceDescriptorProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ServiceDescriptorProto::CopyFrom(const ServiceDescriptorProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.ServiceDescriptorProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ServiceDescriptorProto::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->method())) return false;
  if (has_options()) {
    if (!this->options_->IsInitialized()) return false;
  }
  return true;
}

void ServiceDescriptorProto::Swap(ServiceDescriptorProto* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ServiceDescriptorProto::InternalSwap(ServiceDescriptorProto* other) {
  name_.Swap(&other->name_);
  method_.UnsafeArenaSwap(&other->method_);
  std::swap(options_, other->options_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ServiceDescriptorProto::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ServiceDescriptorProto_descriptor_;
  metadata.reflection = ServiceDescriptorProto_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ServiceDescriptorProto

// optional string name = 1;
bool ServiceDescriptorProto::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ServiceDescriptorProto::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
void ServiceDescriptorProto::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
void ServiceDescriptorProto::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
 const ::std::string& ServiceDescriptorProto::name() const {
  // @@protoc_insertion_point(field_get:google.protobuf.ServiceDescriptorProto.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ServiceDescriptorProto::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.ServiceDescriptorProto.name)
}
 void ServiceDescriptorProto::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.ServiceDescriptorProto.name)
}
 void ServiceDescriptorProto::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.ServiceDescriptorProto.name)
}
 ::std::string* ServiceDescriptorProto::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:google.protobuf.ServiceDescriptorProto.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ServiceDescriptorProto::release_name() {
  // @@protoc_insertion_point(field_release:google.protobuf.ServiceDescriptorProto.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ServiceDescriptorProto::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.ServiceDescriptorProto.name)
}

// repeated .google.protobuf.MethodDescriptorProto method = 2;
int ServiceDescriptorProto::method_size() const {
  return method_.size();
}
void ServiceDescriptorProto::clear_method() {
  method_.Clear();
}
const ::google::protobuf::MethodDescriptorProto& ServiceDescriptorProto::method(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.ServiceDescriptorProto.method)
  return method_.Get(index);
}
::google::protobuf::MethodDescriptorProto* ServiceDescriptorProto::mutable_method(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.ServiceDescriptorProto.method)
  return method_.Mutable(index);
}
::google::protobuf::MethodDescriptorProto* ServiceDescriptorProto::add_method() {
  // @@protoc_insertion_point(field_add:google.protobuf.ServiceDescriptorProto.method)
  return method_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::MethodDescriptorProto >*
ServiceDescriptorProto::mutable_method() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.ServiceDescriptorProto.method)
  return &method_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::MethodDescriptorProto >&
ServiceDescriptorProto::method() const {
  // @@protoc_insertion_point(field_list:google.protobuf.ServiceDescriptorProto.method)
  return method_;
}

// optional .google.protobuf.ServiceOptions options = 3;
bool ServiceDescriptorProto::has_options() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void ServiceDescriptorProto::set_has_options() {
  _has_bits_[0] |= 0x00000004u;
}
void ServiceDescriptorProto::clear_has_options() {
  _has_bits_[0] &= ~0x00000004u;
}
void ServiceDescriptorProto::clear_options() {
  if (options_ != NULL) options_->::google::protobuf::ServiceOptions::Clear();
  clear_has_options();
}
const ::google::protobuf::ServiceOptions& ServiceDescriptorProto::options() const {
  // @@protoc_insertion_point(field_get:google.protobuf.ServiceDescriptorProto.options)
  return options_ != NULL ? *options_ : *default_instance_->options_;
}
::google::protobuf::ServiceOptions* ServiceDescriptorProto::mutable_options() {
  set_has_options();
  if (options_ == NULL) {
    options_ = new ::google::protobuf::ServiceOptions;
  }
  // @@protoc_insertion_point(field_mutable:google.protobuf.ServiceDescriptorProto.options)
  return options_;
}
::google::protobuf::ServiceOptions* ServiceDescriptorProto::release_options() {
  // @@protoc_insertion_point(field_release:google.protobuf.ServiceDescriptorProto.options)
  clear_has_options();
  ::google::protobuf::ServiceOptions* temp = options_;
  options_ = NULL;
  return temp;
}
void ServiceDescriptorProto::set_allocated_options(::google::protobuf::ServiceOptions* options) {
  delete options_;
  options_ = options;
  if (options) {
    set_has_options();
  } else {
    clear_has_options();
  }
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.ServiceDescriptorProto.options)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MethodDescriptorProto::kNameFieldNumber;
const int MethodDescriptorProto::kInputTypeFieldNumber;
const int MethodDescriptorProto::kOutputTypeFieldNumber;
const int MethodDescriptorProto::kOptionsFieldNumber;
const int MethodDescriptorProto::kClientStreamingFieldNumber;
const int MethodDescriptorProto::kServerStreamingFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MethodDescriptorProto::MethodDescriptorProto()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.MethodDescriptorProto)
}

void MethodDescriptorProto::InitAsDefaultInstance() {
  options_ = const_cast< ::google::protobuf::MethodOptions*>(&::google::protobuf::MethodOptions::default_instance());
}

MethodDescriptorProto::MethodDescriptorProto(const MethodDescriptorProto& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.MethodDescriptorProto)
}

void MethodDescriptorProto::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  input_type_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  output_type_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  options_ = NULL;
  client_streaming_ = false;
  server_streaming_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MethodDescriptorProto::~MethodDescriptorProto() {
  // @@protoc_insertion_point(destructor:google.protobuf.MethodDescriptorProto)
  SharedDtor();
}

void MethodDescriptorProto::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  input_type_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  output_type_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
    delete options_;
  }
}

void MethodDescriptorProto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MethodDescriptorProto::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MethodDescriptorProto_descriptor_;
}

const MethodDescriptorProto& MethodDescriptorProto::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  return *default_instance_;
}

MethodDescriptorProto* MethodDescriptorProto::default_instance_ = NULL;

MethodDescriptorProto* MethodDescriptorProto::New(::google::protobuf::Arena* arena) const {
  MethodDescriptorProto* n = new MethodDescriptorProto;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MethodDescriptorProto::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.MethodDescriptorProto)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(MethodDescriptorProto, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<MethodDescriptorProto*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 63u) {
    ZR_(client_streaming_, server_streaming_);
    if (has_name()) {
      name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_input_type()) {
      input_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_output_type()) {
      output_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_options()) {
      if (options_ != NULL) options_->::google::protobuf::MethodOptions::Clear();
    }
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool MethodDescriptorProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.MethodDescriptorProto)
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
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.MethodDescriptorProto.name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_input_type;
        break;
      }

      // optional string input_type = 2;
      case 2: {
        if (tag == 18) {
         parse_input_type:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_input_type()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->input_type().data(), this->input_type().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.MethodDescriptorProto.input_type");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_output_type;
        break;
      }

      // optional string output_type = 3;
      case 3: {
        if (tag == 26) {
         parse_output_type:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_output_type()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->output_type().data(), this->output_type().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.MethodDescriptorProto.output_type");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_options;
        break;
      }

      // optional .google.protobuf.MethodOptions options = 4;
      case 4: {
        if (tag == 34) {
         parse_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_options()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_client_streaming;
        break;
      }

      // optional bool client_streaming = 5 [default = false];
      case 5: {
        if (tag == 40) {
         parse_client_streaming:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &client_streaming_)));
          set_has_client_streaming();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_server_streaming;
        break;
      }

      // optional bool server_streaming = 6 [default = false];
      case 6: {
        if (tag == 48) {
         parse_server_streaming:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &server_streaming_)));
          set_has_server_streaming();
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.MethodDescriptorProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.MethodDescriptorProto)
  return false;
#undef DO_
}

void MethodDescriptorProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.MethodDescriptorProto)
  // optional string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.MethodDescriptorProto.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // optional string input_type = 2;
  if (has_input_type()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->input_type().data(), this->input_type().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.MethodDescriptorProto.input_type");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->input_type(), output);
  }

  // optional string output_type = 3;
  if (has_output_type()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->output_type().data(), this->output_type().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.MethodDescriptorProto.output_type");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->output_type(), output);
  }

  // optional .google.protobuf.MethodOptions options = 4;
  if (has_options()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *this->options_, output);
  }

  // optional bool client_streaming = 5 [default = false];
  if (has_client_streaming()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->client_streaming(), output);
  }

  // optional bool server_streaming = 6 [default = false];
  if (has_server_streaming()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->server_streaming(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.MethodDescriptorProto)
}

::google::protobuf::uint8* MethodDescriptorProto::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.MethodDescriptorProto)
  // optional string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.MethodDescriptorProto.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // optional string input_type = 2;
  if (has_input_type()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->input_type().data(), this->input_type().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.MethodDescriptorProto.input_type");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->input_type(), target);
  }

  // optional string output_type = 3;
  if (has_output_type()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->output_type().data(), this->output_type().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.MethodDescriptorProto.output_type");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->output_type(), target);
  }

  // optional .google.protobuf.MethodOptions options = 4;
  if (has_options()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, *this->options_, false, target);
  }

  // optional bool client_streaming = 5 [default = false];
  if (has_client_streaming()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, this->client_streaming(), target);
  }

  // optional bool server_streaming = 6 [default = false];
  if (has_server_streaming()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(6, this->server_streaming(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.MethodDescriptorProto)
  return target;
}

int MethodDescriptorProto::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.MethodDescriptorProto)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 63u) {
    // optional string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional string input_type = 2;
    if (has_input_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->input_type());
    }

    // optional string output_type = 3;
    if (has_output_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->output_type());
    }

    // optional .google.protobuf.MethodOptions options = 4;
    if (has_options()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->options_);
    }

    // optional bool client_streaming = 5 [default = false];
    if (has_client_streaming()) {
      total_size += 1 + 1;
    }

    // optional bool server_streaming = 6 [default = false];
    if (has_server_streaming()) {
      total_size += 1 + 1;
    }

  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MethodDescriptorProto::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.MethodDescriptorProto)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const MethodDescriptorProto* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const MethodDescriptorProto>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.MethodDescriptorProto)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.MethodDescriptorProto)
    MergeFrom(*source);
  }
}

void MethodDescriptorProto::MergeFrom(const MethodDescriptorProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.MethodDescriptorProto)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (from.has_input_type()) {
      set_has_input_type();
      input_type_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.input_type_);
    }
    if (from.has_output_type()) {
      set_has_output_type();
      output_type_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.output_type_);
    }
    if (from.has_options()) {
      mutable_options()->::google::protobuf::MethodOptions::MergeFrom(from.options());
    }
    if (from.has_client_streaming()) {
      set_client_streaming(from.client_streaming());
    }
    if (from.has_server_streaming()) {
      set_server_streaming(from.server_streaming());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void MethodDescriptorProto::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.MethodDescriptorProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MethodDescriptorProto::CopyFrom(const MethodDescriptorProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.MethodDescriptorProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MethodDescriptorProto::IsInitialized() const {

  if (has_options()) {
    if (!this->options_->IsInitialized()) return false;
  }
  return true;
}

void MethodDescriptorProto::Swap(MethodDescriptorProto* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MethodDescriptorProto::InternalSwap(MethodDescriptorProto* other) {
  name_.Swap(&other->name_);
  input_type_.Swap(&other->input_type_);
  output_type_.Swap(&other->output_type_);
  std::swap(options_, other->options_);
  std::swap(client_streaming_, other->client_streaming_);
  std::swap(server_streaming_, other->server_streaming_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata MethodDescriptorProto::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MethodDescriptorProto_descriptor_;
  metadata.reflection = MethodDescriptorProto_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MethodDescriptorProto

// optional string name = 1;
bool MethodDescriptorProto::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void MethodDescriptorProto::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
void MethodDescriptorProto::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
void MethodDescriptorProto::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
 const ::std::string& MethodDescriptorProto::name() const {
  // @@protoc_insertion_point(field_get:google.protobuf.MethodDescriptorProto.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void MethodDescriptorProto::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.MethodDescriptorProto.name)
}
 void MethodDescriptorProto::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.MethodDescriptorProto.name)
}
 void MethodDescriptorProto::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.MethodDescriptorProto.name)
}
 ::std::string* MethodDescriptorProto::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:google.protobuf.MethodDescriptorProto.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* MethodDescriptorProto::release_name() {
  // @@protoc_insertion_point(field_release:google.protobuf.MethodDescriptorProto.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void MethodDescriptorProto::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.MethodDescriptorProto.name)
}

// optional string input_type = 2;
bool MethodDescriptorProto::has_input_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void MethodDescriptorProto::set_has_input_type() {
  _has_bits_[0] |= 0x00000002u;
}
void MethodDescriptorProto::clear_has_input_type() {
  _has_bits_[0] &= ~0x00000002u;
}
void MethodDescriptorProto::clear_input_type() {
  input_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_input_type();
}
 const ::std::string& MethodDescriptorProto::input_type() const {
  // @@protoc_insertion_point(field_get:google.protobuf.MethodDescriptorProto.input_type)
  return input_type_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void MethodDescriptorProto::set_input_type(const ::std::string& value) {
  set_has_input_type();
  input_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.MethodDescriptorProto.input_type)
}
 void MethodDescriptorProto::set_input_type(const char* value) {
  set_has_input_type();
  input_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.MethodDescriptorProto.input_type)
}
 void MethodDescriptorProto::set_input_type(const char* value, size_t size) {
  set_has_input_type();
  input_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.MethodDescriptorProto.input_type)
}
 ::std::string* MethodDescriptorProto::mutable_input_type() {
  set_has_input_type();
  // @@protoc_insertion_point(field_mutable:google.protobuf.MethodDescriptorProto.input_type)
  return input_type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* MethodDescriptorProto::release_input_type() {
  // @@protoc_insertion_point(field_release:google.protobuf.MethodDescriptorProto.input_type)
  clear_has_input_type();
  return input_type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void MethodDescriptorProto::set_allocated_input_type(::std::string* input_type) {
  if (input_type != NULL) {
    set_has_input_type();
  } else {
    clear_has_input_type();
  }
  input_type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), input_type);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.MethodDescriptorProto.input_type)
}

// optional string output_type = 3;
bool MethodDescriptorProto::has_output_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void MethodDescriptorProto::set_has_output_type() {
  _has_bits_[0] |= 0x00000004u;
}
void MethodDescriptorProto::clear_has_output_type() {
  _has_bits_[0] &= ~0x00000004u;
}
void MethodDescriptorProto::clear_output_type() {
  output_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_output_type();
}
 const ::std::string& MethodDescriptorProto::output_type() const {
  // @@protoc_insertion_point(field_get:google.protobuf.MethodDescriptorProto.output_type)
  return output_type_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void MethodDescriptorProto::set_output_type(const ::std::string& value) {
  set_has_output_type();
  output_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.MethodDescriptorProto.output_type)
}
 void MethodDescriptorProto::set_output_type(const char* value) {
  set_has_output_type();
  output_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.MethodDescriptorProto.output_type)
}
 void MethodDescriptorProto::set_output_type(const char* value, size_t size) {
  set_has_output_type();
  output_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.MethodDescriptorProto.output_type)
}
 ::std::string* MethodDescriptorProto::mutable_output_type() {
  set_has_output_type();
  // @@protoc_insertion_point(field_mutable:google.protobuf.MethodDescriptorProto.output_type)
  return output_type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* MethodDescriptorProto::release_output_type() {
  // @@protoc_insertion_point(field_release:google.protobuf.MethodDescriptorProto.output_type)
  clear_has_output_type();
  return output_type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void MethodDescriptorProto::set_allocated_output_type(::std::string* output_type) {
  if (output_type != NULL) {
    set_has_output_type();
  } else {
    clear_has_output_type();
  }
  output_type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), output_type);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.MethodDescriptorProto.output_type)
}

// optional .google.protobuf.MethodOptions options = 4;
bool MethodDescriptorProto::has_options() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void MethodDescriptorProto::set_has_options() {
  _has_bits_[0] |= 0x00000008u;
}
void MethodDescriptorProto::clear_has_options() {
  _has_bits_[0] &= ~0x00000008u;
}
void MethodDescriptorProto::clear_options() {
  if (options_ != NULL) options_->::google::protobuf::MethodOptions::Clear();
  clear_has_options();
}
const ::google::protobuf::MethodOptions& MethodDescriptorProto::options() const {
  // @@protoc_insertion_point(field_get:google.protobuf.MethodDescriptorProto.options)
  return options_ != NULL ? *options_ : *default_instance_->options_;
}
::google::protobuf::MethodOptions* MethodDescriptorProto::mutable_options() {
  set_has_options();
  if (options_ == NULL) {
    options_ = new ::google::protobuf::MethodOptions;
  }
  // @@protoc_insertion_point(field_mutable:google.protobuf.MethodDescriptorProto.options)
  return options_;
}
::google::protobuf::MethodOptions* MethodDescriptorProto::release_options() {
  // @@protoc_insertion_point(field_release:google.protobuf.MethodDescriptorProto.options)
  clear_has_options();
  ::google::protobuf::MethodOptions* temp = options_;
  options_ = NULL;
  return temp;
}
void MethodDescriptorProto::set_allocated_options(::google::protobuf::MethodOptions* options) {
  delete options_;
  options_ = options;
  if (options) {
    set_has_options();
  } else {
    clear_has_options();
  }
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.MethodDescriptorProto.options)
}

// optional bool client_streaming = 5 [default = false];
bool MethodDescriptorProto::has_client_streaming() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void MethodDescriptorProto::set_has_client_streaming() {
  _has_bits_[0] |= 0x00000010u;
}
void MethodDescriptorProto::clear_has_client_streaming() {
  _has_bits_[0] &= ~0x00000010u;
}
void MethodDescriptorProto::clear_client_streaming() {
  client_streaming_ = false;
  clear_has_client_streaming();
}
 bool MethodDescriptorProto::client_streaming() const {
  // @@protoc_insertion_point(field_get:google.protobuf.MethodDescriptorProto.client_streaming)
  return client_streaming_;
}
 void MethodDescriptorProto::set_client_streaming(bool value) {
  set_has_client_streaming();
  client_streaming_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.MethodDescriptorProto.client_streaming)
}

// optional bool server_streaming = 6 [default = false];
bool MethodDescriptorProto::has_server_streaming() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void MethodDescriptorProto::set_has_server_streaming() {
  _has_bits_[0] |= 0x00000020u;
}
void MethodDescriptorProto::clear_has_server_streaming() {
  _has_bits_[0] &= ~0x00000020u;
}
void MethodDescriptorProto::clear_server_streaming() {
  server_streaming_ = false;
  clear_has_server_streaming();
}
 bool MethodDescriptorProto::server_streaming() const {
  // @@protoc_insertion_point(field_get:google.protobuf.MethodDescriptorProto.server_streaming)
  return server_streaming_;
}
 void MethodDescriptorProto::set_server_streaming(bool value) {
  set_has_server_streaming();
  server_streaming_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.MethodDescriptorProto.server_streaming)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

const ::google::protobuf::EnumDescriptor* FileOptions_OptimizeMode_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FileOptions_OptimizeMode_descriptor_;
}
bool FileOptions_OptimizeMode_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const FileOptions_OptimizeMode FileOptions::SPEED;
const FileOptions_OptimizeMode FileOptions::CODE_SIZE;
const FileOptions_OptimizeMode FileOptions::LITE_RUNTIME;
const FileOptions_OptimizeMode FileOptions::OptimizeMode_MIN;
const FileOptions_OptimizeMode FileOptions::OptimizeMode_MAX;
const int FileOptions::OptimizeMode_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int FileOptions::kJavaPackageFieldNumber;
const int FileOptions::kJavaOuterClassnameFieldNumber;
const int FileOptions::kJavaMultipleFilesFieldNumber;
const int FileOptions::kJavaGenerateEqualsAndHashFieldNumber;
const int FileOptions::kJavaStringCheckUtf8FieldNumber;
const int FileOptions::kOptimizeForFieldNumber;
const int FileOptions::kGoPackageFieldNumber;
const int FileOptions::kCcGenericServicesFieldNumber;
const int FileOptions::kJavaGenericServicesFieldNumber;
const int FileOptions::kPyGenericServicesFieldNumber;
const int FileOptions::kDeprecatedFieldNumber;
const int FileOptions::kCcEnableArenasFieldNumber;
const int FileOptions::kObjcClassPrefixFieldNumber;
const int FileOptions::kCsharpNamespaceFieldNumber;
const int FileOptions::kUninterpretedOptionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

FileOptions::FileOptions()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.FileOptions)
}

void FileOptions::InitAsDefaultInstance() {
}

FileOptions::FileOptions(const FileOptions& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.FileOptions)
}

void FileOptions::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  java_package_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  java_outer_classname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  java_multiple_files_ = false;
  java_generate_equals_and_hash_ = false;
  java_string_check_utf8_ = false;
  optimize_for_ = 1;
  go_package_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  cc_generic_services_ = false;
  java_generic_services_ = false;
  py_generic_services_ = false;
  deprecated_ = false;
  cc_enable_arenas_ = false;
  objc_class_prefix_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  csharp_namespace_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FileOptions::~FileOptions() {
  // @@protoc_insertion_point(destructor:google.protobuf.FileOptions)
  SharedDtor();
}

void FileOptions::SharedDtor() {
  java_package_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  java_outer_classname_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  go_package_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  objc_class_prefix_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  csharp_namespace_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void FileOptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FileOptions::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FileOptions_descriptor_;
}

const FileOptions& FileOptions::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  return *default_instance_;
}

FileOptions* FileOptions::default_instance_ = NULL;

FileOptions* FileOptions::New(::google::protobuf::Arena* arena) const {
  FileOptions* n = new FileOptions;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void FileOptions::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.FileOptions)
  _extensions_.Clear();
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(FileOptions, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<FileOptions*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 255u) {
    ZR_(java_multiple_files_, cc_generic_services_);
    if (has_java_package()) {
      java_package_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_java_outer_classname()) {
      java_outer_classname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    optimize_for_ = 1;
    if (has_go_package()) {
      go_package_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }
  if (_has_bits_[8 / 32] & 16128u) {
    ZR_(java_generic_services_, cc_enable_arenas_);
    if (has_objc_class_prefix()) {
      objc_class_prefix_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_csharp_namespace()) {
      csharp_namespace_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }

#undef ZR_HELPER_
#undef ZR_

  uninterpreted_option_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool FileOptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.FileOptions)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(16383);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string java_package = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_java_package()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->java_package().data(), this->java_package().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.FileOptions.java_package");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(66)) goto parse_java_outer_classname;
        break;
      }

      // optional string java_outer_classname = 8;
      case 8: {
        if (tag == 66) {
         parse_java_outer_classname:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_java_outer_classname()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->java_outer_classname().data(), this->java_outer_classname().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.FileOptions.java_outer_classname");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(72)) goto parse_optimize_for;
        break;
      }

      // optional .google.protobuf.FileOptions.OptimizeMode optimize_for = 9 [default = SPEED];
      case 9: {
        if (tag == 72) {
         parse_optimize_for:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::google::protobuf::FileOptions_OptimizeMode_IsValid(value)) {
            set_optimize_for(static_cast< ::google::protobuf::FileOptions_OptimizeMode >(value));
          } else {
            mutable_unknown_fields()->AddVarint(9, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(80)) goto parse_java_multiple_files;
        break;
      }

      // optional bool java_multiple_files = 10 [default = false];
      case 10: {
        if (tag == 80) {
         parse_java_multiple_files:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &java_multiple_files_)));
          set_has_java_multiple_files();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(90)) goto parse_go_package;
        break;
      }

      // optional string go_package = 11;
      case 11: {
        if (tag == 90) {
         parse_go_package:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_go_package()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->go_package().data(), this->go_package().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.FileOptions.go_package");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(128)) goto parse_cc_generic_services;
        break;
      }

      // optional bool cc_generic_services = 16 [default = false];
      case 16: {
        if (tag == 128) {
         parse_cc_generic_services:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &cc_generic_services_)));
          set_has_cc_generic_services();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(136)) goto parse_java_generic_services;
        break;
      }

      // optional bool java_generic_services = 17 [default = false];
      case 17: {
        if (tag == 136) {
         parse_java_generic_services:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &java_generic_services_)));
          set_has_java_generic_services();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(144)) goto parse_py_generic_services;
        break;
      }

      // optional bool py_generic_services = 18 [default = false];
      case 18: {
        if (tag == 144) {
         parse_py_generic_services:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &py_generic_services_)));
          set_has_py_generic_services();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(160)) goto parse_java_generate_equals_and_hash;
        break;
      }

      // optional bool java_generate_equals_and_hash = 20 [default = false];
      case 20: {
        if (tag == 160) {
         parse_java_generate_equals_and_hash:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &java_generate_equals_and_hash_)));
          set_has_java_generate_equals_and_hash();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(184)) goto parse_deprecated;
        break;
      }

      // optional bool deprecated = 23 [default = false];
      case 23: {
        if (tag == 184) {
         parse_deprecated:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &deprecated_)));
          set_has_deprecated();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(216)) goto parse_java_string_check_utf8;
        break;
      }

      // optional bool java_string_check_utf8 = 27 [default = false];
      case 27: {
        if (tag == 216) {
         parse_java_string_check_utf8:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &java_string_check_utf8_)));
          set_has_java_string_check_utf8();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(248)) goto parse_cc_enable_arenas;
        break;
      }

      // optional bool cc_enable_arenas = 31 [default = false];
      case 31: {
        if (tag == 248) {
         parse_cc_enable_arenas:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &cc_enable_arenas_)));
          set_has_cc_enable_arenas();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(290)) goto parse_objc_class_prefix;
        break;
      }

      // optional string objc_class_prefix = 36;
      case 36: {
        if (tag == 290) {
         parse_objc_class_prefix:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_objc_class_prefix()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->objc_class_prefix().data(), this->objc_class_prefix().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.FileOptions.objc_class_prefix");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(298)) goto parse_csharp_namespace;
        break;
      }

      // optional string csharp_namespace = 37;
      case 37: {
        if (tag == 298) {
         parse_csharp_namespace:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_csharp_namespace()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->csharp_namespace().data(), this->csharp_namespace().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.FileOptions.csharp_namespace");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(7994)) goto parse_uninterpreted_option;
        break;
      }

      // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
      case 999: {
        if (tag == 7994) {
         parse_uninterpreted_option:
          DO_(input->IncrementRecursionDepth());
         parse_loop_uninterpreted_option:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_uninterpreted_option()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(7994)) goto parse_loop_uninterpreted_option;
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
        if ((8000u <= tag)) {
          DO_(_extensions_.ParseField(tag, input, default_instance_,
                                      mutable_unknown_fields()));
          continue;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.FileOptions)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.FileOptions)
  return false;
#undef DO_
}

void FileOptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.FileOptions)
  // optional string java_package = 1;
  if (has_java_package()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->java_package().data(), this->java_package().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.FileOptions.java_package");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->java_package(), output);
  }

  // optional string java_outer_classname = 8;
  if (has_java_outer_classname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->java_outer_classname().data(), this->java_outer_classname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.FileOptions.java_outer_classname");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      8, this->java_outer_classname(), output);
  }

  // optional .google.protobuf.FileOptions.OptimizeMode optimize_for = 9 [default = SPEED];
  if (has_optimize_for()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      9, this->optimize_for(), output);
  }

  // optional bool java_multiple_files = 10 [default = false];
  if (has_java_multiple_files()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(10, this->java_multiple_files(), output);
  }

  // optional string go_package = 11;
  if (has_go_package()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->go_package().data(), this->go_package().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.FileOptions.go_package");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      11, this->go_package(), output);
  }

  // optional bool cc_generic_services = 16 [default = false];
  if (has_cc_generic_services()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(16, this->cc_generic_services(), output);
  }

  // optional bool java_generic_services = 17 [default = false];
  if (has_java_generic_services()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(17, this->java_generic_services(), output);
  }

  // optional bool py_generic_services = 18 [default = false];
  if (has_py_generic_services()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(18, this->py_generic_services(), output);
  }

  // optional bool java_generate_equals_and_hash = 20 [default = false];
  if (has_java_generate_equals_and_hash()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(20, this->java_generate_equals_and_hash(), output);
  }

  // optional bool deprecated = 23 [default = false];
  if (has_deprecated()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(23, this->deprecated(), output);
  }

  // optional bool java_string_check_utf8 = 27 [default = false];
  if (has_java_string_check_utf8()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(27, this->java_string_check_utf8(), output);
  }

  // optional bool cc_enable_arenas = 31 [default = false];
  if (has_cc_enable_arenas()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(31, this->cc_enable_arenas(), output);
  }

  // optional string objc_class_prefix = 36;
  if (has_objc_class_prefix()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->objc_class_prefix().data(), this->objc_class_prefix().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.FileOptions.objc_class_prefix");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      36, this->objc_class_prefix(), output);
  }

  // optional string csharp_namespace = 37;
  if (has_csharp_namespace()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->csharp_namespace().data(), this->csharp_namespace().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.FileOptions.csharp_namespace");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      37, this->csharp_namespace(), output);
  }

  // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
  for (unsigned int i = 0, n = this->uninterpreted_option_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      999, this->uninterpreted_option(i), output);
  }

  // Extension range [1000, 536870912)
  _extensions_.SerializeWithCachedSizes(
      1000, 536870912, output);

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.FileOptions)
}

::google::protobuf::uint8* FileOptions::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.FileOptions)
  // optional string java_package = 1;
  if (has_java_package()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->java_package().data(), this->java_package().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.FileOptions.java_package");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->java_package(), target);
  }

  // optional string java_outer_classname = 8;
  if (has_java_outer_classname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->java_outer_classname().data(), this->java_outer_classname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.FileOptions.java_outer_classname");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        8, this->java_outer_classname(), target);
  }

  // optional .google.protobuf.FileOptions.OptimizeMode optimize_for = 9 [default = SPEED];
  if (has_optimize_for()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      9, this->optimize_for(), target);
  }

  // optional bool java_multiple_files = 10 [default = false];
  if (has_java_multiple_files()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(10, this->java_multiple_files(), target);
  }

  // optional string go_package = 11;
  if (has_go_package()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->go_package().data(), this->go_package().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.FileOptions.go_package");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        11, this->go_package(), target);
  }

  // optional bool cc_generic_services = 16 [default = false];
  if (has_cc_generic_services()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(16, this->cc_generic_services(), target);
  }

  // optional bool java_generic_services = 17 [default = false];
  if (has_java_generic_services()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(17, this->java_generic_services(), target);
  }

  // optional bool py_generic_services = 18 [default = false];
  if (has_py_generic_services()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(18, this->py_generic_services(), target);
  }

  // optional bool java_generate_equals_and_hash = 20 [default = false];
  if (has_java_generate_equals_and_hash()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(20, this->java_generate_equals_and_hash(), target);
  }

  // optional bool deprecated = 23 [default = false];
  if (has_deprecated()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(23, this->deprecated(), target);
  }

  // optional bool java_string_check_utf8 = 27 [default = false];
  if (has_java_string_check_utf8()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(27, this->java_string_check_utf8(), target);
  }

  // optional bool cc_enable_arenas = 31 [default = false];
  if (has_cc_enable_arenas()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(31, this->cc_enable_arenas(), target);
  }

  // optional string objc_class_prefix = 36;
  if (has_objc_class_prefix()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->objc_class_prefix().data(), this->objc_class_prefix().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.FileOptions.objc_class_prefix");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        36, this->objc_class_prefix(), target);
  }

  // optional string csharp_namespace = 37;
  if (has_csharp_namespace()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->csharp_namespace().data(), this->csharp_namespace().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.FileOptions.csharp_namespace");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        37, this->csharp_namespace(), target);
  }

  // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
  for (unsigned int i = 0, n = this->uninterpreted_option_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        999, this->uninterpreted_option(i), false, target);
  }

  // Extension range [1000, 536870912)
  target = _extensions_.InternalSerializeWithCachedSizesToArray(
      1000, 536870912, false, target);

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.FileOptions)
  return target;
}

int FileOptions::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.FileOptions)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 255u) {
    // optional string java_package = 1;
    if (has_java_package()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->java_package());
    }

    // optional string java_outer_classname = 8;
    if (has_java_outer_classname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->java_outer_classname());
    }

    // optional bool java_multiple_files = 10 [default = false];
    if (has_java_multiple_files()) {
      total_size += 1 + 1;
    }

    // optional bool java_generate_equals_and_hash = 20 [default = false];
    if (has_java_generate_equals_and_hash()) {
      total_size += 2 + 1;
    }

    // optional bool java_string_check_utf8 = 27 [default = false];
    if (has_java_string_check_utf8()) {
      total_size += 2 + 1;
    }

    // optional .google.protobuf.FileOptions.OptimizeMode optimize_for = 9 [default = SPEED];
    if (has_optimize_for()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->optimize_for());
    }

    // optional string go_package = 11;
    if (has_go_package()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->go_package());
    }

    // optional bool cc_generic_services = 16 [default = false];
    if (has_cc_generic_services()) {
      total_size += 2 + 1;
    }

  }
  if (_has_bits_[8 / 32] & 16128u) {
    // optional bool java_generic_services = 17 [default = false];
    if (has_java_generic_services()) {
      total_size += 2 + 1;
    }

    // optional bool py_generic_services = 18 [default = false];
    if (has_py_generic_services()) {
      total_size += 2 + 1;
    }

    // optional bool deprecated = 23 [default = false];
    if (has_deprecated()) {
      total_size += 2 + 1;
    }

    // optional bool cc_enable_arenas = 31 [default = false];
    if (has_cc_enable_arenas()) {
      total_size += 2 + 1;
    }

    // optional string objc_class_prefix = 36;
    if (has_objc_class_prefix()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->objc_class_prefix());
    }

    // optional string csharp_namespace = 37;
    if (has_csharp_namespace()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->csharp_namespace());
    }

  }
  // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
  total_size += 2 * this->uninterpreted_option_size();
  for (int i = 0; i < this->uninterpreted_option_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->uninterpreted_option(i));
  }

  total_size += _extensions_.ByteSize();

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FileOptions::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.FileOptions)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const FileOptions* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const FileOptions>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.FileOptions)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.FileOptions)
    MergeFrom(*source);
  }
}

void FileOptions::MergeFrom(const FileOptions& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.FileOptions)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  uninterpreted_option_.MergeFrom(from.uninterpreted_option_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_java_package()) {
      set_has_java_package();
      java_package_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.java_package_);
    }
    if (from.has_java_outer_classname()) {
      set_has_java_outer_classname();
      java_outer_classname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.java_outer_classname_);
    }
    if (from.has_java_multiple_files()) {
      set_java_multiple_files(from.java_multiple_files());
    }
    if (from.has_java_generate_equals_and_hash()) {
      set_java_generate_equals_and_hash(from.java_generate_equals_and_hash());
    }
    if (from.has_java_string_check_utf8()) {
      set_java_string_check_utf8(from.java_string_check_utf8());
    }
    if (from.has_optimize_for()) {
      set_optimize_for(from.optimize_for());
    }
    if (from.has_go_package()) {
      set_has_go_package();
      go_package_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.go_package_);
    }
    if (from.has_cc_generic_services()) {
      set_cc_generic_services(from.cc_generic_services());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_java_generic_services()) {
      set_java_generic_services(from.java_generic_services());
    }
    if (from.has_py_generic_services()) {
      set_py_generic_services(from.py_generic_services());
    }
    if (from.has_deprecated()) {
      set_deprecated(from.deprecated());
    }
    if (from.has_cc_enable_arenas()) {
      set_cc_enable_arenas(from.cc_enable_arenas());
    }
    if (from.has_objc_class_prefix()) {
      set_has_objc_class_prefix();
      objc_class_prefix_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.objc_class_prefix_);
    }
    if (from.has_csharp_namespace()) {
      set_has_csharp_namespace();
      csharp_namespace_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.csharp_namespace_);
    }
  }
  _extensions_.MergeFrom(from._extensions_);
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void FileOptions::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.FileOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FileOptions::CopyFrom(const FileOptions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.FileOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FileOptions::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->uninterpreted_option())) return false;

  if (!_extensions_.IsInitialized()) return false;  return true;
}

void FileOptions::Swap(FileOptions* other) {
  if (other == this) return;
  InternalSwap(other);
}
void FileOptions::InternalSwap(FileOptions* other) {
  java_package_.Swap(&other->java_package_);
  java_outer_classname_.Swap(&other->java_outer_classname_);
  std::swap(java_multiple_files_, other->java_multiple_files_);
  std::swap(java_generate_equals_and_hash_, other->java_generate_equals_and_hash_);
  std::swap(java_string_check_utf8_, other->java_string_check_utf8_);
  std::swap(optimize_for_, other->optimize_for_);
  go_package_.Swap(&other->go_package_);
  std::swap(cc_generic_services_, other->cc_generic_services_);
  std::swap(java_generic_services_, other->java_generic_services_);
  std::swap(py_generic_services_, other->py_generic_services_);
  std::swap(deprecated_, other->deprecated_);
  std::swap(cc_enable_arenas_, other->cc_enable_arenas_);
  objc_class_prefix_.Swap(&other->objc_class_prefix_);
  csharp_namespace_.Swap(&other->csharp_namespace_);
  uninterpreted_option_.UnsafeArenaSwap(&other->uninterpreted_option_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
  _extensions_.Swap(&other->_extensions_);
}

::google::protobuf::Metadata FileOptions::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FileOptions_descriptor_;
  metadata.reflection = FileOptions_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// FileOptions

// optional string java_package = 1;
bool FileOptions::has_java_package() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void FileOptions::set_has_java_package() {
  _has_bits_[0] |= 0x00000001u;
}
void FileOptions::clear_has_java_package() {
  _has_bits_[0] &= ~0x00000001u;
}
void FileOptions::clear_java_package() {
  java_package_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_java_package();
}
 const ::std::string& FileOptions::java_package() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FileOptions.java_package)
  return java_package_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void FileOptions::set_java_package(const ::std::string& value) {
  set_has_java_package();
  java_package_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.FileOptions.java_package)
}
 void FileOptions::set_java_package(const char* value) {
  set_has_java_package();
  java_package_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.FileOptions.java_package)
}
 void FileOptions::set_java_package(const char* value, size_t size) {
  set_has_java_package();
  java_package_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.FileOptions.java_package)
}
 ::std::string* FileOptions::mutable_java_package() {
  set_has_java_package();
  // @@protoc_insertion_point(field_mutable:google.protobuf.FileOptions.java_package)
  return java_package_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* FileOptions::release_java_package() {
  // @@protoc_insertion_point(field_release:google.protobuf.FileOptions.java_package)
  clear_has_java_package();
  return java_package_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void FileOptions::set_allocated_java_package(::std::string* java_package) {
  if (java_package != NULL) {
    set_has_java_package();
  } else {
    clear_has_java_package();
  }
  java_package_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), java_package);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.FileOptions.java_package)
}

// optional string java_outer_classname = 8;
bool FileOptions::has_java_outer_classname() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void FileOptions::set_has_java_outer_classname() {
  _has_bits_[0] |= 0x00000002u;
}
void FileOptions::clear_has_java_outer_classname() {
  _has_bits_[0] &= ~0x00000002u;
}
void FileOptions::clear_java_outer_classname() {
  java_outer_classname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_java_outer_classname();
}
 const ::std::string& FileOptions::java_outer_classname() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FileOptions.java_outer_classname)
  return java_outer_classname_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void FileOptions::set_java_outer_classname(const ::std::string& value) {
  set_has_java_outer_classname();
  java_outer_classname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.FileOptions.java_outer_classname)
}
 void FileOptions::set_java_outer_classname(const char* value) {
  set_has_java_outer_classname();
  java_outer_classname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.FileOptions.java_outer_classname)
}
 void FileOptions::set_java_outer_classname(const char* value, size_t size) {
  set_has_java_outer_classname();
  java_outer_classname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.FileOptions.java_outer_classname)
}
 ::std::string* FileOptions::mutable_java_outer_classname() {
  set_has_java_outer_classname();
  // @@protoc_insertion_point(field_mutable:google.protobuf.FileOptions.java_outer_classname)
  return java_outer_classname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* FileOptions::release_java_outer_classname() {
  // @@protoc_insertion_point(field_release:google.protobuf.FileOptions.java_outer_classname)
  clear_has_java_outer_classname();
  return java_outer_classname_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void FileOptions::set_allocated_java_outer_classname(::std::string* java_outer_classname) {
  if (java_outer_classname != NULL) {
    set_has_java_outer_classname();
  } else {
    clear_has_java_outer_classname();
  }
  java_outer_classname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), java_outer_classname);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.FileOptions.java_outer_classname)
}

// optional bool java_multiple_files = 10 [default = false];
bool FileOptions::has_java_multiple_files() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void FileOptions::set_has_java_multiple_files() {
  _has_bits_[0] |= 0x00000004u;
}
void FileOptions::clear_has_java_multiple_files() {
  _has_bits_[0] &= ~0x00000004u;
}
void FileOptions::clear_java_multiple_files() {
  java_multiple_files_ = false;
  clear_has_java_multiple_files();
}
 bool FileOptions::java_multiple_files() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FileOptions.java_multiple_files)
  return java_multiple_files_;
}
 void FileOptions::set_java_multiple_files(bool value) {
  set_has_java_multiple_files();
  java_multiple_files_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.FileOptions.java_multiple_files)
}

// optional bool java_generate_equals_and_hash = 20 [default = false];
bool FileOptions::has_java_generate_equals_and_hash() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void FileOptions::set_has_java_generate_equals_and_hash() {
  _has_bits_[0] |= 0x00000008u;
}
void FileOptions::clear_has_java_generate_equals_and_hash() {
  _has_bits_[0] &= ~0x00000008u;
}
void FileOptions::clear_java_generate_equals_and_hash() {
  java_generate_equals_and_hash_ = false;
  clear_has_java_generate_equals_and_hash();
}
 bool FileOptions::java_generate_equals_and_hash() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FileOptions.java_generate_equals_and_hash)
  return java_generate_equals_and_hash_;
}
 void FileOptions::set_java_generate_equals_and_hash(bool value) {
  set_has_java_generate_equals_and_hash();
  java_generate_equals_and_hash_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.FileOptions.java_generate_equals_and_hash)
}

// optional bool java_string_check_utf8 = 27 [default = false];
bool FileOptions::has_java_string_check_utf8() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void FileOptions::set_has_java_string_check_utf8() {
  _has_bits_[0] |= 0x00000010u;
}
void FileOptions::clear_has_java_string_check_utf8() {
  _has_bits_[0] &= ~0x00000010u;
}
void FileOptions::clear_java_string_check_utf8() {
  java_string_check_utf8_ = false;
  clear_has_java_string_check_utf8();
}
 bool FileOptions::java_string_check_utf8() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FileOptions.java_string_check_utf8)
  return java_string_check_utf8_;
}
 void FileOptions::set_java_string_check_utf8(bool value) {
  set_has_java_string_check_utf8();
  java_string_check_utf8_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.FileOptions.java_string_check_utf8)
}

// optional .google.protobuf.FileOptions.OptimizeMode optimize_for = 9 [default = SPEED];
bool FileOptions::has_optimize_for() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void FileOptions::set_has_optimize_for() {
  _has_bits_[0] |= 0x00000020u;
}
void FileOptions::clear_has_optimize_for() {
  _has_bits_[0] &= ~0x00000020u;
}
void FileOptions::clear_optimize_for() {
  optimize_for_ = 1;
  clear_has_optimize_for();
}
 ::google::protobuf::FileOptions_OptimizeMode FileOptions::optimize_for() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FileOptions.optimize_for)
  return static_cast< ::google::protobuf::FileOptions_OptimizeMode >(optimize_for_);
}
 void FileOptions::set_optimize_for(::google::protobuf::FileOptions_OptimizeMode value) {
  assert(::google::protobuf::FileOptions_OptimizeMode_IsValid(value));
  set_has_optimize_for();
  optimize_for_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.FileOptions.optimize_for)
}

// optional string go_package = 11;
bool FileOptions::has_go_package() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
void FileOptions::set_has_go_package() {
  _has_bits_[0] |= 0x00000040u;
}
void FileOptions::clear_has_go_package() {
  _has_bits_[0] &= ~0x00000040u;
}
void FileOptions::clear_go_package() {
  go_package_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_go_package();
}
 const ::std::string& FileOptions::go_package() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FileOptions.go_package)
  return go_package_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void FileOptions::set_go_package(const ::std::string& value) {
  set_has_go_package();
  go_package_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.FileOptions.go_package)
}
 void FileOptions::set_go_package(const char* value) {
  set_has_go_package();
  go_package_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.FileOptions.go_package)
}
 void FileOptions::set_go_package(const char* value, size_t size) {
  set_has_go_package();
  go_package_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.FileOptions.go_package)
}
 ::std::string* FileOptions::mutable_go_package() {
  set_has_go_package();
  // @@protoc_insertion_point(field_mutable:google.protobuf.FileOptions.go_package)
  return go_package_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* FileOptions::release_go_package() {
  // @@protoc_insertion_point(field_release:google.protobuf.FileOptions.go_package)
  clear_has_go_package();
  return go_package_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void FileOptions::set_allocated_go_package(::std::string* go_package) {
  if (go_package != NULL) {
    set_has_go_package();
  } else {
    clear_has_go_package();
  }
  go_package_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), go_package);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.FileOptions.go_package)
}

// optional bool cc_generic_services = 16 [default = false];
bool FileOptions::has_cc_generic_services() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
void FileOptions::set_has_cc_generic_services() {
  _has_bits_[0] |= 0x00000080u;
}
void FileOptions::clear_has_cc_generic_services() {
  _has_bits_[0] &= ~0x00000080u;
}
void FileOptions::clear_cc_generic_services() {
  cc_generic_services_ = false;
  clear_has_cc_generic_services();
}
 bool FileOptions::cc_generic_services() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FileOptions.cc_generic_services)
  return cc_generic_services_;
}
 void FileOptions::set_cc_generic_services(bool value) {
  set_has_cc_generic_services();
  cc_generic_services_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.FileOptions.cc_generic_services)
}

// optional bool java_generic_services = 17 [default = false];
bool FileOptions::has_java_generic_services() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
void FileOptions::set_has_java_generic_services() {
  _has_bits_[0] |= 0x00000100u;
}
void FileOptions::clear_has_java_generic_services() {
  _has_bits_[0] &= ~0x00000100u;
}
void FileOptions::clear_java_generic_services() {
  java_generic_services_ = false;
  clear_has_java_generic_services();
}
 bool FileOptions::java_generic_services() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FileOptions.java_generic_services)
  return java_generic_services_;
}
 void FileOptions::set_java_generic_services(bool value) {
  set_has_java_generic_services();
  java_generic_services_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.FileOptions.java_generic_services)
}

// optional bool py_generic_services = 18 [default = false];
bool FileOptions::has_py_generic_services() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
void FileOptions::set_has_py_generic_services() {
  _has_bits_[0] |= 0x00000200u;
}
void FileOptions::clear_has_py_generic_services() {
  _has_bits_[0] &= ~0x00000200u;
}
void FileOptions::clear_py_generic_services() {
  py_generic_services_ = false;
  clear_has_py_generic_services();
}
 bool FileOptions::py_generic_services() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FileOptions.py_generic_services)
  return py_generic_services_;
}
 void FileOptions::set_py_generic_services(bool value) {
  set_has_py_generic_services();
  py_generic_services_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.FileOptions.py_generic_services)
}

// optional bool deprecated = 23 [default = false];
bool FileOptions::has_deprecated() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
void FileOptions::set_has_deprecated() {
  _has_bits_[0] |= 0x00000400u;
}
void FileOptions::clear_has_deprecated() {
  _has_bits_[0] &= ~0x00000400u;
}
void FileOptions::clear_deprecated() {
  deprecated_ = false;
  clear_has_deprecated();
}
 bool FileOptions::deprecated() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FileOptions.deprecated)
  return deprecated_;
}
 void FileOptions::set_deprecated(bool value) {
  set_has_deprecated();
  deprecated_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.FileOptions.deprecated)
}

// optional bool cc_enable_arenas = 31 [default = false];
bool FileOptions::has_cc_enable_arenas() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
void FileOptions::set_has_cc_enable_arenas() {
  _has_bits_[0] |= 0x00000800u;
}
void FileOptions::clear_has_cc_enable_arenas() {
  _has_bits_[0] &= ~0x00000800u;
}
void FileOptions::clear_cc_enable_arenas() {
  cc_enable_arenas_ = false;
  clear_has_cc_enable_arenas();
}
 bool FileOptions::cc_enable_arenas() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FileOptions.cc_enable_arenas)
  return cc_enable_arenas_;
}
 void FileOptions::set_cc_enable_arenas(bool value) {
  set_has_cc_enable_arenas();
  cc_enable_arenas_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.FileOptions.cc_enable_arenas)
}

// optional string objc_class_prefix = 36;
bool FileOptions::has_objc_class_prefix() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
void FileOptions::set_has_objc_class_prefix() {
  _has_bits_[0] |= 0x00001000u;
}
void FileOptions::clear_has_objc_class_prefix() {
  _has_bits_[0] &= ~0x00001000u;
}
void FileOptions::clear_objc_class_prefix() {
  objc_class_prefix_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_objc_class_prefix();
}
 const ::std::string& FileOptions::objc_class_prefix() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FileOptions.objc_class_prefix)
  return objc_class_prefix_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void FileOptions::set_objc_class_prefix(const ::std::string& value) {
  set_has_objc_class_prefix();
  objc_class_prefix_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.FileOptions.objc_class_prefix)
}
 void FileOptions::set_objc_class_prefix(const char* value) {
  set_has_objc_class_prefix();
  objc_class_prefix_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.FileOptions.objc_class_prefix)
}
 void FileOptions::set_objc_class_prefix(const char* value, size_t size) {
  set_has_objc_class_prefix();
  objc_class_prefix_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.FileOptions.objc_class_prefix)
}
 ::std::string* FileOptions::mutable_objc_class_prefix() {
  set_has_objc_class_prefix();
  // @@protoc_insertion_point(field_mutable:google.protobuf.FileOptions.objc_class_prefix)
  return objc_class_prefix_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* FileOptions::release_objc_class_prefix() {
  // @@protoc_insertion_point(field_release:google.protobuf.FileOptions.objc_class_prefix)
  clear_has_objc_class_prefix();
  return objc_class_prefix_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void FileOptions::set_allocated_objc_class_prefix(::std::string* objc_class_prefix) {
  if (objc_class_prefix != NULL) {
    set_has_objc_class_prefix();
  } else {
    clear_has_objc_class_prefix();
  }
  objc_class_prefix_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), objc_class_prefix);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.FileOptions.objc_class_prefix)
}

// optional string csharp_namespace = 37;
bool FileOptions::has_csharp_namespace() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
void FileOptions::set_has_csharp_namespace() {
  _has_bits_[0] |= 0x00002000u;
}
void FileOptions::clear_has_csharp_namespace() {
  _has_bits_[0] &= ~0x00002000u;
}
void FileOptions::clear_csharp_namespace() {
  csharp_namespace_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_csharp_namespace();
}
 const ::std::string& FileOptions::csharp_namespace() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FileOptions.csharp_namespace)
  return csharp_namespace_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void FileOptions::set_csharp_namespace(const ::std::string& value) {
  set_has_csharp_namespace();
  csharp_namespace_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.FileOptions.csharp_namespace)
}
 void FileOptions::set_csharp_namespace(const char* value) {
  set_has_csharp_namespace();
  csharp_namespace_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.FileOptions.csharp_namespace)
}
 void FileOptions::set_csharp_namespace(const char* value, size_t size) {
  set_has_csharp_namespace();
  csharp_namespace_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.FileOptions.csharp_namespace)
}
 ::std::string* FileOptions::mutable_csharp_namespace() {
  set_has_csharp_namespace();
  // @@protoc_insertion_point(field_mutable:google.protobuf.FileOptions.csharp_namespace)
  return csharp_namespace_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* FileOptions::release_csharp_namespace() {
  // @@protoc_insertion_point(field_release:google.protobuf.FileOptions.csharp_namespace)
  clear_has_csharp_namespace();
  return csharp_namespace_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void FileOptions::set_allocated_csharp_namespace(::std::string* csharp_namespace) {
  if (csharp_namespace != NULL) {
    set_has_csharp_namespace();
  } else {
    clear_has_csharp_namespace();
  }
  csharp_namespace_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), csharp_namespace);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.FileOptions.csharp_namespace)
}

// repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
int FileOptions::uninterpreted_option_size() const {
  return uninterpreted_option_.size();
}
void FileOptions::clear_uninterpreted_option() {
  uninterpreted_option_.Clear();
}
const ::google::protobuf::UninterpretedOption& FileOptions::uninterpreted_option(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.FileOptions.uninterpreted_option)
  return uninterpreted_option_.Get(index);
}
::google::protobuf::UninterpretedOption* FileOptions::mutable_uninterpreted_option(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.FileOptions.uninterpreted_option)
  return uninterpreted_option_.Mutable(index);
}
::google::protobuf::UninterpretedOption* FileOptions::add_uninterpreted_option() {
  // @@protoc_insertion_point(field_add:google.protobuf.FileOptions.uninterpreted_option)
  return uninterpreted_option_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::UninterpretedOption >*
FileOptions::mutable_uninterpreted_option() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.FileOptions.uninterpreted_option)
  return &uninterpreted_option_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::UninterpretedOption >&
FileOptions::uninterpreted_option() const {
  // @@protoc_insertion_point(field_list:google.protobuf.FileOptions.uninterpreted_option)
  return uninterpreted_option_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MessageOptions::kMessageSetWireFormatFieldNumber;
const int MessageOptions::kNoStandardDescriptorAccessorFieldNumber;
const int MessageOptions::kDeprecatedFieldNumber;
const int MessageOptions::kMapEntryFieldNumber;
const int MessageOptions::kUninterpretedOptionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MessageOptions::MessageOptions()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.MessageOptions)
}

void MessageOptions::InitAsDefaultInstance() {
}

MessageOptions::MessageOptions(const MessageOptions& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.MessageOptions)
}

void MessageOptions::SharedCtor() {
  _cached_size_ = 0;
  message_set_wire_format_ = false;
  no_standard_descriptor_accessor_ = false;
  deprecated_ = false;
  map_entry_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MessageOptions::~MessageOptions() {
  // @@protoc_insertion_point(destructor:google.protobuf.MessageOptions)
  SharedDtor();
}

void MessageOptions::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MessageOptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MessageOptions::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MessageOptions_descriptor_;
}

const MessageOptions& MessageOptions::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  return *default_instance_;
}

MessageOptions* MessageOptions::default_instance_ = NULL;

MessageOptions* MessageOptions::New(::google::protobuf::Arena* arena) const {
  MessageOptions* n = new MessageOptions;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MessageOptions::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.MessageOptions)
  _extensions_.Clear();
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(MessageOptions, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<MessageOptions*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(message_set_wire_format_, map_entry_);

#undef ZR_HELPER_
#undef ZR_

  uninterpreted_option_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool MessageOptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.MessageOptions)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(16383);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool message_set_wire_format = 1 [default = false];
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &message_set_wire_format_)));
          set_has_message_set_wire_format();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_no_standard_descriptor_accessor;
        break;
      }

      // optional bool no_standard_descriptor_accessor = 2 [default = false];
      case 2: {
        if (tag == 16) {
         parse_no_standard_descriptor_accessor:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &no_standard_descriptor_accessor_)));
          set_has_no_standard_descriptor_accessor();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_deprecated;
        break;
      }

      // optional bool deprecated = 3 [default = false];
      case 3: {
        if (tag == 24) {
         parse_deprecated:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &deprecated_)));
          set_has_deprecated();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(56)) goto parse_map_entry;
        break;
      }

      // optional bool map_entry = 7;
      case 7: {
        if (tag == 56) {
         parse_map_entry:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &map_entry_)));
          set_has_map_entry();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(7994)) goto parse_uninterpreted_option;
        break;
      }

      // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
      case 999: {
        if (tag == 7994) {
         parse_uninterpreted_option:
          DO_(input->IncrementRecursionDepth());
         parse_loop_uninterpreted_option:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_uninterpreted_option()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(7994)) goto parse_loop_uninterpreted_option;
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
        if ((8000u <= tag)) {
          DO_(_extensions_.ParseField(tag, input, default_instance_,
                                      mutable_unknown_fields()));
          continue;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.MessageOptions)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.MessageOptions)
  return false;
#undef DO_
}

void MessageOptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.MessageOptions)
  // optional bool message_set_wire_format = 1 [default = false];
  if (has_message_set_wire_format()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->message_set_wire_format(), output);
  }

  // optional bool no_standard_descriptor_accessor = 2 [default = false];
  if (has_no_standard_descriptor_accessor()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->no_standard_descriptor_accessor(), output);
  }

  // optional bool deprecated = 3 [default = false];
  if (has_deprecated()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->deprecated(), output);
  }

  // optional bool map_entry = 7;
  if (has_map_entry()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(7, this->map_entry(), output);
  }

  // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
  for (unsigned int i = 0, n = this->uninterpreted_option_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      999, this->uninterpreted_option(i), output);
  }

  // Extension range [1000, 536870912)
  _extensions_.SerializeWithCachedSizes(
      1000, 536870912, output);

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.MessageOptions)
}

::google::protobuf::uint8* MessageOptions::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.MessageOptions)
  // optional bool message_set_wire_format = 1 [default = false];
  if (has_message_set_wire_format()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->message_set_wire_format(), target);
  }

  // optional bool no_standard_descriptor_accessor = 2 [default = false];
  if (has_no_standard_descriptor_accessor()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->no_standard_descriptor_accessor(), target);
  }

  // optional bool deprecated = 3 [default = false];
  if (has_deprecated()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->deprecated(), target);
  }

  // optional bool map_entry = 7;
  if (has_map_entry()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(7, this->map_entry(), target);
  }

  // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
  for (unsigned int i = 0, n = this->uninterpreted_option_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        999, this->uninterpreted_option(i), false, target);
  }

  // Extension range [1000, 536870912)
  target = _extensions_.InternalSerializeWithCachedSizesToArray(
      1000, 536870912, false, target);

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.MessageOptions)
  return target;
}

int MessageOptions::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.MessageOptions)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 15u) {
    // optional bool message_set_wire_format = 1 [default = false];
    if (has_message_set_wire_format()) {
      total_size += 1 + 1;
    }

    // optional bool no_standard_descriptor_accessor = 2 [default = false];
    if (has_no_standard_descriptor_accessor()) {
      total_size += 1 + 1;
    }

    // optional bool deprecated = 3 [default = false];
    if (has_deprecated()) {
      total_size += 1 + 1;
    }

    // optional bool map_entry = 7;
    if (has_map_entry()) {
      total_size += 1 + 1;
    }

  }
  // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
  total_size += 2 * this->uninterpreted_option_size();
  for (int i = 0; i < this->uninterpreted_option_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->uninterpreted_option(i));
  }

  total_size += _extensions_.ByteSize();

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MessageOptions::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.MessageOptions)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const MessageOptions* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const MessageOptions>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.MessageOptions)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.MessageOptions)
    MergeFrom(*source);
  }
}

void MessageOptions::MergeFrom(const MessageOptions& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.MessageOptions)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  uninterpreted_option_.MergeFrom(from.uninterpreted_option_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_message_set_wire_format()) {
      set_message_set_wire_format(from.message_set_wire_format());
    }
    if (from.has_no_standard_descriptor_accessor()) {
      set_no_standard_descriptor_accessor(from.no_standard_descriptor_accessor());
    }
    if (from.has_deprecated()) {
      set_deprecated(from.deprecated());
    }
    if (from.has_map_entry()) {
      set_map_entry(from.map_entry());
    }
  }
  _extensions_.MergeFrom(from._extensions_);
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void MessageOptions::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.MessageOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MessageOptions::CopyFrom(const MessageOptions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.MessageOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageOptions::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->uninterpreted_option())) return false;

  if (!_extensions_.IsInitialized()) return false;  return true;
}

void MessageOptions::Swap(MessageOptions* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MessageOptions::InternalSwap(MessageOptions* other) {
  std::swap(message_set_wire_format_, other->message_set_wire_format_);
  std::swap(no_standard_descriptor_accessor_, other->no_standard_descriptor_accessor_);
  std::swap(deprecated_, other->deprecated_);
  std::swap(map_entry_, other->map_entry_);
  uninterpreted_option_.UnsafeArenaSwap(&other->uninterpreted_option_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
  _extensions_.Swap(&other->_extensions_);
}

::google::protobuf::Metadata MessageOptions::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MessageOptions_descriptor_;
  metadata.reflection = MessageOptions_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MessageOptions

// optional bool message_set_wire_format = 1 [default = false];
bool MessageOptions::has_message_set_wire_format() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void MessageOptions::set_has_message_set_wire_format() {
  _has_bits_[0] |= 0x00000001u;
}
void MessageOptions::clear_has_message_set_wire_format() {
  _has_bits_[0] &= ~0x00000001u;
}
void MessageOptions::clear_message_set_wire_format() {
  message_set_wire_format_ = false;
  clear_has_message_set_wire_format();
}
 bool MessageOptions::message_set_wire_format() const {
  // @@protoc_insertion_point(field_get:google.protobuf.MessageOptions.message_set_wire_format)
  return message_set_wire_format_;
}
 void MessageOptions::set_message_set_wire_format(bool value) {
  set_has_message_set_wire_format();
  message_set_wire_format_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.MessageOptions.message_set_wire_format)
}

// optional bool no_standard_descriptor_accessor = 2 [default = false];
bool MessageOptions::has_no_standard_descriptor_accessor() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void MessageOptions::set_has_no_standard_descriptor_accessor() {
  _has_bits_[0] |= 0x00000002u;
}
void MessageOptions::clear_has_no_standard_descriptor_accessor() {
  _has_bits_[0] &= ~0x00000002u;
}
void MessageOptions::clear_no_standard_descriptor_accessor() {
  no_standard_descriptor_accessor_ = false;
  clear_has_no_standard_descriptor_accessor();
}
 bool MessageOptions::no_standard_descriptor_accessor() const {
  // @@protoc_insertion_point(field_get:google.protobuf.MessageOptions.no_standard_descriptor_accessor)
  return no_standard_descriptor_accessor_;
}
 void MessageOptions::set_no_standard_descriptor_accessor(bool value) {
  set_has_no_standard_descriptor_accessor();
  no_standard_descriptor_accessor_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.MessageOptions.no_standard_descriptor_accessor)
}

// optional bool deprecated = 3 [default = false];
bool MessageOptions::has_deprecated() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void MessageOptions::set_has_deprecated() {
  _has_bits_[0] |= 0x00000004u;
}
void MessageOptions::clear_has_deprecated() {
  _has_bits_[0] &= ~0x00000004u;
}
void MessageOptions::clear_deprecated() {
  deprecated_ = false;
  clear_has_deprecated();
}
 bool MessageOptions::deprecated() const {
  // @@protoc_insertion_point(field_get:google.protobuf.MessageOptions.deprecated)
  return deprecated_;
}
 void MessageOptions::set_deprecated(bool value) {
  set_has_deprecated();
  deprecated_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.MessageOptions.deprecated)
}

// optional bool map_entry = 7;
bool MessageOptions::has_map_entry() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void MessageOptions::set_has_map_entry() {
  _has_bits_[0] |= 0x00000008u;
}
void MessageOptions::clear_has_map_entry() {
  _has_bits_[0] &= ~0x00000008u;
}
void MessageOptions::clear_map_entry() {
  map_entry_ = false;
  clear_has_map_entry();
}
 bool MessageOptions::map_entry() const {
  // @@protoc_insertion_point(field_get:google.protobuf.MessageOptions.map_entry)
  return map_entry_;
}
 void MessageOptions::set_map_entry(bool value) {
  set_has_map_entry();
  map_entry_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.MessageOptions.map_entry)
}

// repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
int MessageOptions::uninterpreted_option_size() const {
  return uninterpreted_option_.size();
}
void MessageOptions::clear_uninterpreted_option() {
  uninterpreted_option_.Clear();
}
const ::google::protobuf::UninterpretedOption& MessageOptions::uninterpreted_option(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.MessageOptions.uninterpreted_option)
  return uninterpreted_option_.Get(index);
}
::google::protobuf::UninterpretedOption* MessageOptions::mutable_uninterpreted_option(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.MessageOptions.uninterpreted_option)
  return uninterpreted_option_.Mutable(index);
}
::google::protobuf::UninterpretedOption* MessageOptions::add_uninterpreted_option() {
  // @@protoc_insertion_point(field_add:google.protobuf.MessageOptions.uninterpreted_option)
  return uninterpreted_option_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::UninterpretedOption >*
MessageOptions::mutable_uninterpreted_option() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.MessageOptions.uninterpreted_option)
  return &uninterpreted_option_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::UninterpretedOption >&
MessageOptions::uninterpreted_option() const {
  // @@protoc_insertion_point(field_list:google.protobuf.MessageOptions.uninterpreted_option)
  return uninterpreted_option_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

const ::google::protobuf::EnumDescriptor* FieldOptions_CType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FieldOptions_CType_descriptor_;
}
bool FieldOptions_CType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const FieldOptions_CType FieldOptions::STRING;
const FieldOptions_CType FieldOptions::CORD;
const FieldOptions_CType FieldOptions::STRING_PIECE;
const FieldOptions_CType FieldOptions::CType_MIN;
const FieldOptions_CType FieldOptions::CType_MAX;
const int FieldOptions::CType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
const ::google::protobuf::EnumDescriptor* FieldOptions_JSType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FieldOptions_JSType_descriptor_;
}
bool FieldOptions_JSType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const FieldOptions_JSType FieldOptions::JS_NORMAL;
const FieldOptions_JSType FieldOptions::JS_STRING;
const FieldOptions_JSType FieldOptions::JS_NUMBER;
const FieldOptions_JSType FieldOptions::JSType_MIN;
const FieldOptions_JSType FieldOptions::JSType_MAX;
const int FieldOptions::JSType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int FieldOptions::kCtypeFieldNumber;
const int FieldOptions::kPackedFieldNumber;
const int FieldOptions::kJstypeFieldNumber;
const int FieldOptions::kLazyFieldNumber;
const int FieldOptions::kDeprecatedFieldNumber;
const int FieldOptions::kWeakFieldNumber;
const int FieldOptions::kUninterpretedOptionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

FieldOptions::FieldOptions()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.FieldOptions)
}

void FieldOptions::InitAsDefaultInstance() {
}

FieldOptions::FieldOptions(const FieldOptions& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.FieldOptions)
}

void FieldOptions::SharedCtor() {
  _cached_size_ = 0;
  ctype_ = 0;
  packed_ = false;
  jstype_ = 0;
  lazy_ = false;
  deprecated_ = false;
  weak_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FieldOptions::~FieldOptions() {
  // @@protoc_insertion_point(destructor:google.protobuf.FieldOptions)
  SharedDtor();
}

void FieldOptions::SharedDtor() {
  if (this != default_instance_) {
  }
}

void FieldOptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FieldOptions::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FieldOptions_descriptor_;
}

const FieldOptions& FieldOptions::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  return *default_instance_;
}

FieldOptions* FieldOptions::default_instance_ = NULL;

FieldOptions* FieldOptions::New(::google::protobuf::Arena* arena) const {
  FieldOptions* n = new FieldOptions;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void FieldOptions::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.FieldOptions)
  _extensions_.Clear();
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(FieldOptions, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<FieldOptions*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 63u) {
    ZR_(ctype_, jstype_);
    ZR_(packed_, weak_);
  }

#undef ZR_HELPER_
#undef ZR_

  uninterpreted_option_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool FieldOptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.FieldOptions)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(16383);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .google.protobuf.FieldOptions.CType ctype = 1 [default = STRING];
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::google::protobuf::FieldOptions_CType_IsValid(value)) {
            set_ctype(static_cast< ::google::protobuf::FieldOptions_CType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_packed;
        break;
      }

      // optional bool packed = 2;
      case 2: {
        if (tag == 16) {
         parse_packed:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &packed_)));
          set_has_packed();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_deprecated;
        break;
      }

      // optional bool deprecated = 3 [default = false];
      case 3: {
        if (tag == 24) {
         parse_deprecated:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &deprecated_)));
          set_has_deprecated();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_lazy;
        break;
      }

      // optional bool lazy = 5 [default = false];
      case 5: {
        if (tag == 40) {
         parse_lazy:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &lazy_)));
          set_has_lazy();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_jstype;
        break;
      }

      // optional .google.protobuf.FieldOptions.JSType jstype = 6 [default = JS_NORMAL];
      case 6: {
        if (tag == 48) {
         parse_jstype:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::google::protobuf::FieldOptions_JSType_IsValid(value)) {
            set_jstype(static_cast< ::google::protobuf::FieldOptions_JSType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(6, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(80)) goto parse_weak;
        break;
      }

      // optional bool weak = 10 [default = false];
      case 10: {
        if (tag == 80) {
         parse_weak:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &weak_)));
          set_has_weak();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(7994)) goto parse_uninterpreted_option;
        break;
      }

      // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
      case 999: {
        if (tag == 7994) {
         parse_uninterpreted_option:
          DO_(input->IncrementRecursionDepth());
         parse_loop_uninterpreted_option:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_uninterpreted_option()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(7994)) goto parse_loop_uninterpreted_option;
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
        if ((8000u <= tag)) {
          DO_(_extensions_.ParseField(tag, input, default_instance_,
                                      mutable_unknown_fields()));
          continue;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.FieldOptions)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.FieldOptions)
  return false;
#undef DO_
}

void FieldOptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.FieldOptions)
  // optional .google.protobuf.FieldOptions.CType ctype = 1 [default = STRING];
  if (has_ctype()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->ctype(), output);
  }

  // optional bool packed = 2;
  if (has_packed()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->packed(), output);
  }

  // optional bool deprecated = 3 [default = false];
  if (has_deprecated()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->deprecated(), output);
  }

  // optional bool lazy = 5 [default = false];
  if (has_lazy()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->lazy(), output);
  }

  // optional .google.protobuf.FieldOptions.JSType jstype = 6 [default = JS_NORMAL];
  if (has_jstype()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      6, this->jstype(), output);
  }

  // optional bool weak = 10 [default = false];
  if (has_weak()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(10, this->weak(), output);
  }

  // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
  for (unsigned int i = 0, n = this->uninterpreted_option_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      999, this->uninterpreted_option(i), output);
  }

  // Extension range [1000, 536870912)
  _extensions_.SerializeWithCachedSizes(
      1000, 536870912, output);

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.FieldOptions)
}

::google::protobuf::uint8* FieldOptions::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.FieldOptions)
  // optional .google.protobuf.FieldOptions.CType ctype = 1 [default = STRING];
  if (has_ctype()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->ctype(), target);
  }

  // optional bool packed = 2;
  if (has_packed()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->packed(), target);
  }

  // optional bool deprecated = 3 [default = false];
  if (has_deprecated()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->deprecated(), target);
  }

  // optional bool lazy = 5 [default = false];
  if (has_lazy()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, this->lazy(), target);
  }

  // optional .google.protobuf.FieldOptions.JSType jstype = 6 [default = JS_NORMAL];
  if (has_jstype()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      6, this->jstype(), target);
  }

  // optional bool weak = 10 [default = false];
  if (has_weak()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(10, this->weak(), target);
  }

  // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
  for (unsigned int i = 0, n = this->uninterpreted_option_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        999, this->uninterpreted_option(i), false, target);
  }

  // Extension range [1000, 536870912)
  target = _extensions_.InternalSerializeWithCachedSizesToArray(
      1000, 536870912, false, target);

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.FieldOptions)
  return target;
}

int FieldOptions::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.FieldOptions)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 63u) {
    // optional .google.protobuf.FieldOptions.CType ctype = 1 [default = STRING];
    if (has_ctype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->ctype());
    }

    // optional bool packed = 2;
    if (has_packed()) {
      total_size += 1 + 1;
    }

    // optional .google.protobuf.FieldOptions.JSType jstype = 6 [default = JS_NORMAL];
    if (has_jstype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->jstype());
    }

    // optional bool lazy = 5 [default = false];
    if (has_lazy()) {
      total_size += 1 + 1;
    }

    // optional bool deprecated = 3 [default = false];
    if (has_deprecated()) {
      total_size += 1 + 1;
    }

    // optional bool weak = 10 [default = false];
    if (has_weak()) {
      total_size += 1 + 1;
    }

  }
  // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
  total_size += 2 * this->uninterpreted_option_size();
  for (int i = 0; i < this->uninterpreted_option_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->uninterpreted_option(i));
  }

  total_size += _extensions_.ByteSize();

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FieldOptions::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.FieldOptions)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const FieldOptions* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const FieldOptions>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.FieldOptions)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.FieldOptions)
    MergeFrom(*source);
  }
}

void FieldOptions::MergeFrom(const FieldOptions& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.FieldOptions)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  uninterpreted_option_.MergeFrom(from.uninterpreted_option_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_ctype()) {
      set_ctype(from.ctype());
    }
    if (from.has_packed()) {
      set_packed(from.packed());
    }
    if (from.has_jstype()) {
      set_jstype(from.jstype());
    }
    if (from.has_lazy()) {
      set_lazy(from.lazy());
    }
    if (from.has_deprecated()) {
      set_deprecated(from.deprecated());
    }
    if (from.has_weak()) {
      set_weak(from.weak());
    }
  }
  _extensions_.MergeFrom(from._extensions_);
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void FieldOptions::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.FieldOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FieldOptions::CopyFrom(const FieldOptions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.FieldOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FieldOptions::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->uninterpreted_option())) return false;

  if (!_extensions_.IsInitialized()) return false;  return true;
}

void FieldOptions::Swap(FieldOptions* other) {
  if (other == this) return;
  InternalSwap(other);
}
void FieldOptions::InternalSwap(FieldOptions* other) {
  std::swap(ctype_, other->ctype_);
  std::swap(packed_, other->packed_);
  std::swap(jstype_, other->jstype_);
  std::swap(lazy_, other->lazy_);
  std::swap(deprecated_, other->deprecated_);
  std::swap(weak_, other->weak_);
  uninterpreted_option_.UnsafeArenaSwap(&other->uninterpreted_option_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
  _extensions_.Swap(&other->_extensions_);
}

::google::protobuf::Metadata FieldOptions::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FieldOptions_descriptor_;
  metadata.reflection = FieldOptions_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// FieldOptions

// optional .google.protobuf.FieldOptions.CType ctype = 1 [default = STRING];
bool FieldOptions::has_ctype() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void FieldOptions::set_has_ctype() {
  _has_bits_[0] |= 0x00000001u;
}
void FieldOptions::clear_has_ctype() {
  _has_bits_[0] &= ~0x00000001u;
}
void FieldOptions::clear_ctype() {
  ctype_ = 0;
  clear_has_ctype();
}
 ::google::protobuf::FieldOptions_CType FieldOptions::ctype() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FieldOptions.ctype)
  return static_cast< ::google::protobuf::FieldOptions_CType >(ctype_);
}
 void FieldOptions::set_ctype(::google::protobuf::FieldOptions_CType value) {
  assert(::google::protobuf::FieldOptions_CType_IsValid(value));
  set_has_ctype();
  ctype_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.FieldOptions.ctype)
}

// optional bool packed = 2;
bool FieldOptions::has_packed() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void FieldOptions::set_has_packed() {
  _has_bits_[0] |= 0x00000002u;
}
void FieldOptions::clear_has_packed() {
  _has_bits_[0] &= ~0x00000002u;
}
void FieldOptions::clear_packed() {
  packed_ = false;
  clear_has_packed();
}
 bool FieldOptions::packed() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FieldOptions.packed)
  return packed_;
}
 void FieldOptions::set_packed(bool value) {
  set_has_packed();
  packed_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.FieldOptions.packed)
}

// optional .google.protobuf.FieldOptions.JSType jstype = 6 [default = JS_NORMAL];
bool FieldOptions::has_jstype() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void FieldOptions::set_has_jstype() {
  _has_bits_[0] |= 0x00000004u;
}
void FieldOptions::clear_has_jstype() {
  _has_bits_[0] &= ~0x00000004u;
}
void FieldOptions::clear_jstype() {
  jstype_ = 0;
  clear_has_jstype();
}
 ::google::protobuf::FieldOptions_JSType FieldOptions::jstype() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FieldOptions.jstype)
  return static_cast< ::google::protobuf::FieldOptions_JSType >(jstype_);
}
 void FieldOptions::set_jstype(::google::protobuf::FieldOptions_JSType value) {
  assert(::google::protobuf::FieldOptions_JSType_IsValid(value));
  set_has_jstype();
  jstype_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.FieldOptions.jstype)
}

// optional bool lazy = 5 [default = false];
bool FieldOptions::has_lazy() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void FieldOptions::set_has_lazy() {
  _has_bits_[0] |= 0x00000008u;
}
void FieldOptions::clear_has_lazy() {
  _has_bits_[0] &= ~0x00000008u;
}
void FieldOptions::clear_lazy() {
  lazy_ = false;
  clear_has_lazy();
}
 bool FieldOptions::lazy() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FieldOptions.lazy)
  return lazy_;
}
 void FieldOptions::set_lazy(bool value) {
  set_has_lazy();
  lazy_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.FieldOptions.lazy)
}

// optional bool deprecated = 3 [default = false];
bool FieldOptions::has_deprecated() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void FieldOptions::set_has_deprecated() {
  _has_bits_[0] |= 0x00000010u;
}
void FieldOptions::clear_has_deprecated() {
  _has_bits_[0] &= ~0x00000010u;
}
void FieldOptions::clear_deprecated() {
  deprecated_ = false;
  clear_has_deprecated();
}
 bool FieldOptions::deprecated() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FieldOptions.deprecated)
  return deprecated_;
}
 void FieldOptions::set_deprecated(bool value) {
  set_has_deprecated();
  deprecated_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.FieldOptions.deprecated)
}

// optional bool weak = 10 [default = false];
bool FieldOptions::has_weak() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void FieldOptions::set_has_weak() {
  _has_bits_[0] |= 0x00000020u;
}
void FieldOptions::clear_has_weak() {
  _has_bits_[0] &= ~0x00000020u;
}
void FieldOptions::clear_weak() {
  weak_ = false;
  clear_has_weak();
}
 bool FieldOptions::weak() const {
  // @@protoc_insertion_point(field_get:google.protobuf.FieldOptions.weak)
  return weak_;
}
 void FieldOptions::set_weak(bool value) {
  set_has_weak();
  weak_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.FieldOptions.weak)
}

// repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
int FieldOptions::uninterpreted_option_size() const {
  return uninterpreted_option_.size();
}
void FieldOptions::clear_uninterpreted_option() {
  uninterpreted_option_.Clear();
}
const ::google::protobuf::UninterpretedOption& FieldOptions::uninterpreted_option(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.FieldOptions.uninterpreted_option)
  return uninterpreted_option_.Get(index);
}
::google::protobuf::UninterpretedOption* FieldOptions::mutable_uninterpreted_option(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.FieldOptions.uninterpreted_option)
  return uninterpreted_option_.Mutable(index);
}
::google::protobuf::UninterpretedOption* FieldOptions::add_uninterpreted_option() {
  // @@protoc_insertion_point(field_add:google.protobuf.FieldOptions.uninterpreted_option)
  return uninterpreted_option_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::UninterpretedOption >*
FieldOptions::mutable_uninterpreted_option() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.FieldOptions.uninterpreted_option)
  return &uninterpreted_option_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::UninterpretedOption >&
FieldOptions::uninterpreted_option() const {
  // @@protoc_insertion_point(field_list:google.protobuf.FieldOptions.uninterpreted_option)
  return uninterpreted_option_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int OneofOptions::kUninterpretedOptionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

OneofOptions::OneofOptions()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.OneofOptions)
}

void OneofOptions::InitAsDefaultInstance() {
}

OneofOptions::OneofOptions(const OneofOptions& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.OneofOptions)
}

void OneofOptions::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

OneofOptions::~OneofOptions() {
  // @@protoc_insertion_point(destructor:google.protobuf.OneofOptions)
  SharedDtor();
}

void OneofOptions::SharedDtor() {
  if (this != default_instance_) {
  }
}

void OneofOptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OneofOptions::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OneofOptions_descriptor_;
}

const OneofOptions& OneofOptions::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  return *default_instance_;
}

OneofOptions* OneofOptions::default_instance_ = NULL;

OneofOptions* OneofOptions::New(::google::protobuf::Arena* arena) const {
  OneofOptions* n = new OneofOptions;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void OneofOptions::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.OneofOptions)
  _extensions_.Clear();
  uninterpreted_option_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool OneofOptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.OneofOptions)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(16383);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
      case 999: {
        if (tag == 7994) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_uninterpreted_option:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_uninterpreted_option()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(7994)) goto parse_loop_uninterpreted_option;
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
        if ((8000u <= tag)) {
          DO_(_extensions_.ParseField(tag, input, default_instance_,
                                      mutable_unknown_fields()));
          continue;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.OneofOptions)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.OneofOptions)
  return false;
#undef DO_
}

void OneofOptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.OneofOptions)
  // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
  for (unsigned int i = 0, n = this->uninterpreted_option_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      999, this->uninterpreted_option(i), output);
  }

  // Extension range [1000, 536870912)
  _extensions_.SerializeWithCachedSizes(
      1000, 536870912, output);

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.OneofOptions)
}

::google::protobuf::uint8* OneofOptions::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.OneofOptions)
  // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
  for (unsigned int i = 0, n = this->uninterpreted_option_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        999, this->uninterpreted_option(i), false, target);
  }

  // Extension range [1000, 536870912)
  target = _extensions_.InternalSerializeWithCachedSizesToArray(
      1000, 536870912, false, target);

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.OneofOptions)
  return target;
}

int OneofOptions::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.OneofOptions)
  int total_size = 0;

  // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
  total_size += 2 * this->uninterpreted_option_size();
  for (int i = 0; i < this->uninterpreted_option_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->uninterpreted_option(i));
  }

  total_size += _extensions_.ByteSize();

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void OneofOptions::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.OneofOptions)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const OneofOptions* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const OneofOptions>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.OneofOptions)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.OneofOptions)
    MergeFrom(*source);
  }
}

void OneofOptions::MergeFrom(const OneofOptions& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.OneofOptions)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  uninterpreted_option_.MergeFrom(from.uninterpreted_option_);
  _extensions_.MergeFrom(from._extensions_);
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void OneofOptions::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.OneofOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OneofOptions::CopyFrom(const OneofOptions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.OneofOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OneofOptions::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->uninterpreted_option())) return false;

  if (!_extensions_.IsInitialized()) return false;  return true;
}

void OneofOptions::Swap(OneofOptions* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OneofOptions::InternalSwap(OneofOptions* other) {
  uninterpreted_option_.UnsafeArenaSwap(&other->uninterpreted_option_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
  _extensions_.Swap(&other->_extensions_);
}

::google::protobuf::Metadata OneofOptions::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = OneofOptions_descriptor_;
  metadata.reflection = OneofOptions_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// OneofOptions

// repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
int OneofOptions::uninterpreted_option_size() const {
  return uninterpreted_option_.size();
}
void OneofOptions::clear_uninterpreted_option() {
  uninterpreted_option_.Clear();
}
const ::google::protobuf::UninterpretedOption& OneofOptions::uninterpreted_option(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.OneofOptions.uninterpreted_option)
  return uninterpreted_option_.Get(index);
}
::google::protobuf::UninterpretedOption* OneofOptions::mutable_uninterpreted_option(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.OneofOptions.uninterpreted_option)
  return uninterpreted_option_.Mutable(index);
}
::google::protobuf::UninterpretedOption* OneofOptions::add_uninterpreted_option() {
  // @@protoc_insertion_point(field_add:google.protobuf.OneofOptions.uninterpreted_option)
  return uninterpreted_option_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::UninterpretedOption >*
OneofOptions::mutable_uninterpreted_option() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.OneofOptions.uninterpreted_option)
  return &uninterpreted_option_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::UninterpretedOption >&
OneofOptions::uninterpreted_option() const {
  // @@protoc_insertion_point(field_list:google.protobuf.OneofOptions.uninterpreted_option)
  return uninterpreted_option_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EnumOptions::kAllowAliasFieldNumber;
const int EnumOptions::kDeprecatedFieldNumber;
const int EnumOptions::kUninterpretedOptionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EnumOptions::EnumOptions()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.EnumOptions)
}

void EnumOptions::InitAsDefaultInstance() {
}

EnumOptions::EnumOptions(const EnumOptions& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.EnumOptions)
}

void EnumOptions::SharedCtor() {
  _cached_size_ = 0;
  allow_alias_ = false;
  deprecated_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

EnumOptions::~EnumOptions() {
  // @@protoc_insertion_point(destructor:google.protobuf.EnumOptions)
  SharedDtor();
}

void EnumOptions::SharedDtor() {
  if (this != default_instance_) {
  }
}

void EnumOptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* EnumOptions::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EnumOptions_descriptor_;
}

const EnumOptions& EnumOptions::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  return *default_instance_;
}

EnumOptions* EnumOptions::default_instance_ = NULL;

EnumOptions* EnumOptions::New(::google::protobuf::Arena* arena) const {
  EnumOptions* n = new EnumOptions;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void EnumOptions::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.EnumOptions)
  _extensions_.Clear();
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(EnumOptions, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<EnumOptions*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(allow_alias_, deprecated_);

#undef ZR_HELPER_
#undef ZR_

  uninterpreted_option_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool EnumOptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.EnumOptions)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(16383);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool allow_alias = 2;
      case 2: {
        if (tag == 16) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &allow_alias_)));
          set_has_allow_alias();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_deprecated;
        break;
      }

      // optional bool deprecated = 3 [default = false];
      case 3: {
        if (tag == 24) {
         parse_deprecated:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &deprecated_)));
          set_has_deprecated();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(7994)) goto parse_uninterpreted_option;
        break;
      }

      // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
      case 999: {
        if (tag == 7994) {
         parse_uninterpreted_option:
          DO_(input->IncrementRecursionDepth());
         parse_loop_uninterpreted_option:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_uninterpreted_option()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(7994)) goto parse_loop_uninterpreted_option;
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
        if ((8000u <= tag)) {
          DO_(_extensions_.ParseField(tag, input, default_instance_,
                                      mutable_unknown_fields()));
          continue;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.EnumOptions)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.EnumOptions)
  return false;
#undef DO_
}

void EnumOptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.EnumOptions)
  // optional bool allow_alias = 2;
  if (has_allow_alias()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->allow_alias(), output);
  }

  // optional bool deprecated = 3 [default = false];
  if (has_deprecated()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->deprecated(), output);
  }

  // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
  for (unsigned int i = 0, n = this->uninterpreted_option_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      999, this->uninterpreted_option(i), output);
  }

  // Extension range [1000, 536870912)
  _extensions_.SerializeWithCachedSizes(
      1000, 536870912, output);

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.EnumOptions)
}

::google::protobuf::uint8* EnumOptions::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.EnumOptions)
  // optional bool allow_alias = 2;
  if (has_allow_alias()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->allow_alias(), target);
  }

  // optional bool deprecated = 3 [default = false];
  if (has_deprecated()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->deprecated(), target);
  }

  // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
  for (unsigned int i = 0, n = this->uninterpreted_option_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        999, this->uninterpreted_option(i), false, target);
  }

  // Extension range [1000, 536870912)
  target = _extensions_.InternalSerializeWithCachedSizesToArray(
      1000, 536870912, false, target);

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.EnumOptions)
  return target;
}

int EnumOptions::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.EnumOptions)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 3u) {
    // optional bool allow_alias = 2;
    if (has_allow_alias()) {
      total_size += 1 + 1;
    }

    // optional bool deprecated = 3 [default = false];
    if (has_deprecated()) {
      total_size += 1 + 1;
    }

  }
  // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
  total_size += 2 * this->uninterpreted_option_size();
  for (int i = 0; i < this->uninterpreted_option_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->uninterpreted_option(i));
  }

  total_size += _extensions_.ByteSize();

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EnumOptions::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.EnumOptions)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const EnumOptions* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const EnumOptions>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.EnumOptions)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.EnumOptions)
    MergeFrom(*source);
  }
}

void EnumOptions::MergeFrom(const EnumOptions& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.EnumOptions)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  uninterpreted_option_.MergeFrom(from.uninterpreted_option_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_allow_alias()) {
      set_allow_alias(from.allow_alias());
    }
    if (from.has_deprecated()) {
      set_deprecated(from.deprecated());
    }
  }
  _extensions_.MergeFrom(from._extensions_);
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void EnumOptions::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.EnumOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EnumOptions::CopyFrom(const EnumOptions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.EnumOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EnumOptions::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->uninterpreted_option())) return false;

  if (!_extensions_.IsInitialized()) return false;  return true;
}

void EnumOptions::Swap(EnumOptions* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EnumOptions::InternalSwap(EnumOptions* other) {
  std::swap(allow_alias_, other->allow_alias_);
  std::swap(deprecated_, other->deprecated_);
  uninterpreted_option_.UnsafeArenaSwap(&other->uninterpreted_option_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
  _extensions_.Swap(&other->_extensions_);
}

::google::protobuf::Metadata EnumOptions::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = EnumOptions_descriptor_;
  metadata.reflection = EnumOptions_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// EnumOptions

// optional bool allow_alias = 2;
bool EnumOptions::has_allow_alias() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void EnumOptions::set_has_allow_alias() {
  _has_bits_[0] |= 0x00000001u;
}
void EnumOptions::clear_has_allow_alias() {
  _has_bits_[0] &= ~0x00000001u;
}
void EnumOptions::clear_allow_alias() {
  allow_alias_ = false;
  clear_has_allow_alias();
}
 bool EnumOptions::allow_alias() const {
  // @@protoc_insertion_point(field_get:google.protobuf.EnumOptions.allow_alias)
  return allow_alias_;
}
 void EnumOptions::set_allow_alias(bool value) {
  set_has_allow_alias();
  allow_alias_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.EnumOptions.allow_alias)
}

// optional bool deprecated = 3 [default = false];
bool EnumOptions::has_deprecated() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void EnumOptions::set_has_deprecated() {
  _has_bits_[0] |= 0x00000002u;
}
void EnumOptions::clear_has_deprecated() {
  _has_bits_[0] &= ~0x00000002u;
}
void EnumOptions::clear_deprecated() {
  deprecated_ = false;
  clear_has_deprecated();
}
 bool EnumOptions::deprecated() const {
  // @@protoc_insertion_point(field_get:google.protobuf.EnumOptions.deprecated)
  return deprecated_;
}
 void EnumOptions::set_deprecated(bool value) {
  set_has_deprecated();
  deprecated_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.EnumOptions.deprecated)
}

// repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
int EnumOptions::uninterpreted_option_size() const {
  return uninterpreted_option_.size();
}
void EnumOptions::clear_uninterpreted_option() {
  uninterpreted_option_.Clear();
}
const ::google::protobuf::UninterpretedOption& EnumOptions::uninterpreted_option(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.EnumOptions.uninterpreted_option)
  return uninterpreted_option_.Get(index);
}
::google::protobuf::UninterpretedOption* EnumOptions::mutable_uninterpreted_option(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.EnumOptions.uninterpreted_option)
  return uninterpreted_option_.Mutable(index);
}
::google::protobuf::UninterpretedOption* EnumOptions::add_uninterpreted_option() {
  // @@protoc_insertion_point(field_add:google.protobuf.EnumOptions.uninterpreted_option)
  return uninterpreted_option_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::UninterpretedOption >*
EnumOptions::mutable_uninterpreted_option() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.EnumOptions.uninterpreted_option)
  return &uninterpreted_option_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::UninterpretedOption >&
EnumOptions::uninterpreted_option() const {
  // @@protoc_insertion_point(field_list:google.protobuf.EnumOptions.uninterpreted_option)
  return uninterpreted_option_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EnumValueOptions::kDeprecatedFieldNumber;
const int EnumValueOptions::kUninterpretedOptionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EnumValueOptions::EnumValueOptions()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.EnumValueOptions)
}

void EnumValueOptions::InitAsDefaultInstance() {
}

EnumValueOptions::EnumValueOptions(const EnumValueOptions& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.EnumValueOptions)
}

void EnumValueOptions::SharedCtor() {
  _cached_size_ = 0;
  deprecated_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

EnumValueOptions::~EnumValueOptions() {
  // @@protoc_insertion_point(destructor:google.protobuf.EnumValueOptions)
  SharedDtor();
}

void EnumValueOptions::SharedDtor() {
  if (this != default_instance_) {
  }
}

void EnumValueOptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* EnumValueOptions::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EnumValueOptions_descriptor_;
}

const EnumValueOptions& EnumValueOptions::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  return *default_instance_;
}

EnumValueOptions* EnumValueOptions::default_instance_ = NULL;

EnumValueOptions* EnumValueOptions::New(::google::protobuf::Arena* arena) const {
  EnumValueOptions* n = new EnumValueOptions;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void EnumValueOptions::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.EnumValueOptions)
  _extensions_.Clear();
  deprecated_ = false;
  uninterpreted_option_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool EnumValueOptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.EnumValueOptions)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(16383);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool deprecated = 1 [default = false];
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &deprecated_)));
          set_has_deprecated();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(7994)) goto parse_uninterpreted_option;
        break;
      }

      // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
      case 999: {
        if (tag == 7994) {
         parse_uninterpreted_option:
          DO_(input->IncrementRecursionDepth());
         parse_loop_uninterpreted_option:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_uninterpreted_option()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(7994)) goto parse_loop_uninterpreted_option;
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
        if ((8000u <= tag)) {
          DO_(_extensions_.ParseField(tag, input, default_instance_,
                                      mutable_unknown_fields()));
          continue;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.EnumValueOptions)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.EnumValueOptions)
  return false;
#undef DO_
}

void EnumValueOptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.EnumValueOptions)
  // optional bool deprecated = 1 [default = false];
  if (has_deprecated()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->deprecated(), output);
  }

  // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
  for (unsigned int i = 0, n = this->uninterpreted_option_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      999, this->uninterpreted_option(i), output);
  }

  // Extension range [1000, 536870912)
  _extensions_.SerializeWithCachedSizes(
      1000, 536870912, output);

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.EnumValueOptions)
}

::google::protobuf::uint8* EnumValueOptions::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.EnumValueOptions)
  // optional bool deprecated = 1 [default = false];
  if (has_deprecated()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->deprecated(), target);
  }

  // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
  for (unsigned int i = 0, n = this->uninterpreted_option_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        999, this->uninterpreted_option(i), false, target);
  }

  // Extension range [1000, 536870912)
  target = _extensions_.InternalSerializeWithCachedSizesToArray(
      1000, 536870912, false, target);

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.EnumValueOptions)
  return target;
}

int EnumValueOptions::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.EnumValueOptions)
  int total_size = 0;

  // optional bool deprecated = 1 [default = false];
  if (has_deprecated()) {
    total_size += 1 + 1;
  }

  // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
  total_size += 2 * this->uninterpreted_option_size();
  for (int i = 0; i < this->uninterpreted_option_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->uninterpreted_option(i));
  }

  total_size += _extensions_.ByteSize();

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EnumValueOptions::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.EnumValueOptions)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const EnumValueOptions* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const EnumValueOptions>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.EnumValueOptions)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.EnumValueOptions)
    MergeFrom(*source);
  }
}

void EnumValueOptions::MergeFrom(const EnumValueOptions& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.EnumValueOptions)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  uninterpreted_option_.MergeFrom(from.uninterpreted_option_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_deprecated()) {
      set_deprecated(from.deprecated());
    }
  }
  _extensions_.MergeFrom(from._extensions_);
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void EnumValueOptions::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.EnumValueOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EnumValueOptions::CopyFrom(const EnumValueOptions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.EnumValueOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EnumValueOptions::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->uninterpreted_option())) return false;

  if (!_extensions_.IsInitialized()) return false;  return true;
}

void EnumValueOptions::Swap(EnumValueOptions* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EnumValueOptions::InternalSwap(EnumValueOptions* other) {
  std::swap(deprecated_, other->deprecated_);
  uninterpreted_option_.UnsafeArenaSwap(&other->uninterpreted_option_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
  _extensions_.Swap(&other->_extensions_);
}

::google::protobuf::Metadata EnumValueOptions::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = EnumValueOptions_descriptor_;
  metadata.reflection = EnumValueOptions_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// EnumValueOptions

// optional bool deprecated = 1 [default = false];
bool EnumValueOptions::has_deprecated() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void EnumValueOptions::set_has_deprecated() {
  _has_bits_[0] |= 0x00000001u;
}
void EnumValueOptions::clear_has_deprecated() {
  _has_bits_[0] &= ~0x00000001u;
}
void EnumValueOptions::clear_deprecated() {
  deprecated_ = false;
  clear_has_deprecated();
}
 bool EnumValueOptions::deprecated() const {
  // @@protoc_insertion_point(field_get:google.protobuf.EnumValueOptions.deprecated)
  return deprecated_;
}
 void EnumValueOptions::set_deprecated(bool value) {
  set_has_deprecated();
  deprecated_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.EnumValueOptions.deprecated)
}

// repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
int EnumValueOptions::uninterpreted_option_size() const {
  return uninterpreted_option_.size();
}
void EnumValueOptions::clear_uninterpreted_option() {
  uninterpreted_option_.Clear();
}
const ::google::protobuf::UninterpretedOption& EnumValueOptions::uninterpreted_option(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.EnumValueOptions.uninterpreted_option)
  return uninterpreted_option_.Get(index);
}
::google::protobuf::UninterpretedOption* EnumValueOptions::mutable_uninterpreted_option(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.EnumValueOptions.uninterpreted_option)
  return uninterpreted_option_.Mutable(index);
}
::google::protobuf::UninterpretedOption* EnumValueOptions::add_uninterpreted_option() {
  // @@protoc_insertion_point(field_add:google.protobuf.EnumValueOptions.uninterpreted_option)
  return uninterpreted_option_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::UninterpretedOption >*
EnumValueOptions::mutable_uninterpreted_option() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.EnumValueOptions.uninterpreted_option)
  return &uninterpreted_option_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::UninterpretedOption >&
EnumValueOptions::uninterpreted_option() const {
  // @@protoc_insertion_point(field_list:google.protobuf.EnumValueOptions.uninterpreted_option)
  return uninterpreted_option_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ServiceOptions::kDeprecatedFieldNumber;
const int ServiceOptions::kUninterpretedOptionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ServiceOptions::ServiceOptions()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.ServiceOptions)
}

void ServiceOptions::InitAsDefaultInstance() {
}

ServiceOptions::ServiceOptions(const ServiceOptions& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.ServiceOptions)
}

void ServiceOptions::SharedCtor() {
  _cached_size_ = 0;
  deprecated_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ServiceOptions::~ServiceOptions() {
  // @@protoc_insertion_point(destructor:google.protobuf.ServiceOptions)
  SharedDtor();
}

void ServiceOptions::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ServiceOptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ServiceOptions::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ServiceOptions_descriptor_;
}

const ServiceOptions& ServiceOptions::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  return *default_instance_;
}

ServiceOptions* ServiceOptions::default_instance_ = NULL;

ServiceOptions* ServiceOptions::New(::google::protobuf::Arena* arena) const {
  ServiceOptions* n = new ServiceOptions;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ServiceOptions::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.ServiceOptions)
  _extensions_.Clear();
  deprecated_ = false;
  uninterpreted_option_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool ServiceOptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.ServiceOptions)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(16383);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool deprecated = 33 [default = false];
      case 33: {
        if (tag == 264) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &deprecated_)));
          set_has_deprecated();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(7994)) goto parse_uninterpreted_option;
        break;
      }

      // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
      case 999: {
        if (tag == 7994) {
         parse_uninterpreted_option:
          DO_(input->IncrementRecursionDepth());
         parse_loop_uninterpreted_option:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_uninterpreted_option()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(7994)) goto parse_loop_uninterpreted_option;
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
        if ((8000u <= tag)) {
          DO_(_extensions_.ParseField(tag, input, default_instance_,
                                      mutable_unknown_fields()));
          continue;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.ServiceOptions)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.ServiceOptions)
  return false;
#undef DO_
}

void ServiceOptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.ServiceOptions)
  // optional bool deprecated = 33 [default = false];
  if (has_deprecated()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(33, this->deprecated(), output);
  }

  // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
  for (unsigned int i = 0, n = this->uninterpreted_option_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      999, this->uninterpreted_option(i), output);
  }

  // Extension range [1000, 536870912)
  _extensions_.SerializeWithCachedSizes(
      1000, 536870912, output);

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.ServiceOptions)
}

::google::protobuf::uint8* ServiceOptions::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.ServiceOptions)
  // optional bool deprecated = 33 [default = false];
  if (has_deprecated()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(33, this->deprecated(), target);
  }

  // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
  for (unsigned int i = 0, n = this->uninterpreted_option_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        999, this->uninterpreted_option(i), false, target);
  }

  // Extension range [1000, 536870912)
  target = _extensions_.InternalSerializeWithCachedSizesToArray(
      1000, 536870912, false, target);

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.ServiceOptions)
  return target;
}

int ServiceOptions::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.ServiceOptions)
  int total_size = 0;

  // optional bool deprecated = 33 [default = false];
  if (has_deprecated()) {
    total_size += 2 + 1;
  }

  // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
  total_size += 2 * this->uninterpreted_option_size();
  for (int i = 0; i < this->uninterpreted_option_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->uninterpreted_option(i));
  }

  total_size += _extensions_.ByteSize();

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ServiceOptions::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.ServiceOptions)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const ServiceOptions* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ServiceOptions>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.ServiceOptions)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.ServiceOptions)
    MergeFrom(*source);
  }
}

void ServiceOptions::MergeFrom(const ServiceOptions& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.ServiceOptions)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  uninterpreted_option_.MergeFrom(from.uninterpreted_option_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_deprecated()) {
      set_deprecated(from.deprecated());
    }
  }
  _extensions_.MergeFrom(from._extensions_);
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void ServiceOptions::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.ServiceOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ServiceOptions::CopyFrom(const ServiceOptions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.ServiceOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ServiceOptions::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->uninterpreted_option())) return false;

  if (!_extensions_.IsInitialized()) return false;  return true;
}

void ServiceOptions::Swap(ServiceOptions* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ServiceOptions::InternalSwap(ServiceOptions* other) {
  std::swap(deprecated_, other->deprecated_);
  uninterpreted_option_.UnsafeArenaSwap(&other->uninterpreted_option_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
  _extensions_.Swap(&other->_extensions_);
}

::google::protobuf::Metadata ServiceOptions::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ServiceOptions_descriptor_;
  metadata.reflection = ServiceOptions_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ServiceOptions

// optional bool deprecated = 33 [default = false];
bool ServiceOptions::has_deprecated() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ServiceOptions::set_has_deprecated() {
  _has_bits_[0] |= 0x00000001u;
}
void ServiceOptions::clear_has_deprecated() {
  _has_bits_[0] &= ~0x00000001u;
}
void ServiceOptions::clear_deprecated() {
  deprecated_ = false;
  clear_has_deprecated();
}
 bool ServiceOptions::deprecated() const {
  // @@protoc_insertion_point(field_get:google.protobuf.ServiceOptions.deprecated)
  return deprecated_;
}
 void ServiceOptions::set_deprecated(bool value) {
  set_has_deprecated();
  deprecated_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.ServiceOptions.deprecated)
}

// repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
int ServiceOptions::uninterpreted_option_size() const {
  return uninterpreted_option_.size();
}
void ServiceOptions::clear_uninterpreted_option() {
  uninterpreted_option_.Clear();
}
const ::google::protobuf::UninterpretedOption& ServiceOptions::uninterpreted_option(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.ServiceOptions.uninterpreted_option)
  return uninterpreted_option_.Get(index);
}
::google::protobuf::UninterpretedOption* ServiceOptions::mutable_uninterpreted_option(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.ServiceOptions.uninterpreted_option)
  return uninterpreted_option_.Mutable(index);
}
::google::protobuf::UninterpretedOption* ServiceOptions::add_uninterpreted_option() {
  // @@protoc_insertion_point(field_add:google.protobuf.ServiceOptions.uninterpreted_option)
  return uninterpreted_option_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::UninterpretedOption >*
ServiceOptions::mutable_uninterpreted_option() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.ServiceOptions.uninterpreted_option)
  return &uninterpreted_option_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::UninterpretedOption >&
ServiceOptions::uninterpreted_option() const {
  // @@protoc_insertion_point(field_list:google.protobuf.ServiceOptions.uninterpreted_option)
  return uninterpreted_option_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MethodOptions::kDeprecatedFieldNumber;
const int MethodOptions::kUninterpretedOptionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MethodOptions::MethodOptions()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.MethodOptions)
}

void MethodOptions::InitAsDefaultInstance() {
}

MethodOptions::MethodOptions(const MethodOptions& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.MethodOptions)
}

void MethodOptions::SharedCtor() {
  _cached_size_ = 0;
  deprecated_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MethodOptions::~MethodOptions() {
  // @@protoc_insertion_point(destructor:google.protobuf.MethodOptions)
  SharedDtor();
}

void MethodOptions::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MethodOptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MethodOptions::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MethodOptions_descriptor_;
}

const MethodOptions& MethodOptions::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  return *default_instance_;
}

MethodOptions* MethodOptions::default_instance_ = NULL;

MethodOptions* MethodOptions::New(::google::protobuf::Arena* arena) const {
  MethodOptions* n = new MethodOptions;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MethodOptions::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.MethodOptions)
  _extensions_.Clear();
  deprecated_ = false;
  uninterpreted_option_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool MethodOptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.MethodOptions)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(16383);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool deprecated = 33 [default = false];
      case 33: {
        if (tag == 264) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &deprecated_)));
          set_has_deprecated();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(7994)) goto parse_uninterpreted_option;
        break;
      }

      // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
      case 999: {
        if (tag == 7994) {
         parse_uninterpreted_option:
          DO_(input->IncrementRecursionDepth());
         parse_loop_uninterpreted_option:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_uninterpreted_option()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(7994)) goto parse_loop_uninterpreted_option;
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
        if ((8000u <= tag)) {
          DO_(_extensions_.ParseField(tag, input, default_instance_,
                                      mutable_unknown_fields()));
          continue;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.MethodOptions)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.MethodOptions)
  return false;
#undef DO_
}

void MethodOptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.MethodOptions)
  // optional bool deprecated = 33 [default = false];
  if (has_deprecated()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(33, this->deprecated(), output);
  }

  // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
  for (unsigned int i = 0, n = this->uninterpreted_option_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      999, this->uninterpreted_option(i), output);
  }

  // Extension range [1000, 536870912)
  _extensions_.SerializeWithCachedSizes(
      1000, 536870912, output);

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.MethodOptions)
}

::google::protobuf::uint8* MethodOptions::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.MethodOptions)
  // optional bool deprecated = 33 [default = false];
  if (has_deprecated()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(33, this->deprecated(), target);
  }

  // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
  for (unsigned int i = 0, n = this->uninterpreted_option_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        999, this->uninterpreted_option(i), false, target);
  }

  // Extension range [1000, 536870912)
  target = _extensions_.InternalSerializeWithCachedSizesToArray(
      1000, 536870912, false, target);

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.MethodOptions)
  return target;
}

int MethodOptions::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.MethodOptions)
  int total_size = 0;

  // optional bool deprecated = 33 [default = false];
  if (has_deprecated()) {
    total_size += 2 + 1;
  }

  // repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
  total_size += 2 * this->uninterpreted_option_size();
  for (int i = 0; i < this->uninterpreted_option_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->uninterpreted_option(i));
  }

  total_size += _extensions_.ByteSize();

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MethodOptions::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.MethodOptions)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const MethodOptions* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const MethodOptions>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.MethodOptions)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.MethodOptions)
    MergeFrom(*source);
  }
}

void MethodOptions::MergeFrom(const MethodOptions& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.MethodOptions)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  uninterpreted_option_.MergeFrom(from.uninterpreted_option_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_deprecated()) {
      set_deprecated(from.deprecated());
    }
  }
  _extensions_.MergeFrom(from._extensions_);
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void MethodOptions::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.MethodOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MethodOptions::CopyFrom(const MethodOptions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.MethodOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MethodOptions::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->uninterpreted_option())) return false;

  if (!_extensions_.IsInitialized()) return false;  return true;
}

void MethodOptions::Swap(MethodOptions* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MethodOptions::InternalSwap(MethodOptions* other) {
  std::swap(deprecated_, other->deprecated_);
  uninterpreted_option_.UnsafeArenaSwap(&other->uninterpreted_option_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
  _extensions_.Swap(&other->_extensions_);
}

::google::protobuf::Metadata MethodOptions::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MethodOptions_descriptor_;
  metadata.reflection = MethodOptions_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MethodOptions

// optional bool deprecated = 33 [default = false];
bool MethodOptions::has_deprecated() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void MethodOptions::set_has_deprecated() {
  _has_bits_[0] |= 0x00000001u;
}
void MethodOptions::clear_has_deprecated() {
  _has_bits_[0] &= ~0x00000001u;
}
void MethodOptions::clear_deprecated() {
  deprecated_ = false;
  clear_has_deprecated();
}
 bool MethodOptions::deprecated() const {
  // @@protoc_insertion_point(field_get:google.protobuf.MethodOptions.deprecated)
  return deprecated_;
}
 void MethodOptions::set_deprecated(bool value) {
  set_has_deprecated();
  deprecated_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.MethodOptions.deprecated)
}

// repeated .google.protobuf.UninterpretedOption uninterpreted_option = 999;
int MethodOptions::uninterpreted_option_size() const {
  return uninterpreted_option_.size();
}
void MethodOptions::clear_uninterpreted_option() {
  uninterpreted_option_.Clear();
}
const ::google::protobuf::UninterpretedOption& MethodOptions::uninterpreted_option(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.MethodOptions.uninterpreted_option)
  return uninterpreted_option_.Get(index);
}
::google::protobuf::UninterpretedOption* MethodOptions::mutable_uninterpreted_option(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.MethodOptions.uninterpreted_option)
  return uninterpreted_option_.Mutable(index);
}
::google::protobuf::UninterpretedOption* MethodOptions::add_uninterpreted_option() {
  // @@protoc_insertion_point(field_add:google.protobuf.MethodOptions.uninterpreted_option)
  return uninterpreted_option_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::UninterpretedOption >*
MethodOptions::mutable_uninterpreted_option() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.MethodOptions.uninterpreted_option)
  return &uninterpreted_option_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::UninterpretedOption >&
MethodOptions::uninterpreted_option() const {
  // @@protoc_insertion_point(field_list:google.protobuf.MethodOptions.uninterpreted_option)
  return uninterpreted_option_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int UninterpretedOption_NamePart::kNamePartFieldNumber;
const int UninterpretedOption_NamePart::kIsExtensionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

UninterpretedOption_NamePart::UninterpretedOption_NamePart()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.UninterpretedOption.NamePart)
}

void UninterpretedOption_NamePart::InitAsDefaultInstance() {
}

UninterpretedOption_NamePart::UninterpretedOption_NamePart(const UninterpretedOption_NamePart& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.UninterpretedOption.NamePart)
}

void UninterpretedOption_NamePart::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_part_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  is_extension_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UninterpretedOption_NamePart::~UninterpretedOption_NamePart() {
  // @@protoc_insertion_point(destructor:google.protobuf.UninterpretedOption.NamePart)
  SharedDtor();
}

void UninterpretedOption_NamePart::SharedDtor() {
  name_part_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void UninterpretedOption_NamePart::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UninterpretedOption_NamePart::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UninterpretedOption_NamePart_descriptor_;
}

const UninterpretedOption_NamePart& UninterpretedOption_NamePart::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  return *default_instance_;
}

UninterpretedOption_NamePart* UninterpretedOption_NamePart::default_instance_ = NULL;

UninterpretedOption_NamePart* UninterpretedOption_NamePart::New(::google::protobuf::Arena* arena) const {
  UninterpretedOption_NamePart* n = new UninterpretedOption_NamePart;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void UninterpretedOption_NamePart::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.UninterpretedOption.NamePart)
  if (_has_bits_[0 / 32] & 3u) {
    if (has_name_part()) {
      name_part_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    is_extension_ = false;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool UninterpretedOption_NamePart::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.UninterpretedOption.NamePart)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string name_part = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name_part()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name_part().data(), this->name_part().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.UninterpretedOption.NamePart.name_part");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_is_extension;
        break;
      }

      // required bool is_extension = 2;
      case 2: {
        if (tag == 16) {
         parse_is_extension:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_extension_)));
          set_has_is_extension();
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.UninterpretedOption.NamePart)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.UninterpretedOption.NamePart)
  return false;
#undef DO_
}

void UninterpretedOption_NamePart::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.UninterpretedOption.NamePart)
  // required string name_part = 1;
  if (has_name_part()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name_part().data(), this->name_part().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.UninterpretedOption.NamePart.name_part");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name_part(), output);
  }

  // required bool is_extension = 2;
  if (has_is_extension()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->is_extension(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.UninterpretedOption.NamePart)
}

::google::protobuf::uint8* UninterpretedOption_NamePart::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.UninterpretedOption.NamePart)
  // required string name_part = 1;
  if (has_name_part()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name_part().data(), this->name_part().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.UninterpretedOption.NamePart.name_part");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name_part(), target);
  }

  // required bool is_extension = 2;
  if (has_is_extension()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->is_extension(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.UninterpretedOption.NamePart)
  return target;
}

int UninterpretedOption_NamePart::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:google.protobuf.UninterpretedOption.NamePart)
  int total_size = 0;

  if (has_name_part()) {
    // required string name_part = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name_part());
  }

  if (has_is_extension()) {
    // required bool is_extension = 2;
    total_size += 1 + 1;
  }

  return total_size;
}
int UninterpretedOption_NamePart::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.UninterpretedOption.NamePart)
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required string name_part = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name_part());

    // required bool is_extension = 2;
    total_size += 1 + 1;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UninterpretedOption_NamePart::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.UninterpretedOption.NamePart)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const UninterpretedOption_NamePart* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const UninterpretedOption_NamePart>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.UninterpretedOption.NamePart)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.UninterpretedOption.NamePart)
    MergeFrom(*source);
  }
}

void UninterpretedOption_NamePart::MergeFrom(const UninterpretedOption_NamePart& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.UninterpretedOption.NamePart)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name_part()) {
      set_has_name_part();
      name_part_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_part_);
    }
    if (from.has_is_extension()) {
      set_is_extension(from.is_extension());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void UninterpretedOption_NamePart::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.UninterpretedOption.NamePart)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UninterpretedOption_NamePart::CopyFrom(const UninterpretedOption_NamePart& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.UninterpretedOption.NamePart)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UninterpretedOption_NamePart::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void UninterpretedOption_NamePart::Swap(UninterpretedOption_NamePart* other) {
  if (other == this) return;
  InternalSwap(other);
}
void UninterpretedOption_NamePart::InternalSwap(UninterpretedOption_NamePart* other) {
  name_part_.Swap(&other->name_part_);
  std::swap(is_extension_, other->is_extension_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata UninterpretedOption_NamePart::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = UninterpretedOption_NamePart_descriptor_;
  metadata.reflection = UninterpretedOption_NamePart_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int UninterpretedOption::kNameFieldNumber;
const int UninterpretedOption::kIdentifierValueFieldNumber;
const int UninterpretedOption::kPositiveIntValueFieldNumber;
const int UninterpretedOption::kNegativeIntValueFieldNumber;
const int UninterpretedOption::kDoubleValueFieldNumber;
const int UninterpretedOption::kStringValueFieldNumber;
const int UninterpretedOption::kAggregateValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

UninterpretedOption::UninterpretedOption()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.UninterpretedOption)
}

void UninterpretedOption::InitAsDefaultInstance() {
}

UninterpretedOption::UninterpretedOption(const UninterpretedOption& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.UninterpretedOption)
}

void UninterpretedOption::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  identifier_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  positive_int_value_ = GOOGLE_ULONGLONG(0);
  negative_int_value_ = GOOGLE_LONGLONG(0);
  double_value_ = 0;
  string_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  aggregate_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UninterpretedOption::~UninterpretedOption() {
  // @@protoc_insertion_point(destructor:google.protobuf.UninterpretedOption)
  SharedDtor();
}

void UninterpretedOption::SharedDtor() {
  identifier_value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  string_value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  aggregate_value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void UninterpretedOption::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UninterpretedOption::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UninterpretedOption_descriptor_;
}

const UninterpretedOption& UninterpretedOption::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  return *default_instance_;
}

UninterpretedOption* UninterpretedOption::default_instance_ = NULL;

UninterpretedOption* UninterpretedOption::New(::google::protobuf::Arena* arena) const {
  UninterpretedOption* n = new UninterpretedOption;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void UninterpretedOption::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.UninterpretedOption)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(UninterpretedOption, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<UninterpretedOption*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 126u) {
    ZR_(positive_int_value_, double_value_);
    if (has_identifier_value()) {
      identifier_value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_string_value()) {
      string_value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_aggregate_value()) {
      aggregate_value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }

#undef ZR_HELPER_
#undef ZR_

  name_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool UninterpretedOption::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.UninterpretedOption)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .google.protobuf.UninterpretedOption.NamePart name = 2;
      case 2: {
        if (tag == 18) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_name()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_loop_name;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectTag(26)) goto parse_identifier_value;
        break;
      }

      // optional string identifier_value = 3;
      case 3: {
        if (tag == 26) {
         parse_identifier_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_identifier_value()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->identifier_value().data(), this->identifier_value().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.UninterpretedOption.identifier_value");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_positive_int_value;
        break;
      }

      // optional uint64 positive_int_value = 4;
      case 4: {
        if (tag == 32) {
         parse_positive_int_value:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &positive_int_value_)));
          set_has_positive_int_value();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_negative_int_value;
        break;
      }

      // optional int64 negative_int_value = 5;
      case 5: {
        if (tag == 40) {
         parse_negative_int_value:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &negative_int_value_)));
          set_has_negative_int_value();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(49)) goto parse_double_value;
        break;
      }

      // optional double double_value = 6;
      case 6: {
        if (tag == 49) {
         parse_double_value:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &double_value_)));
          set_has_double_value();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_string_value;
        break;
      }

      // optional bytes string_value = 7;
      case 7: {
        if (tag == 58) {
         parse_string_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_string_value()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(66)) goto parse_aggregate_value;
        break;
      }

      // optional string aggregate_value = 8;
      case 8: {
        if (tag == 66) {
         parse_aggregate_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_aggregate_value()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->aggregate_value().data(), this->aggregate_value().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.UninterpretedOption.aggregate_value");
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.UninterpretedOption)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.UninterpretedOption)
  return false;
#undef DO_
}

void UninterpretedOption::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.UninterpretedOption)
  // repeated .google.protobuf.UninterpretedOption.NamePart name = 2;
  for (unsigned int i = 0, n = this->name_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->name(i), output);
  }

  // optional string identifier_value = 3;
  if (has_identifier_value()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->identifier_value().data(), this->identifier_value().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.UninterpretedOption.identifier_value");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->identifier_value(), output);
  }

  // optional uint64 positive_int_value = 4;
  if (has_positive_int_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(4, this->positive_int_value(), output);
  }

  // optional int64 negative_int_value = 5;
  if (has_negative_int_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(5, this->negative_int_value(), output);
  }

  // optional double double_value = 6;
  if (has_double_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->double_value(), output);
  }

  // optional bytes string_value = 7;
  if (has_string_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      7, this->string_value(), output);
  }

  // optional string aggregate_value = 8;
  if (has_aggregate_value()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->aggregate_value().data(), this->aggregate_value().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.UninterpretedOption.aggregate_value");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      8, this->aggregate_value(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.UninterpretedOption)
}

::google::protobuf::uint8* UninterpretedOption::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.UninterpretedOption)
  // repeated .google.protobuf.UninterpretedOption.NamePart name = 2;
  for (unsigned int i = 0, n = this->name_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->name(i), false, target);
  }

  // optional string identifier_value = 3;
  if (has_identifier_value()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->identifier_value().data(), this->identifier_value().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.UninterpretedOption.identifier_value");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->identifier_value(), target);
  }

  // optional uint64 positive_int_value = 4;
  if (has_positive_int_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(4, this->positive_int_value(), target);
  }

  // optional int64 negative_int_value = 5;
  if (has_negative_int_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(5, this->negative_int_value(), target);
  }

  // optional double double_value = 6;
  if (has_double_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->double_value(), target);
  }

  // optional bytes string_value = 7;
  if (has_string_value()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        7, this->string_value(), target);
  }

  // optional string aggregate_value = 8;
  if (has_aggregate_value()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->aggregate_value().data(), this->aggregate_value().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.UninterpretedOption.aggregate_value");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        8, this->aggregate_value(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.UninterpretedOption)
  return target;
}

int UninterpretedOption::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.UninterpretedOption)
  int total_size = 0;

  if (_has_bits_[1 / 32] & 126u) {
    // optional string identifier_value = 3;
    if (has_identifier_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->identifier_value());
    }

    // optional uint64 positive_int_value = 4;
    if (has_positive_int_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->positive_int_value());
    }

    // optional int64 negative_int_value = 5;
    if (has_negative_int_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->negative_int_value());
    }

    // optional double double_value = 6;
    if (has_double_value()) {
      total_size += 1 + 8;
    }

    // optional bytes string_value = 7;
    if (has_string_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->string_value());
    }

    // optional string aggregate_value = 8;
    if (has_aggregate_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->aggregate_value());
    }

  }
  // repeated .google.protobuf.UninterpretedOption.NamePart name = 2;
  total_size += 1 * this->name_size();
  for (int i = 0; i < this->name_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->name(i));
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UninterpretedOption::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.UninterpretedOption)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const UninterpretedOption* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const UninterpretedOption>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.UninterpretedOption)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.UninterpretedOption)
    MergeFrom(*source);
  }
}

void UninterpretedOption::MergeFrom(const UninterpretedOption& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.UninterpretedOption)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  name_.MergeFrom(from.name_);
  if (from._has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    if (from.has_identifier_value()) {
      set_has_identifier_value();
      identifier_value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.identifier_value_);
    }
    if (from.has_positive_int_value()) {
      set_positive_int_value(from.positive_int_value());
    }
    if (from.has_negative_int_value()) {
      set_negative_int_value(from.negative_int_value());
    }
    if (from.has_double_value()) {
      set_double_value(from.double_value());
    }
    if (from.has_string_value()) {
      set_has_string_value();
      string_value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.string_value_);
    }
    if (from.has_aggregate_value()) {
      set_has_aggregate_value();
      aggregate_value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.aggregate_value_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void UninterpretedOption::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.UninterpretedOption)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UninterpretedOption::CopyFrom(const UninterpretedOption& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.UninterpretedOption)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UninterpretedOption::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->name())) return false;
  return true;
}

void UninterpretedOption::Swap(UninterpretedOption* other) {
  if (other == this) return;
  InternalSwap(other);
}
void UninterpretedOption::InternalSwap(UninterpretedOption* other) {
  name_.UnsafeArenaSwap(&other->name_);
  identifier_value_.Swap(&other->identifier_value_);
  std::swap(positive_int_value_, other->positive_int_value_);
  std::swap(negative_int_value_, other->negative_int_value_);
  std::swap(double_value_, other->double_value_);
  string_value_.Swap(&other->string_value_);
  aggregate_value_.Swap(&other->aggregate_value_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata UninterpretedOption::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = UninterpretedOption_descriptor_;
  metadata.reflection = UninterpretedOption_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// UninterpretedOption_NamePart

// required string name_part = 1;
bool UninterpretedOption_NamePart::has_name_part() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void UninterpretedOption_NamePart::set_has_name_part() {
  _has_bits_[0] |= 0x00000001u;
}
void UninterpretedOption_NamePart::clear_has_name_part() {
  _has_bits_[0] &= ~0x00000001u;
}
void UninterpretedOption_NamePart::clear_name_part() {
  name_part_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name_part();
}
 const ::std::string& UninterpretedOption_NamePart::name_part() const {
  // @@protoc_insertion_point(field_get:google.protobuf.UninterpretedOption.NamePart.name_part)
  return name_part_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void UninterpretedOption_NamePart::set_name_part(const ::std::string& value) {
  set_has_name_part();
  name_part_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.UninterpretedOption.NamePart.name_part)
}
 void UninterpretedOption_NamePart::set_name_part(const char* value) {
  set_has_name_part();
  name_part_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.UninterpretedOption.NamePart.name_part)
}
 void UninterpretedOption_NamePart::set_name_part(const char* value, size_t size) {
  set_has_name_part();
  name_part_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.UninterpretedOption.NamePart.name_part)
}
 ::std::string* UninterpretedOption_NamePart::mutable_name_part() {
  set_has_name_part();
  // @@protoc_insertion_point(field_mutable:google.protobuf.UninterpretedOption.NamePart.name_part)
  return name_part_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* UninterpretedOption_NamePart::release_name_part() {
  // @@protoc_insertion_point(field_release:google.protobuf.UninterpretedOption.NamePart.name_part)
  clear_has_name_part();
  return name_part_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void UninterpretedOption_NamePart::set_allocated_name_part(::std::string* name_part) {
  if (name_part != NULL) {
    set_has_name_part();
  } else {
    clear_has_name_part();
  }
  name_part_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name_part);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.UninterpretedOption.NamePart.name_part)
}

// required bool is_extension = 2;
bool UninterpretedOption_NamePart::has_is_extension() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void UninterpretedOption_NamePart::set_has_is_extension() {
  _has_bits_[0] |= 0x00000002u;
}
void UninterpretedOption_NamePart::clear_has_is_extension() {
  _has_bits_[0] &= ~0x00000002u;
}
void UninterpretedOption_NamePart::clear_is_extension() {
  is_extension_ = false;
  clear_has_is_extension();
}
 bool UninterpretedOption_NamePart::is_extension() const {
  // @@protoc_insertion_point(field_get:google.protobuf.UninterpretedOption.NamePart.is_extension)
  return is_extension_;
}
 void UninterpretedOption_NamePart::set_is_extension(bool value) {
  set_has_is_extension();
  is_extension_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.UninterpretedOption.NamePart.is_extension)
}

// -------------------------------------------------------------------

// UninterpretedOption

// repeated .google.protobuf.UninterpretedOption.NamePart name = 2;
int UninterpretedOption::name_size() const {
  return name_.size();
}
void UninterpretedOption::clear_name() {
  name_.Clear();
}
const ::google::protobuf::UninterpretedOption_NamePart& UninterpretedOption::name(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.UninterpretedOption.name)
  return name_.Get(index);
}
::google::protobuf::UninterpretedOption_NamePart* UninterpretedOption::mutable_name(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.UninterpretedOption.name)
  return name_.Mutable(index);
}
::google::protobuf::UninterpretedOption_NamePart* UninterpretedOption::add_name() {
  // @@protoc_insertion_point(field_add:google.protobuf.UninterpretedOption.name)
  return name_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::UninterpretedOption_NamePart >*
UninterpretedOption::mutable_name() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.UninterpretedOption.name)
  return &name_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::UninterpretedOption_NamePart >&
UninterpretedOption::name() const {
  // @@protoc_insertion_point(field_list:google.protobuf.UninterpretedOption.name)
  return name_;
}

// optional string identifier_value = 3;
bool UninterpretedOption::has_identifier_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void UninterpretedOption::set_has_identifier_value() {
  _has_bits_[0] |= 0x00000002u;
}
void UninterpretedOption::clear_has_identifier_value() {
  _has_bits_[0] &= ~0x00000002u;
}
void UninterpretedOption::clear_identifier_value() {
  identifier_value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_identifier_value();
}
 const ::std::string& UninterpretedOption::identifier_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.UninterpretedOption.identifier_value)
  return identifier_value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void UninterpretedOption::set_identifier_value(const ::std::string& value) {
  set_has_identifier_value();
  identifier_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.UninterpretedOption.identifier_value)
}
 void UninterpretedOption::set_identifier_value(const char* value) {
  set_has_identifier_value();
  identifier_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.UninterpretedOption.identifier_value)
}
 void UninterpretedOption::set_identifier_value(const char* value, size_t size) {
  set_has_identifier_value();
  identifier_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.UninterpretedOption.identifier_value)
}
 ::std::string* UninterpretedOption::mutable_identifier_value() {
  set_has_identifier_value();
  // @@protoc_insertion_point(field_mutable:google.protobuf.UninterpretedOption.identifier_value)
  return identifier_value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* UninterpretedOption::release_identifier_value() {
  // @@protoc_insertion_point(field_release:google.protobuf.UninterpretedOption.identifier_value)
  clear_has_identifier_value();
  return identifier_value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void UninterpretedOption::set_allocated_identifier_value(::std::string* identifier_value) {
  if (identifier_value != NULL) {
    set_has_identifier_value();
  } else {
    clear_has_identifier_value();
  }
  identifier_value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), identifier_value);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.UninterpretedOption.identifier_value)
}

// optional uint64 positive_int_value = 4;
bool UninterpretedOption::has_positive_int_value() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void UninterpretedOption::set_has_positive_int_value() {
  _has_bits_[0] |= 0x00000004u;
}
void UninterpretedOption::clear_has_positive_int_value() {
  _has_bits_[0] &= ~0x00000004u;
}
void UninterpretedOption::clear_positive_int_value() {
  positive_int_value_ = GOOGLE_ULONGLONG(0);
  clear_has_positive_int_value();
}
 ::google::protobuf::uint64 UninterpretedOption::positive_int_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.UninterpretedOption.positive_int_value)
  return positive_int_value_;
}
 void UninterpretedOption::set_positive_int_value(::google::protobuf::uint64 value) {
  set_has_positive_int_value();
  positive_int_value_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.UninterpretedOption.positive_int_value)
}

// optional int64 negative_int_value = 5;
bool UninterpretedOption::has_negative_int_value() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void UninterpretedOption::set_has_negative_int_value() {
  _has_bits_[0] |= 0x00000008u;
}
void UninterpretedOption::clear_has_negative_int_value() {
  _has_bits_[0] &= ~0x00000008u;
}
void UninterpretedOption::clear_negative_int_value() {
  negative_int_value_ = GOOGLE_LONGLONG(0);
  clear_has_negative_int_value();
}
 ::google::protobuf::int64 UninterpretedOption::negative_int_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.UninterpretedOption.negative_int_value)
  return negative_int_value_;
}
 void UninterpretedOption::set_negative_int_value(::google::protobuf::int64 value) {
  set_has_negative_int_value();
  negative_int_value_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.UninterpretedOption.negative_int_value)
}

// optional double double_value = 6;
bool UninterpretedOption::has_double_value() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void UninterpretedOption::set_has_double_value() {
  _has_bits_[0] |= 0x00000010u;
}
void UninterpretedOption::clear_has_double_value() {
  _has_bits_[0] &= ~0x00000010u;
}
void UninterpretedOption::clear_double_value() {
  double_value_ = 0;
  clear_has_double_value();
}
 double UninterpretedOption::double_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.UninterpretedOption.double_value)
  return double_value_;
}
 void UninterpretedOption::set_double_value(double value) {
  set_has_double_value();
  double_value_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.UninterpretedOption.double_value)
}

// optional bytes string_value = 7;
bool UninterpretedOption::has_string_value() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void UninterpretedOption::set_has_string_value() {
  _has_bits_[0] |= 0x00000020u;
}
void UninterpretedOption::clear_has_string_value() {
  _has_bits_[0] &= ~0x00000020u;
}
void UninterpretedOption::clear_string_value() {
  string_value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_string_value();
}
 const ::std::string& UninterpretedOption::string_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.UninterpretedOption.string_value)
  return string_value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void UninterpretedOption::set_string_value(const ::std::string& value) {
  set_has_string_value();
  string_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.UninterpretedOption.string_value)
}
 void UninterpretedOption::set_string_value(const char* value) {
  set_has_string_value();
  string_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.UninterpretedOption.string_value)
}
 void UninterpretedOption::set_string_value(const void* value, size_t size) {
  set_has_string_value();
  string_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.UninterpretedOption.string_value)
}
 ::std::string* UninterpretedOption::mutable_string_value() {
  set_has_string_value();
  // @@protoc_insertion_point(field_mutable:google.protobuf.UninterpretedOption.string_value)
  return string_value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* UninterpretedOption::release_string_value() {
  // @@protoc_insertion_point(field_release:google.protobuf.UninterpretedOption.string_value)
  clear_has_string_value();
  return string_value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void UninterpretedOption::set_allocated_string_value(::std::string* string_value) {
  if (string_value != NULL) {
    set_has_string_value();
  } else {
    clear_has_string_value();
  }
  string_value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), string_value);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.UninterpretedOption.string_value)
}

// optional string aggregate_value = 8;
bool UninterpretedOption::has_aggregate_value() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
void UninterpretedOption::set_has_aggregate_value() {
  _has_bits_[0] |= 0x00000040u;
}
void UninterpretedOption::clear_has_aggregate_value() {
  _has_bits_[0] &= ~0x00000040u;
}
void UninterpretedOption::clear_aggregate_value() {
  aggregate_value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_aggregate_value();
}
 const ::std::string& UninterpretedOption::aggregate_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.UninterpretedOption.aggregate_value)
  return aggregate_value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void UninterpretedOption::set_aggregate_value(const ::std::string& value) {
  set_has_aggregate_value();
  aggregate_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.UninterpretedOption.aggregate_value)
}
 void UninterpretedOption::set_aggregate_value(const char* value) {
  set_has_aggregate_value();
  aggregate_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.UninterpretedOption.aggregate_value)
}
 void UninterpretedOption::set_aggregate_value(const char* value, size_t size) {
  set_has_aggregate_value();
  aggregate_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.UninterpretedOption.aggregate_value)
}
 ::std::string* UninterpretedOption::mutable_aggregate_value() {
  set_has_aggregate_value();
  // @@protoc_insertion_point(field_mutable:google.protobuf.UninterpretedOption.aggregate_value)
  return aggregate_value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* UninterpretedOption::release_aggregate_value() {
  // @@protoc_insertion_point(field_release:google.protobuf.UninterpretedOption.aggregate_value)
  clear_has_aggregate_value();
  return aggregate_value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void UninterpretedOption::set_allocated_aggregate_value(::std::string* aggregate_value) {
  if (aggregate_value != NULL) {
    set_has_aggregate_value();
  } else {
    clear_has_aggregate_value();
  }
  aggregate_value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), aggregate_value);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.UninterpretedOption.aggregate_value)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SourceCodeInfo_Location::kPathFieldNumber;
const int SourceCodeInfo_Location::kSpanFieldNumber;
const int SourceCodeInfo_Location::kLeadingCommentsFieldNumber;
const int SourceCodeInfo_Location::kTrailingCommentsFieldNumber;
const int SourceCodeInfo_Location::kLeadingDetachedCommentsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SourceCodeInfo_Location::SourceCodeInfo_Location()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.SourceCodeInfo.Location)
}

void SourceCodeInfo_Location::InitAsDefaultInstance() {
}

SourceCodeInfo_Location::SourceCodeInfo_Location(const SourceCodeInfo_Location& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.SourceCodeInfo.Location)
}

void SourceCodeInfo_Location::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  leading_comments_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  trailing_comments_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SourceCodeInfo_Location::~SourceCodeInfo_Location() {
  // @@protoc_insertion_point(destructor:google.protobuf.SourceCodeInfo.Location)
  SharedDtor();
}

void SourceCodeInfo_Location::SharedDtor() {
  leading_comments_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  trailing_comments_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void SourceCodeInfo_Location::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SourceCodeInfo_Location::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SourceCodeInfo_Location_descriptor_;
}

const SourceCodeInfo_Location& SourceCodeInfo_Location::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  return *default_instance_;
}

SourceCodeInfo_Location* SourceCodeInfo_Location::default_instance_ = NULL;

SourceCodeInfo_Location* SourceCodeInfo_Location::New(::google::protobuf::Arena* arena) const {
  SourceCodeInfo_Location* n = new SourceCodeInfo_Location;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SourceCodeInfo_Location::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.SourceCodeInfo.Location)
  if (_has_bits_[0 / 32] & 12u) {
    if (has_leading_comments()) {
      leading_comments_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_trailing_comments()) {
      trailing_comments_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }
  path_.Clear();
  span_.Clear();
  leading_detached_comments_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool SourceCodeInfo_Location::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.SourceCodeInfo.Location)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated int32 path = 1 [packed = true];
      case 1: {
        if (tag == 10) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_path())));
        } else if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 10, input, this->mutable_path())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_span;
        break;
      }

      // repeated int32 span = 2 [packed = true];
      case 2: {
        if (tag == 18) {
         parse_span:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_span())));
        } else if (tag == 16) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 18, input, this->mutable_span())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_leading_comments;
        break;
      }

      // optional string leading_comments = 3;
      case 3: {
        if (tag == 26) {
         parse_leading_comments:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_leading_comments()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->leading_comments().data(), this->leading_comments().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.SourceCodeInfo.Location.leading_comments");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_trailing_comments;
        break;
      }

      // optional string trailing_comments = 4;
      case 4: {
        if (tag == 34) {
         parse_trailing_comments:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_trailing_comments()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->trailing_comments().data(), this->trailing_comments().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.SourceCodeInfo.Location.trailing_comments");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_leading_detached_comments;
        break;
      }

      // repeated string leading_detached_comments = 6;
      case 6: {
        if (tag == 50) {
         parse_leading_detached_comments:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_leading_detached_comments()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->leading_detached_comments(this->leading_detached_comments_size() - 1).data(),
            this->leading_detached_comments(this->leading_detached_comments_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.SourceCodeInfo.Location.leading_detached_comments");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_leading_detached_comments;
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.SourceCodeInfo.Location)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.SourceCodeInfo.Location)
  return false;
#undef DO_
}

void SourceCodeInfo_Location::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.SourceCodeInfo.Location)
  // repeated int32 path = 1 [packed = true];
  if (this->path_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(1, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_path_cached_byte_size_);
  }
  for (int i = 0; i < this->path_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->path(i), output);
  }

  // repeated int32 span = 2 [packed = true];
  if (this->span_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(2, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_span_cached_byte_size_);
  }
  for (int i = 0; i < this->span_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->span(i), output);
  }

  // optional string leading_comments = 3;
  if (has_leading_comments()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->leading_comments().data(), this->leading_comments().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.SourceCodeInfo.Location.leading_comments");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->leading_comments(), output);
  }

  // optional string trailing_comments = 4;
  if (has_trailing_comments()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->trailing_comments().data(), this->trailing_comments().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.SourceCodeInfo.Location.trailing_comments");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->trailing_comments(), output);
  }

  // repeated string leading_detached_comments = 6;
  for (int i = 0; i < this->leading_detached_comments_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->leading_detached_comments(i).data(), this->leading_detached_comments(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.SourceCodeInfo.Location.leading_detached_comments");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      6, this->leading_detached_comments(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.SourceCodeInfo.Location)
}

::google::protobuf::uint8* SourceCodeInfo_Location::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.SourceCodeInfo.Location)
  // repeated int32 path = 1 [packed = true];
  if (this->path_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _path_cached_byte_size_, target);
  }
  for (int i = 0; i < this->path_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->path(i), target);
  }

  // repeated int32 span = 2 [packed = true];
  if (this->span_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      2,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _span_cached_byte_size_, target);
  }
  for (int i = 0; i < this->span_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->span(i), target);
  }

  // optional string leading_comments = 3;
  if (has_leading_comments()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->leading_comments().data(), this->leading_comments().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.SourceCodeInfo.Location.leading_comments");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->leading_comments(), target);
  }

  // optional string trailing_comments = 4;
  if (has_trailing_comments()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->trailing_comments().data(), this->trailing_comments().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.SourceCodeInfo.Location.trailing_comments");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->trailing_comments(), target);
  }

  // repeated string leading_detached_comments = 6;
  for (int i = 0; i < this->leading_detached_comments_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->leading_detached_comments(i).data(), this->leading_detached_comments(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.SourceCodeInfo.Location.leading_detached_comments");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(6, this->leading_detached_comments(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.SourceCodeInfo.Location)
  return target;
}

int SourceCodeInfo_Location::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.SourceCodeInfo.Location)
  int total_size = 0;

  if (_has_bits_[2 / 32] & 12u) {
    // optional string leading_comments = 3;
    if (has_leading_comments()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->leading_comments());
    }

    // optional string trailing_comments = 4;
    if (has_trailing_comments()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->trailing_comments());
    }

  }
  // repeated int32 path = 1 [packed = true];
  {
    int data_size = 0;
    for (int i = 0; i < this->path_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->path(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _path_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated int32 span = 2 [packed = true];
  {
    int data_size = 0;
    for (int i = 0; i < this->span_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->span(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _span_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated string leading_detached_comments = 6;
  total_size += 1 * this->leading_detached_comments_size();
  for (int i = 0; i < this->leading_detached_comments_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->leading_detached_comments(i));
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SourceCodeInfo_Location::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.SourceCodeInfo.Location)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const SourceCodeInfo_Location* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const SourceCodeInfo_Location>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.SourceCodeInfo.Location)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.SourceCodeInfo.Location)
    MergeFrom(*source);
  }
}

void SourceCodeInfo_Location::MergeFrom(const SourceCodeInfo_Location& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.SourceCodeInfo.Location)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  path_.MergeFrom(from.path_);
  span_.MergeFrom(from.span_);
  leading_detached_comments_.MergeFrom(from.leading_detached_comments_);
  if (from._has_bits_[2 / 32] & (0xffu << (2 % 32))) {
    if (from.has_leading_comments()) {
      set_has_leading_comments();
      leading_comments_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.leading_comments_);
    }
    if (from.has_trailing_comments()) {
      set_has_trailing_comments();
      trailing_comments_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.trailing_comments_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void SourceCodeInfo_Location::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.SourceCodeInfo.Location)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SourceCodeInfo_Location::CopyFrom(const SourceCodeInfo_Location& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.SourceCodeInfo.Location)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SourceCodeInfo_Location::IsInitialized() const {

  return true;
}

void SourceCodeInfo_Location::Swap(SourceCodeInfo_Location* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SourceCodeInfo_Location::InternalSwap(SourceCodeInfo_Location* other) {
  path_.UnsafeArenaSwap(&other->path_);
  span_.UnsafeArenaSwap(&other->span_);
  leading_comments_.Swap(&other->leading_comments_);
  trailing_comments_.Swap(&other->trailing_comments_);
  leading_detached_comments_.UnsafeArenaSwap(&other->leading_detached_comments_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SourceCodeInfo_Location::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SourceCodeInfo_Location_descriptor_;
  metadata.reflection = SourceCodeInfo_Location_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SourceCodeInfo::kLocationFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SourceCodeInfo::SourceCodeInfo()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.SourceCodeInfo)
}

void SourceCodeInfo::InitAsDefaultInstance() {
}

SourceCodeInfo::SourceCodeInfo(const SourceCodeInfo& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.SourceCodeInfo)
}

void SourceCodeInfo::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SourceCodeInfo::~SourceCodeInfo() {
  // @@protoc_insertion_point(destructor:google.protobuf.SourceCodeInfo)
  SharedDtor();
}

void SourceCodeInfo::SharedDtor() {
  if (this != default_instance_) {
  }
}

void SourceCodeInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SourceCodeInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SourceCodeInfo_descriptor_;
}

const SourceCodeInfo& SourceCodeInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  return *default_instance_;
}

SourceCodeInfo* SourceCodeInfo::default_instance_ = NULL;

SourceCodeInfo* SourceCodeInfo::New(::google::protobuf::Arena* arena) const {
  SourceCodeInfo* n = new SourceCodeInfo;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SourceCodeInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.SourceCodeInfo)
  location_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool SourceCodeInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.SourceCodeInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .google.protobuf.SourceCodeInfo.Location location = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_location:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_location()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_location;
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.SourceCodeInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.SourceCodeInfo)
  return false;
#undef DO_
}

void SourceCodeInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.SourceCodeInfo)
  // repeated .google.protobuf.SourceCodeInfo.Location location = 1;
  for (unsigned int i = 0, n = this->location_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->location(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.SourceCodeInfo)
}

::google::protobuf::uint8* SourceCodeInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.SourceCodeInfo)
  // repeated .google.protobuf.SourceCodeInfo.Location location = 1;
  for (unsigned int i = 0, n = this->location_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->location(i), false, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.SourceCodeInfo)
  return target;
}

int SourceCodeInfo::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.SourceCodeInfo)
  int total_size = 0;

  // repeated .google.protobuf.SourceCodeInfo.Location location = 1;
  total_size += 1 * this->location_size();
  for (int i = 0; i < this->location_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->location(i));
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SourceCodeInfo::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.SourceCodeInfo)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const SourceCodeInfo* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const SourceCodeInfo>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.SourceCodeInfo)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.SourceCodeInfo)
    MergeFrom(*source);
  }
}

void SourceCodeInfo::MergeFrom(const SourceCodeInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.SourceCodeInfo)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  location_.MergeFrom(from.location_);
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void SourceCodeInfo::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.SourceCodeInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SourceCodeInfo::CopyFrom(const SourceCodeInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.SourceCodeInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SourceCodeInfo::IsInitialized() const {

  return true;
}

void SourceCodeInfo::Swap(SourceCodeInfo* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SourceCodeInfo::InternalSwap(SourceCodeInfo* other) {
  location_.UnsafeArenaSwap(&other->location_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SourceCodeInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SourceCodeInfo_descriptor_;
  metadata.reflection = SourceCodeInfo_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SourceCodeInfo_Location

// repeated int32 path = 1 [packed = true];
int SourceCodeInfo_Location::path_size() const {
  return path_.size();
}
void SourceCodeInfo_Location::clear_path() {
  path_.Clear();
}
 ::google::protobuf::int32 SourceCodeInfo_Location::path(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.SourceCodeInfo.Location.path)
  return path_.Get(index);
}
 void SourceCodeInfo_Location::set_path(int index, ::google::protobuf::int32 value) {
  path_.Set(index, value);
  // @@protoc_insertion_point(field_set:google.protobuf.SourceCodeInfo.Location.path)
}
 void SourceCodeInfo_Location::add_path(::google::protobuf::int32 value) {
  path_.Add(value);
  // @@protoc_insertion_point(field_add:google.protobuf.SourceCodeInfo.Location.path)
}
 const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
SourceCodeInfo_Location::path() const {
  // @@protoc_insertion_point(field_list:google.protobuf.SourceCodeInfo.Location.path)
  return path_;
}
 ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
SourceCodeInfo_Location::mutable_path() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.SourceCodeInfo.Location.path)
  return &path_;
}

// repeated int32 span = 2 [packed = true];
int SourceCodeInfo_Location::span_size() const {
  return span_.size();
}
void SourceCodeInfo_Location::clear_span() {
  span_.Clear();
}
 ::google::protobuf::int32 SourceCodeInfo_Location::span(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.SourceCodeInfo.Location.span)
  return span_.Get(index);
}
 void SourceCodeInfo_Location::set_span(int index, ::google::protobuf::int32 value) {
  span_.Set(index, value);
  // @@protoc_insertion_point(field_set:google.protobuf.SourceCodeInfo.Location.span)
}
 void SourceCodeInfo_Location::add_span(::google::protobuf::int32 value) {
  span_.Add(value);
  // @@protoc_insertion_point(field_add:google.protobuf.SourceCodeInfo.Location.span)
}
 const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
SourceCodeInfo_Location::span() const {
  // @@protoc_insertion_point(field_list:google.protobuf.SourceCodeInfo.Location.span)
  return span_;
}
 ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
SourceCodeInfo_Location::mutable_span() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.SourceCodeInfo.Location.span)
  return &span_;
}

// optional string leading_comments = 3;
bool SourceCodeInfo_Location::has_leading_comments() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void SourceCodeInfo_Location::set_has_leading_comments() {
  _has_bits_[0] |= 0x00000004u;
}
void SourceCodeInfo_Location::clear_has_leading_comments() {
  _has_bits_[0] &= ~0x00000004u;
}
void SourceCodeInfo_Location::clear_leading_comments() {
  leading_comments_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_leading_comments();
}
 const ::std::string& SourceCodeInfo_Location::leading_comments() const {
  // @@protoc_insertion_point(field_get:google.protobuf.SourceCodeInfo.Location.leading_comments)
  return leading_comments_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void SourceCodeInfo_Location::set_leading_comments(const ::std::string& value) {
  set_has_leading_comments();
  leading_comments_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.SourceCodeInfo.Location.leading_comments)
}
 void SourceCodeInfo_Location::set_leading_comments(const char* value) {
  set_has_leading_comments();
  leading_comments_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.SourceCodeInfo.Location.leading_comments)
}
 void SourceCodeInfo_Location::set_leading_comments(const char* value, size_t size) {
  set_has_leading_comments();
  leading_comments_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.SourceCodeInfo.Location.leading_comments)
}
 ::std::string* SourceCodeInfo_Location::mutable_leading_comments() {
  set_has_leading_comments();
  // @@protoc_insertion_point(field_mutable:google.protobuf.SourceCodeInfo.Location.leading_comments)
  return leading_comments_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* SourceCodeInfo_Location::release_leading_comments() {
  // @@protoc_insertion_point(field_release:google.protobuf.SourceCodeInfo.Location.leading_comments)
  clear_has_leading_comments();
  return leading_comments_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void SourceCodeInfo_Location::set_allocated_leading_comments(::std::string* leading_comments) {
  if (leading_comments != NULL) {
    set_has_leading_comments();
  } else {
    clear_has_leading_comments();
  }
  leading_comments_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), leading_comments);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.SourceCodeInfo.Location.leading_comments)
}

// optional string trailing_comments = 4;
bool SourceCodeInfo_Location::has_trailing_comments() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void SourceCodeInfo_Location::set_has_trailing_comments() {
  _has_bits_[0] |= 0x00000008u;
}
void SourceCodeInfo_Location::clear_has_trailing_comments() {
  _has_bits_[0] &= ~0x00000008u;
}
void SourceCodeInfo_Location::clear_trailing_comments() {
  trailing_comments_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_trailing_comments();
}
 const ::std::string& SourceCodeInfo_Location::trailing_comments() const {
  // @@protoc_insertion_point(field_get:google.protobuf.SourceCodeInfo.Location.trailing_comments)
  return trailing_comments_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void SourceCodeInfo_Location::set_trailing_comments(const ::std::string& value) {
  set_has_trailing_comments();
  trailing_comments_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.SourceCodeInfo.Location.trailing_comments)
}
 void SourceCodeInfo_Location::set_trailing_comments(const char* value) {
  set_has_trailing_comments();
  trailing_comments_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.SourceCodeInfo.Location.trailing_comments)
}
 void SourceCodeInfo_Location::set_trailing_comments(const char* value, size_t size) {
  set_has_trailing_comments();
  trailing_comments_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.SourceCodeInfo.Location.trailing_comments)
}
 ::std::string* SourceCodeInfo_Location::mutable_trailing_comments() {
  set_has_trailing_comments();
  // @@protoc_insertion_point(field_mutable:google.protobuf.SourceCodeInfo.Location.trailing_comments)
  return trailing_comments_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* SourceCodeInfo_Location::release_trailing_comments() {
  // @@protoc_insertion_point(field_release:google.protobuf.SourceCodeInfo.Location.trailing_comments)
  clear_has_trailing_comments();
  return trailing_comments_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void SourceCodeInfo_Location::set_allocated_trailing_comments(::std::string* trailing_comments) {
  if (trailing_comments != NULL) {
    set_has_trailing_comments();
  } else {
    clear_has_trailing_comments();
  }
  trailing_comments_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), trailing_comments);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.SourceCodeInfo.Location.trailing_comments)
}

// repeated string leading_detached_comments = 6;
int SourceCodeInfo_Location::leading_detached_comments_size() const {
  return leading_detached_comments_.size();
}
void SourceCodeInfo_Location::clear_leading_detached_comments() {
  leading_detached_comments_.Clear();
}
 const ::std::string& SourceCodeInfo_Location::leading_detached_comments(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.SourceCodeInfo.Location.leading_detached_comments)
  return leading_detached_comments_.Get(index);
}
 ::std::string* SourceCodeInfo_Location::mutable_leading_detached_comments(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.SourceCodeInfo.Location.leading_detached_comments)
  return leading_detached_comments_.Mutable(index);
}
 void SourceCodeInfo_Location::set_leading_detached_comments(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.protobuf.SourceCodeInfo.Location.leading_detached_comments)
  leading_detached_comments_.Mutable(index)->assign(value);
}
 void SourceCodeInfo_Location::set_leading_detached_comments(int index, const char* value) {
  leading_detached_comments_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.protobuf.SourceCodeInfo.Location.leading_detached_comments)
}
 void SourceCodeInfo_Location::set_leading_detached_comments(int index, const char* value, size_t size) {
  leading_detached_comments_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.SourceCodeInfo.Location.leading_detached_comments)
}
 ::std::string* SourceCodeInfo_Location::add_leading_detached_comments() {
  // @@protoc_insertion_point(field_add_mutable:google.protobuf.SourceCodeInfo.Location.leading_detached_comments)
  return leading_detached_comments_.Add();
}
 void SourceCodeInfo_Location::add_leading_detached_comments(const ::std::string& value) {
  leading_detached_comments_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.protobuf.SourceCodeInfo.Location.leading_detached_comments)
}
 void SourceCodeInfo_Location::add_leading_detached_comments(const char* value) {
  leading_detached_comments_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.protobuf.SourceCodeInfo.Location.leading_detached_comments)
}
 void SourceCodeInfo_Location::add_leading_detached_comments(const char* value, size_t size) {
  leading_detached_comments_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.protobuf.SourceCodeInfo.Location.leading_detached_comments)
}
 const ::google::protobuf::RepeatedPtrField< ::std::string>&
SourceCodeInfo_Location::leading_detached_comments() const {
  // @@protoc_insertion_point(field_list:google.protobuf.SourceCodeInfo.Location.leading_detached_comments)
  return leading_detached_comments_;
}
 ::google::protobuf::RepeatedPtrField< ::std::string>*
SourceCodeInfo_Location::mutable_leading_detached_comments() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.SourceCodeInfo.Location.leading_detached_comments)
  return &leading_detached_comments_;
}

// -------------------------------------------------------------------

// SourceCodeInfo

// repeated .google.protobuf.SourceCodeInfo.Location location = 1;
int SourceCodeInfo::location_size() const {
  return location_.size();
}
void SourceCodeInfo::clear_location() {
  location_.Clear();
}
const ::google::protobuf::SourceCodeInfo_Location& SourceCodeInfo::location(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.SourceCodeInfo.location)
  return location_.Get(index);
}
::google::protobuf::SourceCodeInfo_Location* SourceCodeInfo::mutable_location(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.SourceCodeInfo.location)
  return location_.Mutable(index);
}
::google::protobuf::SourceCodeInfo_Location* SourceCodeInfo::add_location() {
  // @@protoc_insertion_point(field_add:google.protobuf.SourceCodeInfo.location)
  return location_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::SourceCodeInfo_Location >*
SourceCodeInfo::mutable_location() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.SourceCodeInfo.location)
  return &location_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::SourceCodeInfo_Location >&
SourceCodeInfo::location() const {
  // @@protoc_insertion_point(field_list:google.protobuf.SourceCodeInfo.location)
  return location_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GeneratedCodeInfo_Annotation::kPathFieldNumber;
const int GeneratedCodeInfo_Annotation::kSourceFileFieldNumber;
const int GeneratedCodeInfo_Annotation::kBeginFieldNumber;
const int GeneratedCodeInfo_Annotation::kEndFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GeneratedCodeInfo_Annotation::GeneratedCodeInfo_Annotation()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.GeneratedCodeInfo.Annotation)
}

void GeneratedCodeInfo_Annotation::InitAsDefaultInstance() {
}

GeneratedCodeInfo_Annotation::GeneratedCodeInfo_Annotation(const GeneratedCodeInfo_Annotation& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.GeneratedCodeInfo.Annotation)
}

void GeneratedCodeInfo_Annotation::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  source_file_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  begin_ = 0;
  end_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GeneratedCodeInfo_Annotation::~GeneratedCodeInfo_Annotation() {
  // @@protoc_insertion_point(destructor:google.protobuf.GeneratedCodeInfo.Annotation)
  SharedDtor();
}

void GeneratedCodeInfo_Annotation::SharedDtor() {
  source_file_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void GeneratedCodeInfo_Annotation::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GeneratedCodeInfo_Annotation::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GeneratedCodeInfo_Annotation_descriptor_;
}

const GeneratedCodeInfo_Annotation& GeneratedCodeInfo_Annotation::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  return *default_instance_;
}

GeneratedCodeInfo_Annotation* GeneratedCodeInfo_Annotation::default_instance_ = NULL;

GeneratedCodeInfo_Annotation* GeneratedCodeInfo_Annotation::New(::google::protobuf::Arena* arena) const {
  GeneratedCodeInfo_Annotation* n = new GeneratedCodeInfo_Annotation;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GeneratedCodeInfo_Annotation::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.GeneratedCodeInfo.Annotation)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(GeneratedCodeInfo_Annotation, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<GeneratedCodeInfo_Annotation*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 14u) {
    ZR_(begin_, end_);
    if (has_source_file()) {
      source_file_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }

#undef ZR_HELPER_
#undef ZR_

  path_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool GeneratedCodeInfo_Annotation::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.GeneratedCodeInfo.Annotation)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated int32 path = 1 [packed = true];
      case 1: {
        if (tag == 10) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_path())));
        } else if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 10, input, this->mutable_path())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_source_file;
        break;
      }

      // optional string source_file = 2;
      case 2: {
        if (tag == 18) {
         parse_source_file:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_source_file()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->source_file().data(), this->source_file().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "google.protobuf.GeneratedCodeInfo.Annotation.source_file");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_begin;
        break;
      }

      // optional int32 begin = 3;
      case 3: {
        if (tag == 24) {
         parse_begin:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &begin_)));
          set_has_begin();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_end;
        break;
      }

      // optional int32 end = 4;
      case 4: {
        if (tag == 32) {
         parse_end:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &end_)));
          set_has_end();
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.GeneratedCodeInfo.Annotation)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.GeneratedCodeInfo.Annotation)
  return false;
#undef DO_
}

void GeneratedCodeInfo_Annotation::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.GeneratedCodeInfo.Annotation)
  // repeated int32 path = 1 [packed = true];
  if (this->path_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(1, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_path_cached_byte_size_);
  }
  for (int i = 0; i < this->path_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->path(i), output);
  }

  // optional string source_file = 2;
  if (has_source_file()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->source_file().data(), this->source_file().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.GeneratedCodeInfo.Annotation.source_file");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->source_file(), output);
  }

  // optional int32 begin = 3;
  if (has_begin()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->begin(), output);
  }

  // optional int32 end = 4;
  if (has_end()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->end(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.GeneratedCodeInfo.Annotation)
}

::google::protobuf::uint8* GeneratedCodeInfo_Annotation::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.GeneratedCodeInfo.Annotation)
  // repeated int32 path = 1 [packed = true];
  if (this->path_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _path_cached_byte_size_, target);
  }
  for (int i = 0; i < this->path_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->path(i), target);
  }

  // optional string source_file = 2;
  if (has_source_file()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->source_file().data(), this->source_file().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "google.protobuf.GeneratedCodeInfo.Annotation.source_file");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->source_file(), target);
  }

  // optional int32 begin = 3;
  if (has_begin()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->begin(), target);
  }

  // optional int32 end = 4;
  if (has_end()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->end(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.GeneratedCodeInfo.Annotation)
  return target;
}

int GeneratedCodeInfo_Annotation::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.GeneratedCodeInfo.Annotation)
  int total_size = 0;

  if (_has_bits_[1 / 32] & 14u) {
    // optional string source_file = 2;
    if (has_source_file()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->source_file());
    }

    // optional int32 begin = 3;
    if (has_begin()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->begin());
    }

    // optional int32 end = 4;
    if (has_end()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->end());
    }

  }
  // repeated int32 path = 1 [packed = true];
  {
    int data_size = 0;
    for (int i = 0; i < this->path_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->path(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _path_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GeneratedCodeInfo_Annotation::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.GeneratedCodeInfo.Annotation)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const GeneratedCodeInfo_Annotation* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const GeneratedCodeInfo_Annotation>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.GeneratedCodeInfo.Annotation)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.GeneratedCodeInfo.Annotation)
    MergeFrom(*source);
  }
}

void GeneratedCodeInfo_Annotation::MergeFrom(const GeneratedCodeInfo_Annotation& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.GeneratedCodeInfo.Annotation)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  path_.MergeFrom(from.path_);
  if (from._has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    if (from.has_source_file()) {
      set_has_source_file();
      source_file_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.source_file_);
    }
    if (from.has_begin()) {
      set_begin(from.begin());
    }
    if (from.has_end()) {
      set_end(from.end());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void GeneratedCodeInfo_Annotation::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.GeneratedCodeInfo.Annotation)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GeneratedCodeInfo_Annotation::CopyFrom(const GeneratedCodeInfo_Annotation& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.GeneratedCodeInfo.Annotation)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GeneratedCodeInfo_Annotation::IsInitialized() const {

  return true;
}

void GeneratedCodeInfo_Annotation::Swap(GeneratedCodeInfo_Annotation* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GeneratedCodeInfo_Annotation::InternalSwap(GeneratedCodeInfo_Annotation* other) {
  path_.UnsafeArenaSwap(&other->path_);
  source_file_.Swap(&other->source_file_);
  std::swap(begin_, other->begin_);
  std::swap(end_, other->end_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata GeneratedCodeInfo_Annotation::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GeneratedCodeInfo_Annotation_descriptor_;
  metadata.reflection = GeneratedCodeInfo_Annotation_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GeneratedCodeInfo::kAnnotationFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GeneratedCodeInfo::GeneratedCodeInfo()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.GeneratedCodeInfo)
}

void GeneratedCodeInfo::InitAsDefaultInstance() {
}

GeneratedCodeInfo::GeneratedCodeInfo(const GeneratedCodeInfo& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.GeneratedCodeInfo)
}

void GeneratedCodeInfo::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GeneratedCodeInfo::~GeneratedCodeInfo() {
  // @@protoc_insertion_point(destructor:google.protobuf.GeneratedCodeInfo)
  SharedDtor();
}

void GeneratedCodeInfo::SharedDtor() {
  if (this != default_instance_) {
  }
}

void GeneratedCodeInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GeneratedCodeInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GeneratedCodeInfo_descriptor_;
}

const GeneratedCodeInfo& GeneratedCodeInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  return *default_instance_;
}

GeneratedCodeInfo* GeneratedCodeInfo::default_instance_ = NULL;

GeneratedCodeInfo* GeneratedCodeInfo::New(::google::protobuf::Arena* arena) const {
  GeneratedCodeInfo* n = new GeneratedCodeInfo;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GeneratedCodeInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.GeneratedCodeInfo)
  annotation_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool GeneratedCodeInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.GeneratedCodeInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .google.protobuf.GeneratedCodeInfo.Annotation annotation = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_annotation:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_annotation()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_annotation;
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.GeneratedCodeInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.GeneratedCodeInfo)
  return false;
#undef DO_
}

void GeneratedCodeInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.GeneratedCodeInfo)
  // repeated .google.protobuf.GeneratedCodeInfo.Annotation annotation = 1;
  for (unsigned int i = 0, n = this->annotation_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->annotation(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.GeneratedCodeInfo)
}

::google::protobuf::uint8* GeneratedCodeInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.GeneratedCodeInfo)
  // repeated .google.protobuf.GeneratedCodeInfo.Annotation annotation = 1;
  for (unsigned int i = 0, n = this->annotation_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->annotation(i), false, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.GeneratedCodeInfo)
  return target;
}

int GeneratedCodeInfo::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.GeneratedCodeInfo)
  int total_size = 0;

  // repeated .google.protobuf.GeneratedCodeInfo.Annotation annotation = 1;
  total_size += 1 * this->annotation_size();
  for (int i = 0; i < this->annotation_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->annotation(i));
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GeneratedCodeInfo::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.GeneratedCodeInfo)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const GeneratedCodeInfo* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const GeneratedCodeInfo>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.GeneratedCodeInfo)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.GeneratedCodeInfo)
    MergeFrom(*source);
  }
}

void GeneratedCodeInfo::MergeFrom(const GeneratedCodeInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.GeneratedCodeInfo)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  annotation_.MergeFrom(from.annotation_);
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void GeneratedCodeInfo::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.GeneratedCodeInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GeneratedCodeInfo::CopyFrom(const GeneratedCodeInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.GeneratedCodeInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GeneratedCodeInfo::IsInitialized() const {

  return true;
}

void GeneratedCodeInfo::Swap(GeneratedCodeInfo* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GeneratedCodeInfo::InternalSwap(GeneratedCodeInfo* other) {
  annotation_.UnsafeArenaSwap(&other->annotation_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata GeneratedCodeInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GeneratedCodeInfo_descriptor_;
  metadata.reflection = GeneratedCodeInfo_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GeneratedCodeInfo_Annotation

// repeated int32 path = 1 [packed = true];
int GeneratedCodeInfo_Annotation::path_size() const {
  return path_.size();
}
void GeneratedCodeInfo_Annotation::clear_path() {
  path_.Clear();
}
 ::google::protobuf::int32 GeneratedCodeInfo_Annotation::path(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.GeneratedCodeInfo.Annotation.path)
  return path_.Get(index);
}
 void GeneratedCodeInfo_Annotation::set_path(int index, ::google::protobuf::int32 value) {
  path_.Set(index, value);
  // @@protoc_insertion_point(field_set:google.protobuf.GeneratedCodeInfo.Annotation.path)
}
 void GeneratedCodeInfo_Annotation::add_path(::google::protobuf::int32 value) {
  path_.Add(value);
  // @@protoc_insertion_point(field_add:google.protobuf.GeneratedCodeInfo.Annotation.path)
}
 const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
GeneratedCodeInfo_Annotation::path() const {
  // @@protoc_insertion_point(field_list:google.protobuf.GeneratedCodeInfo.Annotation.path)
  return path_;
}
 ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
GeneratedCodeInfo_Annotation::mutable_path() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.GeneratedCodeInfo.Annotation.path)
  return &path_;
}

// optional string source_file = 2;
bool GeneratedCodeInfo_Annotation::has_source_file() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void GeneratedCodeInfo_Annotation::set_has_source_file() {
  _has_bits_[0] |= 0x00000002u;
}
void GeneratedCodeInfo_Annotation::clear_has_source_file() {
  _has_bits_[0] &= ~0x00000002u;
}
void GeneratedCodeInfo_Annotation::clear_source_file() {
  source_file_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_source_file();
}
 const ::std::string& GeneratedCodeInfo_Annotation::source_file() const {
  // @@protoc_insertion_point(field_get:google.protobuf.GeneratedCodeInfo.Annotation.source_file)
  return source_file_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void GeneratedCodeInfo_Annotation::set_source_file(const ::std::string& value) {
  set_has_source_file();
  source_file_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.GeneratedCodeInfo.Annotation.source_file)
}
 void GeneratedCodeInfo_Annotation::set_source_file(const char* value) {
  set_has_source_file();
  source_file_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.GeneratedCodeInfo.Annotation.source_file)
}
 void GeneratedCodeInfo_Annotation::set_source_file(const char* value, size_t size) {
  set_has_source_file();
  source_file_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.GeneratedCodeInfo.Annotation.source_file)
}
 ::std::string* GeneratedCodeInfo_Annotation::mutable_source_file() {
  set_has_source_file();
  // @@protoc_insertion_point(field_mutable:google.protobuf.GeneratedCodeInfo.Annotation.source_file)
  return source_file_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* GeneratedCodeInfo_Annotation::release_source_file() {
  // @@protoc_insertion_point(field_release:google.protobuf.GeneratedCodeInfo.Annotation.source_file)
  clear_has_source_file();
  return source_file_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void GeneratedCodeInfo_Annotation::set_allocated_source_file(::std::string* source_file) {
  if (source_file != NULL) {
    set_has_source_file();
  } else {
    clear_has_source_file();
  }
  source_file_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), source_file);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.GeneratedCodeInfo.Annotation.source_file)
}

// optional int32 begin = 3;
bool GeneratedCodeInfo_Annotation::has_begin() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void GeneratedCodeInfo_Annotation::set_has_begin() {
  _has_bits_[0] |= 0x00000004u;
}
void GeneratedCodeInfo_Annotation::clear_has_begin() {
  _has_bits_[0] &= ~0x00000004u;
}
void GeneratedCodeInfo_Annotation::clear_begin() {
  begin_ = 0;
  clear_has_begin();
}
 ::google::protobuf::int32 GeneratedCodeInfo_Annotation::begin() const {
  // @@protoc_insertion_point(field_get:google.protobuf.GeneratedCodeInfo.Annotation.begin)
  return begin_;
}
 void GeneratedCodeInfo_Annotation::set_begin(::google::protobuf::int32 value) {
  set_has_begin();
  begin_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.GeneratedCodeInfo.Annotation.begin)
}

// optional int32 end = 4;
bool GeneratedCodeInfo_Annotation::has_end() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void GeneratedCodeInfo_Annotation::set_has_end() {
  _has_bits_[0] |= 0x00000008u;
}
void GeneratedCodeInfo_Annotation::clear_has_end() {
  _has_bits_[0] &= ~0x00000008u;
}
void GeneratedCodeInfo_Annotation::clear_end() {
  end_ = 0;
  clear_has_end();
}
 ::google::protobuf::int32 GeneratedCodeInfo_Annotation::end() const {
  // @@protoc_insertion_point(field_get:google.protobuf.GeneratedCodeInfo.Annotation.end)
  return end_;
}
 void GeneratedCodeInfo_Annotation::set_end(::google::protobuf::int32 value) {
  set_has_end();
  end_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.GeneratedCodeInfo.Annotation.end)
}

// -------------------------------------------------------------------

// GeneratedCodeInfo

// repeated .google.protobuf.GeneratedCodeInfo.Annotation annotation = 1;
int GeneratedCodeInfo::annotation_size() const {
  return annotation_.size();
}
void GeneratedCodeInfo::clear_annotation() {
  annotation_.Clear();
}
const ::google::protobuf::GeneratedCodeInfo_Annotation& GeneratedCodeInfo::annotation(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.GeneratedCodeInfo.annotation)
  return annotation_.Get(index);
}
::google::protobuf::GeneratedCodeInfo_Annotation* GeneratedCodeInfo::mutable_annotation(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.GeneratedCodeInfo.annotation)
  return annotation_.Mutable(index);
}
::google::protobuf::GeneratedCodeInfo_Annotation* GeneratedCodeInfo::add_annotation() {
  // @@protoc_insertion_point(field_add:google.protobuf.GeneratedCodeInfo.annotation)
  return annotation_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::protobuf::GeneratedCodeInfo_Annotation >*
GeneratedCodeInfo::mutable_annotation() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.GeneratedCodeInfo.annotation)
  return &annotation_;
}
const ::google::protobuf::RepeatedPtrField< ::google::protobuf::GeneratedCodeInfo_Annotation >&
GeneratedCodeInfo::annotation() const {
  // @@protoc_insertion_point(field_list:google.protobuf.GeneratedCodeInfo.annotation)
  return annotation_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
