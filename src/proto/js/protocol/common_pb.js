

var jspb = require('./google-protobuf');
var goog = jspb;
var global = Function('return this')();

goog.exportSymbol('proto.protocol.ERRORCODE', null, global);
goog.exportSymbol('proto.protocol.KeyPair', null, global);
goog.exportSymbol('proto.protocol.LedgerUpgrade', null, global);
goog.exportSymbol('proto.protocol.Ping', null, global);
goog.exportSymbol('proto.protocol.Pong', null, global);
goog.exportSymbol('proto.protocol.Signature', null, global);
goog.exportSymbol('proto.protocol.WsMessage', null, global);

/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.protocol.KeyPair = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.protocol.KeyPair, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.protocol.KeyPair.displayName = 'proto.protocol.KeyPair';
}


if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto suitable for use in Soy templates.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     com.google.apps.jspb.JsClassTemplate.JS_RESERVED_WORDS.
 * @param {boolean=} opt_includeInstance Whether to include the JSPB instance
 *     for transitional soy proto support: http://goto/soy-param-migration
 * @return {!Object}
 */
proto.protocol.KeyPair.prototype.toObject = function(opt_includeInstance) {
  return proto.protocol.KeyPair.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.protocol.KeyPair} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.protocol.KeyPair.toObject = function(includeInstance, msg) {
  var f, obj = {
    key: jspb.Message.getFieldWithDefault(msg, 1, ""),
    value: jspb.Message.getFieldWithDefault(msg, 2, ""),
    version: jspb.Message.getFieldWithDefault(msg, 3, 0)
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.protocol.KeyPair}
 */
proto.protocol.KeyPair.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.protocol.KeyPair;
  return proto.protocol.KeyPair.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.protocol.KeyPair} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.protocol.KeyPair}
 */
proto.protocol.KeyPair.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {string} */ (reader.readString());
      msg.setKey(value);
      break;
    case 2:
      var value = /** @type {string} */ (reader.readString());
      msg.setValue(value);
      break;
    case 3:
      var value = /** @type {number} */ (reader.readInt64());
      msg.setVersion(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.protocol.KeyPair.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.protocol.KeyPair.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.protocol.KeyPair} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.protocol.KeyPair.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getKey();
  if (f.length > 0) {
    writer.writeString(
      1,
      f
    );
  }
  f = message.getValue();
  if (f.length > 0) {
    writer.writeString(
      2,
      f
    );
  }
  f = message.getVersion();
  if (f !== 0) {
    writer.writeInt64(
      3,
      f
    );
  }
};


/**
 * optional string key = 1;
 * @return {string}
 */
proto.protocol.KeyPair.prototype.getKey = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 1, ""));
};


/** @param {string} value */
proto.protocol.KeyPair.prototype.setKey = function(value) {
  jspb.Message.setProto3StringField(this, 1, value);
};


/**
 * optional string value = 2;
 * @return {string}
 */
proto.protocol.KeyPair.prototype.getValue = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 2, ""));
};


/** @param {string} value */
proto.protocol.KeyPair.prototype.setValue = function(value) {
  jspb.Message.setProto3StringField(this, 2, value);
};


/**
 * optional int64 version = 3;
 * @return {number}
 */
proto.protocol.KeyPair.prototype.getVersion = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 3, 0));
};


/** @param {number} value */
proto.protocol.KeyPair.prototype.setVersion = function(value) {
  jspb.Message.setProto3IntField(this, 3, value);
};



/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.protocol.Signature = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.protocol.Signature, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.protocol.Signature.displayName = 'proto.protocol.Signature';
}


if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto suitable for use in Soy templates.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     com.google.apps.jspb.JsClassTemplate.JS_RESERVED_WORDS.
 * @param {boolean=} opt_includeInstance Whether to include the JSPB instance
 *     for transitional soy proto support: http://goto/soy-param-migration
 * @return {!Object}
 */
proto.protocol.Signature.prototype.toObject = function(opt_includeInstance) {
  return proto.protocol.Signature.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.protocol.Signature} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.protocol.Signature.toObject = function(includeInstance, msg) {
  var f, obj = {
    publicKey: jspb.Message.getFieldWithDefault(msg, 1, ""),
    signData: msg.getSignData_asB64()
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.protocol.Signature}
 */
proto.protocol.Signature.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.protocol.Signature;
  return proto.protocol.Signature.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.protocol.Signature} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.protocol.Signature}
 */
proto.protocol.Signature.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {string} */ (reader.readString());
      msg.setPublicKey(value);
      break;
    case 2:
      var value = /** @type {!Uint8Array} */ (reader.readBytes());
      msg.setSignData(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.protocol.Signature.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.protocol.Signature.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.protocol.Signature} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.protocol.Signature.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getPublicKey();
  if (f.length > 0) {
    writer.writeString(
      1,
      f
    );
  }
  f = message.getSignData_asU8();
  if (f.length > 0) {
    writer.writeBytes(
      2,
      f
    );
  }
};


/**
 * optional string public_key = 1;
 * @return {string}
 */
proto.protocol.Signature.prototype.getPublicKey = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 1, ""));
};


/** @param {string} value */
proto.protocol.Signature.prototype.setPublicKey = function(value) {
  jspb.Message.setProto3StringField(this, 1, value);
};


/**
 * optional bytes sign_data = 2;
 * @return {!(string|Uint8Array)}
 */
proto.protocol.Signature.prototype.getSignData = function() {
  return /** @type {!(string|Uint8Array)} */ (jspb.Message.getFieldWithDefault(this, 2, ""));
};


/**
 * optional bytes sign_data = 2;
 * This is a type-conversion wrapper around `getSignData()`
 * @return {string}
 */
proto.protocol.Signature.prototype.getSignData_asB64 = function() {
  return /** @type {string} */ (jspb.Message.bytesAsB64(
      this.getSignData()));
};


/**
 * optional bytes sign_data = 2;
 * Note that Uint8Array is not supported on all browsers.
 * @see http://caniuse.com/Uint8Array
 * This is a type-conversion wrapper around `getSignData()`
 * @return {!Uint8Array}
 */
proto.protocol.Signature.prototype.getSignData_asU8 = function() {
  return /** @type {!Uint8Array} */ (jspb.Message.bytesAsU8(
      this.getSignData()));
};


/** @param {!(string|Uint8Array)} value */
proto.protocol.Signature.prototype.setSignData = function(value) {
  jspb.Message.setProto3BytesField(this, 2, value);
};



/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.protocol.LedgerUpgrade = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.protocol.LedgerUpgrade, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.protocol.LedgerUpgrade.displayName = 'proto.protocol.LedgerUpgrade';
}


if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto suitable for use in Soy templates.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     com.google.apps.jspb.JsClassTemplate.JS_RESERVED_WORDS.
 * @param {boolean=} opt_includeInstance Whether to include the JSPB instance
 *     for transitional soy proto support: http://goto/soy-param-migration
 * @return {!Object}
 */
proto.protocol.LedgerUpgrade.prototype.toObject = function(opt_includeInstance) {
  return proto.protocol.LedgerUpgrade.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.protocol.LedgerUpgrade} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.protocol.LedgerUpgrade.toObject = function(includeInstance, msg) {
  var f, obj = {
    newLedgerVersion: jspb.Message.getFieldWithDefault(msg, 1, 0),
    newValidator: jspb.Message.getFieldWithDefault(msg, 2, "")
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.protocol.LedgerUpgrade}
 */
proto.protocol.LedgerUpgrade.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.protocol.LedgerUpgrade;
  return proto.protocol.LedgerUpgrade.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.protocol.LedgerUpgrade} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.protocol.LedgerUpgrade}
 */
proto.protocol.LedgerUpgrade.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {number} */ (reader.readInt64());
      msg.setNewLedgerVersion(value);
      break;
    case 2:
      var value = /** @type {string} */ (reader.readString());
      msg.setNewValidator(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.protocol.LedgerUpgrade.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.protocol.LedgerUpgrade.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.protocol.LedgerUpgrade} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.protocol.LedgerUpgrade.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getNewLedgerVersion();
  if (f !== 0) {
    writer.writeInt64(
      1,
      f
    );
  }
  f = message.getNewValidator();
  if (f.length > 0) {
    writer.writeString(
      2,
      f
    );
  }
};


/**
 * optional int64 new_ledger_version = 1;
 * @return {number}
 */
proto.protocol.LedgerUpgrade.prototype.getNewLedgerVersion = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 1, 0));
};


/** @param {number} value */
proto.protocol.LedgerUpgrade.prototype.setNewLedgerVersion = function(value) {
  jspb.Message.setProto3IntField(this, 1, value);
};


/**
 * optional string new_validator = 2;
 * @return {string}
 */
proto.protocol.LedgerUpgrade.prototype.getNewValidator = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 2, ""));
};


/** @param {string} value */
proto.protocol.LedgerUpgrade.prototype.setNewValidator = function(value) {
  jspb.Message.setProto3StringField(this, 2, value);
};



/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.protocol.WsMessage = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.protocol.WsMessage, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.protocol.WsMessage.displayName = 'proto.protocol.WsMessage';
}


if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto suitable for use in Soy templates.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     com.google.apps.jspb.JsClassTemplate.JS_RESERVED_WORDS.
 * @param {boolean=} opt_includeInstance Whether to include the JSPB instance
 *     for transitional soy proto support: http://goto/soy-param-migration
 * @return {!Object}
 */
proto.protocol.WsMessage.prototype.toObject = function(opt_includeInstance) {
  return proto.protocol.WsMessage.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.protocol.WsMessage} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.protocol.WsMessage.toObject = function(includeInstance, msg) {
  var f, obj = {
    type: jspb.Message.getFieldWithDefault(msg, 1, 0),
    request: jspb.Message.getFieldWithDefault(msg, 2, false),
    sequence: jspb.Message.getFieldWithDefault(msg, 3, 0),
    data: msg.getData_asB64()
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.protocol.WsMessage}
 */
proto.protocol.WsMessage.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.protocol.WsMessage;
  return proto.protocol.WsMessage.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.protocol.WsMessage} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.protocol.WsMessage}
 */
proto.protocol.WsMessage.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {number} */ (reader.readInt64());
      msg.setType(value);
      break;
    case 2:
      var value = /** @type {boolean} */ (reader.readBool());
      msg.setRequest(value);
      break;
    case 3:
      var value = /** @type {number} */ (reader.readInt64());
      msg.setSequence(value);
      break;
    case 4:
      var value = /** @type {!Uint8Array} */ (reader.readBytes());
      msg.setData(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.protocol.WsMessage.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.protocol.WsMessage.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.protocol.WsMessage} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.protocol.WsMessage.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getType();
  if (f !== 0) {
    writer.writeInt64(
      1,
      f
    );
  }
  f = message.getRequest();
  if (f) {
    writer.writeBool(
      2,
      f
    );
  }
  f = message.getSequence();
  if (f !== 0) {
    writer.writeInt64(
      3,
      f
    );
  }
  f = message.getData_asU8();
  if (f.length > 0) {
    writer.writeBytes(
      4,
      f
    );
  }
};


/**
 * optional int64 type = 1;
 * @return {number}
 */
proto.protocol.WsMessage.prototype.getType = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 1, 0));
};


/** @param {number} value */
proto.protocol.WsMessage.prototype.setType = function(value) {
  jspb.Message.setProto3IntField(this, 1, value);
};


/**
 * optional bool request = 2;
 * Note that Boolean fields may be set to 0/1 when serialized from a Java server.
 * You should avoid comparisons like {@code val === true/false} in those cases.
 * @return {boolean}
 */
proto.protocol.WsMessage.prototype.getRequest = function() {
  return /** @type {boolean} */ (jspb.Message.getFieldWithDefault(this, 2, false));
};


/** @param {boolean} value */
proto.protocol.WsMessage.prototype.setRequest = function(value) {
  jspb.Message.setProto3BooleanField(this, 2, value);
};


/**
 * optional int64 sequence = 3;
 * @return {number}
 */
proto.protocol.WsMessage.prototype.getSequence = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 3, 0));
};


/** @param {number} value */
proto.protocol.WsMessage.prototype.setSequence = function(value) {
  jspb.Message.setProto3IntField(this, 3, value);
};


/**
 * optional bytes data = 4;
 * @return {!(string|Uint8Array)}
 */
proto.protocol.WsMessage.prototype.getData = function() {
  return /** @type {!(string|Uint8Array)} */ (jspb.Message.getFieldWithDefault(this, 4, ""));
};


/**
 * optional bytes data = 4;
 * This is a type-conversion wrapper around `getData()`
 * @return {string}
 */
proto.protocol.WsMessage.prototype.getData_asB64 = function() {
  return /** @type {string} */ (jspb.Message.bytesAsB64(
      this.getData()));
};


/**
 * optional bytes data = 4;
 * Note that Uint8Array is not supported on all browsers.
 * @see http://caniuse.com/Uint8Array
 * This is a type-conversion wrapper around `getData()`
 * @return {!Uint8Array}
 */
proto.protocol.WsMessage.prototype.getData_asU8 = function() {
  return /** @type {!Uint8Array} */ (jspb.Message.bytesAsU8(
      this.getData()));
};


/** @param {!(string|Uint8Array)} value */
proto.protocol.WsMessage.prototype.setData = function(value) {
  jspb.Message.setProto3BytesField(this, 4, value);
};



/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.protocol.Ping = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.protocol.Ping, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.protocol.Ping.displayName = 'proto.protocol.Ping';
}


if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto suitable for use in Soy templates.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     com.google.apps.jspb.JsClassTemplate.JS_RESERVED_WORDS.
 * @param {boolean=} opt_includeInstance Whether to include the JSPB instance
 *     for transitional soy proto support: http://goto/soy-param-migration
 * @return {!Object}
 */
proto.protocol.Ping.prototype.toObject = function(opt_includeInstance) {
  return proto.protocol.Ping.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.protocol.Ping} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.protocol.Ping.toObject = function(includeInstance, msg) {
  var f, obj = {
    nonce: jspb.Message.getFieldWithDefault(msg, 1, 0)
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.protocol.Ping}
 */
proto.protocol.Ping.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.protocol.Ping;
  return proto.protocol.Ping.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.protocol.Ping} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.protocol.Ping}
 */
proto.protocol.Ping.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {number} */ (reader.readInt64());
      msg.setNonce(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.protocol.Ping.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.protocol.Ping.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.protocol.Ping} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.protocol.Ping.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getNonce();
  if (f !== 0) {
    writer.writeInt64(
      1,
      f
    );
  }
};


/**
 * optional int64 nonce = 1;
 * @return {number}
 */
proto.protocol.Ping.prototype.getNonce = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 1, 0));
};


/** @param {number} value */
proto.protocol.Ping.prototype.setNonce = function(value) {
  jspb.Message.setProto3IntField(this, 1, value);
};



/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.protocol.Pong = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.protocol.Pong, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.protocol.Pong.displayName = 'proto.protocol.Pong';
}


if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto suitable for use in Soy templates.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     com.google.apps.jspb.JsClassTemplate.JS_RESERVED_WORDS.
 * @param {boolean=} opt_includeInstance Whether to include the JSPB instance
 *     for transitional soy proto support: http://goto/soy-param-migration
 * @return {!Object}
 */
proto.protocol.Pong.prototype.toObject = function(opt_includeInstance) {
  return proto.protocol.Pong.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.protocol.Pong} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.protocol.Pong.toObject = function(includeInstance, msg) {
  var f, obj = {
    nonce: jspb.Message.getFieldWithDefault(msg, 1, 0)
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.protocol.Pong}
 */
proto.protocol.Pong.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.protocol.Pong;
  return proto.protocol.Pong.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.protocol.Pong} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.protocol.Pong}
 */
proto.protocol.Pong.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {number} */ (reader.readInt64());
      msg.setNonce(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.protocol.Pong.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.protocol.Pong.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.protocol.Pong} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.protocol.Pong.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getNonce();
  if (f !== 0) {
    writer.writeInt64(
      1,
      f
    );
  }
};


/**
 * optional int64 nonce = 1;
 * @return {number}
 */
proto.protocol.Pong.prototype.getNonce = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 1, 0));
};


/** @param {number} value */
proto.protocol.Pong.prototype.setNonce = function(value) {
  jspb.Message.setProto3IntField(this, 1, value);
};


/**
 * @enum {number}
 */
proto.protocol.ERRORCODE = {
  ERRCODE_SUCCESS: 0,
  ERRCODE_INTERNAL_ERROR: 1,
  ERRCODE_INVALID_PARAMETER: 2,
  ERRCODE_ALREADY_EXIST: 3,
  ERRCODE_NOT_EXIST: 4,
  ERRCODE_TX_TIMEOUT: 5,
  ERRCODE_ACCESS_DENIED: 6,
  ERRCODE_MATH_OVERFLOW: 7,
  ERRCODE_EXPR_CONDITION_RESULT_FALSE: 20,
  ERRCODE_EXPR_CONDITION_SYNTAX_ERROR: 21,
  ERRCODE_INVALID_PUBKEY: 90,
  ERRCODE_INVALID_PRIKEY: 91,
  ERRCODE_ASSET_INVALID: 92,
  ERRCODE_INVALID_SIGNATURE: 93,
  ERRCODE_INVALID_ADDRESS: 94,
  ERRCODE_MISSING_OPERATIONS: 97,
  ERRCODE_TOO_MANY_OPERATIONS: 98,
  ERRCODE_BAD_SEQUENCE: 99,
  ERRCODE_ACCOUNT_LOW_RESERVE: 100,
  ERRCODE_ACCOUNT_SOURCEDEST_EQUAL: 101,
  ERRCODE_ACCOUNT_DEST_EXIST: 102,
  ERRCODE_ACCOUNT_NOT_EXIST: 103,
  ERRCODE_ACCOUNT_ASSET_LOW_RESERVE: 104,
  ERRCODE_ACCOUNT_ASSET_AMOUNT_TOO_LARGE: 105,
  ERRCODE_ACCOUNT_INIT_LOW_RESERVE: 106,
  ERRCODE_FEE_NOT_ENOUGH: 111,
  ERRCODE_FEE_INVALID: 112,
  ERRCODE_OUT_OF_TXCACHE: 114,
  ERRCODE_WEIGHT_NOT_VALID: 120,
  ERRCODE_THRESHOLD_NOT_VALID: 121,
  ERRCODE_INVALID_DATAVERSION: 144,
  ERRCODE_TX_SIZE_TOO_BIG: 146,
  ERRCODE_CONTRACT_EXECUTE_FAIL: 151,
  ERRCODE_CONTRACT_SYNTAX_ERROR: 152,
  ERRCODE_CONTRACT_TOO_MANY_RECURSION: 153,
  ERRCODE_CONTRACT_TOO_MANY_TRANSACTIONS: 154,
  ERRCODE_CONTRACT_EXECUTE_EXPIRED: 155,
  ERRCODE_TX_INSERT_QUEUE_FAIL: 160
};

goog.object.extend(exports, proto.protocol);
