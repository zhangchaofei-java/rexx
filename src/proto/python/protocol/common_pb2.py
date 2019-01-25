

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
  name='common.proto',
  package='protocol',
  syntax='proto3',
  serialized_pb=_b('\n\x0c\x63ommon.proto\x12\x08protocol\"6\n\x07KeyPair\x12\x0b\n\x03key\x18\x01 \x01(\t\x12\r\n\x05value\x18\x02 \x01(\t\x12\x0f\n\x07version\x18\x03 \x01(\x03\"2\n\tSignature\x12\x12\n\npublic_key\x18\x01 \x01(\t\x12\x11\n\tsign_data\x18\x02 \x01(\x0c\"B\n\rLedgerUpgrade\x12\x1a\n\x12new_ledger_version\x18\x01 \x01(\x03\x12\x15\n\rnew_validator\x18\x02 \x01(\t\"J\n\tWsMessage\x12\x0c\n\x04type\x18\x01 \x01(\x03\x12\x0f\n\x07request\x18\x02 \x01(\x08\x12\x10\n\x08sequence\x18\x03 \x01(\x03\x12\x0c\n\x04\x64\x61ta\x18\x04 \x01(\x0c\"\x15\n\x04Ping\x12\r\n\x05nonce\x18\x01 \x01(\x03\"\x15\n\x04Pong\x12\r\n\x05nonce\x18\x01 \x01(\x03*\xcf\t\n\tERRORCODE\x12\x13\n\x0f\x45RRCODE_SUCCESS\x10\x00\x12\x1a\n\x16\x45RRCODE_INTERNAL_ERROR\x10\x01\x12\x1d\n\x19\x45RRCODE_INVALID_PARAMETER\x10\x02\x12\x19\n\x15\x45RRCODE_ALREADY_EXIST\x10\x03\x12\x15\n\x11\x45RRCODE_NOT_EXIST\x10\x04\x12\x16\n\x12\x45RRCODE_TX_TIMEOUT\x10\x05\x12\x19\n\x15\x45RRCODE_ACCESS_DENIED\x10\x06\x12\x19\n\x15\x45RRCODE_MATH_OVERFLOW\x10\x07\x12\'\n#ERRCODE_EXPR_CONDITION_RESULT_FALSE\x10\x14\x12\'\n#ERRCODE_EXPR_CONDITION_SYNTAX_ERROR\x10\x15\x12\x1a\n\x16\x45RRCODE_INVALID_PUBKEY\x10Z\x12\x1a\n\x16\x45RRCODE_INVALID_PRIKEY\x10[\x12\x19\n\x15\x45RRCODE_ASSET_INVALID\x10\\\x12\x1d\n\x19\x45RRCODE_INVALID_SIGNATURE\x10]\x12\x1b\n\x17\x45RRCODE_INVALID_ADDRESS\x10^\x12\x1e\n\x1a\x45RRCODE_MISSING_OPERATIONS\x10\x61\x12\x1f\n\x1b\x45RRCODE_TOO_MANY_OPERATIONS\x10\x62\x12\x18\n\x14\x45RRCODE_BAD_SEQUENCE\x10\x63\x12\x1f\n\x1b\x45RRCODE_ACCOUNT_LOW_RESERVE\x10\x64\x12$\n ERRCODE_ACCOUNT_SOURCEDEST_EQUAL\x10\x65\x12\x1e\n\x1a\x45RRCODE_ACCOUNT_DEST_EXIST\x10\x66\x12\x1d\n\x19\x45RRCODE_ACCOUNT_NOT_EXIST\x10g\x12%\n!ERRCODE_ACCOUNT_ASSET_LOW_RESERVE\x10h\x12*\n&ERRCODE_ACCOUNT_ASSET_AMOUNT_TOO_LARGE\x10i\x12$\n ERRCODE_ACCOUNT_INIT_LOW_RESERVE\x10j\x12\x1a\n\x16\x45RRCODE_FEE_NOT_ENOUGH\x10o\x12\x17\n\x13\x45RRCODE_FEE_INVALID\x10p\x12\x1a\n\x16\x45RRCODE_OUT_OF_TXCACHE\x10r\x12\x1c\n\x18\x45RRCODE_WEIGHT_NOT_VALID\x10x\x12\x1f\n\x1b\x45RRCODE_THRESHOLD_NOT_VALID\x10y\x12 \n\x1b\x45RRCODE_INVALID_DATAVERSION\x10\x90\x01\x12\x1c\n\x17\x45RRCODE_TX_SIZE_TOO_BIG\x10\x92\x01\x12\"\n\x1d\x45RRCODE_CONTRACT_EXECUTE_FAIL\x10\x97\x01\x12\"\n\x1d\x45RRCODE_CONTRACT_SYNTAX_ERROR\x10\x98\x01\x12(\n#ERRCODE_CONTRACT_TOO_MANY_RECURSION\x10\x99\x01\x12+\n&ERRCODE_CONTRACT_TOO_MANY_TRANSACTIONS\x10\x9a\x01\x12%\n ERRCODE_CONTRACT_EXECUTE_EXPIRED\x10\x9b\x01\x12!\n\x1c\x45RRCODE_TX_INSERT_QUEUE_FAIL\x10\xa0\x01\x42\"\n io.rexx.sdk.core.extend.protobufb\x06proto3')
)

_ERRORCODE = _descriptor.EnumDescriptor(
  name='ERRORCODE',
  full_name='protocol.ERRORCODE',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_SUCCESS', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_INTERNAL_ERROR', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_INVALID_PARAMETER', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_ALREADY_EXIST', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_NOT_EXIST', index=4, number=4,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_TX_TIMEOUT', index=5, number=5,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_ACCESS_DENIED', index=6, number=6,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_MATH_OVERFLOW', index=7, number=7,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_EXPR_CONDITION_RESULT_FALSE', index=8, number=20,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_EXPR_CONDITION_SYNTAX_ERROR', index=9, number=21,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_INVALID_PUBKEY', index=10, number=90,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_INVALID_PRIKEY', index=11, number=91,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_ASSET_INVALID', index=12, number=92,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_INVALID_SIGNATURE', index=13, number=93,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_INVALID_ADDRESS', index=14, number=94,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_MISSING_OPERATIONS', index=15, number=97,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_TOO_MANY_OPERATIONS', index=16, number=98,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_BAD_SEQUENCE', index=17, number=99,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_ACCOUNT_LOW_RESERVE', index=18, number=100,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_ACCOUNT_SOURCEDEST_EQUAL', index=19, number=101,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_ACCOUNT_DEST_EXIST', index=20, number=102,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_ACCOUNT_NOT_EXIST', index=21, number=103,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_ACCOUNT_ASSET_LOW_RESERVE', index=22, number=104,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_ACCOUNT_ASSET_AMOUNT_TOO_LARGE', index=23, number=105,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_ACCOUNT_INIT_LOW_RESERVE', index=24, number=106,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_FEE_NOT_ENOUGH', index=25, number=111,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_FEE_INVALID', index=26, number=112,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_OUT_OF_TXCACHE', index=27, number=114,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_WEIGHT_NOT_VALID', index=28, number=120,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_THRESHOLD_NOT_VALID', index=29, number=121,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_INVALID_DATAVERSION', index=30, number=144,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_TX_SIZE_TOO_BIG', index=31, number=146,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_CONTRACT_EXECUTE_FAIL', index=32, number=151,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_CONTRACT_SYNTAX_ERROR', index=33, number=152,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_CONTRACT_TOO_MANY_RECURSION', index=34, number=153,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_CONTRACT_TOO_MANY_TRANSACTIONS', index=35, number=154,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_CONTRACT_EXECUTE_EXPIRED', index=36, number=155,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERRCODE_TX_INSERT_QUEUE_FAIL', index=37, number=160,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=325,
  serialized_end=1556,
)
_sym_db.RegisterEnumDescriptor(_ERRORCODE)

ERRORCODE = enum_type_wrapper.EnumTypeWrapper(_ERRORCODE)
ERRCODE_SUCCESS = 0
ERRCODE_INTERNAL_ERROR = 1
ERRCODE_INVALID_PARAMETER = 2
ERRCODE_ALREADY_EXIST = 3
ERRCODE_NOT_EXIST = 4
ERRCODE_TX_TIMEOUT = 5
ERRCODE_ACCESS_DENIED = 6
ERRCODE_MATH_OVERFLOW = 7
ERRCODE_EXPR_CONDITION_RESULT_FALSE = 20
ERRCODE_EXPR_CONDITION_SYNTAX_ERROR = 21
ERRCODE_INVALID_PUBKEY = 90
ERRCODE_INVALID_PRIKEY = 91
ERRCODE_ASSET_INVALID = 92
ERRCODE_INVALID_SIGNATURE = 93
ERRCODE_INVALID_ADDRESS = 94
ERRCODE_MISSING_OPERATIONS = 97
ERRCODE_TOO_MANY_OPERATIONS = 98
ERRCODE_BAD_SEQUENCE = 99
ERRCODE_ACCOUNT_LOW_RESERVE = 100
ERRCODE_ACCOUNT_SOURCEDEST_EQUAL = 101
ERRCODE_ACCOUNT_DEST_EXIST = 102
ERRCODE_ACCOUNT_NOT_EXIST = 103
ERRCODE_ACCOUNT_ASSET_LOW_RESERVE = 104
ERRCODE_ACCOUNT_ASSET_AMOUNT_TOO_LARGE = 105
ERRCODE_ACCOUNT_INIT_LOW_RESERVE = 106
ERRCODE_FEE_NOT_ENOUGH = 111
ERRCODE_FEE_INVALID = 112
ERRCODE_OUT_OF_TXCACHE = 114
ERRCODE_WEIGHT_NOT_VALID = 120
ERRCODE_THRESHOLD_NOT_VALID = 121
ERRCODE_INVALID_DATAVERSION = 144
ERRCODE_TX_SIZE_TOO_BIG = 146
ERRCODE_CONTRACT_EXECUTE_FAIL = 151
ERRCODE_CONTRACT_SYNTAX_ERROR = 152
ERRCODE_CONTRACT_TOO_MANY_RECURSION = 153
ERRCODE_CONTRACT_TOO_MANY_TRANSACTIONS = 154
ERRCODE_CONTRACT_EXECUTE_EXPIRED = 155
ERRCODE_TX_INSERT_QUEUE_FAIL = 160



_KEYPAIR = _descriptor.Descriptor(
  name='KeyPair',
  full_name='protocol.KeyPair',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='key', full_name='protocol.KeyPair.key', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='value', full_name='protocol.KeyPair.value', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='version', full_name='protocol.KeyPair.version', index=2,
      number=3, type=3, cpp_type=2, label=1,
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
  serialized_start=26,
  serialized_end=80,
)


_SIGNATURE = _descriptor.Descriptor(
  name='Signature',
  full_name='protocol.Signature',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='public_key', full_name='protocol.Signature.public_key', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sign_data', full_name='protocol.Signature.sign_data', index=1,
      number=2, type=12, cpp_type=9, label=1,
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
  serialized_start=82,
  serialized_end=132,
)


_LEDGERUPGRADE = _descriptor.Descriptor(
  name='LedgerUpgrade',
  full_name='protocol.LedgerUpgrade',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='new_ledger_version', full_name='protocol.LedgerUpgrade.new_ledger_version', index=0,
      number=1, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='new_validator', full_name='protocol.LedgerUpgrade.new_validator', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
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
  serialized_start=134,
  serialized_end=200,
)


_WSMESSAGE = _descriptor.Descriptor(
  name='WsMessage',
  full_name='protocol.WsMessage',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='type', full_name='protocol.WsMessage.type', index=0,
      number=1, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='request', full_name='protocol.WsMessage.request', index=1,
      number=2, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sequence', full_name='protocol.WsMessage.sequence', index=2,
      number=3, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='data', full_name='protocol.WsMessage.data', index=3,
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
  serialized_start=202,
  serialized_end=276,
)


_PING = _descriptor.Descriptor(
  name='Ping',
  full_name='protocol.Ping',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='nonce', full_name='protocol.Ping.nonce', index=0,
      number=1, type=3, cpp_type=2, label=1,
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
  serialized_start=278,
  serialized_end=299,
)


_PONG = _descriptor.Descriptor(
  name='Pong',
  full_name='protocol.Pong',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='nonce', full_name='protocol.Pong.nonce', index=0,
      number=1, type=3, cpp_type=2, label=1,
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
  serialized_start=301,
  serialized_end=322,
)

DESCRIPTOR.message_types_by_name['KeyPair'] = _KEYPAIR
DESCRIPTOR.message_types_by_name['Signature'] = _SIGNATURE
DESCRIPTOR.message_types_by_name['LedgerUpgrade'] = _LEDGERUPGRADE
DESCRIPTOR.message_types_by_name['WsMessage'] = _WSMESSAGE
DESCRIPTOR.message_types_by_name['Ping'] = _PING
DESCRIPTOR.message_types_by_name['Pong'] = _PONG
DESCRIPTOR.enum_types_by_name['ERRORCODE'] = _ERRORCODE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

KeyPair = _reflection.GeneratedProtocolMessageType('KeyPair', (_message.Message,), dict(
  DESCRIPTOR = _KEYPAIR,
  __module__ = 'common_pb2'
  # @@protoc_insertion_point(class_scope:protocol.KeyPair)
  ))
_sym_db.RegisterMessage(KeyPair)

Signature = _reflection.GeneratedProtocolMessageType('Signature', (_message.Message,), dict(
  DESCRIPTOR = _SIGNATURE,
  __module__ = 'common_pb2'
  # @@protoc_insertion_point(class_scope:protocol.Signature)
  ))
_sym_db.RegisterMessage(Signature)

LedgerUpgrade = _reflection.GeneratedProtocolMessageType('LedgerUpgrade', (_message.Message,), dict(
  DESCRIPTOR = _LEDGERUPGRADE,
  __module__ = 'common_pb2'
  # @@protoc_insertion_point(class_scope:protocol.LedgerUpgrade)
  ))
_sym_db.RegisterMessage(LedgerUpgrade)

WsMessage = _reflection.GeneratedProtocolMessageType('WsMessage', (_message.Message,), dict(
  DESCRIPTOR = _WSMESSAGE,
  __module__ = 'common_pb2'
  # @@protoc_insertion_point(class_scope:protocol.WsMessage)
  ))
_sym_db.RegisterMessage(WsMessage)

Ping = _reflection.GeneratedProtocolMessageType('Ping', (_message.Message,), dict(
  DESCRIPTOR = _PING,
  __module__ = 'common_pb2'
  # @@protoc_insertion_point(class_scope:protocol.Ping)
  ))
_sym_db.RegisterMessage(Ping)

Pong = _reflection.GeneratedProtocolMessageType('Pong', (_message.Message,), dict(
  DESCRIPTOR = _PONG,
  __module__ = 'common_pb2'
  # @@protoc_insertion_point(class_scope:protocol.Pong)
  ))
_sym_db.RegisterMessage(Pong)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n io.rexx.sdk.core.extend.protobuf'))
# @@protoc_insertion_point(module_scope)
