<?php


namespace GPBMetadata;

class Common
{
    public static $is_initialized = false;

    public static function initOnce() {
        $pool = \Google\Protobuf\Internal\DescriptorPool::getGeneratedPool();

        if (static::$is_initialized == true) {
          return;
        }
        $pool->internalAddGeneratedFile(hex2bin(
            "0ac00c0a0c636f6d6d6f6e2e70726f746f120870726f746f636f6c22360a" .
            "074b657950616972120b0a036b6579180120012809120d0a0576616c7565" .
            "180220012809120f0a0776657273696f6e18032001280322320a09536967" .
            "6e617475726512120a0a7075626c69635f6b657918012001280912110a09" .
            "7369676e5f6461746118022001280c22420a0d4c65646765725570677261" .
            "6465121a0a126e65775f6c65646765725f76657273696f6e180120012803" .
            "12150a0d6e65775f76616c696461746f72180220012809224a0a0957734d" .
            "657373616765120c0a0474797065180120012803120f0a07726571756573" .
            "7418022001280812100a0873657175656e6365180320012803120c0a0464" .
            "61746118042001280c22150a0450696e67120d0a056e6f6e636518012001" .
            "280322150a04506f6e67120d0a056e6f6e63651801200128032acf090a09" .
            "4552524f52434f444512130a0f455252434f44455f535543434553531000" .
            "121a0a16455252434f44455f494e5445524e414c5f4552524f521001121d" .
            "0a19455252434f44455f494e56414c49445f504152414d45544552100212" .
            "190a15455252434f44455f414c52454144595f4558495354100312150a11" .
            "455252434f44455f4e4f545f4558495354100412160a12455252434f4445" .
            "5f54585f54494d454f5554100512190a15455252434f44455f4143434553" .
            "535f44454e494544100612190a15455252434f44455f4d4154485f4f5645" .
            "52464c4f57100712270a23455252434f44455f455850525f434f4e444954" .
            "494f4e5f524553554c545f46414c5345101412270a23455252434f44455f" .
            "455850525f434f4e444954494f4e5f53594e5441585f4552524f52101512" .
            "1a0a16455252434f44455f494e56414c49445f5055424b4559105a121a0a" .
            "16455252434f44455f494e56414c49445f5052494b4559105b12190a1545" .
            "5252434f44455f41535345545f494e56414c4944105c121d0a1945525243" .
            "4f44455f494e56414c49445f5349474e4154555245105d121b0a17455252" .
            "434f44455f494e56414c49445f41444452455353105e121e0a1a45525243" .
            "4f44455f4d495353494e475f4f5045524154494f4e531061121f0a1b4552" .
            "52434f44455f544f4f5f4d414e595f4f5045524154494f4e53106212180a" .
            "14455252434f44455f4241445f53455155454e43451063121f0a1b455252" .
            "434f44455f4143434f554e545f4c4f575f52455345525645106412240a20" .
            "455252434f44455f4143434f554e545f534f55524345444553545f455155" .
            "414c1065121e0a1a455252434f44455f4143434f554e545f444553545f45" .
            "584953541066121d0a19455252434f44455f4143434f554e545f4e4f545f" .
            "4558495354106712250a21455252434f44455f4143434f554e545f415353" .
            "45545f4c4f575f524553455256451068122a0a26455252434f44455f4143" .
            "434f554e545f41535345545f414d4f554e545f544f4f5f4c415247451069" .
            "12240a20455252434f44455f4143434f554e545f494e49545f4c4f575f52" .
            "455345525645106a121a0a16455252434f44455f4645455f4e4f545f454e" .
            "4f554748106f12170a13455252434f44455f4645455f494e56414c494410" .
            "70121a0a16455252434f44455f4f55545f4f465f54584341434845107212" .
            "1c0a18455252434f44455f5745494748545f4e4f545f56414c4944107812" .
            "1f0a1b455252434f44455f5448524553484f4c445f4e4f545f56414c4944" .
            "107912200a1b455252434f44455f494e56414c49445f4441544156455253" .
            "494f4e109001121c0a17455252434f44455f54585f53495a455f544f4f5f" .
            "42494710920112220a1d455252434f44455f434f4e54524143545f455845" .
            "435554455f4641494c10970112220a1d455252434f44455f434f4e545241" .
            "43545f53594e5441585f4552524f5210980112280a23455252434f44455f" .
            "434f4e54524143545f544f4f5f4d414e595f524543555253494f4e109901" .
            "122b0a26455252434f44455f434f4e54524143545f544f4f5f4d414e595f" .
            "5452414e53414354494f4e53109a0112250a20455252434f44455f434f4e" .
            "54524143545f455845435554455f45585049524544109b0112210a1c4552" .
            "52434f44455f54585f494e534552545f51554555455f4641494c10a00142" .
            "220a20696f2e62756d6f2e73646b2e636f72652e657874656e642e70726f" .
            "746f627566620670726f746f33"
        ));

        static::$is_initialized = true;
    }
}

