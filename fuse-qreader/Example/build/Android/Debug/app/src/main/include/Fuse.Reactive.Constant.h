// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.9.0/Expression.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Constant;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Constant :61
// {
::g::Fuse::Reactive::ConstantExpression_type* Constant_typeof();
void Constant__ctor_2_fn(Constant* __this, uObject* value);
void Constant__GetValue_fn(Constant* __this, uObject* context, uObject** __retval);
void Constant__New1_fn(uObject* value, Constant** __retval);
void Constant__ToString_fn(Constant* __this, uString** __retval);
void Constant__get_Value_fn(Constant* __this, uObject** __retval);
void Constant__set_Value_fn(Constant* __this, uObject* value);

struct Constant : ::g::Fuse::Reactive::ConstantExpression
{
    uStrong<uObject*> _Value;

    void ctor_2(uObject* value);
    uObject* Value();
    void Value(uObject* value);
    static Constant* New1(uObject* value);
};
// }

}}} // ::g::Fuse::Reactive
