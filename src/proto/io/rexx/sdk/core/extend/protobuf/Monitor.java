

package io.rexx.sdk.core.extend.protobuf;

public final class Monitor {
  private Monitor() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  /**
   * Protobuf enum {@code monitor.MONITOR_MESSAGE_TYPE}
   */
  public enum MONITOR_MESSAGE_TYPE
      implements com.google.protobuf.ProtocolMessageEnum {
    /**
     * <code>MONITOR_MSGTYPE_NONE = 0;</code>
     */
    MONITOR_MSGTYPE_NONE(0),
    /**
     * <code>MONITOR_MSGTYPE_HELLO = 30;</code>
     */
    MONITOR_MSGTYPE_HELLO(30),
    /**
     * <code>MONITOR_MSGTYPE_REGISTER = 31;</code>
     */
    MONITOR_MSGTYPE_REGISTER(31),
    /**
     * <code>MONITOR_MSGTYPE_REXX = 32;</code>
     */
    MONITOR_MSGTYPE_REXX(32),
    /**
     * <code>MONITOR_MSGTYPE_LEDGER = 33;</code>
     */
    MONITOR_MSGTYPE_LEDGER(33),
    /**
     * <code>MONITOR_MSGTYPE_SYSTEM = 34;</code>
     */
    MONITOR_MSGTYPE_SYSTEM(34),
    /**
     * <code>MONITOR_MSGTYPE_ALERT = 35;</code>
     */
    MONITOR_MSGTYPE_ALERT(35),
    /**
     * <code>MONITOR_MSGTYPE_NOTICE = 36;</code>
     */
    MONITOR_MSGTYPE_NOTICE(36),
    /**
     * <code>MONITOR_MSGTYPE_ACCOUNT_EXCEPTION = 37;</code>
     */
    MONITOR_MSGTYPE_ACCOUNT_EXCEPTION(37),
    /**
     * <code>MONITOR_MSGTYPE_ERROR = 39;</code>
     */
    MONITOR_MSGTYPE_ERROR(39),
    UNRECOGNIZED(-1),
    ;

    /**
     * <code>MONITOR_MSGTYPE_NONE = 0;</code>
     */
    public static final int MONITOR_MSGTYPE_NONE_VALUE = 0;
    /**
     * <code>MONITOR_MSGTYPE_HELLO = 30;</code>
     */
    public static final int MONITOR_MSGTYPE_HELLO_VALUE = 30;
    /**
     * <code>MONITOR_MSGTYPE_REGISTER = 31;</code>
     */
    public static final int MONITOR_MSGTYPE_REGISTER_VALUE = 31;
    /**
     * <code>MONITOR_MSGTYPE_REXX = 32;</code>
     */
    public static final int MONITOR_MSGTYPE_REXX_VALUE = 32;
    /**
     * <code>MONITOR_MSGTYPE_LEDGER = 33;</code>
     */
    public static final int MONITOR_MSGTYPE_LEDGER_VALUE = 33;
    /**
     * <code>MONITOR_MSGTYPE_SYSTEM = 34;</code>
     */
    public static final int MONITOR_MSGTYPE_SYSTEM_VALUE = 34;
    /**
     * <code>MONITOR_MSGTYPE_ALERT = 35;</code>
     */
    public static final int MONITOR_MSGTYPE_ALERT_VALUE = 35;
    /**
     * <code>MONITOR_MSGTYPE_NOTICE = 36;</code>
     */
    public static final int MONITOR_MSGTYPE_NOTICE_VALUE = 36;
    /**
     * <code>MONITOR_MSGTYPE_ACCOUNT_EXCEPTION = 37;</code>
     */
    public static final int MONITOR_MSGTYPE_ACCOUNT_EXCEPTION_VALUE = 37;
    /**
     * <code>MONITOR_MSGTYPE_ERROR = 39;</code>
     */
    public static final int MONITOR_MSGTYPE_ERROR_VALUE = 39;


    public final int getNumber() {
      if (this == UNRECOGNIZED) {
        throw new java.lang.IllegalArgumentException(
            "Can't get the number of an unknown enum value.");
      }
      return value;
    }

    /**
     * @deprecated Use {@link #forNumber(int)} instead.
     */
    @java.lang.Deprecated
    public static MONITOR_MESSAGE_TYPE valueOf(int value) {
      return forNumber(value);
    }

    public static MONITOR_MESSAGE_TYPE forNumber(int value) {
      switch (value) {
        case 0: return MONITOR_MSGTYPE_NONE;
        case 30: return MONITOR_MSGTYPE_HELLO;
        case 31: return MONITOR_MSGTYPE_REGISTER;
        case 32: return MONITOR_MSGTYPE_REXX;
        case 33: return MONITOR_MSGTYPE_LEDGER;
        case 34: return MONITOR_MSGTYPE_SYSTEM;
        case 35: return MONITOR_MSGTYPE_ALERT;
        case 36: return MONITOR_MSGTYPE_NOTICE;
        case 37: return MONITOR_MSGTYPE_ACCOUNT_EXCEPTION;
        case 39: return MONITOR_MSGTYPE_ERROR;
        default: return null;
      }
    }

    public static com.google.protobuf.Internal.EnumLiteMap<MONITOR_MESSAGE_TYPE>
        internalGetValueMap() {
      return internalValueMap;
    }
    private static final com.google.protobuf.Internal.EnumLiteMap<
        MONITOR_MESSAGE_TYPE> internalValueMap =
          new com.google.protobuf.Internal.EnumLiteMap<MONITOR_MESSAGE_TYPE>() {
            public MONITOR_MESSAGE_TYPE findValueByNumber(int number) {
              return MONITOR_MESSAGE_TYPE.forNumber(number);
            }
          };

    public final com.google.protobuf.Descriptors.EnumValueDescriptor
        getValueDescriptor() {
      return getDescriptor().getValues().get(ordinal());
    }
    public final com.google.protobuf.Descriptors.EnumDescriptor
        getDescriptorForType() {
      return getDescriptor();
    }
    public static final com.google.protobuf.Descriptors.EnumDescriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Monitor.getDescriptor().getEnumTypes().get(0);
    }

    private static final MONITOR_MESSAGE_TYPE[] VALUES = values();

    public static MONITOR_MESSAGE_TYPE valueOf(
        com.google.protobuf.Descriptors.EnumValueDescriptor desc) {
      if (desc.getType() != getDescriptor()) {
        throw new java.lang.IllegalArgumentException(
          "EnumValueDescriptor is not for this type.");
      }
      if (desc.getIndex() == -1) {
        return UNRECOGNIZED;
      }
      return VALUES[desc.getIndex()];
    }

    private final int value;

    private MONITOR_MESSAGE_TYPE(int value) {
      this.value = value;
    }

    // @@protoc_insertion_point(enum_scope:monitor.MONITOR_MESSAGE_TYPE)
  }

  public interface HelloOrBuilder extends
      // @@protoc_insertion_point(interface_extends:monitor.Hello)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>int64 service_version = 1;</code>
     */
    long getServiceVersion();

    /**
     * <code>int64 connection_timeout = 2;</code>
     */
    long getConnectionTimeout();

    /**
     * <code>int64 timestamp = 3;</code>
     */
    long getTimestamp();
  }
  /**
   * Protobuf type {@code monitor.Hello}
   */
  public  static final class Hello extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:monitor.Hello)
      HelloOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use Hello.newBuilder() to construct.
    private Hello(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private Hello() {
      serviceVersion_ = 0L;
      connectionTimeout_ = 0L;
      timestamp_ = 0L;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private Hello(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownFieldProto3(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 8: {

              serviceVersion_ = input.readInt64();
              break;
            }
            case 16: {

              connectionTimeout_ = input.readInt64();
              break;
            }
            case 24: {

              timestamp_ = input.readInt64();
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_Hello_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_Hello_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Monitor.Hello.class, io.rexx.sdk.core.extend.protobuf.Monitor.Hello.Builder.class);
    }

    public static final int SERVICE_VERSION_FIELD_NUMBER = 1;
    private long serviceVersion_;
    /**
     * <code>int64 service_version = 1;</code>
     */
    public long getServiceVersion() {
      return serviceVersion_;
    }

    public static final int CONNECTION_TIMEOUT_FIELD_NUMBER = 2;
    private long connectionTimeout_;
    /**
     * <code>int64 connection_timeout = 2;</code>
     */
    public long getConnectionTimeout() {
      return connectionTimeout_;
    }

    public static final int TIMESTAMP_FIELD_NUMBER = 3;
    private long timestamp_;
    /**
     * <code>int64 timestamp = 3;</code>
     */
    public long getTimestamp() {
      return timestamp_;
    }

    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (serviceVersion_ != 0L) {
        output.writeInt64(1, serviceVersion_);
      }
      if (connectionTimeout_ != 0L) {
        output.writeInt64(2, connectionTimeout_);
      }
      if (timestamp_ != 0L) {
        output.writeInt64(3, timestamp_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (serviceVersion_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(1, serviceVersion_);
      }
      if (connectionTimeout_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(2, connectionTimeout_);
      }
      if (timestamp_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(3, timestamp_);
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Monitor.Hello)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Monitor.Hello other = (io.rexx.sdk.core.extend.protobuf.Monitor.Hello) obj;

      boolean result = true;
      result = result && (getServiceVersion()
          == other.getServiceVersion());
      result = result && (getConnectionTimeout()
          == other.getConnectionTimeout());
      result = result && (getTimestamp()
          == other.getTimestamp());
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      hash = (37 * hash) + SERVICE_VERSION_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getServiceVersion());
      hash = (37 * hash) + CONNECTION_TIMEOUT_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getConnectionTimeout());
      hash = (37 * hash) + TIMESTAMP_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getTimestamp());
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Monitor.Hello parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Hello parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Hello parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Hello parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Hello parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Hello parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Hello parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Hello parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Hello parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Hello parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Hello parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Hello parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Monitor.Hello prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * Protobuf type {@code monitor.Hello}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:monitor.Hello)
        io.rexx.sdk.core.extend.protobuf.Monitor.HelloOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_Hello_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_Hello_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Monitor.Hello.class, io.rexx.sdk.core.extend.protobuf.Monitor.Hello.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Monitor.Hello.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      public Builder clear() {
        super.clear();
        serviceVersion_ = 0L;

        connectionTimeout_ = 0L;

        timestamp_ = 0L;

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_Hello_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.Hello getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.Hello.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.Hello build() {
        io.rexx.sdk.core.extend.protobuf.Monitor.Hello result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.Hello buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Monitor.Hello result = new io.rexx.sdk.core.extend.protobuf.Monitor.Hello(this);
        result.serviceVersion_ = serviceVersion_;
        result.connectionTimeout_ = connectionTimeout_;
        result.timestamp_ = timestamp_;
        onBuilt();
        return result;
      }

      public Builder clone() {
        return (Builder) super.clone();
      }
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Monitor.Hello) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Monitor.Hello)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Monitor.Hello other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Monitor.Hello.getDefaultInstance()) return this;
        if (other.getServiceVersion() != 0L) {
          setServiceVersion(other.getServiceVersion());
        }
        if (other.getConnectionTimeout() != 0L) {
          setConnectionTimeout(other.getConnectionTimeout());
        }
        if (other.getTimestamp() != 0L) {
          setTimestamp(other.getTimestamp());
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        io.rexx.sdk.core.extend.protobuf.Monitor.Hello parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Monitor.Hello) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private long serviceVersion_ ;
      /**
       * <code>int64 service_version = 1;</code>
       */
      public long getServiceVersion() {
        return serviceVersion_;
      }
      /**
       * <code>int64 service_version = 1;</code>
       */
      public Builder setServiceVersion(long value) {
        
        serviceVersion_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 service_version = 1;</code>
       */
      public Builder clearServiceVersion() {
        
        serviceVersion_ = 0L;
        onChanged();
        return this;
      }

      private long connectionTimeout_ ;
      /**
       * <code>int64 connection_timeout = 2;</code>
       */
      public long getConnectionTimeout() {
        return connectionTimeout_;
      }
      /**
       * <code>int64 connection_timeout = 2;</code>
       */
      public Builder setConnectionTimeout(long value) {
        
        connectionTimeout_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 connection_timeout = 2;</code>
       */
      public Builder clearConnectionTimeout() {
        
        connectionTimeout_ = 0L;
        onChanged();
        return this;
      }

      private long timestamp_ ;
      /**
       * <code>int64 timestamp = 3;</code>
       */
      public long getTimestamp() {
        return timestamp_;
      }
      /**
       * <code>int64 timestamp = 3;</code>
       */
      public Builder setTimestamp(long value) {
        
        timestamp_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 timestamp = 3;</code>
       */
      public Builder clearTimestamp() {
        
        timestamp_ = 0L;
        onChanged();
        return this;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:monitor.Hello)
    }

    // @@protoc_insertion_point(class_scope:monitor.Hello)
    private static final io.rexx.sdk.core.extend.protobuf.Monitor.Hello DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Monitor.Hello();
    }

    public static io.rexx.sdk.core.extend.protobuf.Monitor.Hello getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<Hello>
        PARSER = new com.google.protobuf.AbstractParser<Hello>() {
      public Hello parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new Hello(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<Hello> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<Hello> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Monitor.Hello getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface RegisterOrBuilder extends
      // @@protoc_insertion_point(interface_extends:monitor.Register)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>string id = 1;</code>
     */
    java.lang.String getId();
    /**
     * <code>string id = 1;</code>
     */
    com.google.protobuf.ByteString
        getIdBytes();

    /**
     * <code>string blockchain_version = 2;</code>
     */
    java.lang.String getBlockchainVersion();
    /**
     * <code>string blockchain_version = 2;</code>
     */
    com.google.protobuf.ByteString
        getBlockchainVersionBytes();

    /**
     * <code>int64 data_version = 3;</code>
     */
    long getDataVersion();

    /**
     * <code>int64 timestamp = 4;</code>
     */
    long getTimestamp();
  }
  /**
   * Protobuf type {@code monitor.Register}
   */
  public  static final class Register extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:monitor.Register)
      RegisterOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use Register.newBuilder() to construct.
    private Register(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private Register() {
      id_ = "";
      blockchainVersion_ = "";
      dataVersion_ = 0L;
      timestamp_ = 0L;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private Register(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownFieldProto3(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 10: {
              java.lang.String s = input.readStringRequireUtf8();

              id_ = s;
              break;
            }
            case 18: {
              java.lang.String s = input.readStringRequireUtf8();

              blockchainVersion_ = s;
              break;
            }
            case 24: {

              dataVersion_ = input.readInt64();
              break;
            }
            case 32: {

              timestamp_ = input.readInt64();
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_Register_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_Register_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Monitor.Register.class, io.rexx.sdk.core.extend.protobuf.Monitor.Register.Builder.class);
    }

    public static final int ID_FIELD_NUMBER = 1;
    private volatile java.lang.Object id_;
    /**
     * <code>string id = 1;</code>
     */
    public java.lang.String getId() {
      java.lang.Object ref = id_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        id_ = s;
        return s;
      }
    }
    /**
     * <code>string id = 1;</code>
     */
    public com.google.protobuf.ByteString
        getIdBytes() {
      java.lang.Object ref = id_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        id_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int BLOCKCHAIN_VERSION_FIELD_NUMBER = 2;
    private volatile java.lang.Object blockchainVersion_;
    /**
     * <code>string blockchain_version = 2;</code>
     */
    public java.lang.String getBlockchainVersion() {
      java.lang.Object ref = blockchainVersion_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        blockchainVersion_ = s;
        return s;
      }
    }
    /**
     * <code>string blockchain_version = 2;</code>
     */
    public com.google.protobuf.ByteString
        getBlockchainVersionBytes() {
      java.lang.Object ref = blockchainVersion_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        blockchainVersion_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int DATA_VERSION_FIELD_NUMBER = 3;
    private long dataVersion_;
    /**
     * <code>int64 data_version = 3;</code>
     */
    public long getDataVersion() {
      return dataVersion_;
    }

    public static final int TIMESTAMP_FIELD_NUMBER = 4;
    private long timestamp_;
    /**
     * <code>int64 timestamp = 4;</code>
     */
    public long getTimestamp() {
      return timestamp_;
    }

    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (!getIdBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 1, id_);
      }
      if (!getBlockchainVersionBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 2, blockchainVersion_);
      }
      if (dataVersion_ != 0L) {
        output.writeInt64(3, dataVersion_);
      }
      if (timestamp_ != 0L) {
        output.writeInt64(4, timestamp_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (!getIdBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(1, id_);
      }
      if (!getBlockchainVersionBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(2, blockchainVersion_);
      }
      if (dataVersion_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(3, dataVersion_);
      }
      if (timestamp_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(4, timestamp_);
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Monitor.Register)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Monitor.Register other = (io.rexx.sdk.core.extend.protobuf.Monitor.Register) obj;

      boolean result = true;
      result = result && getId()
          .equals(other.getId());
      result = result && getBlockchainVersion()
          .equals(other.getBlockchainVersion());
      result = result && (getDataVersion()
          == other.getDataVersion());
      result = result && (getTimestamp()
          == other.getTimestamp());
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      hash = (37 * hash) + ID_FIELD_NUMBER;
      hash = (53 * hash) + getId().hashCode();
      hash = (37 * hash) + BLOCKCHAIN_VERSION_FIELD_NUMBER;
      hash = (53 * hash) + getBlockchainVersion().hashCode();
      hash = (37 * hash) + DATA_VERSION_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getDataVersion());
      hash = (37 * hash) + TIMESTAMP_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getTimestamp());
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Monitor.Register parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Register parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Register parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Register parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Register parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Register parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Register parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Register parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Register parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Register parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Register parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Register parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Monitor.Register prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * Protobuf type {@code monitor.Register}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:monitor.Register)
        io.rexx.sdk.core.extend.protobuf.Monitor.RegisterOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_Register_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_Register_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Monitor.Register.class, io.rexx.sdk.core.extend.protobuf.Monitor.Register.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Monitor.Register.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      public Builder clear() {
        super.clear();
        id_ = "";

        blockchainVersion_ = "";

        dataVersion_ = 0L;

        timestamp_ = 0L;

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_Register_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.Register getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.Register.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.Register build() {
        io.rexx.sdk.core.extend.protobuf.Monitor.Register result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.Register buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Monitor.Register result = new io.rexx.sdk.core.extend.protobuf.Monitor.Register(this);
        result.id_ = id_;
        result.blockchainVersion_ = blockchainVersion_;
        result.dataVersion_ = dataVersion_;
        result.timestamp_ = timestamp_;
        onBuilt();
        return result;
      }

      public Builder clone() {
        return (Builder) super.clone();
      }
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Monitor.Register) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Monitor.Register)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Monitor.Register other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Monitor.Register.getDefaultInstance()) return this;
        if (!other.getId().isEmpty()) {
          id_ = other.id_;
          onChanged();
        }
        if (!other.getBlockchainVersion().isEmpty()) {
          blockchainVersion_ = other.blockchainVersion_;
          onChanged();
        }
        if (other.getDataVersion() != 0L) {
          setDataVersion(other.getDataVersion());
        }
        if (other.getTimestamp() != 0L) {
          setTimestamp(other.getTimestamp());
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        io.rexx.sdk.core.extend.protobuf.Monitor.Register parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Monitor.Register) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private java.lang.Object id_ = "";
      /**
       * <code>string id = 1;</code>
       */
      public java.lang.String getId() {
        java.lang.Object ref = id_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          id_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string id = 1;</code>
       */
      public com.google.protobuf.ByteString
          getIdBytes() {
        java.lang.Object ref = id_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          id_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string id = 1;</code>
       */
      public Builder setId(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        id_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string id = 1;</code>
       */
      public Builder clearId() {
        
        id_ = getDefaultInstance().getId();
        onChanged();
        return this;
      }
      /**
       * <code>string id = 1;</code>
       */
      public Builder setIdBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        id_ = value;
        onChanged();
        return this;
      }

      private java.lang.Object blockchainVersion_ = "";
      /**
       * <code>string blockchain_version = 2;</code>
       */
      public java.lang.String getBlockchainVersion() {
        java.lang.Object ref = blockchainVersion_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          blockchainVersion_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string blockchain_version = 2;</code>
       */
      public com.google.protobuf.ByteString
          getBlockchainVersionBytes() {
        java.lang.Object ref = blockchainVersion_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          blockchainVersion_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string blockchain_version = 2;</code>
       */
      public Builder setBlockchainVersion(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        blockchainVersion_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string blockchain_version = 2;</code>
       */
      public Builder clearBlockchainVersion() {
        
        blockchainVersion_ = getDefaultInstance().getBlockchainVersion();
        onChanged();
        return this;
      }
      /**
       * <code>string blockchain_version = 2;</code>
       */
      public Builder setBlockchainVersionBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        blockchainVersion_ = value;
        onChanged();
        return this;
      }

      private long dataVersion_ ;
      /**
       * <code>int64 data_version = 3;</code>
       */
      public long getDataVersion() {
        return dataVersion_;
      }
      /**
       * <code>int64 data_version = 3;</code>
       */
      public Builder setDataVersion(long value) {
        
        dataVersion_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 data_version = 3;</code>
       */
      public Builder clearDataVersion() {
        
        dataVersion_ = 0L;
        onChanged();
        return this;
      }

      private long timestamp_ ;
      /**
       * <code>int64 timestamp = 4;</code>
       */
      public long getTimestamp() {
        return timestamp_;
      }
      /**
       * <code>int64 timestamp = 4;</code>
       */
      public Builder setTimestamp(long value) {
        
        timestamp_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 timestamp = 4;</code>
       */
      public Builder clearTimestamp() {
        
        timestamp_ = 0L;
        onChanged();
        return this;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:monitor.Register)
    }

    // @@protoc_insertion_point(class_scope:monitor.Register)
    private static final io.rexx.sdk.core.extend.protobuf.Monitor.Register DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Monitor.Register();
    }

    public static io.rexx.sdk.core.extend.protobuf.Monitor.Register getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<Register>
        PARSER = new com.google.protobuf.AbstractParser<Register>() {
      public Register parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new Register(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<Register> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<Register> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Monitor.Register getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface PeerOrBuilder extends
      // @@protoc_insertion_point(interface_extends:monitor.Peer)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>string id = 1;</code>
     */
    java.lang.String getId();
    /**
     * <code>string id = 1;</code>
     */
    com.google.protobuf.ByteString
        getIdBytes();

    /**
     * <code>int64 delay = 2;</code>
     */
    long getDelay();

    /**
     * <code>bool active = 3;</code>
     */
    boolean getActive();

    /**
     * <code>string ip_address = 4;</code>
     */
    java.lang.String getIpAddress();
    /**
     * <code>string ip_address = 4;</code>
     */
    com.google.protobuf.ByteString
        getIpAddressBytes();
  }
  /**
   * Protobuf type {@code monitor.Peer}
   */
  public  static final class Peer extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:monitor.Peer)
      PeerOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use Peer.newBuilder() to construct.
    private Peer(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private Peer() {
      id_ = "";
      delay_ = 0L;
      active_ = false;
      ipAddress_ = "";
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private Peer(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownFieldProto3(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 10: {
              java.lang.String s = input.readStringRequireUtf8();

              id_ = s;
              break;
            }
            case 16: {

              delay_ = input.readInt64();
              break;
            }
            case 24: {

              active_ = input.readBool();
              break;
            }
            case 34: {
              java.lang.String s = input.readStringRequireUtf8();

              ipAddress_ = s;
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_Peer_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_Peer_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Monitor.Peer.class, io.rexx.sdk.core.extend.protobuf.Monitor.Peer.Builder.class);
    }

    public static final int ID_FIELD_NUMBER = 1;
    private volatile java.lang.Object id_;
    /**
     * <code>string id = 1;</code>
     */
    public java.lang.String getId() {
      java.lang.Object ref = id_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        id_ = s;
        return s;
      }
    }
    /**
     * <code>string id = 1;</code>
     */
    public com.google.protobuf.ByteString
        getIdBytes() {
      java.lang.Object ref = id_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        id_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int DELAY_FIELD_NUMBER = 2;
    private long delay_;
    /**
     * <code>int64 delay = 2;</code>
     */
    public long getDelay() {
      return delay_;
    }

    public static final int ACTIVE_FIELD_NUMBER = 3;
    private boolean active_;
    /**
     * <code>bool active = 3;</code>
     */
    public boolean getActive() {
      return active_;
    }

    public static final int IP_ADDRESS_FIELD_NUMBER = 4;
    private volatile java.lang.Object ipAddress_;
    /**
     * <code>string ip_address = 4;</code>
     */
    public java.lang.String getIpAddress() {
      java.lang.Object ref = ipAddress_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        ipAddress_ = s;
        return s;
      }
    }
    /**
     * <code>string ip_address = 4;</code>
     */
    public com.google.protobuf.ByteString
        getIpAddressBytes() {
      java.lang.Object ref = ipAddress_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        ipAddress_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (!getIdBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 1, id_);
      }
      if (delay_ != 0L) {
        output.writeInt64(2, delay_);
      }
      if (active_ != false) {
        output.writeBool(3, active_);
      }
      if (!getIpAddressBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 4, ipAddress_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (!getIdBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(1, id_);
      }
      if (delay_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(2, delay_);
      }
      if (active_ != false) {
        size += com.google.protobuf.CodedOutputStream
          .computeBoolSize(3, active_);
      }
      if (!getIpAddressBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(4, ipAddress_);
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Monitor.Peer)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Monitor.Peer other = (io.rexx.sdk.core.extend.protobuf.Monitor.Peer) obj;

      boolean result = true;
      result = result && getId()
          .equals(other.getId());
      result = result && (getDelay()
          == other.getDelay());
      result = result && (getActive()
          == other.getActive());
      result = result && getIpAddress()
          .equals(other.getIpAddress());
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      hash = (37 * hash) + ID_FIELD_NUMBER;
      hash = (53 * hash) + getId().hashCode();
      hash = (37 * hash) + DELAY_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getDelay());
      hash = (37 * hash) + ACTIVE_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashBoolean(
          getActive());
      hash = (37 * hash) + IP_ADDRESS_FIELD_NUMBER;
      hash = (53 * hash) + getIpAddress().hashCode();
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Monitor.Peer parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Peer parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Peer parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Peer parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Peer parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Peer parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Peer parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Peer parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Peer parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Peer parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Peer parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Peer parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Monitor.Peer prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * Protobuf type {@code monitor.Peer}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:monitor.Peer)
        io.rexx.sdk.core.extend.protobuf.Monitor.PeerOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_Peer_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_Peer_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Monitor.Peer.class, io.rexx.sdk.core.extend.protobuf.Monitor.Peer.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Monitor.Peer.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      public Builder clear() {
        super.clear();
        id_ = "";

        delay_ = 0L;

        active_ = false;

        ipAddress_ = "";

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_Peer_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.Peer getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.Peer.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.Peer build() {
        io.rexx.sdk.core.extend.protobuf.Monitor.Peer result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.Peer buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Monitor.Peer result = new io.rexx.sdk.core.extend.protobuf.Monitor.Peer(this);
        result.id_ = id_;
        result.delay_ = delay_;
        result.active_ = active_;
        result.ipAddress_ = ipAddress_;
        onBuilt();
        return result;
      }

      public Builder clone() {
        return (Builder) super.clone();
      }
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Monitor.Peer) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Monitor.Peer)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Monitor.Peer other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Monitor.Peer.getDefaultInstance()) return this;
        if (!other.getId().isEmpty()) {
          id_ = other.id_;
          onChanged();
        }
        if (other.getDelay() != 0L) {
          setDelay(other.getDelay());
        }
        if (other.getActive() != false) {
          setActive(other.getActive());
        }
        if (!other.getIpAddress().isEmpty()) {
          ipAddress_ = other.ipAddress_;
          onChanged();
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        io.rexx.sdk.core.extend.protobuf.Monitor.Peer parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Monitor.Peer) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private java.lang.Object id_ = "";
      /**
       * <code>string id = 1;</code>
       */
      public java.lang.String getId() {
        java.lang.Object ref = id_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          id_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string id = 1;</code>
       */
      public com.google.protobuf.ByteString
          getIdBytes() {
        java.lang.Object ref = id_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          id_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string id = 1;</code>
       */
      public Builder setId(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        id_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string id = 1;</code>
       */
      public Builder clearId() {
        
        id_ = getDefaultInstance().getId();
        onChanged();
        return this;
      }
      /**
       * <code>string id = 1;</code>
       */
      public Builder setIdBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        id_ = value;
        onChanged();
        return this;
      }

      private long delay_ ;
      /**
       * <code>int64 delay = 2;</code>
       */
      public long getDelay() {
        return delay_;
      }
      /**
       * <code>int64 delay = 2;</code>
       */
      public Builder setDelay(long value) {
        
        delay_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 delay = 2;</code>
       */
      public Builder clearDelay() {
        
        delay_ = 0L;
        onChanged();
        return this;
      }

      private boolean active_ ;
      /**
       * <code>bool active = 3;</code>
       */
      public boolean getActive() {
        return active_;
      }
      /**
       * <code>bool active = 3;</code>
       */
      public Builder setActive(boolean value) {
        
        active_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>bool active = 3;</code>
       */
      public Builder clearActive() {
        
        active_ = false;
        onChanged();
        return this;
      }

      private java.lang.Object ipAddress_ = "";
      /**
       * <code>string ip_address = 4;</code>
       */
      public java.lang.String getIpAddress() {
        java.lang.Object ref = ipAddress_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          ipAddress_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string ip_address = 4;</code>
       */
      public com.google.protobuf.ByteString
          getIpAddressBytes() {
        java.lang.Object ref = ipAddress_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          ipAddress_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string ip_address = 4;</code>
       */
      public Builder setIpAddress(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        ipAddress_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string ip_address = 4;</code>
       */
      public Builder clearIpAddress() {
        
        ipAddress_ = getDefaultInstance().getIpAddress();
        onChanged();
        return this;
      }
      /**
       * <code>string ip_address = 4;</code>
       */
      public Builder setIpAddressBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        ipAddress_ = value;
        onChanged();
        return this;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:monitor.Peer)
    }

    // @@protoc_insertion_point(class_scope:monitor.Peer)
    private static final io.rexx.sdk.core.extend.protobuf.Monitor.Peer DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Monitor.Peer();
    }

    public static io.rexx.sdk.core.extend.protobuf.Monitor.Peer getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<Peer>
        PARSER = new com.google.protobuf.AbstractParser<Peer>() {
      public Peer parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new Peer(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<Peer> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<Peer> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Monitor.Peer getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface GlueManagerOrBuilder extends
      // @@protoc_insertion_point(interface_extends:monitor.GlueManager)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>string system_current_time = 1;</code>
     */
    java.lang.String getSystemCurrentTime();
    /**
     * <code>string system_current_time = 1;</code>
     */
    com.google.protobuf.ByteString
        getSystemCurrentTimeBytes();

    /**
     * <code>string process_uptime = 2;</code>
     */
    java.lang.String getProcessUptime();
    /**
     * <code>string process_uptime = 2;</code>
     */
    com.google.protobuf.ByteString
        getProcessUptimeBytes();

    /**
     * <code>string system_uptime = 3;</code>
     */
    java.lang.String getSystemUptime();
    /**
     * <code>string system_uptime = 3;</code>
     */
    com.google.protobuf.ByteString
        getSystemUptimeBytes();
  }
  /**
   * Protobuf type {@code monitor.GlueManager}
   */
  public  static final class GlueManager extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:monitor.GlueManager)
      GlueManagerOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use GlueManager.newBuilder() to construct.
    private GlueManager(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private GlueManager() {
      systemCurrentTime_ = "";
      processUptime_ = "";
      systemUptime_ = "";
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private GlueManager(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownFieldProto3(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 10: {
              java.lang.String s = input.readStringRequireUtf8();

              systemCurrentTime_ = s;
              break;
            }
            case 18: {
              java.lang.String s = input.readStringRequireUtf8();

              processUptime_ = s;
              break;
            }
            case 26: {
              java.lang.String s = input.readStringRequireUtf8();

              systemUptime_ = s;
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_GlueManager_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_GlueManager_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager.class, io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager.Builder.class);
    }

    public static final int SYSTEM_CURRENT_TIME_FIELD_NUMBER = 1;
    private volatile java.lang.Object systemCurrentTime_;
    /**
     * <code>string system_current_time = 1;</code>
     */
    public java.lang.String getSystemCurrentTime() {
      java.lang.Object ref = systemCurrentTime_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        systemCurrentTime_ = s;
        return s;
      }
    }
    /**
     * <code>string system_current_time = 1;</code>
     */
    public com.google.protobuf.ByteString
        getSystemCurrentTimeBytes() {
      java.lang.Object ref = systemCurrentTime_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        systemCurrentTime_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int PROCESS_UPTIME_FIELD_NUMBER = 2;
    private volatile java.lang.Object processUptime_;
    /**
     * <code>string process_uptime = 2;</code>
     */
    public java.lang.String getProcessUptime() {
      java.lang.Object ref = processUptime_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        processUptime_ = s;
        return s;
      }
    }
    /**
     * <code>string process_uptime = 2;</code>
     */
    public com.google.protobuf.ByteString
        getProcessUptimeBytes() {
      java.lang.Object ref = processUptime_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        processUptime_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int SYSTEM_UPTIME_FIELD_NUMBER = 3;
    private volatile java.lang.Object systemUptime_;
    /**
     * <code>string system_uptime = 3;</code>
     */
    public java.lang.String getSystemUptime() {
      java.lang.Object ref = systemUptime_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        systemUptime_ = s;
        return s;
      }
    }
    /**
     * <code>string system_uptime = 3;</code>
     */
    public com.google.protobuf.ByteString
        getSystemUptimeBytes() {
      java.lang.Object ref = systemUptime_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        systemUptime_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (!getSystemCurrentTimeBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 1, systemCurrentTime_);
      }
      if (!getProcessUptimeBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 2, processUptime_);
      }
      if (!getSystemUptimeBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 3, systemUptime_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (!getSystemCurrentTimeBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(1, systemCurrentTime_);
      }
      if (!getProcessUptimeBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(2, processUptime_);
      }
      if (!getSystemUptimeBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(3, systemUptime_);
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager other = (io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager) obj;

      boolean result = true;
      result = result && getSystemCurrentTime()
          .equals(other.getSystemCurrentTime());
      result = result && getProcessUptime()
          .equals(other.getProcessUptime());
      result = result && getSystemUptime()
          .equals(other.getSystemUptime());
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      hash = (37 * hash) + SYSTEM_CURRENT_TIME_FIELD_NUMBER;
      hash = (53 * hash) + getSystemCurrentTime().hashCode();
      hash = (37 * hash) + PROCESS_UPTIME_FIELD_NUMBER;
      hash = (53 * hash) + getProcessUptime().hashCode();
      hash = (37 * hash) + SYSTEM_UPTIME_FIELD_NUMBER;
      hash = (53 * hash) + getSystemUptime().hashCode();
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * Protobuf type {@code monitor.GlueManager}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:monitor.GlueManager)
        io.rexx.sdk.core.extend.protobuf.Monitor.GlueManagerOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_GlueManager_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_GlueManager_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager.class, io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      public Builder clear() {
        super.clear();
        systemCurrentTime_ = "";

        processUptime_ = "";

        systemUptime_ = "";

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_GlueManager_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager build() {
        io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager result = new io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager(this);
        result.systemCurrentTime_ = systemCurrentTime_;
        result.processUptime_ = processUptime_;
        result.systemUptime_ = systemUptime_;
        onBuilt();
        return result;
      }

      public Builder clone() {
        return (Builder) super.clone();
      }
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager.getDefaultInstance()) return this;
        if (!other.getSystemCurrentTime().isEmpty()) {
          systemCurrentTime_ = other.systemCurrentTime_;
          onChanged();
        }
        if (!other.getProcessUptime().isEmpty()) {
          processUptime_ = other.processUptime_;
          onChanged();
        }
        if (!other.getSystemUptime().isEmpty()) {
          systemUptime_ = other.systemUptime_;
          onChanged();
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private java.lang.Object systemCurrentTime_ = "";
      /**
       * <code>string system_current_time = 1;</code>
       */
      public java.lang.String getSystemCurrentTime() {
        java.lang.Object ref = systemCurrentTime_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          systemCurrentTime_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string system_current_time = 1;</code>
       */
      public com.google.protobuf.ByteString
          getSystemCurrentTimeBytes() {
        java.lang.Object ref = systemCurrentTime_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          systemCurrentTime_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string system_current_time = 1;</code>
       */
      public Builder setSystemCurrentTime(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        systemCurrentTime_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string system_current_time = 1;</code>
       */
      public Builder clearSystemCurrentTime() {
        
        systemCurrentTime_ = getDefaultInstance().getSystemCurrentTime();
        onChanged();
        return this;
      }
      /**
       * <code>string system_current_time = 1;</code>
       */
      public Builder setSystemCurrentTimeBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        systemCurrentTime_ = value;
        onChanged();
        return this;
      }

      private java.lang.Object processUptime_ = "";
      /**
       * <code>string process_uptime = 2;</code>
       */
      public java.lang.String getProcessUptime() {
        java.lang.Object ref = processUptime_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          processUptime_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string process_uptime = 2;</code>
       */
      public com.google.protobuf.ByteString
          getProcessUptimeBytes() {
        java.lang.Object ref = processUptime_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          processUptime_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string process_uptime = 2;</code>
       */
      public Builder setProcessUptime(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        processUptime_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string process_uptime = 2;</code>
       */
      public Builder clearProcessUptime() {
        
        processUptime_ = getDefaultInstance().getProcessUptime();
        onChanged();
        return this;
      }
      /**
       * <code>string process_uptime = 2;</code>
       */
      public Builder setProcessUptimeBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        processUptime_ = value;
        onChanged();
        return this;
      }

      private java.lang.Object systemUptime_ = "";
      /**
       * <code>string system_uptime = 3;</code>
       */
      public java.lang.String getSystemUptime() {
        java.lang.Object ref = systemUptime_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          systemUptime_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string system_uptime = 3;</code>
       */
      public com.google.protobuf.ByteString
          getSystemUptimeBytes() {
        java.lang.Object ref = systemUptime_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          systemUptime_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string system_uptime = 3;</code>
       */
      public Builder setSystemUptime(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        systemUptime_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string system_uptime = 3;</code>
       */
      public Builder clearSystemUptime() {
        
        systemUptime_ = getDefaultInstance().getSystemUptime();
        onChanged();
        return this;
      }
      /**
       * <code>string system_uptime = 3;</code>
       */
      public Builder setSystemUptimeBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        systemUptime_ = value;
        onChanged();
        return this;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:monitor.GlueManager)
    }

    // @@protoc_insertion_point(class_scope:monitor.GlueManager)
    private static final io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager();
    }

    public static io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<GlueManager>
        PARSER = new com.google.protobuf.AbstractParser<GlueManager>() {
      public GlueManager parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new GlueManager(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<GlueManager> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<GlueManager> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface PeerManagerOrBuilder extends
      // @@protoc_insertion_point(interface_extends:monitor.PeerManager)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>string peer_id = 1;</code>
     */
    java.lang.String getPeerId();
    /**
     * <code>string peer_id = 1;</code>
     */
    com.google.protobuf.ByteString
        getPeerIdBytes();

    /**
     * <code>repeated .monitor.Peer peer = 2;</code>
     */
    java.util.List<io.rexx.sdk.core.extend.protobuf.Monitor.Peer>
        getPeerList();
    /**
     * <code>repeated .monitor.Peer peer = 2;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Monitor.Peer getPeer(int index);
    /**
     * <code>repeated .monitor.Peer peer = 2;</code>
     */
    int getPeerCount();
    /**
     * <code>repeated .monitor.Peer peer = 2;</code>
     */
    java.util.List<? extends io.rexx.sdk.core.extend.protobuf.Monitor.PeerOrBuilder>
        getPeerOrBuilderList();
    /**
     * <code>repeated .monitor.Peer peer = 2;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Monitor.PeerOrBuilder getPeerOrBuilder(
        int index);
  }
  /**
   * Protobuf type {@code monitor.PeerManager}
   */
  public  static final class PeerManager extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:monitor.PeerManager)
      PeerManagerOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use PeerManager.newBuilder() to construct.
    private PeerManager(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private PeerManager() {
      peerId_ = "";
      peer_ = java.util.Collections.emptyList();
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private PeerManager(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownFieldProto3(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 10: {
              java.lang.String s = input.readStringRequireUtf8();

              peerId_ = s;
              break;
            }
            case 18: {
              if (!((mutable_bitField0_ & 0x00000002) == 0x00000002)) {
                peer_ = new java.util.ArrayList<io.rexx.sdk.core.extend.protobuf.Monitor.Peer>();
                mutable_bitField0_ |= 0x00000002;
              }
              peer_.add(
                  input.readMessage(io.rexx.sdk.core.extend.protobuf.Monitor.Peer.parser(), extensionRegistry));
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        if (((mutable_bitField0_ & 0x00000002) == 0x00000002)) {
          peer_ = java.util.Collections.unmodifiableList(peer_);
        }
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_PeerManager_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_PeerManager_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager.class, io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager.Builder.class);
    }

    private int bitField0_;
    public static final int PEER_ID_FIELD_NUMBER = 1;
    private volatile java.lang.Object peerId_;
    /**
     * <code>string peer_id = 1;</code>
     */
    public java.lang.String getPeerId() {
      java.lang.Object ref = peerId_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        peerId_ = s;
        return s;
      }
    }
    /**
     * <code>string peer_id = 1;</code>
     */
    public com.google.protobuf.ByteString
        getPeerIdBytes() {
      java.lang.Object ref = peerId_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        peerId_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int PEER_FIELD_NUMBER = 2;
    private java.util.List<io.rexx.sdk.core.extend.protobuf.Monitor.Peer> peer_;
    /**
     * <code>repeated .monitor.Peer peer = 2;</code>
     */
    public java.util.List<io.rexx.sdk.core.extend.protobuf.Monitor.Peer> getPeerList() {
      return peer_;
    }
    /**
     * <code>repeated .monitor.Peer peer = 2;</code>
     */
    public java.util.List<? extends io.rexx.sdk.core.extend.protobuf.Monitor.PeerOrBuilder>
        getPeerOrBuilderList() {
      return peer_;
    }
    /**
     * <code>repeated .monitor.Peer peer = 2;</code>
     */
    public int getPeerCount() {
      return peer_.size();
    }
    /**
     * <code>repeated .monitor.Peer peer = 2;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Monitor.Peer getPeer(int index) {
      return peer_.get(index);
    }
    /**
     * <code>repeated .monitor.Peer peer = 2;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Monitor.PeerOrBuilder getPeerOrBuilder(
        int index) {
      return peer_.get(index);
    }

    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (!getPeerIdBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 1, peerId_);
      }
      for (int i = 0; i < peer_.size(); i++) {
        output.writeMessage(2, peer_.get(i));
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (!getPeerIdBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(1, peerId_);
      }
      for (int i = 0; i < peer_.size(); i++) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(2, peer_.get(i));
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager other = (io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager) obj;

      boolean result = true;
      result = result && getPeerId()
          .equals(other.getPeerId());
      result = result && getPeerList()
          .equals(other.getPeerList());
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      hash = (37 * hash) + PEER_ID_FIELD_NUMBER;
      hash = (53 * hash) + getPeerId().hashCode();
      if (getPeerCount() > 0) {
        hash = (37 * hash) + PEER_FIELD_NUMBER;
        hash = (53 * hash) + getPeerList().hashCode();
      }
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * Protobuf type {@code monitor.PeerManager}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:monitor.PeerManager)
        io.rexx.sdk.core.extend.protobuf.Monitor.PeerManagerOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_PeerManager_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_PeerManager_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager.class, io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
          getPeerFieldBuilder();
        }
      }
      public Builder clear() {
        super.clear();
        peerId_ = "";

        if (peerBuilder_ == null) {
          peer_ = java.util.Collections.emptyList();
          bitField0_ = (bitField0_ & ~0x00000002);
        } else {
          peerBuilder_.clear();
        }
        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_PeerManager_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager build() {
        io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager result = new io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        result.peerId_ = peerId_;
        if (peerBuilder_ == null) {
          if (((bitField0_ & 0x00000002) == 0x00000002)) {
            peer_ = java.util.Collections.unmodifiableList(peer_);
            bitField0_ = (bitField0_ & ~0x00000002);
          }
          result.peer_ = peer_;
        } else {
          result.peer_ = peerBuilder_.build();
        }
        result.bitField0_ = to_bitField0_;
        onBuilt();
        return result;
      }

      public Builder clone() {
        return (Builder) super.clone();
      }
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager.getDefaultInstance()) return this;
        if (!other.getPeerId().isEmpty()) {
          peerId_ = other.peerId_;
          onChanged();
        }
        if (peerBuilder_ == null) {
          if (!other.peer_.isEmpty()) {
            if (peer_.isEmpty()) {
              peer_ = other.peer_;
              bitField0_ = (bitField0_ & ~0x00000002);
            } else {
              ensurePeerIsMutable();
              peer_.addAll(other.peer_);
            }
            onChanged();
          }
        } else {
          if (!other.peer_.isEmpty()) {
            if (peerBuilder_.isEmpty()) {
              peerBuilder_.dispose();
              peerBuilder_ = null;
              peer_ = other.peer_;
              bitField0_ = (bitField0_ & ~0x00000002);
              peerBuilder_ = 
                com.google.protobuf.GeneratedMessageV3.alwaysUseFieldBuilders ?
                   getPeerFieldBuilder() : null;
            } else {
              peerBuilder_.addAllMessages(other.peer_);
            }
          }
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }
      private int bitField0_;

      private java.lang.Object peerId_ = "";
      /**
       * <code>string peer_id = 1;</code>
       */
      public java.lang.String getPeerId() {
        java.lang.Object ref = peerId_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          peerId_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string peer_id = 1;</code>
       */
      public com.google.protobuf.ByteString
          getPeerIdBytes() {
        java.lang.Object ref = peerId_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          peerId_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string peer_id = 1;</code>
       */
      public Builder setPeerId(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        peerId_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string peer_id = 1;</code>
       */
      public Builder clearPeerId() {
        
        peerId_ = getDefaultInstance().getPeerId();
        onChanged();
        return this;
      }
      /**
       * <code>string peer_id = 1;</code>
       */
      public Builder setPeerIdBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        peerId_ = value;
        onChanged();
        return this;
      }

      private java.util.List<io.rexx.sdk.core.extend.protobuf.Monitor.Peer> peer_ =
        java.util.Collections.emptyList();
      private void ensurePeerIsMutable() {
        if (!((bitField0_ & 0x00000002) == 0x00000002)) {
          peer_ = new java.util.ArrayList<io.rexx.sdk.core.extend.protobuf.Monitor.Peer>(peer_);
          bitField0_ |= 0x00000002;
         }
      }

      private com.google.protobuf.RepeatedFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Monitor.Peer, io.rexx.sdk.core.extend.protobuf.Monitor.Peer.Builder, io.rexx.sdk.core.extend.protobuf.Monitor.PeerOrBuilder> peerBuilder_;

      /**
       * <code>repeated .monitor.Peer peer = 2;</code>
       */
      public java.util.List<io.rexx.sdk.core.extend.protobuf.Monitor.Peer> getPeerList() {
        if (peerBuilder_ == null) {
          return java.util.Collections.unmodifiableList(peer_);
        } else {
          return peerBuilder_.getMessageList();
        }
      }
      /**
       * <code>repeated .monitor.Peer peer = 2;</code>
       */
      public int getPeerCount() {
        if (peerBuilder_ == null) {
          return peer_.size();
        } else {
          return peerBuilder_.getCount();
        }
      }
      /**
       * <code>repeated .monitor.Peer peer = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.Peer getPeer(int index) {
        if (peerBuilder_ == null) {
          return peer_.get(index);
        } else {
          return peerBuilder_.getMessage(index);
        }
      }
      /**
       * <code>repeated .monitor.Peer peer = 2;</code>
       */
      public Builder setPeer(
          int index, io.rexx.sdk.core.extend.protobuf.Monitor.Peer value) {
        if (peerBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          ensurePeerIsMutable();
          peer_.set(index, value);
          onChanged();
        } else {
          peerBuilder_.setMessage(index, value);
        }
        return this;
      }
      /**
       * <code>repeated .monitor.Peer peer = 2;</code>
       */
      public Builder setPeer(
          int index, io.rexx.sdk.core.extend.protobuf.Monitor.Peer.Builder builderForValue) {
        if (peerBuilder_ == null) {
          ensurePeerIsMutable();
          peer_.set(index, builderForValue.build());
          onChanged();
        } else {
          peerBuilder_.setMessage(index, builderForValue.build());
        }
        return this;
      }
      /**
       * <code>repeated .monitor.Peer peer = 2;</code>
       */
      public Builder addPeer(io.rexx.sdk.core.extend.protobuf.Monitor.Peer value) {
        if (peerBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          ensurePeerIsMutable();
          peer_.add(value);
          onChanged();
        } else {
          peerBuilder_.addMessage(value);
        }
        return this;
      }
      /**
       * <code>repeated .monitor.Peer peer = 2;</code>
       */
      public Builder addPeer(
          int index, io.rexx.sdk.core.extend.protobuf.Monitor.Peer value) {
        if (peerBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          ensurePeerIsMutable();
          peer_.add(index, value);
          onChanged();
        } else {
          peerBuilder_.addMessage(index, value);
        }
        return this;
      }
      /**
       * <code>repeated .monitor.Peer peer = 2;</code>
       */
      public Builder addPeer(
          io.rexx.sdk.core.extend.protobuf.Monitor.Peer.Builder builderForValue) {
        if (peerBuilder_ == null) {
          ensurePeerIsMutable();
          peer_.add(builderForValue.build());
          onChanged();
        } else {
          peerBuilder_.addMessage(builderForValue.build());
        }
        return this;
      }
      /**
       * <code>repeated .monitor.Peer peer = 2;</code>
       */
      public Builder addPeer(
          int index, io.rexx.sdk.core.extend.protobuf.Monitor.Peer.Builder builderForValue) {
        if (peerBuilder_ == null) {
          ensurePeerIsMutable();
          peer_.add(index, builderForValue.build());
          onChanged();
        } else {
          peerBuilder_.addMessage(index, builderForValue.build());
        }
        return this;
      }
      /**
       * <code>repeated .monitor.Peer peer = 2;</code>
       */
      public Builder addAllPeer(
          java.lang.Iterable<? extends io.rexx.sdk.core.extend.protobuf.Monitor.Peer> values) {
        if (peerBuilder_ == null) {
          ensurePeerIsMutable();
          com.google.protobuf.AbstractMessageLite.Builder.addAll(
              values, peer_);
          onChanged();
        } else {
          peerBuilder_.addAllMessages(values);
        }
        return this;
      }
      /**
       * <code>repeated .monitor.Peer peer = 2;</code>
       */
      public Builder clearPeer() {
        if (peerBuilder_ == null) {
          peer_ = java.util.Collections.emptyList();
          bitField0_ = (bitField0_ & ~0x00000002);
          onChanged();
        } else {
          peerBuilder_.clear();
        }
        return this;
      }
      /**
       * <code>repeated .monitor.Peer peer = 2;</code>
       */
      public Builder removePeer(int index) {
        if (peerBuilder_ == null) {
          ensurePeerIsMutable();
          peer_.remove(index);
          onChanged();
        } else {
          peerBuilder_.remove(index);
        }
        return this;
      }
      /**
       * <code>repeated .monitor.Peer peer = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.Peer.Builder getPeerBuilder(
          int index) {
        return getPeerFieldBuilder().getBuilder(index);
      }
      /**
       * <code>repeated .monitor.Peer peer = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.PeerOrBuilder getPeerOrBuilder(
          int index) {
        if (peerBuilder_ == null) {
          return peer_.get(index);  } else {
          return peerBuilder_.getMessageOrBuilder(index);
        }
      }
      /**
       * <code>repeated .monitor.Peer peer = 2;</code>
       */
      public java.util.List<? extends io.rexx.sdk.core.extend.protobuf.Monitor.PeerOrBuilder>
           getPeerOrBuilderList() {
        if (peerBuilder_ != null) {
          return peerBuilder_.getMessageOrBuilderList();
        } else {
          return java.util.Collections.unmodifiableList(peer_);
        }
      }
      /**
       * <code>repeated .monitor.Peer peer = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.Peer.Builder addPeerBuilder() {
        return getPeerFieldBuilder().addBuilder(
            io.rexx.sdk.core.extend.protobuf.Monitor.Peer.getDefaultInstance());
      }
      /**
       * <code>repeated .monitor.Peer peer = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.Peer.Builder addPeerBuilder(
          int index) {
        return getPeerFieldBuilder().addBuilder(
            index, io.rexx.sdk.core.extend.protobuf.Monitor.Peer.getDefaultInstance());
      }
      /**
       * <code>repeated .monitor.Peer peer = 2;</code>
       */
      public java.util.List<io.rexx.sdk.core.extend.protobuf.Monitor.Peer.Builder>
           getPeerBuilderList() {
        return getPeerFieldBuilder().getBuilderList();
      }
      private com.google.protobuf.RepeatedFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Monitor.Peer, io.rexx.sdk.core.extend.protobuf.Monitor.Peer.Builder, io.rexx.sdk.core.extend.protobuf.Monitor.PeerOrBuilder>
          getPeerFieldBuilder() {
        if (peerBuilder_ == null) {
          peerBuilder_ = new com.google.protobuf.RepeatedFieldBuilderV3<
              io.rexx.sdk.core.extend.protobuf.Monitor.Peer, io.rexx.sdk.core.extend.protobuf.Monitor.Peer.Builder, io.rexx.sdk.core.extend.protobuf.Monitor.PeerOrBuilder>(
                  peer_,
                  ((bitField0_ & 0x00000002) == 0x00000002),
                  getParentForChildren(),
                  isClean());
          peer_ = null;
        }
        return peerBuilder_;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:monitor.PeerManager)
    }

    // @@protoc_insertion_point(class_scope:monitor.PeerManager)
    private static final io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager();
    }

    public static io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<PeerManager>
        PARSER = new com.google.protobuf.AbstractParser<PeerManager>() {
      public PeerManager parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new PeerManager(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<PeerManager> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<PeerManager> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface RexxStatusOrBuilder extends
      // @@protoc_insertion_point(interface_extends:monitor.RexxStatus)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>.monitor.GlueManager glue_manager = 1;</code>
     */
    boolean hasGlueManager();
    /**
     * <code>.monitor.GlueManager glue_manager = 1;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager getGlueManager();
    /**
     * <code>.monitor.GlueManager glue_manager = 1;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Monitor.GlueManagerOrBuilder getGlueManagerOrBuilder();

    /**
     * <code>.monitor.PeerManager peer_manager = 2;</code>
     */
    boolean hasPeerManager();
    /**
     * <code>.monitor.PeerManager peer_manager = 2;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager getPeerManager();
    /**
     * <code>.monitor.PeerManager peer_manager = 2;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Monitor.PeerManagerOrBuilder getPeerManagerOrBuilder();
  }
  /**
   * Protobuf type {@code monitor.RexxStatus}
   */
  public  static final class RexxStatus extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:monitor.RexxStatus)
      RexxStatusOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use RexxStatus.newBuilder() to construct.
    private RexxStatus(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private RexxStatus() {
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private RexxStatus(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownFieldProto3(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 10: {
              io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager.Builder subBuilder = null;
              if (glueManager_ != null) {
                subBuilder = glueManager_.toBuilder();
              }
              glueManager_ = input.readMessage(io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(glueManager_);
                glueManager_ = subBuilder.buildPartial();
              }

              break;
            }
            case 18: {
              io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager.Builder subBuilder = null;
              if (peerManager_ != null) {
                subBuilder = peerManager_.toBuilder();
              }
              peerManager_ = input.readMessage(io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(peerManager_);
                peerManager_ = subBuilder.buildPartial();
              }

              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_RexxStatus_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_RexxStatus_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus.class, io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus.Builder.class);
    }

    public static final int GLUE_MANAGER_FIELD_NUMBER = 1;
    private io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager glueManager_;
    /**
     * <code>.monitor.GlueManager glue_manager = 1;</code>
     */
    public boolean hasGlueManager() {
      return glueManager_ != null;
    }
    /**
     * <code>.monitor.GlueManager glue_manager = 1;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager getGlueManager() {
      return glueManager_ == null ? io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager.getDefaultInstance() : glueManager_;
    }
    /**
     * <code>.monitor.GlueManager glue_manager = 1;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Monitor.GlueManagerOrBuilder getGlueManagerOrBuilder() {
      return getGlueManager();
    }

    public static final int PEER_MANAGER_FIELD_NUMBER = 2;
    private io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager peerManager_;
    /**
     * <code>.monitor.PeerManager peer_manager = 2;</code>
     */
    public boolean hasPeerManager() {
      return peerManager_ != null;
    }
    /**
     * <code>.monitor.PeerManager peer_manager = 2;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager getPeerManager() {
      return peerManager_ == null ? io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager.getDefaultInstance() : peerManager_;
    }
    /**
     * <code>.monitor.PeerManager peer_manager = 2;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Monitor.PeerManagerOrBuilder getPeerManagerOrBuilder() {
      return getPeerManager();
    }

    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (glueManager_ != null) {
        output.writeMessage(1, getGlueManager());
      }
      if (peerManager_ != null) {
        output.writeMessage(2, getPeerManager());
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (glueManager_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(1, getGlueManager());
      }
      if (peerManager_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(2, getPeerManager());
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus other = (io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus) obj;

      boolean result = true;
      result = result && (hasGlueManager() == other.hasGlueManager());
      if (hasGlueManager()) {
        result = result && getGlueManager()
            .equals(other.getGlueManager());
      }
      result = result && (hasPeerManager() == other.hasPeerManager());
      if (hasPeerManager()) {
        result = result && getPeerManager()
            .equals(other.getPeerManager());
      }
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      if (hasGlueManager()) {
        hash = (37 * hash) + GLUE_MANAGER_FIELD_NUMBER;
        hash = (53 * hash) + getGlueManager().hashCode();
      }
      if (hasPeerManager()) {
        hash = (37 * hash) + PEER_MANAGER_FIELD_NUMBER;
        hash = (53 * hash) + getPeerManager().hashCode();
      }
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * Protobuf type {@code monitor.RexxStatus}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:monitor.RexxStatus)
        io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatusOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_RexxStatus_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_RexxStatus_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus.class, io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      public Builder clear() {
        super.clear();
        if (glueManagerBuilder_ == null) {
          glueManager_ = null;
        } else {
          glueManager_ = null;
          glueManagerBuilder_ = null;
        }
        if (peerManagerBuilder_ == null) {
          peerManager_ = null;
        } else {
          peerManager_ = null;
          peerManagerBuilder_ = null;
        }
        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_RexxStatus_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus build() {
        io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus result = new io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus(this);
        if (glueManagerBuilder_ == null) {
          result.glueManager_ = glueManager_;
        } else {
          result.glueManager_ = glueManagerBuilder_.build();
        }
        if (peerManagerBuilder_ == null) {
          result.peerManager_ = peerManager_;
        } else {
          result.peerManager_ = peerManagerBuilder_.build();
        }
        onBuilt();
        return result;
      }

      public Builder clone() {
        return (Builder) super.clone();
      }
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus.getDefaultInstance()) return this;
        if (other.hasGlueManager()) {
          mergeGlueManager(other.getGlueManager());
        }
        if (other.hasPeerManager()) {
          mergePeerManager(other.getPeerManager());
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager glueManager_ = null;
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager, io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager.Builder, io.rexx.sdk.core.extend.protobuf.Monitor.GlueManagerOrBuilder> glueManagerBuilder_;
      /**
       * <code>.monitor.GlueManager glue_manager = 1;</code>
       */
      public boolean hasGlueManager() {
        return glueManagerBuilder_ != null || glueManager_ != null;
      }
      /**
       * <code>.monitor.GlueManager glue_manager = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager getGlueManager() {
        if (glueManagerBuilder_ == null) {
          return glueManager_ == null ? io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager.getDefaultInstance() : glueManager_;
        } else {
          return glueManagerBuilder_.getMessage();
        }
      }
      /**
       * <code>.monitor.GlueManager glue_manager = 1;</code>
       */
      public Builder setGlueManager(io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager value) {
        if (glueManagerBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          glueManager_ = value;
          onChanged();
        } else {
          glueManagerBuilder_.setMessage(value);
        }

        return this;
      }
      /**
       * <code>.monitor.GlueManager glue_manager = 1;</code>
       */
      public Builder setGlueManager(
          io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager.Builder builderForValue) {
        if (glueManagerBuilder_ == null) {
          glueManager_ = builderForValue.build();
          onChanged();
        } else {
          glueManagerBuilder_.setMessage(builderForValue.build());
        }

        return this;
      }
      /**
       * <code>.monitor.GlueManager glue_manager = 1;</code>
       */
      public Builder mergeGlueManager(io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager value) {
        if (glueManagerBuilder_ == null) {
          if (glueManager_ != null) {
            glueManager_ =
              io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager.newBuilder(glueManager_).mergeFrom(value).buildPartial();
          } else {
            glueManager_ = value;
          }
          onChanged();
        } else {
          glueManagerBuilder_.mergeFrom(value);
        }

        return this;
      }
      /**
       * <code>.monitor.GlueManager glue_manager = 1;</code>
       */
      public Builder clearGlueManager() {
        if (glueManagerBuilder_ == null) {
          glueManager_ = null;
          onChanged();
        } else {
          glueManager_ = null;
          glueManagerBuilder_ = null;
        }

        return this;
      }
      /**
       * <code>.monitor.GlueManager glue_manager = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager.Builder getGlueManagerBuilder() {
        
        onChanged();
        return getGlueManagerFieldBuilder().getBuilder();
      }
      /**
       * <code>.monitor.GlueManager glue_manager = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.GlueManagerOrBuilder getGlueManagerOrBuilder() {
        if (glueManagerBuilder_ != null) {
          return glueManagerBuilder_.getMessageOrBuilder();
        } else {
          return glueManager_ == null ?
              io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager.getDefaultInstance() : glueManager_;
        }
      }
      /**
       * <code>.monitor.GlueManager glue_manager = 1;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager, io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager.Builder, io.rexx.sdk.core.extend.protobuf.Monitor.GlueManagerOrBuilder>
          getGlueManagerFieldBuilder() {
        if (glueManagerBuilder_ == null) {
          glueManagerBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager, io.rexx.sdk.core.extend.protobuf.Monitor.GlueManager.Builder, io.rexx.sdk.core.extend.protobuf.Monitor.GlueManagerOrBuilder>(
                  getGlueManager(),
                  getParentForChildren(),
                  isClean());
          glueManager_ = null;
        }
        return glueManagerBuilder_;
      }

      private io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager peerManager_ = null;
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager, io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager.Builder, io.rexx.sdk.core.extend.protobuf.Monitor.PeerManagerOrBuilder> peerManagerBuilder_;
      /**
       * <code>.monitor.PeerManager peer_manager = 2;</code>
       */
      public boolean hasPeerManager() {
        return peerManagerBuilder_ != null || peerManager_ != null;
      }
      /**
       * <code>.monitor.PeerManager peer_manager = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager getPeerManager() {
        if (peerManagerBuilder_ == null) {
          return peerManager_ == null ? io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager.getDefaultInstance() : peerManager_;
        } else {
          return peerManagerBuilder_.getMessage();
        }
      }
      /**
       * <code>.monitor.PeerManager peer_manager = 2;</code>
       */
      public Builder setPeerManager(io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager value) {
        if (peerManagerBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          peerManager_ = value;
          onChanged();
        } else {
          peerManagerBuilder_.setMessage(value);
        }

        return this;
      }
      /**
       * <code>.monitor.PeerManager peer_manager = 2;</code>
       */
      public Builder setPeerManager(
          io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager.Builder builderForValue) {
        if (peerManagerBuilder_ == null) {
          peerManager_ = builderForValue.build();
          onChanged();
        } else {
          peerManagerBuilder_.setMessage(builderForValue.build());
        }

        return this;
      }
      /**
       * <code>.monitor.PeerManager peer_manager = 2;</code>
       */
      public Builder mergePeerManager(io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager value) {
        if (peerManagerBuilder_ == null) {
          if (peerManager_ != null) {
            peerManager_ =
              io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager.newBuilder(peerManager_).mergeFrom(value).buildPartial();
          } else {
            peerManager_ = value;
          }
          onChanged();
        } else {
          peerManagerBuilder_.mergeFrom(value);
        }

        return this;
      }
      /**
       * <code>.monitor.PeerManager peer_manager = 2;</code>
       */
      public Builder clearPeerManager() {
        if (peerManagerBuilder_ == null) {
          peerManager_ = null;
          onChanged();
        } else {
          peerManager_ = null;
          peerManagerBuilder_ = null;
        }

        return this;
      }
      /**
       * <code>.monitor.PeerManager peer_manager = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager.Builder getPeerManagerBuilder() {
        
        onChanged();
        return getPeerManagerFieldBuilder().getBuilder();
      }
      /**
       * <code>.monitor.PeerManager peer_manager = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.PeerManagerOrBuilder getPeerManagerOrBuilder() {
        if (peerManagerBuilder_ != null) {
          return peerManagerBuilder_.getMessageOrBuilder();
        } else {
          return peerManager_ == null ?
              io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager.getDefaultInstance() : peerManager_;
        }
      }
      /**
       * <code>.monitor.PeerManager peer_manager = 2;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager, io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager.Builder, io.rexx.sdk.core.extend.protobuf.Monitor.PeerManagerOrBuilder>
          getPeerManagerFieldBuilder() {
        if (peerManagerBuilder_ == null) {
          peerManagerBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager, io.rexx.sdk.core.extend.protobuf.Monitor.PeerManager.Builder, io.rexx.sdk.core.extend.protobuf.Monitor.PeerManagerOrBuilder>(
                  getPeerManager(),
                  getParentForChildren(),
                  isClean());
          peerManager_ = null;
        }
        return peerManagerBuilder_;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:monitor.RexxStatus)
    }

    // @@protoc_insertion_point(class_scope:monitor.RexxStatus)
    private static final io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus();
    }

    public static io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<RexxStatus>
        PARSER = new com.google.protobuf.AbstractParser<RexxStatus>() {
      public RexxStatus parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new RexxStatus(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<RexxStatus> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<RexxStatus> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Monitor.RexxStatus getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface LedgerStatusOrBuilder extends
      // @@protoc_insertion_point(interface_extends:monitor.LedgerStatus)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>.protocol.LedgerHeader ledger_header = 1;</code>
     */
    boolean hasLedgerHeader();
    /**
     * <code>.protocol.LedgerHeader ledger_header = 1;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Chain.LedgerHeader getLedgerHeader();
    /**
     * <code>.protocol.LedgerHeader ledger_header = 1;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Chain.LedgerHeaderOrBuilder getLedgerHeaderOrBuilder();

    /**
     * <code>int64 transaction_size = 2;</code>
     */
    long getTransactionSize();

    /**
     * <code>int64 account_count = 3;</code>
     */
    long getAccountCount();

    /**
     * <code>int64 timestamp = 4;</code>
     */
    long getTimestamp();
  }
  /**
   * Protobuf type {@code monitor.LedgerStatus}
   */
  public  static final class LedgerStatus extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:monitor.LedgerStatus)
      LedgerStatusOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use LedgerStatus.newBuilder() to construct.
    private LedgerStatus(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private LedgerStatus() {
      transactionSize_ = 0L;
      accountCount_ = 0L;
      timestamp_ = 0L;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private LedgerStatus(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownFieldProto3(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 10: {
              io.rexx.sdk.core.extend.protobuf.Chain.LedgerHeader.Builder subBuilder = null;
              if (ledgerHeader_ != null) {
                subBuilder = ledgerHeader_.toBuilder();
              }
              ledgerHeader_ = input.readMessage(io.rexx.sdk.core.extend.protobuf.Chain.LedgerHeader.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(ledgerHeader_);
                ledgerHeader_ = subBuilder.buildPartial();
              }

              break;
            }
            case 16: {

              transactionSize_ = input.readInt64();
              break;
            }
            case 24: {

              accountCount_ = input.readInt64();
              break;
            }
            case 32: {

              timestamp_ = input.readInt64();
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_LedgerStatus_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_LedgerStatus_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus.class, io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus.Builder.class);
    }

    public static final int LEDGER_HEADER_FIELD_NUMBER = 1;
    private io.rexx.sdk.core.extend.protobuf.Chain.LedgerHeader ledgerHeader_;
    /**
     * <code>.protocol.LedgerHeader ledger_header = 1;</code>
     */
    public boolean hasLedgerHeader() {
      return ledgerHeader_ != null;
    }
    /**
     * <code>.protocol.LedgerHeader ledger_header = 1;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Chain.LedgerHeader getLedgerHeader() {
      return ledgerHeader_ == null ? io.rexx.sdk.core.extend.protobuf.Chain.LedgerHeader.getDefaultInstance() : ledgerHeader_;
    }
    /**
     * <code>.protocol.LedgerHeader ledger_header = 1;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Chain.LedgerHeaderOrBuilder getLedgerHeaderOrBuilder() {
      return getLedgerHeader();
    }

    public static final int TRANSACTION_SIZE_FIELD_NUMBER = 2;
    private long transactionSize_;
    /**
     * <code>int64 transaction_size = 2;</code>
     */
    public long getTransactionSize() {
      return transactionSize_;
    }

    public static final int ACCOUNT_COUNT_FIELD_NUMBER = 3;
    private long accountCount_;
    /**
     * <code>int64 account_count = 3;</code>
     */
    public long getAccountCount() {
      return accountCount_;
    }

    public static final int TIMESTAMP_FIELD_NUMBER = 4;
    private long timestamp_;
    /**
     * <code>int64 timestamp = 4;</code>
     */
    public long getTimestamp() {
      return timestamp_;
    }

    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (ledgerHeader_ != null) {
        output.writeMessage(1, getLedgerHeader());
      }
      if (transactionSize_ != 0L) {
        output.writeInt64(2, transactionSize_);
      }
      if (accountCount_ != 0L) {
        output.writeInt64(3, accountCount_);
      }
      if (timestamp_ != 0L) {
        output.writeInt64(4, timestamp_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (ledgerHeader_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(1, getLedgerHeader());
      }
      if (transactionSize_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(2, transactionSize_);
      }
      if (accountCount_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(3, accountCount_);
      }
      if (timestamp_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(4, timestamp_);
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus other = (io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus) obj;

      boolean result = true;
      result = result && (hasLedgerHeader() == other.hasLedgerHeader());
      if (hasLedgerHeader()) {
        result = result && getLedgerHeader()
            .equals(other.getLedgerHeader());
      }
      result = result && (getTransactionSize()
          == other.getTransactionSize());
      result = result && (getAccountCount()
          == other.getAccountCount());
      result = result && (getTimestamp()
          == other.getTimestamp());
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      if (hasLedgerHeader()) {
        hash = (37 * hash) + LEDGER_HEADER_FIELD_NUMBER;
        hash = (53 * hash) + getLedgerHeader().hashCode();
      }
      hash = (37 * hash) + TRANSACTION_SIZE_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getTransactionSize());
      hash = (37 * hash) + ACCOUNT_COUNT_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getAccountCount());
      hash = (37 * hash) + TIMESTAMP_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getTimestamp());
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * Protobuf type {@code monitor.LedgerStatus}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:monitor.LedgerStatus)
        io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatusOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_LedgerStatus_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_LedgerStatus_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus.class, io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      public Builder clear() {
        super.clear();
        if (ledgerHeaderBuilder_ == null) {
          ledgerHeader_ = null;
        } else {
          ledgerHeader_ = null;
          ledgerHeaderBuilder_ = null;
        }
        transactionSize_ = 0L;

        accountCount_ = 0L;

        timestamp_ = 0L;

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_LedgerStatus_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus build() {
        io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus result = new io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus(this);
        if (ledgerHeaderBuilder_ == null) {
          result.ledgerHeader_ = ledgerHeader_;
        } else {
          result.ledgerHeader_ = ledgerHeaderBuilder_.build();
        }
        result.transactionSize_ = transactionSize_;
        result.accountCount_ = accountCount_;
        result.timestamp_ = timestamp_;
        onBuilt();
        return result;
      }

      public Builder clone() {
        return (Builder) super.clone();
      }
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus.getDefaultInstance()) return this;
        if (other.hasLedgerHeader()) {
          mergeLedgerHeader(other.getLedgerHeader());
        }
        if (other.getTransactionSize() != 0L) {
          setTransactionSize(other.getTransactionSize());
        }
        if (other.getAccountCount() != 0L) {
          setAccountCount(other.getAccountCount());
        }
        if (other.getTimestamp() != 0L) {
          setTimestamp(other.getTimestamp());
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private io.rexx.sdk.core.extend.protobuf.Chain.LedgerHeader ledgerHeader_ = null;
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Chain.LedgerHeader, io.rexx.sdk.core.extend.protobuf.Chain.LedgerHeader.Builder, io.rexx.sdk.core.extend.protobuf.Chain.LedgerHeaderOrBuilder> ledgerHeaderBuilder_;
      /**
       * <code>.protocol.LedgerHeader ledger_header = 1;</code>
       */
      public boolean hasLedgerHeader() {
        return ledgerHeaderBuilder_ != null || ledgerHeader_ != null;
      }
      /**
       * <code>.protocol.LedgerHeader ledger_header = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Chain.LedgerHeader getLedgerHeader() {
        if (ledgerHeaderBuilder_ == null) {
          return ledgerHeader_ == null ? io.rexx.sdk.core.extend.protobuf.Chain.LedgerHeader.getDefaultInstance() : ledgerHeader_;
        } else {
          return ledgerHeaderBuilder_.getMessage();
        }
      }
      /**
       * <code>.protocol.LedgerHeader ledger_header = 1;</code>
       */
      public Builder setLedgerHeader(io.rexx.sdk.core.extend.protobuf.Chain.LedgerHeader value) {
        if (ledgerHeaderBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          ledgerHeader_ = value;
          onChanged();
        } else {
          ledgerHeaderBuilder_.setMessage(value);
        }

        return this;
      }
      /**
       * <code>.protocol.LedgerHeader ledger_header = 1;</code>
       */
      public Builder setLedgerHeader(
          io.rexx.sdk.core.extend.protobuf.Chain.LedgerHeader.Builder builderForValue) {
        if (ledgerHeaderBuilder_ == null) {
          ledgerHeader_ = builderForValue.build();
          onChanged();
        } else {
          ledgerHeaderBuilder_.setMessage(builderForValue.build());
        }

        return this;
      }
      /**
       * <code>.protocol.LedgerHeader ledger_header = 1;</code>
       */
      public Builder mergeLedgerHeader(io.rexx.sdk.core.extend.protobuf.Chain.LedgerHeader value) {
        if (ledgerHeaderBuilder_ == null) {
          if (ledgerHeader_ != null) {
            ledgerHeader_ =
              io.rexx.sdk.core.extend.protobuf.Chain.LedgerHeader.newBuilder(ledgerHeader_).mergeFrom(value).buildPartial();
          } else {
            ledgerHeader_ = value;
          }
          onChanged();
        } else {
          ledgerHeaderBuilder_.mergeFrom(value);
        }

        return this;
      }
      /**
       * <code>.protocol.LedgerHeader ledger_header = 1;</code>
       */
      public Builder clearLedgerHeader() {
        if (ledgerHeaderBuilder_ == null) {
          ledgerHeader_ = null;
          onChanged();
        } else {
          ledgerHeader_ = null;
          ledgerHeaderBuilder_ = null;
        }

        return this;
      }
      /**
       * <code>.protocol.LedgerHeader ledger_header = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Chain.LedgerHeader.Builder getLedgerHeaderBuilder() {
        
        onChanged();
        return getLedgerHeaderFieldBuilder().getBuilder();
      }
      /**
       * <code>.protocol.LedgerHeader ledger_header = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Chain.LedgerHeaderOrBuilder getLedgerHeaderOrBuilder() {
        if (ledgerHeaderBuilder_ != null) {
          return ledgerHeaderBuilder_.getMessageOrBuilder();
        } else {
          return ledgerHeader_ == null ?
              io.rexx.sdk.core.extend.protobuf.Chain.LedgerHeader.getDefaultInstance() : ledgerHeader_;
        }
      }
      /**
       * <code>.protocol.LedgerHeader ledger_header = 1;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Chain.LedgerHeader, io.rexx.sdk.core.extend.protobuf.Chain.LedgerHeader.Builder, io.rexx.sdk.core.extend.protobuf.Chain.LedgerHeaderOrBuilder>
          getLedgerHeaderFieldBuilder() {
        if (ledgerHeaderBuilder_ == null) {
          ledgerHeaderBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              io.rexx.sdk.core.extend.protobuf.Chain.LedgerHeader, io.rexx.sdk.core.extend.protobuf.Chain.LedgerHeader.Builder, io.rexx.sdk.core.extend.protobuf.Chain.LedgerHeaderOrBuilder>(
                  getLedgerHeader(),
                  getParentForChildren(),
                  isClean());
          ledgerHeader_ = null;
        }
        return ledgerHeaderBuilder_;
      }

      private long transactionSize_ ;
      /**
       * <code>int64 transaction_size = 2;</code>
       */
      public long getTransactionSize() {
        return transactionSize_;
      }
      /**
       * <code>int64 transaction_size = 2;</code>
       */
      public Builder setTransactionSize(long value) {
        
        transactionSize_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 transaction_size = 2;</code>
       */
      public Builder clearTransactionSize() {
        
        transactionSize_ = 0L;
        onChanged();
        return this;
      }

      private long accountCount_ ;
      /**
       * <code>int64 account_count = 3;</code>
       */
      public long getAccountCount() {
        return accountCount_;
      }
      /**
       * <code>int64 account_count = 3;</code>
       */
      public Builder setAccountCount(long value) {
        
        accountCount_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 account_count = 3;</code>
       */
      public Builder clearAccountCount() {
        
        accountCount_ = 0L;
        onChanged();
        return this;
      }

      private long timestamp_ ;
      /**
       * <code>int64 timestamp = 4;</code>
       */
      public long getTimestamp() {
        return timestamp_;
      }
      /**
       * <code>int64 timestamp = 4;</code>
       */
      public Builder setTimestamp(long value) {
        
        timestamp_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 timestamp = 4;</code>
       */
      public Builder clearTimestamp() {
        
        timestamp_ = 0L;
        onChanged();
        return this;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:monitor.LedgerStatus)
    }

    // @@protoc_insertion_point(class_scope:monitor.LedgerStatus)
    private static final io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus();
    }

    public static io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<LedgerStatus>
        PARSER = new com.google.protobuf.AbstractParser<LedgerStatus>() {
      public LedgerStatus parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new LedgerStatus(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<LedgerStatus> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<LedgerStatus> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Monitor.LedgerStatus getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface SystemPropertyOrBuilder extends
      // @@protoc_insertion_point(interface_extends:monitor.SystemProperty)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>string host_name = 1;</code>
     */
    java.lang.String getHostName();
    /**
     * <code>string host_name = 1;</code>
     */
    com.google.protobuf.ByteString
        getHostNameBytes();

    /**
     * <code>string os_version = 2;</code>
     */
    java.lang.String getOsVersion();
    /**
     * <code>string os_version = 2;</code>
     */
    com.google.protobuf.ByteString
        getOsVersionBytes();

    /**
     * <code>int64 startup_time = 3;</code>
     */
    long getStartupTime();

    /**
     * <code>string os_bit = 4;</code>
     */
    java.lang.String getOsBit();
    /**
     * <code>string os_bit = 4;</code>
     */
    com.google.protobuf.ByteString
        getOsBitBytes();
  }
  /**
   * Protobuf type {@code monitor.SystemProperty}
   */
  public  static final class SystemProperty extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:monitor.SystemProperty)
      SystemPropertyOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use SystemProperty.newBuilder() to construct.
    private SystemProperty(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private SystemProperty() {
      hostName_ = "";
      osVersion_ = "";
      startupTime_ = 0L;
      osBit_ = "";
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private SystemProperty(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownFieldProto3(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 10: {
              java.lang.String s = input.readStringRequireUtf8();

              hostName_ = s;
              break;
            }
            case 18: {
              java.lang.String s = input.readStringRequireUtf8();

              osVersion_ = s;
              break;
            }
            case 24: {

              startupTime_ = input.readInt64();
              break;
            }
            case 34: {
              java.lang.String s = input.readStringRequireUtf8();

              osBit_ = s;
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_SystemProperty_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_SystemProperty_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty.class, io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty.Builder.class);
    }

    public static final int HOST_NAME_FIELD_NUMBER = 1;
    private volatile java.lang.Object hostName_;
    /**
     * <code>string host_name = 1;</code>
     */
    public java.lang.String getHostName() {
      java.lang.Object ref = hostName_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        hostName_ = s;
        return s;
      }
    }
    /**
     * <code>string host_name = 1;</code>
     */
    public com.google.protobuf.ByteString
        getHostNameBytes() {
      java.lang.Object ref = hostName_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        hostName_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int OS_VERSION_FIELD_NUMBER = 2;
    private volatile java.lang.Object osVersion_;
    /**
     * <code>string os_version = 2;</code>
     */
    public java.lang.String getOsVersion() {
      java.lang.Object ref = osVersion_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        osVersion_ = s;
        return s;
      }
    }
    /**
     * <code>string os_version = 2;</code>
     */
    public com.google.protobuf.ByteString
        getOsVersionBytes() {
      java.lang.Object ref = osVersion_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        osVersion_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int STARTUP_TIME_FIELD_NUMBER = 3;
    private long startupTime_;
    /**
     * <code>int64 startup_time = 3;</code>
     */
    public long getStartupTime() {
      return startupTime_;
    }

    public static final int OS_BIT_FIELD_NUMBER = 4;
    private volatile java.lang.Object osBit_;
    /**
     * <code>string os_bit = 4;</code>
     */
    public java.lang.String getOsBit() {
      java.lang.Object ref = osBit_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        osBit_ = s;
        return s;
      }
    }
    /**
     * <code>string os_bit = 4;</code>
     */
    public com.google.protobuf.ByteString
        getOsBitBytes() {
      java.lang.Object ref = osBit_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        osBit_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (!getHostNameBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 1, hostName_);
      }
      if (!getOsVersionBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 2, osVersion_);
      }
      if (startupTime_ != 0L) {
        output.writeInt64(3, startupTime_);
      }
      if (!getOsBitBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 4, osBit_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (!getHostNameBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(1, hostName_);
      }
      if (!getOsVersionBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(2, osVersion_);
      }
      if (startupTime_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(3, startupTime_);
      }
      if (!getOsBitBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(4, osBit_);
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty other = (io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty) obj;

      boolean result = true;
      result = result && getHostName()
          .equals(other.getHostName());
      result = result && getOsVersion()
          .equals(other.getOsVersion());
      result = result && (getStartupTime()
          == other.getStartupTime());
      result = result && getOsBit()
          .equals(other.getOsBit());
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      hash = (37 * hash) + HOST_NAME_FIELD_NUMBER;
      hash = (53 * hash) + getHostName().hashCode();
      hash = (37 * hash) + OS_VERSION_FIELD_NUMBER;
      hash = (53 * hash) + getOsVersion().hashCode();
      hash = (37 * hash) + STARTUP_TIME_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getStartupTime());
      hash = (37 * hash) + OS_BIT_FIELD_NUMBER;
      hash = (53 * hash) + getOsBit().hashCode();
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * Protobuf type {@code monitor.SystemProperty}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:monitor.SystemProperty)
        io.rexx.sdk.core.extend.protobuf.Monitor.SystemPropertyOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_SystemProperty_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_SystemProperty_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty.class, io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      public Builder clear() {
        super.clear();
        hostName_ = "";

        osVersion_ = "";

        startupTime_ = 0L;

        osBit_ = "";

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_SystemProperty_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty build() {
        io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty result = new io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty(this);
        result.hostName_ = hostName_;
        result.osVersion_ = osVersion_;
        result.startupTime_ = startupTime_;
        result.osBit_ = osBit_;
        onBuilt();
        return result;
      }

      public Builder clone() {
        return (Builder) super.clone();
      }
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty.getDefaultInstance()) return this;
        if (!other.getHostName().isEmpty()) {
          hostName_ = other.hostName_;
          onChanged();
        }
        if (!other.getOsVersion().isEmpty()) {
          osVersion_ = other.osVersion_;
          onChanged();
        }
        if (other.getStartupTime() != 0L) {
          setStartupTime(other.getStartupTime());
        }
        if (!other.getOsBit().isEmpty()) {
          osBit_ = other.osBit_;
          onChanged();
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private java.lang.Object hostName_ = "";
      /**
       * <code>string host_name = 1;</code>
       */
      public java.lang.String getHostName() {
        java.lang.Object ref = hostName_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          hostName_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string host_name = 1;</code>
       */
      public com.google.protobuf.ByteString
          getHostNameBytes() {
        java.lang.Object ref = hostName_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          hostName_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string host_name = 1;</code>
       */
      public Builder setHostName(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        hostName_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string host_name = 1;</code>
       */
      public Builder clearHostName() {
        
        hostName_ = getDefaultInstance().getHostName();
        onChanged();
        return this;
      }
      /**
       * <code>string host_name = 1;</code>
       */
      public Builder setHostNameBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        hostName_ = value;
        onChanged();
        return this;
      }

      private java.lang.Object osVersion_ = "";
      /**
       * <code>string os_version = 2;</code>
       */
      public java.lang.String getOsVersion() {
        java.lang.Object ref = osVersion_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          osVersion_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string os_version = 2;</code>
       */
      public com.google.protobuf.ByteString
          getOsVersionBytes() {
        java.lang.Object ref = osVersion_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          osVersion_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string os_version = 2;</code>
       */
      public Builder setOsVersion(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        osVersion_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string os_version = 2;</code>
       */
      public Builder clearOsVersion() {
        
        osVersion_ = getDefaultInstance().getOsVersion();
        onChanged();
        return this;
      }
      /**
       * <code>string os_version = 2;</code>
       */
      public Builder setOsVersionBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        osVersion_ = value;
        onChanged();
        return this;
      }

      private long startupTime_ ;
      /**
       * <code>int64 startup_time = 3;</code>
       */
      public long getStartupTime() {
        return startupTime_;
      }
      /**
       * <code>int64 startup_time = 3;</code>
       */
      public Builder setStartupTime(long value) {
        
        startupTime_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 startup_time = 3;</code>
       */
      public Builder clearStartupTime() {
        
        startupTime_ = 0L;
        onChanged();
        return this;
      }

      private java.lang.Object osBit_ = "";
      /**
       * <code>string os_bit = 4;</code>
       */
      public java.lang.String getOsBit() {
        java.lang.Object ref = osBit_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          osBit_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string os_bit = 4;</code>
       */
      public com.google.protobuf.ByteString
          getOsBitBytes() {
        java.lang.Object ref = osBit_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          osBit_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string os_bit = 4;</code>
       */
      public Builder setOsBit(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        osBit_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string os_bit = 4;</code>
       */
      public Builder clearOsBit() {
        
        osBit_ = getDefaultInstance().getOsBit();
        onChanged();
        return this;
      }
      /**
       * <code>string os_bit = 4;</code>
       */
      public Builder setOsBitBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        osBit_ = value;
        onChanged();
        return this;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:monitor.SystemProperty)
    }

    // @@protoc_insertion_point(class_scope:monitor.SystemProperty)
    private static final io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty();
    }

    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<SystemProperty>
        PARSER = new com.google.protobuf.AbstractParser<SystemProperty>() {
      public SystemProperty parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new SystemProperty(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<SystemProperty> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<SystemProperty> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface SystemResourceOrBuilder extends
      // @@protoc_insertion_point(interface_extends:monitor.SystemResource)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>int64 available = 1;</code>
     */
    long getAvailable();

    /**
     * <code>int64 total = 2;</code>
     */
    long getTotal();

    /**
     * <code>double used_percent = 3;</code>
     */
    double getUsedPercent();

    /**
     * <code>string description = 4;</code>
     */
    java.lang.String getDescription();
    /**
     * <code>string description = 4;</code>
     */
    com.google.protobuf.ByteString
        getDescriptionBytes();
  }
  /**
   * Protobuf type {@code monitor.SystemResource}
   */
  public  static final class SystemResource extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:monitor.SystemResource)
      SystemResourceOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use SystemResource.newBuilder() to construct.
    private SystemResource(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private SystemResource() {
      available_ = 0L;
      total_ = 0L;
      usedPercent_ = 0D;
      description_ = "";
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private SystemResource(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownFieldProto3(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 8: {

              available_ = input.readInt64();
              break;
            }
            case 16: {

              total_ = input.readInt64();
              break;
            }
            case 25: {

              usedPercent_ = input.readDouble();
              break;
            }
            case 34: {
              java.lang.String s = input.readStringRequireUtf8();

              description_ = s;
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_SystemResource_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_SystemResource_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.class, io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.Builder.class);
    }

    public static final int AVAILABLE_FIELD_NUMBER = 1;
    private long available_;
    /**
     * <code>int64 available = 1;</code>
     */
    public long getAvailable() {
      return available_;
    }

    public static final int TOTAL_FIELD_NUMBER = 2;
    private long total_;
    /**
     * <code>int64 total = 2;</code>
     */
    public long getTotal() {
      return total_;
    }

    public static final int USED_PERCENT_FIELD_NUMBER = 3;
    private double usedPercent_;
    /**
     * <code>double used_percent = 3;</code>
     */
    public double getUsedPercent() {
      return usedPercent_;
    }

    public static final int DESCRIPTION_FIELD_NUMBER = 4;
    private volatile java.lang.Object description_;
    /**
     * <code>string description = 4;</code>
     */
    public java.lang.String getDescription() {
      java.lang.Object ref = description_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        description_ = s;
        return s;
      }
    }
    /**
     * <code>string description = 4;</code>
     */
    public com.google.protobuf.ByteString
        getDescriptionBytes() {
      java.lang.Object ref = description_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        description_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (available_ != 0L) {
        output.writeInt64(1, available_);
      }
      if (total_ != 0L) {
        output.writeInt64(2, total_);
      }
      if (usedPercent_ != 0D) {
        output.writeDouble(3, usedPercent_);
      }
      if (!getDescriptionBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 4, description_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (available_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(1, available_);
      }
      if (total_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(2, total_);
      }
      if (usedPercent_ != 0D) {
        size += com.google.protobuf.CodedOutputStream
          .computeDoubleSize(3, usedPercent_);
      }
      if (!getDescriptionBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(4, description_);
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource other = (io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource) obj;

      boolean result = true;
      result = result && (getAvailable()
          == other.getAvailable());
      result = result && (getTotal()
          == other.getTotal());
      result = result && (
          java.lang.Double.doubleToLongBits(getUsedPercent())
          == java.lang.Double.doubleToLongBits(
              other.getUsedPercent()));
      result = result && getDescription()
          .equals(other.getDescription());
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      hash = (37 * hash) + AVAILABLE_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getAvailable());
      hash = (37 * hash) + TOTAL_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getTotal());
      hash = (37 * hash) + USED_PERCENT_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          java.lang.Double.doubleToLongBits(getUsedPercent()));
      hash = (37 * hash) + DESCRIPTION_FIELD_NUMBER;
      hash = (53 * hash) + getDescription().hashCode();
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * Protobuf type {@code monitor.SystemResource}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:monitor.SystemResource)
        io.rexx.sdk.core.extend.protobuf.Monitor.SystemResourceOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_SystemResource_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_SystemResource_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.class, io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      public Builder clear() {
        super.clear();
        available_ = 0L;

        total_ = 0L;

        usedPercent_ = 0D;

        description_ = "";

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_SystemResource_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource build() {
        io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource result = new io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource(this);
        result.available_ = available_;
        result.total_ = total_;
        result.usedPercent_ = usedPercent_;
        result.description_ = description_;
        onBuilt();
        return result;
      }

      public Builder clone() {
        return (Builder) super.clone();
      }
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.getDefaultInstance()) return this;
        if (other.getAvailable() != 0L) {
          setAvailable(other.getAvailable());
        }
        if (other.getTotal() != 0L) {
          setTotal(other.getTotal());
        }
        if (other.getUsedPercent() != 0D) {
          setUsedPercent(other.getUsedPercent());
        }
        if (!other.getDescription().isEmpty()) {
          description_ = other.description_;
          onChanged();
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private long available_ ;
      /**
       * <code>int64 available = 1;</code>
       */
      public long getAvailable() {
        return available_;
      }
      /**
       * <code>int64 available = 1;</code>
       */
      public Builder setAvailable(long value) {
        
        available_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 available = 1;</code>
       */
      public Builder clearAvailable() {
        
        available_ = 0L;
        onChanged();
        return this;
      }

      private long total_ ;
      /**
       * <code>int64 total = 2;</code>
       */
      public long getTotal() {
        return total_;
      }
      /**
       * <code>int64 total = 2;</code>
       */
      public Builder setTotal(long value) {
        
        total_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 total = 2;</code>
       */
      public Builder clearTotal() {
        
        total_ = 0L;
        onChanged();
        return this;
      }

      private double usedPercent_ ;
      /**
       * <code>double used_percent = 3;</code>
       */
      public double getUsedPercent() {
        return usedPercent_;
      }
      /**
       * <code>double used_percent = 3;</code>
       */
      public Builder setUsedPercent(double value) {
        
        usedPercent_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>double used_percent = 3;</code>
       */
      public Builder clearUsedPercent() {
        
        usedPercent_ = 0D;
        onChanged();
        return this;
      }

      private java.lang.Object description_ = "";
      /**
       * <code>string description = 4;</code>
       */
      public java.lang.String getDescription() {
        java.lang.Object ref = description_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          description_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string description = 4;</code>
       */
      public com.google.protobuf.ByteString
          getDescriptionBytes() {
        java.lang.Object ref = description_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          description_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string description = 4;</code>
       */
      public Builder setDescription(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        description_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string description = 4;</code>
       */
      public Builder clearDescription() {
        
        description_ = getDefaultInstance().getDescription();
        onChanged();
        return this;
      }
      /**
       * <code>string description = 4;</code>
       */
      public Builder setDescriptionBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        description_ = value;
        onChanged();
        return this;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:monitor.SystemResource)
    }

    // @@protoc_insertion_point(class_scope:monitor.SystemResource)
    private static final io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource();
    }

    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<SystemResource>
        PARSER = new com.google.protobuf.AbstractParser<SystemResource>() {
      public SystemResource parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new SystemResource(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<SystemResource> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<SystemResource> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface PartitionOrBuilder extends
      // @@protoc_insertion_point(interface_extends:monitor.Partition)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>int64 total_bytes = 1;</code>
     */
    long getTotalBytes();

    /**
     * <code>repeated .monitor.SystemResource partition = 2;</code>
     */
    java.util.List<io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource>
        getPartitionList();
    /**
     * <code>repeated .monitor.SystemResource partition = 2;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource getPartition(int index);
    /**
     * <code>repeated .monitor.SystemResource partition = 2;</code>
     */
    int getPartitionCount();
    /**
     * <code>repeated .monitor.SystemResource partition = 2;</code>
     */
    java.util.List<? extends io.rexx.sdk.core.extend.protobuf.Monitor.SystemResourceOrBuilder>
        getPartitionOrBuilderList();
    /**
     * <code>repeated .monitor.SystemResource partition = 2;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Monitor.SystemResourceOrBuilder getPartitionOrBuilder(
        int index);
  }
  /**
   * Protobuf type {@code monitor.Partition}
   */
  public  static final class Partition extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:monitor.Partition)
      PartitionOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use Partition.newBuilder() to construct.
    private Partition(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private Partition() {
      totalBytes_ = 0L;
      partition_ = java.util.Collections.emptyList();
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private Partition(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownFieldProto3(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 8: {

              totalBytes_ = input.readInt64();
              break;
            }
            case 18: {
              if (!((mutable_bitField0_ & 0x00000002) == 0x00000002)) {
                partition_ = new java.util.ArrayList<io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource>();
                mutable_bitField0_ |= 0x00000002;
              }
              partition_.add(
                  input.readMessage(io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.parser(), extensionRegistry));
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        if (((mutable_bitField0_ & 0x00000002) == 0x00000002)) {
          partition_ = java.util.Collections.unmodifiableList(partition_);
        }
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_Partition_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_Partition_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Monitor.Partition.class, io.rexx.sdk.core.extend.protobuf.Monitor.Partition.Builder.class);
    }

    private int bitField0_;
    public static final int TOTAL_BYTES_FIELD_NUMBER = 1;
    private long totalBytes_;
    /**
     * <code>int64 total_bytes = 1;</code>
     */
    public long getTotalBytes() {
      return totalBytes_;
    }

    public static final int PARTITION_FIELD_NUMBER = 2;
    private java.util.List<io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource> partition_;
    /**
     * <code>repeated .monitor.SystemResource partition = 2;</code>
     */
    public java.util.List<io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource> getPartitionList() {
      return partition_;
    }
    /**
     * <code>repeated .monitor.SystemResource partition = 2;</code>
     */
    public java.util.List<? extends io.rexx.sdk.core.extend.protobuf.Monitor.SystemResourceOrBuilder>
        getPartitionOrBuilderList() {
      return partition_;
    }
    /**
     * <code>repeated .monitor.SystemResource partition = 2;</code>
     */
    public int getPartitionCount() {
      return partition_.size();
    }
    /**
     * <code>repeated .monitor.SystemResource partition = 2;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource getPartition(int index) {
      return partition_.get(index);
    }
    /**
     * <code>repeated .monitor.SystemResource partition = 2;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Monitor.SystemResourceOrBuilder getPartitionOrBuilder(
        int index) {
      return partition_.get(index);
    }

    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (totalBytes_ != 0L) {
        output.writeInt64(1, totalBytes_);
      }
      for (int i = 0; i < partition_.size(); i++) {
        output.writeMessage(2, partition_.get(i));
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (totalBytes_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(1, totalBytes_);
      }
      for (int i = 0; i < partition_.size(); i++) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(2, partition_.get(i));
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Monitor.Partition)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Monitor.Partition other = (io.rexx.sdk.core.extend.protobuf.Monitor.Partition) obj;

      boolean result = true;
      result = result && (getTotalBytes()
          == other.getTotalBytes());
      result = result && getPartitionList()
          .equals(other.getPartitionList());
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      hash = (37 * hash) + TOTAL_BYTES_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getTotalBytes());
      if (getPartitionCount() > 0) {
        hash = (37 * hash) + PARTITION_FIELD_NUMBER;
        hash = (53 * hash) + getPartitionList().hashCode();
      }
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Monitor.Partition parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Partition parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Partition parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Partition parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Partition parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Partition parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Partition parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Partition parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Partition parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Partition parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Partition parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.Partition parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Monitor.Partition prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * Protobuf type {@code monitor.Partition}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:monitor.Partition)
        io.rexx.sdk.core.extend.protobuf.Monitor.PartitionOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_Partition_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_Partition_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Monitor.Partition.class, io.rexx.sdk.core.extend.protobuf.Monitor.Partition.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Monitor.Partition.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
          getPartitionFieldBuilder();
        }
      }
      public Builder clear() {
        super.clear();
        totalBytes_ = 0L;

        if (partitionBuilder_ == null) {
          partition_ = java.util.Collections.emptyList();
          bitField0_ = (bitField0_ & ~0x00000002);
        } else {
          partitionBuilder_.clear();
        }
        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_Partition_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.Partition getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.Partition.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.Partition build() {
        io.rexx.sdk.core.extend.protobuf.Monitor.Partition result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.Partition buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Monitor.Partition result = new io.rexx.sdk.core.extend.protobuf.Monitor.Partition(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        result.totalBytes_ = totalBytes_;
        if (partitionBuilder_ == null) {
          if (((bitField0_ & 0x00000002) == 0x00000002)) {
            partition_ = java.util.Collections.unmodifiableList(partition_);
            bitField0_ = (bitField0_ & ~0x00000002);
          }
          result.partition_ = partition_;
        } else {
          result.partition_ = partitionBuilder_.build();
        }
        result.bitField0_ = to_bitField0_;
        onBuilt();
        return result;
      }

      public Builder clone() {
        return (Builder) super.clone();
      }
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Monitor.Partition) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Monitor.Partition)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Monitor.Partition other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Monitor.Partition.getDefaultInstance()) return this;
        if (other.getTotalBytes() != 0L) {
          setTotalBytes(other.getTotalBytes());
        }
        if (partitionBuilder_ == null) {
          if (!other.partition_.isEmpty()) {
            if (partition_.isEmpty()) {
              partition_ = other.partition_;
              bitField0_ = (bitField0_ & ~0x00000002);
            } else {
              ensurePartitionIsMutable();
              partition_.addAll(other.partition_);
            }
            onChanged();
          }
        } else {
          if (!other.partition_.isEmpty()) {
            if (partitionBuilder_.isEmpty()) {
              partitionBuilder_.dispose();
              partitionBuilder_ = null;
              partition_ = other.partition_;
              bitField0_ = (bitField0_ & ~0x00000002);
              partitionBuilder_ = 
                com.google.protobuf.GeneratedMessageV3.alwaysUseFieldBuilders ?
                   getPartitionFieldBuilder() : null;
            } else {
              partitionBuilder_.addAllMessages(other.partition_);
            }
          }
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        io.rexx.sdk.core.extend.protobuf.Monitor.Partition parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Monitor.Partition) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }
      private int bitField0_;

      private long totalBytes_ ;
      /**
       * <code>int64 total_bytes = 1;</code>
       */
      public long getTotalBytes() {
        return totalBytes_;
      }
      /**
       * <code>int64 total_bytes = 1;</code>
       */
      public Builder setTotalBytes(long value) {
        
        totalBytes_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 total_bytes = 1;</code>
       */
      public Builder clearTotalBytes() {
        
        totalBytes_ = 0L;
        onChanged();
        return this;
      }

      private java.util.List<io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource> partition_ =
        java.util.Collections.emptyList();
      private void ensurePartitionIsMutable() {
        if (!((bitField0_ & 0x00000002) == 0x00000002)) {
          partition_ = new java.util.ArrayList<io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource>(partition_);
          bitField0_ |= 0x00000002;
         }
      }

      private com.google.protobuf.RepeatedFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource, io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.Builder, io.rexx.sdk.core.extend.protobuf.Monitor.SystemResourceOrBuilder> partitionBuilder_;

      /**
       * <code>repeated .monitor.SystemResource partition = 2;</code>
       */
      public java.util.List<io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource> getPartitionList() {
        if (partitionBuilder_ == null) {
          return java.util.Collections.unmodifiableList(partition_);
        } else {
          return partitionBuilder_.getMessageList();
        }
      }
      /**
       * <code>repeated .monitor.SystemResource partition = 2;</code>
       */
      public int getPartitionCount() {
        if (partitionBuilder_ == null) {
          return partition_.size();
        } else {
          return partitionBuilder_.getCount();
        }
      }
      /**
       * <code>repeated .monitor.SystemResource partition = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource getPartition(int index) {
        if (partitionBuilder_ == null) {
          return partition_.get(index);
        } else {
          return partitionBuilder_.getMessage(index);
        }
      }
      /**
       * <code>repeated .monitor.SystemResource partition = 2;</code>
       */
      public Builder setPartition(
          int index, io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource value) {
        if (partitionBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          ensurePartitionIsMutable();
          partition_.set(index, value);
          onChanged();
        } else {
          partitionBuilder_.setMessage(index, value);
        }
        return this;
      }
      /**
       * <code>repeated .monitor.SystemResource partition = 2;</code>
       */
      public Builder setPartition(
          int index, io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.Builder builderForValue) {
        if (partitionBuilder_ == null) {
          ensurePartitionIsMutable();
          partition_.set(index, builderForValue.build());
          onChanged();
        } else {
          partitionBuilder_.setMessage(index, builderForValue.build());
        }
        return this;
      }
      /**
       * <code>repeated .monitor.SystemResource partition = 2;</code>
       */
      public Builder addPartition(io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource value) {
        if (partitionBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          ensurePartitionIsMutable();
          partition_.add(value);
          onChanged();
        } else {
          partitionBuilder_.addMessage(value);
        }
        return this;
      }
      /**
       * <code>repeated .monitor.SystemResource partition = 2;</code>
       */
      public Builder addPartition(
          int index, io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource value) {
        if (partitionBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          ensurePartitionIsMutable();
          partition_.add(index, value);
          onChanged();
        } else {
          partitionBuilder_.addMessage(index, value);
        }
        return this;
      }
      /**
       * <code>repeated .monitor.SystemResource partition = 2;</code>
       */
      public Builder addPartition(
          io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.Builder builderForValue) {
        if (partitionBuilder_ == null) {
          ensurePartitionIsMutable();
          partition_.add(builderForValue.build());
          onChanged();
        } else {
          partitionBuilder_.addMessage(builderForValue.build());
        }
        return this;
      }
      /**
       * <code>repeated .monitor.SystemResource partition = 2;</code>
       */
      public Builder addPartition(
          int index, io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.Builder builderForValue) {
        if (partitionBuilder_ == null) {
          ensurePartitionIsMutable();
          partition_.add(index, builderForValue.build());
          onChanged();
        } else {
          partitionBuilder_.addMessage(index, builderForValue.build());
        }
        return this;
      }
      /**
       * <code>repeated .monitor.SystemResource partition = 2;</code>
       */
      public Builder addAllPartition(
          java.lang.Iterable<? extends io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource> values) {
        if (partitionBuilder_ == null) {
          ensurePartitionIsMutable();
          com.google.protobuf.AbstractMessageLite.Builder.addAll(
              values, partition_);
          onChanged();
        } else {
          partitionBuilder_.addAllMessages(values);
        }
        return this;
      }
      /**
       * <code>repeated .monitor.SystemResource partition = 2;</code>
       */
      public Builder clearPartition() {
        if (partitionBuilder_ == null) {
          partition_ = java.util.Collections.emptyList();
          bitField0_ = (bitField0_ & ~0x00000002);
          onChanged();
        } else {
          partitionBuilder_.clear();
        }
        return this;
      }
      /**
       * <code>repeated .monitor.SystemResource partition = 2;</code>
       */
      public Builder removePartition(int index) {
        if (partitionBuilder_ == null) {
          ensurePartitionIsMutable();
          partition_.remove(index);
          onChanged();
        } else {
          partitionBuilder_.remove(index);
        }
        return this;
      }
      /**
       * <code>repeated .monitor.SystemResource partition = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.Builder getPartitionBuilder(
          int index) {
        return getPartitionFieldBuilder().getBuilder(index);
      }
      /**
       * <code>repeated .monitor.SystemResource partition = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.SystemResourceOrBuilder getPartitionOrBuilder(
          int index) {
        if (partitionBuilder_ == null) {
          return partition_.get(index);  } else {
          return partitionBuilder_.getMessageOrBuilder(index);
        }
      }
      /**
       * <code>repeated .monitor.SystemResource partition = 2;</code>
       */
      public java.util.List<? extends io.rexx.sdk.core.extend.protobuf.Monitor.SystemResourceOrBuilder>
           getPartitionOrBuilderList() {
        if (partitionBuilder_ != null) {
          return partitionBuilder_.getMessageOrBuilderList();
        } else {
          return java.util.Collections.unmodifiableList(partition_);
        }
      }
      /**
       * <code>repeated .monitor.SystemResource partition = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.Builder addPartitionBuilder() {
        return getPartitionFieldBuilder().addBuilder(
            io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.getDefaultInstance());
      }
      /**
       * <code>repeated .monitor.SystemResource partition = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.Builder addPartitionBuilder(
          int index) {
        return getPartitionFieldBuilder().addBuilder(
            index, io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.getDefaultInstance());
      }
      /**
       * <code>repeated .monitor.SystemResource partition = 2;</code>
       */
      public java.util.List<io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.Builder>
           getPartitionBuilderList() {
        return getPartitionFieldBuilder().getBuilderList();
      }
      private com.google.protobuf.RepeatedFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource, io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.Builder, io.rexx.sdk.core.extend.protobuf.Monitor.SystemResourceOrBuilder>
          getPartitionFieldBuilder() {
        if (partitionBuilder_ == null) {
          partitionBuilder_ = new com.google.protobuf.RepeatedFieldBuilderV3<
              io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource, io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.Builder, io.rexx.sdk.core.extend.protobuf.Monitor.SystemResourceOrBuilder>(
                  partition_,
                  ((bitField0_ & 0x00000002) == 0x00000002),
                  getParentForChildren(),
                  isClean());
          partition_ = null;
        }
        return partitionBuilder_;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:monitor.Partition)
    }

    // @@protoc_insertion_point(class_scope:monitor.Partition)
    private static final io.rexx.sdk.core.extend.protobuf.Monitor.Partition DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Monitor.Partition();
    }

    public static io.rexx.sdk.core.extend.protobuf.Monitor.Partition getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<Partition>
        PARSER = new com.google.protobuf.AbstractParser<Partition>() {
      public Partition parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new Partition(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<Partition> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<Partition> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Monitor.Partition getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface CPUOrBuilder extends
      // @@protoc_insertion_point(interface_extends:monitor.CPU)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>double used_percent = 1;</code>
     */
    double getUsedPercent();
  }
  /**
   * Protobuf type {@code monitor.CPU}
   */
  public  static final class CPU extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:monitor.CPU)
      CPUOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use CPU.newBuilder() to construct.
    private CPU(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private CPU() {
      usedPercent_ = 0D;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private CPU(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownFieldProto3(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 9: {

              usedPercent_ = input.readDouble();
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_CPU_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_CPU_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Monitor.CPU.class, io.rexx.sdk.core.extend.protobuf.Monitor.CPU.Builder.class);
    }

    public static final int USED_PERCENT_FIELD_NUMBER = 1;
    private double usedPercent_;
    /**
     * <code>double used_percent = 1;</code>
     */
    public double getUsedPercent() {
      return usedPercent_;
    }

    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (usedPercent_ != 0D) {
        output.writeDouble(1, usedPercent_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (usedPercent_ != 0D) {
        size += com.google.protobuf.CodedOutputStream
          .computeDoubleSize(1, usedPercent_);
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Monitor.CPU)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Monitor.CPU other = (io.rexx.sdk.core.extend.protobuf.Monitor.CPU) obj;

      boolean result = true;
      result = result && (
          java.lang.Double.doubleToLongBits(getUsedPercent())
          == java.lang.Double.doubleToLongBits(
              other.getUsedPercent()));
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      hash = (37 * hash) + USED_PERCENT_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          java.lang.Double.doubleToLongBits(getUsedPercent()));
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Monitor.CPU parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.CPU parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.CPU parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.CPU parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.CPU parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.CPU parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.CPU parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.CPU parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.CPU parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.CPU parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.CPU parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.CPU parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Monitor.CPU prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * Protobuf type {@code monitor.CPU}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:monitor.CPU)
        io.rexx.sdk.core.extend.protobuf.Monitor.CPUOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_CPU_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_CPU_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Monitor.CPU.class, io.rexx.sdk.core.extend.protobuf.Monitor.CPU.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Monitor.CPU.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      public Builder clear() {
        super.clear();
        usedPercent_ = 0D;

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_CPU_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.CPU getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.CPU.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.CPU build() {
        io.rexx.sdk.core.extend.protobuf.Monitor.CPU result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.CPU buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Monitor.CPU result = new io.rexx.sdk.core.extend.protobuf.Monitor.CPU(this);
        result.usedPercent_ = usedPercent_;
        onBuilt();
        return result;
      }

      public Builder clone() {
        return (Builder) super.clone();
      }
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Monitor.CPU) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Monitor.CPU)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Monitor.CPU other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Monitor.CPU.getDefaultInstance()) return this;
        if (other.getUsedPercent() != 0D) {
          setUsedPercent(other.getUsedPercent());
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        io.rexx.sdk.core.extend.protobuf.Monitor.CPU parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Monitor.CPU) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private double usedPercent_ ;
      /**
       * <code>double used_percent = 1;</code>
       */
      public double getUsedPercent() {
        return usedPercent_;
      }
      /**
       * <code>double used_percent = 1;</code>
       */
      public Builder setUsedPercent(double value) {
        
        usedPercent_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>double used_percent = 1;</code>
       */
      public Builder clearUsedPercent() {
        
        usedPercent_ = 0D;
        onChanged();
        return this;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:monitor.CPU)
    }

    // @@protoc_insertion_point(class_scope:monitor.CPU)
    private static final io.rexx.sdk.core.extend.protobuf.Monitor.CPU DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Monitor.CPU();
    }

    public static io.rexx.sdk.core.extend.protobuf.Monitor.CPU getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<CPU>
        PARSER = new com.google.protobuf.AbstractParser<CPU>() {
      public CPU parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new CPU(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<CPU> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<CPU> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Monitor.CPU getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface SystemStatusOrBuilder extends
      // @@protoc_insertion_point(interface_extends:monitor.SystemStatus)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>.monitor.SystemProperty property = 1;</code>
     */
    boolean hasProperty();
    /**
     * <code>.monitor.SystemProperty property = 1;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty getProperty();
    /**
     * <code>.monitor.SystemProperty property = 1;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Monitor.SystemPropertyOrBuilder getPropertyOrBuilder();

    /**
     * <code>.monitor.SystemResource memory = 2;</code>
     */
    boolean hasMemory();
    /**
     * <code>.monitor.SystemResource memory = 2;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource getMemory();
    /**
     * <code>.monitor.SystemResource memory = 2;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Monitor.SystemResourceOrBuilder getMemoryOrBuilder();

    /**
     * <code>.monitor.CPU cpu = 3;</code>
     */
    boolean hasCpu();
    /**
     * <code>.monitor.CPU cpu = 3;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Monitor.CPU getCpu();
    /**
     * <code>.monitor.CPU cpu = 3;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Monitor.CPUOrBuilder getCpuOrBuilder();

    /**
     * <code>.monitor.Partition partitions = 4;</code>
     */
    boolean hasPartitions();
    /**
     * <code>.monitor.Partition partitions = 4;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Monitor.Partition getPartitions();
    /**
     * <code>.monitor.Partition partitions = 4;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Monitor.PartitionOrBuilder getPartitionsOrBuilder();
  }
  /**
   * Protobuf type {@code monitor.SystemStatus}
   */
  public  static final class SystemStatus extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:monitor.SystemStatus)
      SystemStatusOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use SystemStatus.newBuilder() to construct.
    private SystemStatus(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private SystemStatus() {
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private SystemStatus(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownFieldProto3(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 10: {
              io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty.Builder subBuilder = null;
              if (property_ != null) {
                subBuilder = property_.toBuilder();
              }
              property_ = input.readMessage(io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(property_);
                property_ = subBuilder.buildPartial();
              }

              break;
            }
            case 18: {
              io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.Builder subBuilder = null;
              if (memory_ != null) {
                subBuilder = memory_.toBuilder();
              }
              memory_ = input.readMessage(io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(memory_);
                memory_ = subBuilder.buildPartial();
              }

              break;
            }
            case 26: {
              io.rexx.sdk.core.extend.protobuf.Monitor.CPU.Builder subBuilder = null;
              if (cpu_ != null) {
                subBuilder = cpu_.toBuilder();
              }
              cpu_ = input.readMessage(io.rexx.sdk.core.extend.protobuf.Monitor.CPU.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(cpu_);
                cpu_ = subBuilder.buildPartial();
              }

              break;
            }
            case 34: {
              io.rexx.sdk.core.extend.protobuf.Monitor.Partition.Builder subBuilder = null;
              if (partitions_ != null) {
                subBuilder = partitions_.toBuilder();
              }
              partitions_ = input.readMessage(io.rexx.sdk.core.extend.protobuf.Monitor.Partition.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(partitions_);
                partitions_ = subBuilder.buildPartial();
              }

              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_SystemStatus_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_SystemStatus_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus.class, io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus.Builder.class);
    }

    public static final int PROPERTY_FIELD_NUMBER = 1;
    private io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty property_;
    /**
     * <code>.monitor.SystemProperty property = 1;</code>
     */
    public boolean hasProperty() {
      return property_ != null;
    }
    /**
     * <code>.monitor.SystemProperty property = 1;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty getProperty() {
      return property_ == null ? io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty.getDefaultInstance() : property_;
    }
    /**
     * <code>.monitor.SystemProperty property = 1;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Monitor.SystemPropertyOrBuilder getPropertyOrBuilder() {
      return getProperty();
    }

    public static final int MEMORY_FIELD_NUMBER = 2;
    private io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource memory_;
    /**
     * <code>.monitor.SystemResource memory = 2;</code>
     */
    public boolean hasMemory() {
      return memory_ != null;
    }
    /**
     * <code>.monitor.SystemResource memory = 2;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource getMemory() {
      return memory_ == null ? io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.getDefaultInstance() : memory_;
    }
    /**
     * <code>.monitor.SystemResource memory = 2;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Monitor.SystemResourceOrBuilder getMemoryOrBuilder() {
      return getMemory();
    }

    public static final int CPU_FIELD_NUMBER = 3;
    private io.rexx.sdk.core.extend.protobuf.Monitor.CPU cpu_;
    /**
     * <code>.monitor.CPU cpu = 3;</code>
     */
    public boolean hasCpu() {
      return cpu_ != null;
    }
    /**
     * <code>.monitor.CPU cpu = 3;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Monitor.CPU getCpu() {
      return cpu_ == null ? io.rexx.sdk.core.extend.protobuf.Monitor.CPU.getDefaultInstance() : cpu_;
    }
    /**
     * <code>.monitor.CPU cpu = 3;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Monitor.CPUOrBuilder getCpuOrBuilder() {
      return getCpu();
    }

    public static final int PARTITIONS_FIELD_NUMBER = 4;
    private io.rexx.sdk.core.extend.protobuf.Monitor.Partition partitions_;
    /**
     * <code>.monitor.Partition partitions = 4;</code>
     */
    public boolean hasPartitions() {
      return partitions_ != null;
    }
    /**
     * <code>.monitor.Partition partitions = 4;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Monitor.Partition getPartitions() {
      return partitions_ == null ? io.rexx.sdk.core.extend.protobuf.Monitor.Partition.getDefaultInstance() : partitions_;
    }
    /**
     * <code>.monitor.Partition partitions = 4;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Monitor.PartitionOrBuilder getPartitionsOrBuilder() {
      return getPartitions();
    }

    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (property_ != null) {
        output.writeMessage(1, getProperty());
      }
      if (memory_ != null) {
        output.writeMessage(2, getMemory());
      }
      if (cpu_ != null) {
        output.writeMessage(3, getCpu());
      }
      if (partitions_ != null) {
        output.writeMessage(4, getPartitions());
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (property_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(1, getProperty());
      }
      if (memory_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(2, getMemory());
      }
      if (cpu_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(3, getCpu());
      }
      if (partitions_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(4, getPartitions());
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus other = (io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus) obj;

      boolean result = true;
      result = result && (hasProperty() == other.hasProperty());
      if (hasProperty()) {
        result = result && getProperty()
            .equals(other.getProperty());
      }
      result = result && (hasMemory() == other.hasMemory());
      if (hasMemory()) {
        result = result && getMemory()
            .equals(other.getMemory());
      }
      result = result && (hasCpu() == other.hasCpu());
      if (hasCpu()) {
        result = result && getCpu()
            .equals(other.getCpu());
      }
      result = result && (hasPartitions() == other.hasPartitions());
      if (hasPartitions()) {
        result = result && getPartitions()
            .equals(other.getPartitions());
      }
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      if (hasProperty()) {
        hash = (37 * hash) + PROPERTY_FIELD_NUMBER;
        hash = (53 * hash) + getProperty().hashCode();
      }
      if (hasMemory()) {
        hash = (37 * hash) + MEMORY_FIELD_NUMBER;
        hash = (53 * hash) + getMemory().hashCode();
      }
      if (hasCpu()) {
        hash = (37 * hash) + CPU_FIELD_NUMBER;
        hash = (53 * hash) + getCpu().hashCode();
      }
      if (hasPartitions()) {
        hash = (37 * hash) + PARTITIONS_FIELD_NUMBER;
        hash = (53 * hash) + getPartitions().hashCode();
      }
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * Protobuf type {@code monitor.SystemStatus}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:monitor.SystemStatus)
        io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatusOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_SystemStatus_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_SystemStatus_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus.class, io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      public Builder clear() {
        super.clear();
        if (propertyBuilder_ == null) {
          property_ = null;
        } else {
          property_ = null;
          propertyBuilder_ = null;
        }
        if (memoryBuilder_ == null) {
          memory_ = null;
        } else {
          memory_ = null;
          memoryBuilder_ = null;
        }
        if (cpuBuilder_ == null) {
          cpu_ = null;
        } else {
          cpu_ = null;
          cpuBuilder_ = null;
        }
        if (partitionsBuilder_ == null) {
          partitions_ = null;
        } else {
          partitions_ = null;
          partitionsBuilder_ = null;
        }
        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_SystemStatus_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus build() {
        io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus result = new io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus(this);
        if (propertyBuilder_ == null) {
          result.property_ = property_;
        } else {
          result.property_ = propertyBuilder_.build();
        }
        if (memoryBuilder_ == null) {
          result.memory_ = memory_;
        } else {
          result.memory_ = memoryBuilder_.build();
        }
        if (cpuBuilder_ == null) {
          result.cpu_ = cpu_;
        } else {
          result.cpu_ = cpuBuilder_.build();
        }
        if (partitionsBuilder_ == null) {
          result.partitions_ = partitions_;
        } else {
          result.partitions_ = partitionsBuilder_.build();
        }
        onBuilt();
        return result;
      }

      public Builder clone() {
        return (Builder) super.clone();
      }
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus.getDefaultInstance()) return this;
        if (other.hasProperty()) {
          mergeProperty(other.getProperty());
        }
        if (other.hasMemory()) {
          mergeMemory(other.getMemory());
        }
        if (other.hasCpu()) {
          mergeCpu(other.getCpu());
        }
        if (other.hasPartitions()) {
          mergePartitions(other.getPartitions());
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty property_ = null;
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty, io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty.Builder, io.rexx.sdk.core.extend.protobuf.Monitor.SystemPropertyOrBuilder> propertyBuilder_;
      /**
       * <code>.monitor.SystemProperty property = 1;</code>
       */
      public boolean hasProperty() {
        return propertyBuilder_ != null || property_ != null;
      }
      /**
       * <code>.monitor.SystemProperty property = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty getProperty() {
        if (propertyBuilder_ == null) {
          return property_ == null ? io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty.getDefaultInstance() : property_;
        } else {
          return propertyBuilder_.getMessage();
        }
      }
      /**
       * <code>.monitor.SystemProperty property = 1;</code>
       */
      public Builder setProperty(io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty value) {
        if (propertyBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          property_ = value;
          onChanged();
        } else {
          propertyBuilder_.setMessage(value);
        }

        return this;
      }
      /**
       * <code>.monitor.SystemProperty property = 1;</code>
       */
      public Builder setProperty(
          io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty.Builder builderForValue) {
        if (propertyBuilder_ == null) {
          property_ = builderForValue.build();
          onChanged();
        } else {
          propertyBuilder_.setMessage(builderForValue.build());
        }

        return this;
      }
      /**
       * <code>.monitor.SystemProperty property = 1;</code>
       */
      public Builder mergeProperty(io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty value) {
        if (propertyBuilder_ == null) {
          if (property_ != null) {
            property_ =
              io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty.newBuilder(property_).mergeFrom(value).buildPartial();
          } else {
            property_ = value;
          }
          onChanged();
        } else {
          propertyBuilder_.mergeFrom(value);
        }

        return this;
      }
      /**
       * <code>.monitor.SystemProperty property = 1;</code>
       */
      public Builder clearProperty() {
        if (propertyBuilder_ == null) {
          property_ = null;
          onChanged();
        } else {
          property_ = null;
          propertyBuilder_ = null;
        }

        return this;
      }
      /**
       * <code>.monitor.SystemProperty property = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty.Builder getPropertyBuilder() {
        
        onChanged();
        return getPropertyFieldBuilder().getBuilder();
      }
      /**
       * <code>.monitor.SystemProperty property = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.SystemPropertyOrBuilder getPropertyOrBuilder() {
        if (propertyBuilder_ != null) {
          return propertyBuilder_.getMessageOrBuilder();
        } else {
          return property_ == null ?
              io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty.getDefaultInstance() : property_;
        }
      }
      /**
       * <code>.monitor.SystemProperty property = 1;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty, io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty.Builder, io.rexx.sdk.core.extend.protobuf.Monitor.SystemPropertyOrBuilder>
          getPropertyFieldBuilder() {
        if (propertyBuilder_ == null) {
          propertyBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty, io.rexx.sdk.core.extend.protobuf.Monitor.SystemProperty.Builder, io.rexx.sdk.core.extend.protobuf.Monitor.SystemPropertyOrBuilder>(
                  getProperty(),
                  getParentForChildren(),
                  isClean());
          property_ = null;
        }
        return propertyBuilder_;
      }

      private io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource memory_ = null;
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource, io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.Builder, io.rexx.sdk.core.extend.protobuf.Monitor.SystemResourceOrBuilder> memoryBuilder_;
      /**
       * <code>.monitor.SystemResource memory = 2;</code>
       */
      public boolean hasMemory() {
        return memoryBuilder_ != null || memory_ != null;
      }
      /**
       * <code>.monitor.SystemResource memory = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource getMemory() {
        if (memoryBuilder_ == null) {
          return memory_ == null ? io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.getDefaultInstance() : memory_;
        } else {
          return memoryBuilder_.getMessage();
        }
      }
      /**
       * <code>.monitor.SystemResource memory = 2;</code>
       */
      public Builder setMemory(io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource value) {
        if (memoryBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          memory_ = value;
          onChanged();
        } else {
          memoryBuilder_.setMessage(value);
        }

        return this;
      }
      /**
       * <code>.monitor.SystemResource memory = 2;</code>
       */
      public Builder setMemory(
          io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.Builder builderForValue) {
        if (memoryBuilder_ == null) {
          memory_ = builderForValue.build();
          onChanged();
        } else {
          memoryBuilder_.setMessage(builderForValue.build());
        }

        return this;
      }
      /**
       * <code>.monitor.SystemResource memory = 2;</code>
       */
      public Builder mergeMemory(io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource value) {
        if (memoryBuilder_ == null) {
          if (memory_ != null) {
            memory_ =
              io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.newBuilder(memory_).mergeFrom(value).buildPartial();
          } else {
            memory_ = value;
          }
          onChanged();
        } else {
          memoryBuilder_.mergeFrom(value);
        }

        return this;
      }
      /**
       * <code>.monitor.SystemResource memory = 2;</code>
       */
      public Builder clearMemory() {
        if (memoryBuilder_ == null) {
          memory_ = null;
          onChanged();
        } else {
          memory_ = null;
          memoryBuilder_ = null;
        }

        return this;
      }
      /**
       * <code>.monitor.SystemResource memory = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.Builder getMemoryBuilder() {
        
        onChanged();
        return getMemoryFieldBuilder().getBuilder();
      }
      /**
       * <code>.monitor.SystemResource memory = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.SystemResourceOrBuilder getMemoryOrBuilder() {
        if (memoryBuilder_ != null) {
          return memoryBuilder_.getMessageOrBuilder();
        } else {
          return memory_ == null ?
              io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.getDefaultInstance() : memory_;
        }
      }
      /**
       * <code>.monitor.SystemResource memory = 2;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource, io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.Builder, io.rexx.sdk.core.extend.protobuf.Monitor.SystemResourceOrBuilder>
          getMemoryFieldBuilder() {
        if (memoryBuilder_ == null) {
          memoryBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource, io.rexx.sdk.core.extend.protobuf.Monitor.SystemResource.Builder, io.rexx.sdk.core.extend.protobuf.Monitor.SystemResourceOrBuilder>(
                  getMemory(),
                  getParentForChildren(),
                  isClean());
          memory_ = null;
        }
        return memoryBuilder_;
      }

      private io.rexx.sdk.core.extend.protobuf.Monitor.CPU cpu_ = null;
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Monitor.CPU, io.rexx.sdk.core.extend.protobuf.Monitor.CPU.Builder, io.rexx.sdk.core.extend.protobuf.Monitor.CPUOrBuilder> cpuBuilder_;
      /**
       * <code>.monitor.CPU cpu = 3;</code>
       */
      public boolean hasCpu() {
        return cpuBuilder_ != null || cpu_ != null;
      }
      /**
       * <code>.monitor.CPU cpu = 3;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.CPU getCpu() {
        if (cpuBuilder_ == null) {
          return cpu_ == null ? io.rexx.sdk.core.extend.protobuf.Monitor.CPU.getDefaultInstance() : cpu_;
        } else {
          return cpuBuilder_.getMessage();
        }
      }
      /**
       * <code>.monitor.CPU cpu = 3;</code>
       */
      public Builder setCpu(io.rexx.sdk.core.extend.protobuf.Monitor.CPU value) {
        if (cpuBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          cpu_ = value;
          onChanged();
        } else {
          cpuBuilder_.setMessage(value);
        }

        return this;
      }
      /**
       * <code>.monitor.CPU cpu = 3;</code>
       */
      public Builder setCpu(
          io.rexx.sdk.core.extend.protobuf.Monitor.CPU.Builder builderForValue) {
        if (cpuBuilder_ == null) {
          cpu_ = builderForValue.build();
          onChanged();
        } else {
          cpuBuilder_.setMessage(builderForValue.build());
        }

        return this;
      }
      /**
       * <code>.monitor.CPU cpu = 3;</code>
       */
      public Builder mergeCpu(io.rexx.sdk.core.extend.protobuf.Monitor.CPU value) {
        if (cpuBuilder_ == null) {
          if (cpu_ != null) {
            cpu_ =
              io.rexx.sdk.core.extend.protobuf.Monitor.CPU.newBuilder(cpu_).mergeFrom(value).buildPartial();
          } else {
            cpu_ = value;
          }
          onChanged();
        } else {
          cpuBuilder_.mergeFrom(value);
        }

        return this;
      }
      /**
       * <code>.monitor.CPU cpu = 3;</code>
       */
      public Builder clearCpu() {
        if (cpuBuilder_ == null) {
          cpu_ = null;
          onChanged();
        } else {
          cpu_ = null;
          cpuBuilder_ = null;
        }

        return this;
      }
      /**
       * <code>.monitor.CPU cpu = 3;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.CPU.Builder getCpuBuilder() {
        
        onChanged();
        return getCpuFieldBuilder().getBuilder();
      }
      /**
       * <code>.monitor.CPU cpu = 3;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.CPUOrBuilder getCpuOrBuilder() {
        if (cpuBuilder_ != null) {
          return cpuBuilder_.getMessageOrBuilder();
        } else {
          return cpu_ == null ?
              io.rexx.sdk.core.extend.protobuf.Monitor.CPU.getDefaultInstance() : cpu_;
        }
      }
      /**
       * <code>.monitor.CPU cpu = 3;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Monitor.CPU, io.rexx.sdk.core.extend.protobuf.Monitor.CPU.Builder, io.rexx.sdk.core.extend.protobuf.Monitor.CPUOrBuilder>
          getCpuFieldBuilder() {
        if (cpuBuilder_ == null) {
          cpuBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              io.rexx.sdk.core.extend.protobuf.Monitor.CPU, io.rexx.sdk.core.extend.protobuf.Monitor.CPU.Builder, io.rexx.sdk.core.extend.protobuf.Monitor.CPUOrBuilder>(
                  getCpu(),
                  getParentForChildren(),
                  isClean());
          cpu_ = null;
        }
        return cpuBuilder_;
      }

      private io.rexx.sdk.core.extend.protobuf.Monitor.Partition partitions_ = null;
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Monitor.Partition, io.rexx.sdk.core.extend.protobuf.Monitor.Partition.Builder, io.rexx.sdk.core.extend.protobuf.Monitor.PartitionOrBuilder> partitionsBuilder_;
      /**
       * <code>.monitor.Partition partitions = 4;</code>
       */
      public boolean hasPartitions() {
        return partitionsBuilder_ != null || partitions_ != null;
      }
      /**
       * <code>.monitor.Partition partitions = 4;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.Partition getPartitions() {
        if (partitionsBuilder_ == null) {
          return partitions_ == null ? io.rexx.sdk.core.extend.protobuf.Monitor.Partition.getDefaultInstance() : partitions_;
        } else {
          return partitionsBuilder_.getMessage();
        }
      }
      /**
       * <code>.monitor.Partition partitions = 4;</code>
       */
      public Builder setPartitions(io.rexx.sdk.core.extend.protobuf.Monitor.Partition value) {
        if (partitionsBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          partitions_ = value;
          onChanged();
        } else {
          partitionsBuilder_.setMessage(value);
        }

        return this;
      }
      /**
       * <code>.monitor.Partition partitions = 4;</code>
       */
      public Builder setPartitions(
          io.rexx.sdk.core.extend.protobuf.Monitor.Partition.Builder builderForValue) {
        if (partitionsBuilder_ == null) {
          partitions_ = builderForValue.build();
          onChanged();
        } else {
          partitionsBuilder_.setMessage(builderForValue.build());
        }

        return this;
      }
      /**
       * <code>.monitor.Partition partitions = 4;</code>
       */
      public Builder mergePartitions(io.rexx.sdk.core.extend.protobuf.Monitor.Partition value) {
        if (partitionsBuilder_ == null) {
          if (partitions_ != null) {
            partitions_ =
              io.rexx.sdk.core.extend.protobuf.Monitor.Partition.newBuilder(partitions_).mergeFrom(value).buildPartial();
          } else {
            partitions_ = value;
          }
          onChanged();
        } else {
          partitionsBuilder_.mergeFrom(value);
        }

        return this;
      }
      /**
       * <code>.monitor.Partition partitions = 4;</code>
       */
      public Builder clearPartitions() {
        if (partitionsBuilder_ == null) {
          partitions_ = null;
          onChanged();
        } else {
          partitions_ = null;
          partitionsBuilder_ = null;
        }

        return this;
      }
      /**
       * <code>.monitor.Partition partitions = 4;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.Partition.Builder getPartitionsBuilder() {
        
        onChanged();
        return getPartitionsFieldBuilder().getBuilder();
      }
      /**
       * <code>.monitor.Partition partitions = 4;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.PartitionOrBuilder getPartitionsOrBuilder() {
        if (partitionsBuilder_ != null) {
          return partitionsBuilder_.getMessageOrBuilder();
        } else {
          return partitions_ == null ?
              io.rexx.sdk.core.extend.protobuf.Monitor.Partition.getDefaultInstance() : partitions_;
        }
      }
      /**
       * <code>.monitor.Partition partitions = 4;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Monitor.Partition, io.rexx.sdk.core.extend.protobuf.Monitor.Partition.Builder, io.rexx.sdk.core.extend.protobuf.Monitor.PartitionOrBuilder>
          getPartitionsFieldBuilder() {
        if (partitionsBuilder_ == null) {
          partitionsBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              io.rexx.sdk.core.extend.protobuf.Monitor.Partition, io.rexx.sdk.core.extend.protobuf.Monitor.Partition.Builder, io.rexx.sdk.core.extend.protobuf.Monitor.PartitionOrBuilder>(
                  getPartitions(),
                  getParentForChildren(),
                  isClean());
          partitions_ = null;
        }
        return partitionsBuilder_;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:monitor.SystemStatus)
    }

    // @@protoc_insertion_point(class_scope:monitor.SystemStatus)
    private static final io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus();
    }

    public static io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<SystemStatus>
        PARSER = new com.google.protobuf.AbstractParser<SystemStatus>() {
      public SystemStatus parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new SystemStatus(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<SystemStatus> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<SystemStatus> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface AlertStatusOrBuilder extends
      // @@protoc_insertion_point(interface_extends:monitor.AlertStatus)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>int64 ledger_sequence = 1;</code>
     */
    long getLedgerSequence();

    /**
     * <code>string node_id = 2;</code>
     */
    java.lang.String getNodeId();
    /**
     * <code>string node_id = 2;</code>
     */
    com.google.protobuf.ByteString
        getNodeIdBytes();

    /**
     * <code>.monitor.SystemStatus system = 3;</code>
     */
    boolean hasSystem();
    /**
     * <code>.monitor.SystemStatus system = 3;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus getSystem();
    /**
     * <code>.monitor.SystemStatus system = 3;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatusOrBuilder getSystemOrBuilder();
  }
  /**
   * Protobuf type {@code monitor.AlertStatus}
   */
  public  static final class AlertStatus extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:monitor.AlertStatus)
      AlertStatusOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use AlertStatus.newBuilder() to construct.
    private AlertStatus(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private AlertStatus() {
      ledgerSequence_ = 0L;
      nodeId_ = "";
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private AlertStatus(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownFieldProto3(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 8: {

              ledgerSequence_ = input.readInt64();
              break;
            }
            case 18: {
              java.lang.String s = input.readStringRequireUtf8();

              nodeId_ = s;
              break;
            }
            case 26: {
              io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus.Builder subBuilder = null;
              if (system_ != null) {
                subBuilder = system_.toBuilder();
              }
              system_ = input.readMessage(io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(system_);
                system_ = subBuilder.buildPartial();
              }

              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_AlertStatus_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_AlertStatus_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus.class, io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus.Builder.class);
    }

    public static final int LEDGER_SEQUENCE_FIELD_NUMBER = 1;
    private long ledgerSequence_;
    /**
     * <code>int64 ledger_sequence = 1;</code>
     */
    public long getLedgerSequence() {
      return ledgerSequence_;
    }

    public static final int NODE_ID_FIELD_NUMBER = 2;
    private volatile java.lang.Object nodeId_;
    /**
     * <code>string node_id = 2;</code>
     */
    public java.lang.String getNodeId() {
      java.lang.Object ref = nodeId_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        nodeId_ = s;
        return s;
      }
    }
    /**
     * <code>string node_id = 2;</code>
     */
    public com.google.protobuf.ByteString
        getNodeIdBytes() {
      java.lang.Object ref = nodeId_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        nodeId_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int SYSTEM_FIELD_NUMBER = 3;
    private io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus system_;
    /**
     * <code>.monitor.SystemStatus system = 3;</code>
     */
    public boolean hasSystem() {
      return system_ != null;
    }
    /**
     * <code>.monitor.SystemStatus system = 3;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus getSystem() {
      return system_ == null ? io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus.getDefaultInstance() : system_;
    }
    /**
     * <code>.monitor.SystemStatus system = 3;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatusOrBuilder getSystemOrBuilder() {
      return getSystem();
    }

    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (ledgerSequence_ != 0L) {
        output.writeInt64(1, ledgerSequence_);
      }
      if (!getNodeIdBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 2, nodeId_);
      }
      if (system_ != null) {
        output.writeMessage(3, getSystem());
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (ledgerSequence_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(1, ledgerSequence_);
      }
      if (!getNodeIdBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(2, nodeId_);
      }
      if (system_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(3, getSystem());
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus other = (io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus) obj;

      boolean result = true;
      result = result && (getLedgerSequence()
          == other.getLedgerSequence());
      result = result && getNodeId()
          .equals(other.getNodeId());
      result = result && (hasSystem() == other.hasSystem());
      if (hasSystem()) {
        result = result && getSystem()
            .equals(other.getSystem());
      }
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      hash = (37 * hash) + LEDGER_SEQUENCE_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getLedgerSequence());
      hash = (37 * hash) + NODE_ID_FIELD_NUMBER;
      hash = (53 * hash) + getNodeId().hashCode();
      if (hasSystem()) {
        hash = (37 * hash) + SYSTEM_FIELD_NUMBER;
        hash = (53 * hash) + getSystem().hashCode();
      }
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * Protobuf type {@code monitor.AlertStatus}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:monitor.AlertStatus)
        io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatusOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_AlertStatus_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_AlertStatus_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus.class, io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      public Builder clear() {
        super.clear();
        ledgerSequence_ = 0L;

        nodeId_ = "";

        if (systemBuilder_ == null) {
          system_ = null;
        } else {
          system_ = null;
          systemBuilder_ = null;
        }
        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.internal_static_monitor_AlertStatus_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus build() {
        io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus result = new io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus(this);
        result.ledgerSequence_ = ledgerSequence_;
        result.nodeId_ = nodeId_;
        if (systemBuilder_ == null) {
          result.system_ = system_;
        } else {
          result.system_ = systemBuilder_.build();
        }
        onBuilt();
        return result;
      }

      public Builder clone() {
        return (Builder) super.clone();
      }
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus.getDefaultInstance()) return this;
        if (other.getLedgerSequence() != 0L) {
          setLedgerSequence(other.getLedgerSequence());
        }
        if (!other.getNodeId().isEmpty()) {
          nodeId_ = other.nodeId_;
          onChanged();
        }
        if (other.hasSystem()) {
          mergeSystem(other.getSystem());
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private long ledgerSequence_ ;
      /**
       * <code>int64 ledger_sequence = 1;</code>
       */
      public long getLedgerSequence() {
        return ledgerSequence_;
      }
      /**
       * <code>int64 ledger_sequence = 1;</code>
       */
      public Builder setLedgerSequence(long value) {
        
        ledgerSequence_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 ledger_sequence = 1;</code>
       */
      public Builder clearLedgerSequence() {
        
        ledgerSequence_ = 0L;
        onChanged();
        return this;
      }

      private java.lang.Object nodeId_ = "";
      /**
       * <code>string node_id = 2;</code>
       */
      public java.lang.String getNodeId() {
        java.lang.Object ref = nodeId_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          nodeId_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string node_id = 2;</code>
       */
      public com.google.protobuf.ByteString
          getNodeIdBytes() {
        java.lang.Object ref = nodeId_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          nodeId_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string node_id = 2;</code>
       */
      public Builder setNodeId(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        nodeId_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string node_id = 2;</code>
       */
      public Builder clearNodeId() {
        
        nodeId_ = getDefaultInstance().getNodeId();
        onChanged();
        return this;
      }
      /**
       * <code>string node_id = 2;</code>
       */
      public Builder setNodeIdBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        nodeId_ = value;
        onChanged();
        return this;
      }

      private io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus system_ = null;
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus, io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus.Builder, io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatusOrBuilder> systemBuilder_;
      /**
       * <code>.monitor.SystemStatus system = 3;</code>
       */
      public boolean hasSystem() {
        return systemBuilder_ != null || system_ != null;
      }
      /**
       * <code>.monitor.SystemStatus system = 3;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus getSystem() {
        if (systemBuilder_ == null) {
          return system_ == null ? io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus.getDefaultInstance() : system_;
        } else {
          return systemBuilder_.getMessage();
        }
      }
      /**
       * <code>.monitor.SystemStatus system = 3;</code>
       */
      public Builder setSystem(io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus value) {
        if (systemBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          system_ = value;
          onChanged();
        } else {
          systemBuilder_.setMessage(value);
        }

        return this;
      }
      /**
       * <code>.monitor.SystemStatus system = 3;</code>
       */
      public Builder setSystem(
          io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus.Builder builderForValue) {
        if (systemBuilder_ == null) {
          system_ = builderForValue.build();
          onChanged();
        } else {
          systemBuilder_.setMessage(builderForValue.build());
        }

        return this;
      }
      /**
       * <code>.monitor.SystemStatus system = 3;</code>
       */
      public Builder mergeSystem(io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus value) {
        if (systemBuilder_ == null) {
          if (system_ != null) {
            system_ =
              io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus.newBuilder(system_).mergeFrom(value).buildPartial();
          } else {
            system_ = value;
          }
          onChanged();
        } else {
          systemBuilder_.mergeFrom(value);
        }

        return this;
      }
      /**
       * <code>.monitor.SystemStatus system = 3;</code>
       */
      public Builder clearSystem() {
        if (systemBuilder_ == null) {
          system_ = null;
          onChanged();
        } else {
          system_ = null;
          systemBuilder_ = null;
        }

        return this;
      }
      /**
       * <code>.monitor.SystemStatus system = 3;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus.Builder getSystemBuilder() {
        
        onChanged();
        return getSystemFieldBuilder().getBuilder();
      }
      /**
       * <code>.monitor.SystemStatus system = 3;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatusOrBuilder getSystemOrBuilder() {
        if (systemBuilder_ != null) {
          return systemBuilder_.getMessageOrBuilder();
        } else {
          return system_ == null ?
              io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus.getDefaultInstance() : system_;
        }
      }
      /**
       * <code>.monitor.SystemStatus system = 3;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus, io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus.Builder, io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatusOrBuilder>
          getSystemFieldBuilder() {
        if (systemBuilder_ == null) {
          systemBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus, io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatus.Builder, io.rexx.sdk.core.extend.protobuf.Monitor.SystemStatusOrBuilder>(
                  getSystem(),
                  getParentForChildren(),
                  isClean());
          system_ = null;
        }
        return systemBuilder_;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:monitor.AlertStatus)
    }

    // @@protoc_insertion_point(class_scope:monitor.AlertStatus)
    private static final io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus();
    }

    public static io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<AlertStatus>
        PARSER = new com.google.protobuf.AbstractParser<AlertStatus>() {
      public AlertStatus parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new AlertStatus(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<AlertStatus> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<AlertStatus> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Monitor.AlertStatus getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_monitor_Hello_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_monitor_Hello_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_monitor_Register_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_monitor_Register_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_monitor_Peer_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_monitor_Peer_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_monitor_GlueManager_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_monitor_GlueManager_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_monitor_PeerManager_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_monitor_PeerManager_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_monitor_RexxStatus_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_monitor_RexxStatus_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_monitor_LedgerStatus_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_monitor_LedgerStatus_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_monitor_SystemProperty_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_monitor_SystemProperty_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_monitor_SystemResource_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_monitor_SystemResource_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_monitor_Partition_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_monitor_Partition_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_monitor_CPU_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_monitor_CPU_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_monitor_SystemStatus_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_monitor_SystemStatus_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_monitor_AlertStatus_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_monitor_AlertStatus_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\rmonitor.proto\022\007monitor\032\013chain.proto\"O\n" +
      "\005Hello\022\027\n\017service_version\030\001 \001(\003\022\032\n\022conne" +
      "ction_timeout\030\002 \001(\003\022\021\n\ttimestamp\030\003 \001(\003\"[" +
      "\n\010Register\022\n\n\002id\030\001 \001(\t\022\032\n\022blockchain_ver" +
      "sion\030\002 \001(\t\022\024\n\014data_version\030\003 \001(\003\022\021\n\ttime" +
      "stamp\030\004 \001(\003\"E\n\004Peer\022\n\n\002id\030\001 \001(\t\022\r\n\005delay" +
      "\030\002 \001(\003\022\016\n\006active\030\003 \001(\010\022\022\n\nip_address\030\004 \001" +
      "(\t\"Y\n\013GlueManager\022\033\n\023system_current_time" +
      "\030\001 \001(\t\022\026\n\016process_uptime\030\002 \001(\t\022\025\n\rsystem" +
      "_uptime\030\003 \001(\t\";\n\013PeerManager\022\017\n\007peer_id\030" +
      "\001 \001(\t\022\033\n\004peer\030\002 \003(\0132\r.monitor.Peer\"d\n\nBu" +
      "moStatus\022*\n\014glue_manager\030\001 \001(\0132\024.monitor" +
      ".GlueManager\022*\n\014peer_manager\030\002 \001(\0132\024.mon" +
      "itor.PeerManager\"\201\001\n\014LedgerStatus\022-\n\rled" +
      "ger_header\030\001 \001(\0132\026.protocol.LedgerHeader" +
      "\022\030\n\020transaction_size\030\002 \001(\003\022\025\n\raccount_co" +
      "unt\030\003 \001(\003\022\021\n\ttimestamp\030\004 \001(\003\"]\n\016SystemPr" +
      "operty\022\021\n\thost_name\030\001 \001(\t\022\022\n\nos_version\030" +
      "\002 \001(\t\022\024\n\014startup_time\030\003 \001(\003\022\016\n\006os_bit\030\004 " +
      "\001(\t\"]\n\016SystemResource\022\021\n\tavailable\030\001 \001(\003" +
      "\022\r\n\005total\030\002 \001(\003\022\024\n\014used_percent\030\003 \001(\001\022\023\n" +
      "\013description\030\004 \001(\t\"L\n\tPartition\022\023\n\013total" +
      "_bytes\030\001 \001(\003\022*\n\tpartition\030\002 \003(\0132\027.monito" +
      "r.SystemResource\"\033\n\003CPU\022\024\n\014used_percent\030" +
      "\001 \001(\001\"\245\001\n\014SystemStatus\022)\n\010property\030\001 \001(\013" +
      "2\027.monitor.SystemProperty\022\'\n\006memory\030\002 \001(" +
      "\0132\027.monitor.SystemResource\022\031\n\003cpu\030\003 \001(\0132" +
      "\014.monitor.CPU\022&\n\npartitions\030\004 \001(\0132\022.moni" +
      "tor.Partition\"^\n\013AlertStatus\022\027\n\017ledger_s" +
      "equence\030\001 \001(\003\022\017\n\007node_id\030\002 \001(\t\022%\n\006system" +
      "\030\003 \001(\0132\025.monitor.SystemStatus*\264\002\n\024MONITO" +
      "R_MESSAGE_TYPE\022\030\n\024MONITOR_MSGTYPE_NONE\020\000" +
      "\022\031\n\025MONITOR_MSGTYPE_HELLO\020\036\022\034\n\030MONITOR_M" +
      "SGTYPE_REGISTER\020\037\022\030\n\024MONITOR_MSGTYPE_BUM" +
      "O\020 \022\032\n\026MONITOR_MSGTYPE_LEDGER\020!\022\032\n\026MONIT" +
      "OR_MSGTYPE_SYSTEM\020\"\022\031\n\025MONITOR_MSGTYPE_A" +
      "LERT\020#\022\032\n\026MONITOR_MSGTYPE_NOTICE\020$\022%\n!MO" +
      "NITOR_MSGTYPE_ACCOUNT_EXCEPTION\020%\022\031\n\025MON" +
      "ITOR_MSGTYPE_ERROR\020\'B\"\n io.rexx.sdk.core" +
      ".extend.protobufb\006proto3"
    };
    com.google.protobuf.Descriptors.FileDescriptor.InternalDescriptorAssigner assigner =
        new com.google.protobuf.Descriptors.FileDescriptor.    InternalDescriptorAssigner() {
          public com.google.protobuf.ExtensionRegistry assignDescriptors(
              com.google.protobuf.Descriptors.FileDescriptor root) {
            descriptor = root;
            return null;
          }
        };
    com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
          io.rexx.sdk.core.extend.protobuf.Chain.getDescriptor(),
        }, assigner);
    internal_static_monitor_Hello_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_monitor_Hello_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_monitor_Hello_descriptor,
        new java.lang.String[] { "ServiceVersion", "ConnectionTimeout", "Timestamp", });
    internal_static_monitor_Register_descriptor =
      getDescriptor().getMessageTypes().get(1);
    internal_static_monitor_Register_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_monitor_Register_descriptor,
        new java.lang.String[] { "Id", "BlockchainVersion", "DataVersion", "Timestamp", });
    internal_static_monitor_Peer_descriptor =
      getDescriptor().getMessageTypes().get(2);
    internal_static_monitor_Peer_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_monitor_Peer_descriptor,
        new java.lang.String[] { "Id", "Delay", "Active", "IpAddress", });
    internal_static_monitor_GlueManager_descriptor =
      getDescriptor().getMessageTypes().get(3);
    internal_static_monitor_GlueManager_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_monitor_GlueManager_descriptor,
        new java.lang.String[] { "SystemCurrentTime", "ProcessUptime", "SystemUptime", });
    internal_static_monitor_PeerManager_descriptor =
      getDescriptor().getMessageTypes().get(4);
    internal_static_monitor_PeerManager_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_monitor_PeerManager_descriptor,
        new java.lang.String[] { "PeerId", "Peer", });
    internal_static_monitor_RexxStatus_descriptor =
      getDescriptor().getMessageTypes().get(5);
    internal_static_monitor_RexxStatus_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_monitor_RexxStatus_descriptor,
        new java.lang.String[] { "GlueManager", "PeerManager", });
    internal_static_monitor_LedgerStatus_descriptor =
      getDescriptor().getMessageTypes().get(6);
    internal_static_monitor_LedgerStatus_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_monitor_LedgerStatus_descriptor,
        new java.lang.String[] { "LedgerHeader", "TransactionSize", "AccountCount", "Timestamp", });
    internal_static_monitor_SystemProperty_descriptor =
      getDescriptor().getMessageTypes().get(7);
    internal_static_monitor_SystemProperty_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_monitor_SystemProperty_descriptor,
        new java.lang.String[] { "HostName", "OsVersion", "StartupTime", "OsBit", });
    internal_static_monitor_SystemResource_descriptor =
      getDescriptor().getMessageTypes().get(8);
    internal_static_monitor_SystemResource_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_monitor_SystemResource_descriptor,
        new java.lang.String[] { "Available", "Total", "UsedPercent", "Description", });
    internal_static_monitor_Partition_descriptor =
      getDescriptor().getMessageTypes().get(9);
    internal_static_monitor_Partition_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_monitor_Partition_descriptor,
        new java.lang.String[] { "TotalBytes", "Partition", });
    internal_static_monitor_CPU_descriptor =
      getDescriptor().getMessageTypes().get(10);
    internal_static_monitor_CPU_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_monitor_CPU_descriptor,
        new java.lang.String[] { "UsedPercent", });
    internal_static_monitor_SystemStatus_descriptor =
      getDescriptor().getMessageTypes().get(11);
    internal_static_monitor_SystemStatus_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_monitor_SystemStatus_descriptor,
        new java.lang.String[] { "Property", "Memory", "Cpu", "Partitions", });
    internal_static_monitor_AlertStatus_descriptor =
      getDescriptor().getMessageTypes().get(12);
    internal_static_monitor_AlertStatus_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_monitor_AlertStatus_descriptor,
        new java.lang.String[] { "LedgerSequence", "NodeId", "System", });
    io.rexx.sdk.core.extend.protobuf.Chain.getDescriptor();
  }

  // @@protoc_insertion_point(outer_class_scope)
}
