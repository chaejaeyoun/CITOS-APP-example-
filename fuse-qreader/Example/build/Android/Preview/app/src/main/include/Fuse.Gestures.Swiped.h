// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Fuse.Gestures/1.9.0/Swipe.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct SwipeRegion;}}}}
namespace g{namespace Fuse{namespace Gestures{struct Swiped;}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipeGesture;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class Swiped :560
// {
::g::Fuse::Triggers::Trigger_type* Swiped_typeof();
void Swiped__ctor_5_fn(Swiped* __this, ::g::Fuse::Gestures::SwipeGesture* source);
void Swiped__get_How_fn(Swiped* __this, int32_t* __retval);
void Swiped__set_How_fn(Swiped* __this, int32_t* value);
void Swiped__New2_fn(::g::Fuse::Gestures::SwipeGesture* source, Swiped** __retval);
void Swiped__OnRooted_fn(Swiped* __this);
void Swiped__OnSwiped_fn(Swiped* __this, bool* v, bool* cancelled);
void Swiped__OnUnrooted_fn(Swiped* __this);
void Swiped__get_Source_fn(Swiped* __this, ::g::Fuse::Gestures::SwipeGesture** __retval);
void Swiped__set_Source_fn(Swiped* __this, ::g::Fuse::Gestures::SwipeGesture* value);

struct Swiped : ::g::Fuse::Triggers::Trigger
{
    int32_t _how;
    uStrong< ::g::Fuse::Gestures::Internal::SwipeRegion*> _region;
    uStrong< ::g::Fuse::Gestures::SwipeGesture*> _Source;

    void ctor_5(::g::Fuse::Gestures::SwipeGesture* source);
    int32_t How();
    void How(int32_t value);
    void OnSwiped(bool v, bool cancelled);
    ::g::Fuse::Gestures::SwipeGesture* Source();
    void Source(::g::Fuse::Gestures::SwipeGesture* value);
    static Swiped* New2(::g::Fuse::Gestures::SwipeGesture* source);
};
// }

}}} // ::g::Fuse::Gestures
