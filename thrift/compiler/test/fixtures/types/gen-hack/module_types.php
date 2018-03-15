<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift enum:-
 * has_bitwise_ops
 */
enum has_bitwise_ops : int {
  none = 0;
  zero = 1;
  one = 2;
  two = 4;
  three = 8;
}
type has_bitwise_opsType = has_bitwise_ops;

/**
 * Original thrift enum:-
 * is_unscoped
 */
enum is_unscoped : int {
  hello = 0;
  world = 1;
}
type is_unscopedType = is_unscoped;

/**
 * Original thrift enum:-
 * MyForwardRefEnum
 */
enum MyForwardRefEnum : int {
  ZERO = 0;
  NONZERO = 12;
}
type MyForwardRefEnumType = MyForwardRefEnum;

/**
 * Original thrift struct:-
 * decorated_struct
 */
class decorated_struct implements \IThriftStruct {
  use \ThriftSerializationTrait;

  public static dict<int, dict<string, mixed>> $_TSPEC = dict[
    1 => dict[
      'var' => 'field',
      'type' => \TType::STRING,
      ],
    ];
  public static Map<string, int> $_TFIELDMAP = Map {
    'field' => 1,
  };
  const int STRUCTURAL_ID = 6158382972310209096;
  /**
   * Original thrift field:-
   * 1: string field
   */
  public string $field;

  public function __construct(?string $field = null  ) {
    if ($field === null) {
      $this->field = '';
    } else {
      $this->field = $field;
    }
  }

  public function getName(): string {
    return 'decorated_struct';
  }

}

/**
 * Original thrift struct:-
 * ContainerStruct
 */
class ContainerStruct implements \IThriftStruct {
  use \ThriftSerializationTrait;

  public static dict<int, dict<string, mixed>> $_TSPEC = dict[
    12 => dict[
      'var' => 'fieldA',
      'type' => \TType::LST,
      'etype' => \TType::I32,
      'elem' => dict[
        'type' => \TType::I32,
        ],
        'format' => 'collection',
      ],
    2 => dict[
      'var' => 'fieldB',
      'type' => \TType::LST,
      'etype' => \TType::I32,
      'elem' => dict[
        'type' => \TType::I32,
        ],
        'format' => 'collection',
      ],
    3 => dict[
      'var' => 'fieldC',
      'type' => \TType::LST,
      'etype' => \TType::I32,
      'elem' => dict[
        'type' => \TType::I32,
        ],
        'format' => 'collection',
      ],
    4 => dict[
      'var' => 'fieldD',
      'type' => \TType::LST,
      'etype' => \TType::I32,
      'elem' => dict[
        'type' => \TType::I32,
        ],
        'format' => 'collection',
      ],
    5 => dict[
      'var' => 'fieldE',
      'type' => \TType::LST,
      'etype' => \TType::I32,
      'elem' => dict[
        'type' => \TType::I32,
        ],
        'format' => 'collection',
      ],
    6 => dict[
      'var' => 'fieldF',
      'type' => \TType::SET,
      'etype' => \TType::I32,
      'elem' => dict[
        'type' => \TType::I32,
        ],
        'format' => 'collection',
      ],
    7 => dict[
      'var' => 'fieldG',
      'type' => \TType::MAP,
      'ktype' => \TType::I32,
      'vtype' => \TType::STRING,
      'key' => dict[
        'type' => \TType::I32,
      ],
      'val' => dict[
        'type' => \TType::STRING,
        ],
        'format' => 'collection',
      ],
    8 => dict[
      'var' => 'fieldH',
      'type' => \TType::MAP,
      'ktype' => \TType::I32,
      'vtype' => \TType::STRING,
      'key' => dict[
        'type' => \TType::I32,
      ],
      'val' => dict[
        'type' => \TType::STRING,
        ],
        'format' => 'collection',
      ],
    ];
  public static Map<string, int> $_TFIELDMAP = Map {
    'fieldA' => 12,
    'fieldB' => 2,
    'fieldC' => 3,
    'fieldD' => 4,
    'fieldE' => 5,
    'fieldF' => 6,
    'fieldG' => 7,
    'fieldH' => 8,
  };
  const int STRUCTURAL_ID = 2901459969892394021;
  /**
   * Original thrift field:-
   * 12: list<i32> fieldA
   */
  public Vector<int> $fieldA;
  /**
   * Original thrift field:-
   * 2: list<i32> fieldB
   */
  public Vector<int> $fieldB;
  /**
   * Original thrift field:-
   * 3: list<i32> fieldC
   */
  public Vector<int> $fieldC;
  /**
   * Original thrift field:-
   * 4: list<i32> fieldD
   */
  public Vector<int> $fieldD;
  /**
   * Original thrift field:-
   * 5: list<i32> fieldE
   */
  public Vector<int> $fieldE;
  /**
   * Original thrift field:-
   * 6: set<i32> fieldF
   */
  public Set<int> $fieldF;
  /**
   * Original thrift field:-
   * 7: map<i32, string> fieldG
   */
  public Map<int, string> $fieldG;
  /**
   * Original thrift field:-
   * 8: map<i32, string> fieldH
   */
  public Map<int, string> $fieldH;

  public function __construct(?Vector<int> $fieldA = null, ?Vector<int> $fieldB = null, ?Vector<int> $fieldC = null, ?Vector<int> $fieldD = null, ?Vector<int> $fieldE = null, ?Set<int> $fieldF = null, ?Map<int, string> $fieldG = null, ?Map<int, string> $fieldH = null  ) {
    if ($fieldA === null) {
      $this->fieldA = Vector {};
    } else {
      $this->fieldA = $fieldA;
    }
    if ($fieldB === null) {
      $this->fieldB = Vector {};
    } else {
      $this->fieldB = $fieldB;
    }
    if ($fieldC === null) {
      $this->fieldC = Vector {};
    } else {
      $this->fieldC = $fieldC;
    }
    if ($fieldD === null) {
      $this->fieldD = Vector {};
    } else {
      $this->fieldD = $fieldD;
    }
    if ($fieldE === null) {
      $this->fieldE = Vector {};
    } else {
      $this->fieldE = $fieldE;
    }
    if ($fieldF === null) {
      $this->fieldF = Set {};
    } else {
      $this->fieldF = $fieldF;
    }
    if ($fieldG === null) {
      $this->fieldG = Map {};
    } else {
      $this->fieldG = $fieldG;
    }
    if ($fieldH === null) {
      $this->fieldH = Map {};
    } else {
      $this->fieldH = $fieldH;
    }
  }

  public function getName(): string {
    return 'ContainerStruct';
  }

}

/**
 * Original thrift struct:-
 * VirtualStruct
 */
class VirtualStruct implements \IThriftStruct {
  use \ThriftSerializationTrait;

  public static dict<int, dict<string, mixed>> $_TSPEC = dict[
    1 => dict[
      'var' => 'MyIntField',
      'type' => \TType::I64,
      ],
    ];
  public static Map<string, int> $_TFIELDMAP = Map {
    'MyIntField' => 1,
  };
  const int STRUCTURAL_ID = 7014352813131039231;
  /**
   * Original thrift field:-
   * 1: i64 MyIntField
   */
  public int $MyIntField;

  public function __construct(?int $MyIntField = null  ) {
    if ($MyIntField === null) {
      $this->MyIntField = 0;
    } else {
      $this->MyIntField = $MyIntField;
    }
  }

  public function getName(): string {
    return 'VirtualStruct';
  }

}

/**
 * Original thrift struct:-
 * MyStructWithForwardRefEnum
 */
class MyStructWithForwardRefEnum implements \IThriftStruct {
  use \ThriftSerializationTrait;

  public static dict<int, dict<string, mixed>> $_TSPEC = dict[
    1 => dict[
      'var' => 'a',
      'type' => \TType::I32,
      'enum' => 'MyForwardRefEnum',
      ],
    2 => dict[
      'var' => 'b',
      'type' => \TType::I32,
      'enum' => 'MyForwardRefEnum',
      ],
    ];
  public static Map<string, int> $_TFIELDMAP = Map {
    'a' => 1,
    'b' => 2,
  };
  const int STRUCTURAL_ID = 6098225215594902198;
  /**
   * Original thrift field:-
   * 1: enum module.MyForwardRefEnum a
   */
  public ?MyForwardRefEnum $a;
  /**
   * Original thrift field:-
   * 2: enum module.MyForwardRefEnum b
   */
  public ?MyForwardRefEnum $b;

  public function __construct(?MyForwardRefEnum $a = null, ?MyForwardRefEnum $b = null  ) {
    if ($a === null) {
      $this->a = MyForwardRefEnum::NONZERO;
    } else {
      $this->a = $a;
    }
    if ($b === null) {
      $this->b = MyForwardRefEnum::NONZERO;
    } else {
      $this->b = $b;
    }
  }

  public function getName(): string {
    return 'MyStructWithForwardRefEnum';
  }

}
