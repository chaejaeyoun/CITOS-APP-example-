// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Fuse.Nodes/1.9.0/ViewHandle.Android.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewFactory;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewHandle;}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// internal static extern class ViewFactory :291
// {
uClassType* ViewFactory_typeof();
void ViewFactory__InstantiateViewGroup_fn(::g::Fuse::Controls::Native::ViewHandle** __retval);
void ViewFactory__InstantiateViewGroupImpl_fn(::g::Java::Object** __retval);

struct ViewFactory : uObject
{
    static ::g::Fuse::Controls::Native::ViewHandle* InstantiateViewGroup();
    static ::g::Java::Object* InstantiateViewGroupImpl();
};
// }

}}}} // ::g::Fuse::Controls::Native
