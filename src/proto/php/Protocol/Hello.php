<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: overlay.proto

namespace Protocol;

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * Generated from protobuf message <code>protocol.Hello</code>
 */
class Hello extends \Google\Protobuf\Internal\Message
{
    /**
     * Generated from protobuf field <code>int64 network_id = 1;</code>
     */
    private $network_id = 0;
    /**
     * Generated from protobuf field <code>int64 ledger_version = 2;</code>
     */
    private $ledger_version = 0;
    /**
     * Generated from protobuf field <code>int64 overlay_version = 3;</code>
     */
    private $overlay_version = 0;
    /**
     * Generated from protobuf field <code>string rexx_version = 4;</code>
     */
    private $rexx_version = '';
    /**
     * Generated from protobuf field <code>int64 listening_port = 5;</code>
     */
    private $listening_port = 0;
    /**
     * Generated from protobuf field <code>string node_address = 6;</code>
     */
    private $node_address = '';
    /**
     * Generated from protobuf field <code>string node_rand = 7;</code>
     */
    private $node_rand = '';

    public function __construct() {
        \GPBMetadata\Overlay::initOnce();
        parent::__construct();
    }

    /**
     * Generated from protobuf field <code>int64 network_id = 1;</code>
     * @return int|string
     */
    public function getNetworkId()
    {
        return $this->network_id;
    }

    /**
     * Generated from protobuf field <code>int64 network_id = 1;</code>
     * @param int|string $var
     * @return $this
     */
    public function setNetworkId($var)
    {
        GPBUtil::checkInt64($var);
        $this->network_id = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>int64 ledger_version = 2;</code>
     * @return int|string
     */
    public function getLedgerVersion()
    {
        return $this->ledger_version;
    }

    /**
     * Generated from protobuf field <code>int64 ledger_version = 2;</code>
     * @param int|string $var
     * @return $this
     */
    public function setLedgerVersion($var)
    {
        GPBUtil::checkInt64($var);
        $this->ledger_version = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>int64 overlay_version = 3;</code>
     * @return int|string
     */
    public function getOverlayVersion()
    {
        return $this->overlay_version;
    }

    /**
     * Generated from protobuf field <code>int64 overlay_version = 3;</code>
     * @param int|string $var
     * @return $this
     */
    public function setOverlayVersion($var)
    {
        GPBUtil::checkInt64($var);
        $this->overlay_version = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>string rexx_version = 4;</code>
     * @return string
     */
    public function getRexxVersion()
    {
        return $this->rexx_version;
    }

    /**
     * Generated from protobuf field <code>string rexx_version = 4;</code>
     * @param string $var
     * @return $this
     */
    public function setRexxVersion($var)
    {
        GPBUtil::checkString($var, True);
        $this->rexx_version = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>int64 listening_port = 5;</code>
     * @return int|string
     */
    public function getListeningPort()
    {
        return $this->listening_port;
    }

    /**
     * Generated from protobuf field <code>int64 listening_port = 5;</code>
     * @param int|string $var
     * @return $this
     */
    public function setListeningPort($var)
    {
        GPBUtil::checkInt64($var);
        $this->listening_port = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>string node_address = 6;</code>
     * @return string
     */
    public function getNodeAddress()
    {
        return $this->node_address;
    }

    /**
     * Generated from protobuf field <code>string node_address = 6;</code>
     * @param string $var
     * @return $this
     */
    public function setNodeAddress($var)
    {
        GPBUtil::checkString($var, True);
        $this->node_address = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>string node_rand = 7;</code>
     * @return string
     */
    public function getNodeRand()
    {
        return $this->node_rand;
    }

    /**
     * Generated from protobuf field <code>string node_rand = 7;</code>
     * @param string $var
     * @return $this
     */
    public function setNodeRand($var)
    {
        GPBUtil::checkString($var, True);
        $this->node_rand = $var;

        return $this;
    }

}

