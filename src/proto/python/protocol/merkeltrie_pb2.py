

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='merkeltrie.proto',
  package='protocol',
  syntax='proto3',
  serialized_pb=_b('\n\x10merkeltrie.proto\x12\x08protocol\"R\n\x05\x43hild\x12\x13\n\x0bsublocation\x18\x01 \x01(\x0c\x12\x0c\n\x04hash\x18\x02 \x01(\x0c\x12&\n\tchildtype\x18\x03 \x01(\x0e\x32\x13.protocol.CHILDTYPE\")\n\x04Node\x12!\n\x08\x63hildren\x18\x01 \x03(\x0b\x32\x0f.protocol.Child**\n\tCHILDTYPE\x12\x08\n\x04NONE\x10\x00\x12\t\n\x05INNER\x10\x01\x12\x08\n\x04LEAF\x10\x02\x42\"\n io.rexx.sdk.core.extend.protobufb\x06proto3')
)

_CHILDTYPE = _descriptor.EnumDescriptor(
  name='CHILDTYPE',
  full_name='protocol.CHILDTYPE',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='NONE', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='INNER', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='LEAF', index=2, number=2,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=157,
  serialized_end=199,
)
_sym_db.RegisterEnumDescriptor(_CHILDTYPE)

CHILDTYPE = enum_type_wrapper.EnumTypeWrapper(_CHILDTYPE)
NONE = 0
INNER = 1
LEAF = 2



_CHILD = _descriptor.Descriptor(
  name='Child',
  full_name='protocol.Child',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='sublocation', full_name='protocol.Child.sublocation', index=0,
      number=1, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='hash', full_name='protocol.Child.hash', index=1,
      number=2, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='childtype', full_name='protocol.Child.childtype', index=2,
      number=3, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=30,
  serialized_end=112,
)


_NODE = _descriptor.Descriptor(
  name='Node',
  full_name='protocol.Node',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='children', full_name='protocol.Node.children', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=114,
  serialized_end=155,
)

_CHILD.fields_by_name['childtype'].enum_type = _CHILDTYPE
_NODE.fields_by_name['children'].message_type = _CHILD
DESCRIPTOR.message_types_by_name['Child'] = _CHILD
DESCRIPTOR.message_types_by_name['Node'] = _NODE
DESCRIPTOR.enum_types_by_name['CHILDTYPE'] = _CHILDTYPE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Child = _reflection.GeneratedProtocolMessageType('Child', (_message.Message,), dict(
  DESCRIPTOR = _CHILD,
  __module__ = 'merkeltrie_pb2'
  # @@protoc_insertion_point(class_scope:protocol.Child)
  ))
_sym_db.RegisterMessage(Child)

Node = _reflection.GeneratedProtocolMessageType('Node', (_message.Message,), dict(
  DESCRIPTOR = _NODE,
  __module__ = 'merkeltrie_pb2'
  # @@protoc_insertion_point(class_scope:protocol.Node)
  ))
_sym_db.RegisterMessage(Node)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n io.rexx.sdk.core.extend.protobuf'))
# @@protoc_insertion_point(module_scope)
