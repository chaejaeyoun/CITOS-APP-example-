// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Outracks.Simulator.Common.Uno/0.0.0/Bytecode/Literals.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.By-683bc37a.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct NumberLiteral;}}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class NumberLiteral :132
// {
::g::Outracks::Simulator::Bytecode::Literal_type* NumberLiteral_typeof();
void NumberLiteral__ctor_3_fn(NumberLiteral* __this, int32_t* numberType, double* doubleValue);
void NumberLiteral__get_LiteralId_fn(NumberLiteral* __this, char16_t* __retval);
void NumberLiteral__New1_fn(int32_t* numberType, double* doubleValue, NumberLiteral** __retval);
void NumberLiteral__Read3_fn(::g::System::IO::BinaryReader* reader, NumberLiteral** __retval);
void NumberLiteral__ToString_fn(NumberLiteral* __this, uString** __retval);
void NumberLiteral__Write3_fn(NumberLiteral* l, ::g::System::IO::BinaryWriter* writer);
void NumberLiteral__WriteLiteral_fn(NumberLiteral* __this, ::g::System::IO::BinaryWriter* writer);

struct NumberLiteral : ::g::Outracks::Simulator::Bytecode::Literal
{
    int32_t NumberType;
    double DoubleValue;

    void ctor_3(int32_t numberType, double doubleValue);
    static NumberLiteral* New1(int32_t numberType, double doubleValue);
    static NumberLiteral* Read3(::g::System::IO::BinaryReader* reader);
    static void Write3(NumberLiteral* l, ::g::System::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
