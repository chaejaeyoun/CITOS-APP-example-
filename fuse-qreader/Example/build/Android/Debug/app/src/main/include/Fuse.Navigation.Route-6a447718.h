// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Fuse.Navigation/1.9.0/ModifyRouteCommand.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IArray.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct RouteModificationCommand__ArgumentArrayAdapter;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// protected sealed class RouteModificationCommand.ArgumentArrayAdapter :120
// {
struct RouteModificationCommand__ArgumentArrayAdapter_type : uType
{
    ::g::Fuse::IArray interface0;
};

RouteModificationCommand__ArgumentArrayAdapter_type* RouteModificationCommand__ArgumentArrayAdapter_typeof();
void RouteModificationCommand__ArgumentArrayAdapter__ctor__fn(RouteModificationCommand__ArgumentArrayAdapter* __this, uArray* args);
void RouteModificationCommand__ArgumentArrayAdapter__get_Item_fn(RouteModificationCommand__ArgumentArrayAdapter* __this, int32_t* index, uObject** __retval);
void RouteModificationCommand__ArgumentArrayAdapter__get_Length_fn(RouteModificationCommand__ArgumentArrayAdapter* __this, int32_t* __retval);
void RouteModificationCommand__ArgumentArrayAdapter__New1_fn(uArray* args, RouteModificationCommand__ArgumentArrayAdapter** __retval);

struct RouteModificationCommand__ArgumentArrayAdapter : uObject
{
    uStrong<uArray*> _args;

    void ctor_(uArray* args);
    uObject* Item(int32_t index);
    int32_t Length();
    static RouteModificationCommand__ArgumentArrayAdapter* New1(uArray* args);
};
// }

}}} // ::g::Fuse::Navigation
