// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Fuse.Reactive/1.9.0/ObserverMap.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IArray.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct ObserverMap;}}}
namespace g{namespace Fuse{namespace Reactive{struct UnmappedView;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class UnmappedView<T> :8
// {
struct UnmappedView_type : uType
{
    ::g::Fuse::IArray interface0;
};

UnmappedView_type* UnmappedView_typeof();
void UnmappedView__ctor__fn(UnmappedView* __this, ::g::Fuse::Reactive::ObserverMap* source);
void UnmappedView__get_Item_fn(UnmappedView* __this, int32_t* index, uObject** __retval);
void UnmappedView__get_Length_fn(UnmappedView* __this, int32_t* __retval);
void UnmappedView__New1_fn(uType* __type, ::g::Fuse::Reactive::ObserverMap* source, UnmappedView** __retval);

struct UnmappedView : uObject
{
    uStrong< ::g::Fuse::Reactive::ObserverMap*> _source;

    void ctor_(::g::Fuse::Reactive::ObserverMap* source);
    uObject* Item(int32_t index);
    int32_t Length();
    static UnmappedView* New1(uType* __type, ::g::Fuse::Reactive::ObserverMap* source);
};
// }

}}} // ::g::Fuse::Reactive
