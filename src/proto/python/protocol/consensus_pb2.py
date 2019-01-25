

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


import common_pb2 as common__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='consensus.proto',
  package='protocol',
  syntax='proto3',
  serialized_pb=_b('\n\x0f\x63onsensus.proto\x12\x08protocol\x1a\x0c\x63ommon.proto\"p\n\x0ePbftPrePrepare\x12\x13\n\x0bview_number\x18\x01 \x01(\x03\x12\x10\n\x08sequence\x18\x02 \x01(\x03\x12\x12\n\nreplica_id\x18\x03 \x01(\x03\x12\r\n\x05value\x18\x04 \x01(\x0c\x12\x14\n\x0cvalue_digest\x18\x05 \x01(\x0c\"^\n\x0bPbftPrepare\x12\x13\n\x0bview_number\x18\x01 \x01(\x03\x12\x10\n\x08sequence\x18\x02 \x01(\x03\x12\x12\n\nreplica_id\x18\x03 \x01(\x03\x12\x14\n\x0cvalue_digest\x18\x04 \x01(\x0c\"]\n\nPbftCommit\x12\x13\n\x0bview_number\x18\x01 \x01(\x03\x12\x10\n\x08sequence\x18\x02 \x01(\x03\x12\x12\n\nreplica_id\x18\x03 \x01(\x03\x12\x14\n\x0cvalue_digest\x18\x04 \x01(\x0c\"]\n\x0fPbftPreparedSet\x12&\n\x0bpre_prepare\x18\x01 \x01(\x0b\x32\x11.protocol.PbftEnv\x12\"\n\x07prepare\x18\x02 \x03(\x0b\x32\x11.protocol.PbftEnv\"i\n\x0ePbftViewChange\x12\x13\n\x0bview_number\x18\x01 \x01(\x03\x12\x10\n\x08sequence\x18\x02 \x01(\x03\x12\x1c\n\x14prepred_value_digest\x18\x03 \x01(\x0c\x12\x12\n\nreplica_id\x18\x04 \x01(\x03\"y\n\x1aPbftViewChangeWithRawValue\x12*\n\x0fview_change_env\x18\x01 \x01(\x0b\x32\x11.protocol.PbftEnv\x12/\n\x0cprepared_set\x18\x02 \x01(\x0b\x32\x19.protocol.PbftPreparedSet\"\x99\x01\n\x0bPbftNewView\x12\x13\n\x0bview_number\x18\x01 \x01(\x03\x12\x10\n\x08sequence\x18\x02 \x01(\x03\x12\x12\n\nreplica_id\x18\x03 \x01(\x03\x12\'\n\x0cview_changes\x18\x04 \x03(\x0b\x32\x11.protocol.PbftEnv\x12&\n\x0bpre_prepare\x18\x05 \x01(\x0b\x32\x11.protocol.PbftEnv\"\xe3\x02\n\x04Pbft\x12\x14\n\x0cround_number\x18\x01 \x01(\x03\x12\'\n\x04type\x18\x02 \x01(\x0e\x32\x19.protocol.PbftMessageType\x12-\n\x0bpre_prepare\x18\x03 \x01(\x0b\x32\x18.protocol.PbftPrePrepare\x12&\n\x07prepare\x18\x04 \x01(\x0b\x32\x15.protocol.PbftPrepare\x12$\n\x06\x63ommit\x18\x05 \x01(\x0b\x32\x14.protocol.PbftCommit\x12-\n\x0bview_change\x18\x06 \x01(\x0b\x32\x18.protocol.PbftViewChange\x12\'\n\x08new_view\x18\x07 \x01(\x0b\x32\x15.protocol.PbftNewView\x12G\n\x19view_change_with_rawvalue\x18\x08 \x01(\x0b\x32$.protocol.PbftViewChangeWithRawValue\"O\n\x07PbftEnv\x12\x1c\n\x04pbft\x18\x01 \x01(\x0b\x32\x0e.protocol.Pbft\x12&\n\tsignature\x18\x02 \x01(\x0b\x32\x13.protocol.Signature\"8\n\tValidator\x12\x0f\n\x07\x61\x64\x64ress\x18\x01 \x01(\t\x12\x1a\n\x12pledge_coin_amount\x18\x02 \x01(\x03\"7\n\x0cValidatorSet\x12\'\n\nvalidators\x18\x01 \x03(\x0b\x32\x13.protocol.Validator\"/\n\tPbftProof\x12\"\n\x07\x63ommits\x18\x01 \x03(\x0b\x32\x11.protocol.PbftEnv\"j\n\tFeeConfig\x12\x11\n\tgas_price\x18\x01 \x01(\x03\x12\x14\n\x0c\x62\x61se_reserve\x18\x02 \x01(\x03\"4\n\x04Type\x12\x0b\n\x07UNKNOWN\x10\x00\x12\r\n\tGAS_PRICE\x10\x01\x12\x10\n\x0c\x42\x41SE_RESERVE\x10\x02*\xb0\x01\n\x0fPbftMessageType\x12\x18\n\x14PBFT_TYPE_PREPREPARE\x10\x00\x12\x15\n\x11PBFT_TYPE_PREPARE\x10\x01\x12\x14\n\x10PBFT_TYPE_COMMIT\x10\x02\x12\x18\n\x14PBFT_TYPE_VIEWCHANGE\x10\x03\x12\x15\n\x11PBFT_TYPE_NEWVIEW\x10\x04\x12%\n!PBFT_TYPE_VIEWCHANG_WITH_RAWVALUE\x10\x05*8\n\rPbftValueType\x12\x11\n\rPBFT_VALUE_TX\x10\x00\x12\x14\n\x10PBFT_VALUE_TXSET\x10\x01\x42\"\n io.rexx.sdk.core.extend.protobufb\x06proto3')
  ,
  dependencies=[common__pb2.DESCRIPTOR,])

_PBFTMESSAGETYPE = _descriptor.EnumDescriptor(
  name='PbftMessageType',
  full_name='protocol.PbftMessageType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='PBFT_TYPE_PREPREPARE', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PBFT_TYPE_PREPARE', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PBFT_TYPE_COMMIT', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PBFT_TYPE_VIEWCHANGE', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PBFT_TYPE_NEWVIEW', index=4, number=4,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PBFT_TYPE_VIEWCHANG_WITH_RAWVALUE', index=5, number=5,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=1541,
  serialized_end=1717,
)
_sym_db.RegisterEnumDescriptor(_PBFTMESSAGETYPE)

PbftMessageType = enum_type_wrapper.EnumTypeWrapper(_PBFTMESSAGETYPE)
_PBFTVALUETYPE = _descriptor.EnumDescriptor(
  name='PbftValueType',
  full_name='protocol.PbftValueType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='PBFT_VALUE_TX', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PBFT_VALUE_TXSET', index=1, number=1,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=1719,
  serialized_end=1775,
)
_sym_db.RegisterEnumDescriptor(_PBFTVALUETYPE)

PbftValueType = enum_type_wrapper.EnumTypeWrapper(_PBFTVALUETYPE)
PBFT_TYPE_PREPREPARE = 0
PBFT_TYPE_PREPARE = 1
PBFT_TYPE_COMMIT = 2
PBFT_TYPE_VIEWCHANGE = 3
PBFT_TYPE_NEWVIEW = 4
PBFT_TYPE_VIEWCHANG_WITH_RAWVALUE = 5
PBFT_VALUE_TX = 0
PBFT_VALUE_TXSET = 1


_FEECONFIG_TYPE = _descriptor.EnumDescriptor(
  name='Type',
  full_name='protocol.FeeConfig.Type',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='UNKNOWN', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='GAS_PRICE', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='BASE_RESERVE', index=2, number=2,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=1486,
  serialized_end=1538,
)
_sym_db.RegisterEnumDescriptor(_FEECONFIG_TYPE)


_PBFTPREPREPARE = _descriptor.Descriptor(
  name='PbftPrePrepare',
  full_name='protocol.PbftPrePrepare',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='view_number', full_name='protocol.PbftPrePrepare.view_number', index=0,
      number=1, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sequence', full_name='protocol.PbftPrePrepare.sequence', index=1,
      number=2, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='replica_id', full_name='protocol.PbftPrePrepare.replica_id', index=2,
      number=3, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='value', full_name='protocol.PbftPrePrepare.value', index=3,
      number=4, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='value_digest', full_name='protocol.PbftPrePrepare.value_digest', index=4,
      number=5, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
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
  serialized_start=43,
  serialized_end=155,
)


_PBFTPREPARE = _descriptor.Descriptor(
  name='PbftPrepare',
  full_name='protocol.PbftPrepare',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='view_number', full_name='protocol.PbftPrepare.view_number', index=0,
      number=1, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sequence', full_name='protocol.PbftPrepare.sequence', index=1,
      number=2, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='replica_id', full_name='protocol.PbftPrepare.replica_id', index=2,
      number=3, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='value_digest', full_name='protocol.PbftPrepare.value_digest', index=3,
      number=4, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
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
  serialized_start=157,
  serialized_end=251,
)


_PBFTCOMMIT = _descriptor.Descriptor(
  name='PbftCommit',
  full_name='protocol.PbftCommit',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='view_number', full_name='protocol.PbftCommit.view_number', index=0,
      number=1, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sequence', full_name='protocol.PbftCommit.sequence', index=1,
      number=2, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='replica_id', full_name='protocol.PbftCommit.replica_id', index=2,
      number=3, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='value_digest', full_name='protocol.PbftCommit.value_digest', index=3,
      number=4, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
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
  serialized_start=253,
  serialized_end=346,
)


_PBFTPREPAREDSET = _descriptor.Descriptor(
  name='PbftPreparedSet',
  full_name='protocol.PbftPreparedSet',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='pre_prepare', full_name='protocol.PbftPreparedSet.pre_prepare', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='prepare', full_name='protocol.PbftPreparedSet.prepare', index=1,
      number=2, type=11, cpp_type=10, label=3,
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
  serialized_start=348,
  serialized_end=441,
)


_PBFTVIEWCHANGE = _descriptor.Descriptor(
  name='PbftViewChange',
  full_name='protocol.PbftViewChange',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='view_number', full_name='protocol.PbftViewChange.view_number', index=0,
      number=1, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sequence', full_name='protocol.PbftViewChange.sequence', index=1,
      number=2, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='prepred_value_digest', full_name='protocol.PbftViewChange.prepred_value_digest', index=2,
      number=3, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='replica_id', full_name='protocol.PbftViewChange.replica_id', index=3,
      number=4, type=3, cpp_type=2, label=1,
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
  serialized_start=443,
  serialized_end=548,
)


_PBFTVIEWCHANGEWITHRAWVALUE = _descriptor.Descriptor(
  name='PbftViewChangeWithRawValue',
  full_name='protocol.PbftViewChangeWithRawValue',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='view_change_env', full_name='protocol.PbftViewChangeWithRawValue.view_change_env', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='prepared_set', full_name='protocol.PbftViewChangeWithRawValue.prepared_set', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
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
  serialized_start=550,
  serialized_end=671,
)


_PBFTNEWVIEW = _descriptor.Descriptor(
  name='PbftNewView',
  full_name='protocol.PbftNewView',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='view_number', full_name='protocol.PbftNewView.view_number', index=0,
      number=1, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sequence', full_name='protocol.PbftNewView.sequence', index=1,
      number=2, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='replica_id', full_name='protocol.PbftNewView.replica_id', index=2,
      number=3, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='view_changes', full_name='protocol.PbftNewView.view_changes', index=3,
      number=4, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='pre_prepare', full_name='protocol.PbftNewView.pre_prepare', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
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
  serialized_start=674,
  serialized_end=827,
)


_PBFT = _descriptor.Descriptor(
  name='Pbft',
  full_name='protocol.Pbft',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='round_number', full_name='protocol.Pbft.round_number', index=0,
      number=1, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='type', full_name='protocol.Pbft.type', index=1,
      number=2, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='pre_prepare', full_name='protocol.Pbft.pre_prepare', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='prepare', full_name='protocol.Pbft.prepare', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='commit', full_name='protocol.Pbft.commit', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='view_change', full_name='protocol.Pbft.view_change', index=5,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='new_view', full_name='protocol.Pbft.new_view', index=6,
      number=7, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='view_change_with_rawvalue', full_name='protocol.Pbft.view_change_with_rawvalue', index=7,
      number=8, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
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
  serialized_start=830,
  serialized_end=1185,
)


_PBFTENV = _descriptor.Descriptor(
  name='PbftEnv',
  full_name='protocol.PbftEnv',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='pbft', full_name='protocol.PbftEnv.pbft', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='signature', full_name='protocol.PbftEnv.signature', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
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
  serialized_start=1187,
  serialized_end=1266,
)


_VALIDATOR = _descriptor.Descriptor(
  name='Validator',
  full_name='protocol.Validator',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='address', full_name='protocol.Validator.address', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='pledge_coin_amount', full_name='protocol.Validator.pledge_coin_amount', index=1,
      number=2, type=3, cpp_type=2, label=1,
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
  serialized_start=1268,
  serialized_end=1324,
)


_VALIDATORSET = _descriptor.Descriptor(
  name='ValidatorSet',
  full_name='protocol.ValidatorSet',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='validators', full_name='protocol.ValidatorSet.validators', index=0,
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
  serialized_start=1326,
  serialized_end=1381,
)


_PBFTPROOF = _descriptor.Descriptor(
  name='PbftProof',
  full_name='protocol.PbftProof',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='commits', full_name='protocol.PbftProof.commits', index=0,
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
  serialized_start=1383,
  serialized_end=1430,
)


_FEECONFIG = _descriptor.Descriptor(
  name='FeeConfig',
  full_name='protocol.FeeConfig',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='gas_price', full_name='protocol.FeeConfig.gas_price', index=0,
      number=1, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='base_reserve', full_name='protocol.FeeConfig.base_reserve', index=1,
      number=2, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _FEECONFIG_TYPE,
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1432,
  serialized_end=1538,
)

_PBFTPREPAREDSET.fields_by_name['pre_prepare'].message_type = _PBFTENV
_PBFTPREPAREDSET.fields_by_name['prepare'].message_type = _PBFTENV
_PBFTVIEWCHANGEWITHRAWVALUE.fields_by_name['view_change_env'].message_type = _PBFTENV
_PBFTVIEWCHANGEWITHRAWVALUE.fields_by_name['prepared_set'].message_type = _PBFTPREPAREDSET
_PBFTNEWVIEW.fields_by_name['view_changes'].message_type = _PBFTENV
_PBFTNEWVIEW.fields_by_name['pre_prepare'].message_type = _PBFTENV
_PBFT.fields_by_name['type'].enum_type = _PBFTMESSAGETYPE
_PBFT.fields_by_name['pre_prepare'].message_type = _PBFTPREPREPARE
_PBFT.fields_by_name['prepare'].message_type = _PBFTPREPARE
_PBFT.fields_by_name['commit'].message_type = _PBFTCOMMIT
_PBFT.fields_by_name['view_change'].message_type = _PBFTVIEWCHANGE
_PBFT.fields_by_name['new_view'].message_type = _PBFTNEWVIEW
_PBFT.fields_by_name['view_change_with_rawvalue'].message_type = _PBFTVIEWCHANGEWITHRAWVALUE
_PBFTENV.fields_by_name['pbft'].message_type = _PBFT
_PBFTENV.fields_by_name['signature'].message_type = common__pb2._SIGNATURE
_VALIDATORSET.fields_by_name['validators'].message_type = _VALIDATOR
_PBFTPROOF.fields_by_name['commits'].message_type = _PBFTENV
_FEECONFIG_TYPE.containing_type = _FEECONFIG
DESCRIPTOR.message_types_by_name['PbftPrePrepare'] = _PBFTPREPREPARE
DESCRIPTOR.message_types_by_name['PbftPrepare'] = _PBFTPREPARE
DESCRIPTOR.message_types_by_name['PbftCommit'] = _PBFTCOMMIT
DESCRIPTOR.message_types_by_name['PbftPreparedSet'] = _PBFTPREPAREDSET
DESCRIPTOR.message_types_by_name['PbftViewChange'] = _PBFTVIEWCHANGE
DESCRIPTOR.message_types_by_name['PbftViewChangeWithRawValue'] = _PBFTVIEWCHANGEWITHRAWVALUE
DESCRIPTOR.message_types_by_name['PbftNewView'] = _PBFTNEWVIEW
DESCRIPTOR.message_types_by_name['Pbft'] = _PBFT
DESCRIPTOR.message_types_by_name['PbftEnv'] = _PBFTENV
DESCRIPTOR.message_types_by_name['Validator'] = _VALIDATOR
DESCRIPTOR.message_types_by_name['ValidatorSet'] = _VALIDATORSET
DESCRIPTOR.message_types_by_name['PbftProof'] = _PBFTPROOF
DESCRIPTOR.message_types_by_name['FeeConfig'] = _FEECONFIG
DESCRIPTOR.enum_types_by_name['PbftMessageType'] = _PBFTMESSAGETYPE
DESCRIPTOR.enum_types_by_name['PbftValueType'] = _PBFTVALUETYPE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

PbftPrePrepare = _reflection.GeneratedProtocolMessageType('PbftPrePrepare', (_message.Message,), dict(
  DESCRIPTOR = _PBFTPREPREPARE,
  __module__ = 'consensus_pb2'
  # @@protoc_insertion_point(class_scope:protocol.PbftPrePrepare)
  ))
_sym_db.RegisterMessage(PbftPrePrepare)

PbftPrepare = _reflection.GeneratedProtocolMessageType('PbftPrepare', (_message.Message,), dict(
  DESCRIPTOR = _PBFTPREPARE,
  __module__ = 'consensus_pb2'
  # @@protoc_insertion_point(class_scope:protocol.PbftPrepare)
  ))
_sym_db.RegisterMessage(PbftPrepare)

PbftCommit = _reflection.GeneratedProtocolMessageType('PbftCommit', (_message.Message,), dict(
  DESCRIPTOR = _PBFTCOMMIT,
  __module__ = 'consensus_pb2'
  # @@protoc_insertion_point(class_scope:protocol.PbftCommit)
  ))
_sym_db.RegisterMessage(PbftCommit)

PbftPreparedSet = _reflection.GeneratedProtocolMessageType('PbftPreparedSet', (_message.Message,), dict(
  DESCRIPTOR = _PBFTPREPAREDSET,
  __module__ = 'consensus_pb2'
  # @@protoc_insertion_point(class_scope:protocol.PbftPreparedSet)
  ))
_sym_db.RegisterMessage(PbftPreparedSet)

PbftViewChange = _reflection.GeneratedProtocolMessageType('PbftViewChange', (_message.Message,), dict(
  DESCRIPTOR = _PBFTVIEWCHANGE,
  __module__ = 'consensus_pb2'
  # @@protoc_insertion_point(class_scope:protocol.PbftViewChange)
  ))
_sym_db.RegisterMessage(PbftViewChange)

PbftViewChangeWithRawValue = _reflection.GeneratedProtocolMessageType('PbftViewChangeWithRawValue', (_message.Message,), dict(
  DESCRIPTOR = _PBFTVIEWCHANGEWITHRAWVALUE,
  __module__ = 'consensus_pb2'
  # @@protoc_insertion_point(class_scope:protocol.PbftViewChangeWithRawValue)
  ))
_sym_db.RegisterMessage(PbftViewChangeWithRawValue)

PbftNewView = _reflection.GeneratedProtocolMessageType('PbftNewView', (_message.Message,), dict(
  DESCRIPTOR = _PBFTNEWVIEW,
  __module__ = 'consensus_pb2'
  # @@protoc_insertion_point(class_scope:protocol.PbftNewView)
  ))
_sym_db.RegisterMessage(PbftNewView)

Pbft = _reflection.GeneratedProtocolMessageType('Pbft', (_message.Message,), dict(
  DESCRIPTOR = _PBFT,
  __module__ = 'consensus_pb2'
  # @@protoc_insertion_point(class_scope:protocol.Pbft)
  ))
_sym_db.RegisterMessage(Pbft)

PbftEnv = _reflection.GeneratedProtocolMessageType('PbftEnv', (_message.Message,), dict(
  DESCRIPTOR = _PBFTENV,
  __module__ = 'consensus_pb2'
  # @@protoc_insertion_point(class_scope:protocol.PbftEnv)
  ))
_sym_db.RegisterMessage(PbftEnv)

Validator = _reflection.GeneratedProtocolMessageType('Validator', (_message.Message,), dict(
  DESCRIPTOR = _VALIDATOR,
  __module__ = 'consensus_pb2'
  # @@protoc_insertion_point(class_scope:protocol.Validator)
  ))
_sym_db.RegisterMessage(Validator)

ValidatorSet = _reflection.GeneratedProtocolMessageType('ValidatorSet', (_message.Message,), dict(
  DESCRIPTOR = _VALIDATORSET,
  __module__ = 'consensus_pb2'
  # @@protoc_insertion_point(class_scope:protocol.ValidatorSet)
  ))
_sym_db.RegisterMessage(ValidatorSet)

PbftProof = _reflection.GeneratedProtocolMessageType('PbftProof', (_message.Message,), dict(
  DESCRIPTOR = _PBFTPROOF,
  __module__ = 'consensus_pb2'
  # @@protoc_insertion_point(class_scope:protocol.PbftProof)
  ))
_sym_db.RegisterMessage(PbftProof)

FeeConfig = _reflection.GeneratedProtocolMessageType('FeeConfig', (_message.Message,), dict(
  DESCRIPTOR = _FEECONFIG,
  __module__ = 'consensus_pb2'
  # @@protoc_insertion_point(class_scope:protocol.FeeConfig)
  ))
_sym_db.RegisterMessage(FeeConfig)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n io.rexx.sdk.core.extend.protobuf'))
# @@protoc_insertion_point(module_scope)
