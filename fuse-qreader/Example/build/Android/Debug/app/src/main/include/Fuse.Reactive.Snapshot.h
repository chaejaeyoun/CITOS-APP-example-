// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.9.0/Snapshot.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Snapshot;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Snapshot :8
// {
::g::Fuse::Reactive::Expression_type* Snapshot_typeof();
void Snapshot__get_Source_fn(Snapshot* __this, ::g::Fuse::Reactive::Expression** __retval);
void Snapshot__set_Source_fn(Snapshot* __this, ::g::Fuse::Reactive::Expression* value);
void Snapshot__Subscribe_fn(Snapshot* __this, uObject* context, uObject* listener, uObject** __retval);

struct Snapshot : ::g::Fuse::Reactive::Expression
{
    uStrong< ::g::Fuse::Reactive::Expression*> _Source;

    ::g::Fuse::Reactive::Expression* Source();
    void Source(::g::Fuse::Reactive::Expression* value);
};
// }

}}} // ::g::Fuse::Reactive
