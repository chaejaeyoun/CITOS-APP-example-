// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Fuse.Scripting.JavaScript/1.9.0/ObservableProperty.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct ObservableProperty__PushCapture;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// private sealed class ObservableProperty.PushCapture :220
// {
uType* ObservableProperty__PushCapture_typeof();
void ObservableProperty__PushCapture__ctor__fn(ObservableProperty__PushCapture* __this, uDelegate* push, uObject* arg);
void ObservableProperty__PushCapture__New1_fn(uDelegate* push, uObject* arg, ObservableProperty__PushCapture** __retval);
void ObservableProperty__PushCapture__Run_fn(ObservableProperty__PushCapture* __this, ::g::Fuse::Scripting::Context* context);

struct ObservableProperty__PushCapture : uObject
{
    uStrong<uDelegate*> _push;
    uStrong<uObject*> _arg;

    void ctor_(uDelegate* push, uObject* arg);
    void Run(::g::Fuse::Scripting::Context* context);
    static ObservableProperty__PushCapture* New1(uDelegate* push, uObject* arg);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
