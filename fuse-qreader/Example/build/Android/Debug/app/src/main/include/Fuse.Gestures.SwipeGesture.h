// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Fuse.Gestures/1.9.0/Swipe.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct Swiper;}}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct SwipeRegion;}}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipeGesture;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class SwipeGesture :55
// {
struct SwipeGesture_type : ::g::Fuse::Node_type
{
    ::g::Uno::UX::IPropertyListener interface7;
};

SwipeGesture_type* SwipeGesture_typeof();
void SwipeGesture__ctor_3_fn(SwipeGesture* __this);
void SwipeGesture__get_Direction_fn(SwipeGesture* __this, int32_t* __retval);
void SwipeGesture__set_Direction_fn(SwipeGesture* __this, int32_t* value);
void SwipeGesture__get_IsActive_fn(SwipeGesture* __this, bool* __retval);
void SwipeGesture__set_IsActive_fn(SwipeGesture* __this, bool* value);
void SwipeGesture__get_IsEnabled_fn(SwipeGesture* __this, bool* __retval);
void SwipeGesture__set_IsEnabled_fn(SwipeGesture* __this, bool* value);
void SwipeGesture__get_LengthNode_fn(SwipeGesture* __this, ::g::Fuse::Elements::Element** __retval);
void SwipeGesture__set_LengthNode_fn(SwipeGesture* __this, ::g::Fuse::Elements::Element* value);
void SwipeGesture__New2_fn(SwipeGesture** __retval);
void SwipeGesture__OnRooted_fn(SwipeGesture* __this);
void SwipeGesture__OnUnrooted_fn(SwipeGesture* __this);
void SwipeGesture__get_Region_fn(SwipeGesture* __this, ::g::Fuse::Gestures::Internal::SwipeRegion** __retval);
void SwipeGesture__SetActive_fn(SwipeGesture* __this, bool* value, uObject* origin, bool* bypass);
void SwipeGesture__SetIsActive_fn(SwipeGesture* __this, bool* value, uObject* origin);
void SwipeGesture__get_Type_fn(SwipeGesture* __this, int32_t* __retval);
void SwipeGesture__set_Type_fn(SwipeGesture* __this, int32_t* value);
void SwipeGesture__UnoUXIPropertyListenerOnPropertyChanged_fn(SwipeGesture* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop);

struct SwipeGesture : ::g::Fuse::Behavior
{
    uStrong< ::g::Fuse::Gestures::Internal::Swiper*> _swiper;
    uStrong< ::g::Fuse::Gestures::Internal::SwipeRegion*> _region;
    int32_t _type;
    bool _hasDirection;
    int32_t _direction;
    static ::g::Uno::UX::Selector GesturePriorityName_;
    static ::g::Uno::UX::Selector& GesturePriorityName() { return SwipeGesture_typeof()->Init(), GesturePriorityName_; }
    int32_t _gesturePriority;
    bool _hasThreshold;
    static ::g::Uno::UX::Selector _isActiveName_;
    static ::g::Uno::UX::Selector& _isActiveName() { return SwipeGesture_typeof()->Init(), _isActiveName_; }

    void ctor_3();
    int32_t Direction();
    void Direction(int32_t value);
    bool IsActive();
    void IsActive(bool value);
    bool IsEnabled();
    void IsEnabled(bool value);
    ::g::Fuse::Elements::Element* LengthNode();
    void LengthNode(::g::Fuse::Elements::Element* value);
    ::g::Fuse::Gestures::Internal::SwipeRegion* Region();
    void SetActive(bool value, uObject* origin, bool bypass);
    void SetIsActive(bool value, uObject* origin);
    int32_t Type();
    void Type(int32_t value);
    static SwipeGesture* New2();
};
// }

}}} // ::g::Fuse::Gestures
