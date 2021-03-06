/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package thrift.test;

import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

import com.facebook.thrift.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial" })
public class Constant implements TBase, java.io.Serializable, Cloneable, Comparable<Constant> {
  private static final TStruct STRUCT_DESC = new TStruct("Constant");
  private static final TField A_FIELD_DESC = new TField("a", TType.I32, (short)1);
  private static final TField B_FIELD_DESC = new TField("b", TType.I32, (short)2);
  private static final TField C_FIELD_DESC = new TField("c", TType.LIST, (short)3);
  private static final TField D_FIELD_DESC = new TField("d", TType.LIST, (short)4);
  private static final TField E_FIELD_DESC = new TField("e", TType.STRUCT, (short)5);
  private static final TField F_FIELD_DESC = new TField("f", TType.STRUCT, (short)6);
  private static final TField G_FIELD_DESC = new TField("g", TType.LIST, (short)7);
  private static final TField H_FIELD_DESC = new TField("h", TType.LIST, (short)8);
  private static final TField S_FIELD_DESC = new TField("s", TType.STRING, (short)9);

  public int a;
  public int b;
  public List<Integer> c;
  public List<Integer> d;
  public Constant1 e;
  public Constant1 f;
  public List<Constant1> g;
  public List<Constant1> h;
  public String s;
  public static final int A = 1;
  public static final int B = 2;
  public static final int C = 3;
  public static final int D = 4;
  public static final int E = 5;
  public static final int F = 6;
  public static final int G = 7;
  public static final int H = 8;
  public static final int S = 9;
  public static boolean DEFAULT_PRETTY_PRINT = true;

  // isset id assignments
  private static final int __A_ISSET_ID = 0;
  private static final int __B_ISSET_ID = 1;
  private BitSet __isset_bit_vector = new BitSet(2);

  public static final Map<Integer, FieldMetaData> metaDataMap;
  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    tmpMetaDataMap.put(A, new FieldMetaData("a", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.I32)));
    tmpMetaDataMap.put(B, new FieldMetaData("b", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.I32)));
    tmpMetaDataMap.put(C, new FieldMetaData("c", TFieldRequirementType.DEFAULT, 
        new ListMetaData(TType.LIST, 
            new FieldValueMetaData(TType.I32))));
    tmpMetaDataMap.put(D, new FieldMetaData("d", TFieldRequirementType.DEFAULT, 
        new ListMetaData(TType.LIST, 
            new FieldValueMetaData(TType.I32))));
    tmpMetaDataMap.put(E, new FieldMetaData("e", TFieldRequirementType.DEFAULT, 
        new StructMetaData(TType.STRUCT, Constant1.class)));
    tmpMetaDataMap.put(F, new FieldMetaData("f", TFieldRequirementType.DEFAULT, 
        new StructMetaData(TType.STRUCT, Constant1.class)));
    tmpMetaDataMap.put(G, new FieldMetaData("g", TFieldRequirementType.DEFAULT, 
        new ListMetaData(TType.LIST, 
            new StructMetaData(TType.STRUCT, Constant1.class))));
    tmpMetaDataMap.put(H, new FieldMetaData("h", TFieldRequirementType.DEFAULT, 
        new ListMetaData(TType.LIST, 
            new StructMetaData(TType.STRUCT, Constant1.class))));
    tmpMetaDataMap.put(S, new FieldMetaData("s", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.STRING)));
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  static {
    FieldMetaData.addStructMetaDataMap(Constant.class, metaDataMap);
  }

  public Constant() {
    this.b = 1;

    this.d = new ArrayList<Integer>();
    this.d.add(1);
    this.d.add(2);

    this.f = new Constant1();
    this.f.setX(42);

    this.h = new ArrayList<Constant1>();
    Constant1 tmp124 = new Constant1();
    tmp124.setX(50);
    tmp124.setY("meow");

    this.h.add(tmp124);
    Constant1 tmp125 = new Constant1();
    tmp125.setX(60);

    this.h.add(tmp125);

    this.s = "world";

  }

  public Constant(
    int a,
    int b,
    List<Integer> c,
    List<Integer> d,
    Constant1 e,
    Constant1 f,
    List<Constant1> g,
    List<Constant1> h,
    String s)
  {
    this();
    this.a = a;
    setAIsSet(true);
    this.b = b;
    setBIsSet(true);
    this.c = c;
    this.d = d;
    this.e = e;
    this.f = f;
    this.g = g;
    this.h = h;
    this.s = s;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public Constant(Constant other) {
    __isset_bit_vector.clear();
    __isset_bit_vector.or(other.__isset_bit_vector);
    this.a = TBaseHelper.deepCopy(other.a);
    this.b = TBaseHelper.deepCopy(other.b);
    if (other.isSetC()) {
      this.c = TBaseHelper.deepCopy(other.c);
    }
    if (other.isSetD()) {
      this.d = TBaseHelper.deepCopy(other.d);
    }
    if (other.isSetE()) {
      this.e = TBaseHelper.deepCopy(other.e);
    }
    if (other.isSetF()) {
      this.f = TBaseHelper.deepCopy(other.f);
    }
    if (other.isSetG()) {
      this.g = TBaseHelper.deepCopy(other.g);
    }
    if (other.isSetH()) {
      this.h = TBaseHelper.deepCopy(other.h);
    }
    if (other.isSetS()) {
      this.s = TBaseHelper.deepCopy(other.s);
    }
  }

  public Constant deepCopy() {
    return new Constant(this);
  }

  @Deprecated
  public Constant clone() {
    return new Constant(this);
  }

  public int  getA() {
    return this.a;
  }

  public Constant setA(int a) {
    this.a = a;
    setAIsSet(true);
    return this;
  }

  public void unsetA() {
    __isset_bit_vector.clear(__A_ISSET_ID);
  }

  // Returns true if field a is set (has been assigned a value) and false otherwise
  public boolean isSetA() {
    return __isset_bit_vector.get(__A_ISSET_ID);
  }

  public void setAIsSet(boolean value) {
    __isset_bit_vector.set(__A_ISSET_ID, value);
  }

  public int  getB() {
    return this.b;
  }

  public Constant setB(int b) {
    this.b = b;
    setBIsSet(true);
    return this;
  }

  public void unsetB() {
    __isset_bit_vector.clear(__B_ISSET_ID);
  }

  // Returns true if field b is set (has been assigned a value) and false otherwise
  public boolean isSetB() {
    return __isset_bit_vector.get(__B_ISSET_ID);
  }

  public void setBIsSet(boolean value) {
    __isset_bit_vector.set(__B_ISSET_ID, value);
  }

  public List<Integer>  getC() {
    return this.c;
  }

  public Constant setC(List<Integer> c) {
    this.c = c;
    return this;
  }

  public void unsetC() {
    this.c = null;
  }

  // Returns true if field c is set (has been assigned a value) and false otherwise
  public boolean isSetC() {
    return this.c != null;
  }

  public void setCIsSet(boolean value) {
    if (!value) {
      this.c = null;
    }
  }

  public List<Integer>  getD() {
    return this.d;
  }

  public Constant setD(List<Integer> d) {
    this.d = d;
    return this;
  }

  public void unsetD() {
    this.d = null;
  }

  // Returns true if field d is set (has been assigned a value) and false otherwise
  public boolean isSetD() {
    return this.d != null;
  }

  public void setDIsSet(boolean value) {
    if (!value) {
      this.d = null;
    }
  }

  public Constant1  getE() {
    return this.e;
  }

  public Constant setE(Constant1 e) {
    this.e = e;
    return this;
  }

  public void unsetE() {
    this.e = null;
  }

  // Returns true if field e is set (has been assigned a value) and false otherwise
  public boolean isSetE() {
    return this.e != null;
  }

  public void setEIsSet(boolean value) {
    if (!value) {
      this.e = null;
    }
  }

  public Constant1  getF() {
    return this.f;
  }

  public Constant setF(Constant1 f) {
    this.f = f;
    return this;
  }

  public void unsetF() {
    this.f = null;
  }

  // Returns true if field f is set (has been assigned a value) and false otherwise
  public boolean isSetF() {
    return this.f != null;
  }

  public void setFIsSet(boolean value) {
    if (!value) {
      this.f = null;
    }
  }

  public List<Constant1>  getG() {
    return this.g;
  }

  public Constant setG(List<Constant1> g) {
    this.g = g;
    return this;
  }

  public void unsetG() {
    this.g = null;
  }

  // Returns true if field g is set (has been assigned a value) and false otherwise
  public boolean isSetG() {
    return this.g != null;
  }

  public void setGIsSet(boolean value) {
    if (!value) {
      this.g = null;
    }
  }

  public List<Constant1>  getH() {
    return this.h;
  }

  public Constant setH(List<Constant1> h) {
    this.h = h;
    return this;
  }

  public void unsetH() {
    this.h = null;
  }

  // Returns true if field h is set (has been assigned a value) and false otherwise
  public boolean isSetH() {
    return this.h != null;
  }

  public void setHIsSet(boolean value) {
    if (!value) {
      this.h = null;
    }
  }

  public String  getS() {
    return this.s;
  }

  public Constant setS(String s) {
    this.s = s;
    return this;
  }

  public void unsetS() {
    this.s = null;
  }

  // Returns true if field s is set (has been assigned a value) and false otherwise
  public boolean isSetS() {
    return this.s != null;
  }

  public void setSIsSet(boolean value) {
    if (!value) {
      this.s = null;
    }
  }

  @SuppressWarnings("unchecked")
  public void setFieldValue(int fieldID, Object value) {
    switch (fieldID) {
    case A:
      if (value == null) {
        unsetA();
      } else {
        setA((Integer)value);
      }
      break;

    case B:
      if (value == null) {
        unsetB();
      } else {
        setB((Integer)value);
      }
      break;

    case C:
      if (value == null) {
        unsetC();
      } else {
        setC((List<Integer>)value);
      }
      break;

    case D:
      if (value == null) {
        unsetD();
      } else {
        setD((List<Integer>)value);
      }
      break;

    case E:
      if (value == null) {
        unsetE();
      } else {
        setE((Constant1)value);
      }
      break;

    case F:
      if (value == null) {
        unsetF();
      } else {
        setF((Constant1)value);
      }
      break;

    case G:
      if (value == null) {
        unsetG();
      } else {
        setG((List<Constant1>)value);
      }
      break;

    case H:
      if (value == null) {
        unsetH();
      } else {
        setH((List<Constant1>)value);
      }
      break;

    case S:
      if (value == null) {
        unsetS();
      } else {
        setS((String)value);
      }
      break;

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  public Object getFieldValue(int fieldID) {
    switch (fieldID) {
    case A:
      return new Integer(getA());

    case B:
      return new Integer(getB());

    case C:
      return getC();

    case D:
      return getD();

    case E:
      return getE();

    case F:
      return getF();

    case G:
      return getG();

    case H:
      return getH();

    case S:
      return getS();

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  // Returns true if field corresponding to fieldID is set (has been assigned a value) and false otherwise
  public boolean isSet(int fieldID) {
    switch (fieldID) {
    case A:
      return isSetA();
    case B:
      return isSetB();
    case C:
      return isSetC();
    case D:
      return isSetD();
    case E:
      return isSetE();
    case F:
      return isSetF();
    case G:
      return isSetG();
    case H:
      return isSetH();
    case S:
      return isSetS();
    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  @Override
  public boolean equals(Object that) {
    if (that == null)
      return false;
    if (that instanceof Constant)
      return this.equals((Constant)that);
    return false;
  }

  public boolean equals(Constant that) {
    if (that == null)
      return false;
    if (this == that)
      return true;

    boolean this_present_a = true;
    boolean that_present_a = true;
    if (this_present_a || that_present_a) {
      if (!(this_present_a && that_present_a))
        return false;
      if (!TBaseHelper.equalsNobinary(this.a, that.a))
        return false;
    }

    boolean this_present_b = true;
    boolean that_present_b = true;
    if (this_present_b || that_present_b) {
      if (!(this_present_b && that_present_b))
        return false;
      if (!TBaseHelper.equalsNobinary(this.b, that.b))
        return false;
    }

    boolean this_present_c = true && this.isSetC();
    boolean that_present_c = true && that.isSetC();
    if (this_present_c || that_present_c) {
      if (!(this_present_c && that_present_c))
        return false;
      if (!TBaseHelper.equalsNobinary(this.c, that.c))
        return false;
    }

    boolean this_present_d = true && this.isSetD();
    boolean that_present_d = true && that.isSetD();
    if (this_present_d || that_present_d) {
      if (!(this_present_d && that_present_d))
        return false;
      if (!TBaseHelper.equalsNobinary(this.d, that.d))
        return false;
    }

    boolean this_present_e = true && this.isSetE();
    boolean that_present_e = true && that.isSetE();
    if (this_present_e || that_present_e) {
      if (!(this_present_e && that_present_e))
        return false;
      if (!TBaseHelper.equalsNobinary(this.e, that.e))
        return false;
    }

    boolean this_present_f = true && this.isSetF();
    boolean that_present_f = true && that.isSetF();
    if (this_present_f || that_present_f) {
      if (!(this_present_f && that_present_f))
        return false;
      if (!TBaseHelper.equalsNobinary(this.f, that.f))
        return false;
    }

    boolean this_present_g = true && this.isSetG();
    boolean that_present_g = true && that.isSetG();
    if (this_present_g || that_present_g) {
      if (!(this_present_g && that_present_g))
        return false;
      if (!TBaseHelper.equalsNobinary(this.g, that.g))
        return false;
    }

    boolean this_present_h = true && this.isSetH();
    boolean that_present_h = true && that.isSetH();
    if (this_present_h || that_present_h) {
      if (!(this_present_h && that_present_h))
        return false;
      if (!TBaseHelper.equalsNobinary(this.h, that.h))
        return false;
    }

    boolean this_present_s = true && this.isSetS();
    boolean that_present_s = true && that.isSetS();
    if (this_present_s || that_present_s) {
      if (!(this_present_s && that_present_s))
        return false;
      if (!TBaseHelper.equalsNobinary(this.s, that.s))
        return false;
    }

    return true;
  }

  @Override
  public int hashCode() {
    return 0;
  }

  @Override
  public int compareTo(Constant other) {
    if (other == null) {
      // See java.lang.Comparable docs
      throw new NullPointerException();
    }

    if (other == this) {
      return 0;
    }
    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetA()).compareTo(other.isSetA());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(a, other.a);
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetB()).compareTo(other.isSetB());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(b, other.b);
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetC()).compareTo(other.isSetC());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(c, other.c);
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetD()).compareTo(other.isSetD());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(d, other.d);
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetE()).compareTo(other.isSetE());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(e, other.e);
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetF()).compareTo(other.isSetF());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(f, other.f);
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetG()).compareTo(other.isSetG());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(g, other.g);
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetH()).compareTo(other.isSetH());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(h, other.h);
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetS()).compareTo(other.isSetS());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(s, other.s);
    if (lastComparison != 0) {
      return lastComparison;
    }
    return 0;
  }

  public void read(TProtocol iprot) throws TException {
    TField field;
    iprot.readStructBegin(metaDataMap);
    while (true)
    {
      field = iprot.readFieldBegin();
      if (field.type == TType.STOP) { 
        break;
      }
      switch (field.id)
      {
        case A:
          if (field.type == TType.I32) {
            this.a = iprot.readI32();
            setAIsSet(true);
          } else { 
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        case B:
          if (field.type == TType.I32) {
            this.b = iprot.readI32();
            setBIsSet(true);
          } else { 
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        case C:
          if (field.type == TType.LIST) {
            {
              TList _list126 = iprot.readListBegin();
              this.c = new ArrayList<Integer>(Math.max(0, _list126.size));
              for (int _i127 = 0; 
                   (_list126.size < 0) ? iprot.peekList() : (_i127 < _list126.size); 
                   ++_i127)
              {
                int _elem128;
                _elem128 = iprot.readI32();
                this.c.add(_elem128);
              }
              iprot.readListEnd();
            }
          } else { 
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        case D:
          if (field.type == TType.LIST) {
            {
              TList _list129 = iprot.readListBegin();
              this.d = new ArrayList<Integer>(Math.max(0, _list129.size));
              for (int _i130 = 0; 
                   (_list129.size < 0) ? iprot.peekList() : (_i130 < _list129.size); 
                   ++_i130)
              {
                int _elem131;
                _elem131 = iprot.readI32();
                this.d.add(_elem131);
              }
              iprot.readListEnd();
            }
          } else { 
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        case E:
          if (field.type == TType.STRUCT) {
            this.e = new Constant1();
            this.e.read(iprot);
          } else { 
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        case F:
          if (field.type == TType.STRUCT) {
            this.f = new Constant1();
            this.f.read(iprot);
          } else { 
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        case G:
          if (field.type == TType.LIST) {
            {
              TList _list132 = iprot.readListBegin();
              this.g = new ArrayList<Constant1>(Math.max(0, _list132.size));
              for (int _i133 = 0; 
                   (_list132.size < 0) ? iprot.peekList() : (_i133 < _list132.size); 
                   ++_i133)
              {
                Constant1 _elem134;
                _elem134 = new Constant1();
                _elem134.read(iprot);
                this.g.add(_elem134);
              }
              iprot.readListEnd();
            }
          } else { 
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        case H:
          if (field.type == TType.LIST) {
            {
              TList _list135 = iprot.readListBegin();
              this.h = new ArrayList<Constant1>(Math.max(0, _list135.size));
              for (int _i136 = 0; 
                   (_list135.size < 0) ? iprot.peekList() : (_i136 < _list135.size); 
                   ++_i136)
              {
                Constant1 _elem137;
                _elem137 = new Constant1();
                _elem137.read(iprot);
                this.h.add(_elem137);
              }
              iprot.readListEnd();
            }
          } else { 
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        case S:
          if (field.type == TType.STRING) {
            this.s = iprot.readString();
          } else { 
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();


    // check for required fields of primitive type, which can't be checked in the validate method
    validate();
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    oprot.writeFieldBegin(A_FIELD_DESC);
    oprot.writeI32(this.a);
    oprot.writeFieldEnd();
    oprot.writeFieldBegin(B_FIELD_DESC);
    oprot.writeI32(this.b);
    oprot.writeFieldEnd();
    if (this.c != null) {
      oprot.writeFieldBegin(C_FIELD_DESC);
      {
        oprot.writeListBegin(new TList(TType.I32, this.c.size()));
        for (int _iter138 : this.c)        {
          oprot.writeI32(_iter138);
        }
        oprot.writeListEnd();
      }
      oprot.writeFieldEnd();
    }
    if (this.d != null) {
      oprot.writeFieldBegin(D_FIELD_DESC);
      {
        oprot.writeListBegin(new TList(TType.I32, this.d.size()));
        for (int _iter139 : this.d)        {
          oprot.writeI32(_iter139);
        }
        oprot.writeListEnd();
      }
      oprot.writeFieldEnd();
    }
    if (this.e != null) {
      oprot.writeFieldBegin(E_FIELD_DESC);
      this.e.write(oprot);
      oprot.writeFieldEnd();
    }
    if (this.f != null) {
      oprot.writeFieldBegin(F_FIELD_DESC);
      this.f.write(oprot);
      oprot.writeFieldEnd();
    }
    if (this.g != null) {
      oprot.writeFieldBegin(G_FIELD_DESC);
      {
        oprot.writeListBegin(new TList(TType.STRUCT, this.g.size()));
        for (Constant1 _iter140 : this.g)        {
          _iter140.write(oprot);
        }
        oprot.writeListEnd();
      }
      oprot.writeFieldEnd();
    }
    if (this.h != null) {
      oprot.writeFieldBegin(H_FIELD_DESC);
      {
        oprot.writeListBegin(new TList(TType.STRUCT, this.h.size()));
        for (Constant1 _iter141 : this.h)        {
          _iter141.write(oprot);
        }
        oprot.writeListEnd();
      }
      oprot.writeFieldEnd();
    }
    if (this.s != null) {
      oprot.writeFieldBegin(S_FIELD_DESC);
      oprot.writeString(this.s);
      oprot.writeFieldEnd();
    }
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(DEFAULT_PRETTY_PRINT);
  }

  @Override
  public String toString(boolean prettyPrint) {
    return toString(1, prettyPrint);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    String indentStr = prettyPrint ? TBaseHelper.getIndentedString(indent) : "";
    String newLine = prettyPrint ? "\n" : "";
String space = prettyPrint ? " " : "";
    StringBuilder sb = new StringBuilder("Constant");
    sb.append(space);
    sb.append("(");
    sb.append(newLine);
    boolean first = true;

    sb.append(indentStr);
    sb.append("a");
    sb.append(space);
    sb.append(":").append(space);
    sb.append(TBaseHelper.toString(this. getA(), indent + 1, prettyPrint));
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("b");
    sb.append(space);
    sb.append(":").append(space);
    sb.append(TBaseHelper.toString(this. getB(), indent + 1, prettyPrint));
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("c");
    sb.append(space);
    sb.append(":").append(space);
    if (this. getC() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this. getC(), indent + 1, prettyPrint));
    }
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("d");
    sb.append(space);
    sb.append(":").append(space);
    if (this. getD() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this. getD(), indent + 1, prettyPrint));
    }
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("e");
    sb.append(space);
    sb.append(":").append(space);
    if (this. getE() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this. getE(), indent + 1, prettyPrint));
    }
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("f");
    sb.append(space);
    sb.append(":").append(space);
    if (this. getF() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this. getF(), indent + 1, prettyPrint));
    }
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("g");
    sb.append(space);
    sb.append(":").append(space);
    if (this. getG() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this. getG(), indent + 1, prettyPrint));
    }
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("h");
    sb.append(space);
    sb.append(":").append(space);
    if (this. getH() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this. getH(), indent + 1, prettyPrint));
    }
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("s");
    sb.append(space);
    sb.append(":").append(space);
    if (this. getS() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this. getS(), indent + 1, prettyPrint));
    }
    first = false;
    sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws TException {
    // check for required fields
    // check that fields of type enum have valid values
  }

}

