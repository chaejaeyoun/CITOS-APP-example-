// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.9.0/Expression.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct ConstantExpression;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class ConstantExpression :50
// {
struct ConstantExpression_type : ::g::Fuse::Reactive::Expression_type
{
    void(*fp_GetValue)(::g::Fuse::Reactive::ConstantExpression*, uObject*, uObject**);
};

ConstantExpression_type* ConstantExpression_typeof();
void ConstantExpression__ctor_1_fn(ConstantExpression* __this);
void ConstantExpression__Subscribe_fn(ConstantExpression* __this, uObject* context, uObject* listener, uObject** __retval);

struct ConstantExpression : ::g::Fuse::Reactive::Expression
{
    void ctor_1();
    uObject* GetValue(uObject* context) { uObject* __retval; return (((ConstantExpression_type*)__type)->fp_GetValue)(this, context, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Reactive
