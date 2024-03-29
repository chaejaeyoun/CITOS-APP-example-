// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Fuse.Controls.Primitives/1.9.0/RangeControls/CircularRangeBehavior.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.Gestures.double2.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.Input.IGesture.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Controls{struct RangeControl;}}}
namespace g{namespace Fuse{namespace Controls{struct RangeControl2D;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Gestures{struct CircularRangeBehavior;}}}
namespace g{namespace Fuse{namespace Input{struct Gesture;}}}
namespace g{namespace Fuse{namespace Input{struct GesturePriorityConfig;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class CircularRangeBehavior :76
// {
struct CircularRangeBehavior_type : ::g::Fuse::Node_type
{
    ::g::Fuse::Input::IGesture interface7;
};

CircularRangeBehavior_type* CircularRangeBehavior_typeof();
void CircularRangeBehavior__ctor_3_fn(CircularRangeBehavior* __this);
void CircularRangeBehavior__Angle_fn(CircularRangeBehavior* __this, ::g::Fuse::Input::PointerEventArgs* args, double* __retval);
void CircularRangeBehavior__get_AngleRange_fn(CircularRangeBehavior* __this, ::g::Uno::Float2* __retval);
void CircularRangeBehavior__get_ControlRelativeValue_fn(CircularRangeBehavior* __this, ::g::Fuse::Gestures::double2* __retval);
void CircularRangeBehavior__set_ControlRelativeValue_fn(CircularRangeBehavior* __this, ::g::Fuse::Gestures::double2* value);
void CircularRangeBehavior__get_CurrentRadius_fn(CircularRangeBehavior* __this, double* __retval);
void CircularRangeBehavior__get_DegreesValue_fn(CircularRangeBehavior* __this, float* __retval);
void CircularRangeBehavior__set_DegreesValue_fn(CircularRangeBehavior* __this, float* value);
void CircularRangeBehavior__add_DegreesValueChanged_fn(CircularRangeBehavior* __this, uDelegate* value);
void CircularRangeBehavior__remove_DegreesValueChanged_fn(CircularRangeBehavior* __this, uDelegate* value);
void CircularRangeBehavior__get_EndAngleDegrees_fn(CircularRangeBehavior* __this, float* __retval);
void CircularRangeBehavior__set_EndAngleDegrees_fn(CircularRangeBehavior* __this, float* value);
void CircularRangeBehavior__FuseInputIGestureOnCaptureChanged_fn(CircularRangeBehavior* __this, ::g::Fuse::Input::PointerEventArgs* args, int32_t* how, int32_t* prev);
void CircularRangeBehavior__FuseInputIGestureOnLostCapture_fn(CircularRangeBehavior* __this, bool* forced);
void CircularRangeBehavior__FuseInputIGestureOnPointerMoved_fn(CircularRangeBehavior* __this, ::g::Fuse::Input::PointerMovedArgs* args, int32_t* __retval);
void CircularRangeBehavior__FuseInputIGestureOnPointerPressed_fn(CircularRangeBehavior* __this, ::g::Fuse::Input::PointerPressedArgs* args, int32_t* __retval);
void CircularRangeBehavior__FuseInputIGestureOnPointerReleased_fn(CircularRangeBehavior* __this, ::g::Fuse::Input::PointerReleasedArgs* args, int32_t* __retval);
void CircularRangeBehavior__FuseInputIGestureget_Priority_fn(CircularRangeBehavior* __this, ::g::Fuse::Input::GesturePriorityConfig* __retval);
void CircularRangeBehavior__get_GesturePriority_fn(CircularRangeBehavior* __this, int32_t* __retval);
void CircularRangeBehavior__set_GesturePriority_fn(CircularRangeBehavior* __this, int32_t* value);
void CircularRangeBehavior__get_IsWrapping_fn(CircularRangeBehavior* __this, bool* __retval);
void CircularRangeBehavior__set_IsWrapping_fn(CircularRangeBehavior* __this, bool* value);
void CircularRangeBehavior__LocalVector_fn(CircularRangeBehavior* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Uno::Float2* __retval);
void CircularRangeBehavior__get_MaximumRadius_fn(CircularRangeBehavior* __this, float* __retval);
void CircularRangeBehavior__set_MaximumRadius_fn(CircularRangeBehavior* __this, float* value);
void CircularRangeBehavior__get_MinimumRadius_fn(CircularRangeBehavior* __this, float* __retval);
void CircularRangeBehavior__set_MinimumRadius_fn(CircularRangeBehavior* __this, float* value);
void CircularRangeBehavior__New2_fn(CircularRangeBehavior** __retval);
void CircularRangeBehavior__OnRooted_fn(CircularRangeBehavior* __this);
void CircularRangeBehavior__OnUnrooted_fn(CircularRangeBehavior* __this);
void CircularRangeBehavior__OnValueChanged_fn(CircularRangeBehavior* __this, uObject* s, uObject* args);
void CircularRangeBehavior__Radius_fn(CircularRangeBehavior* __this, ::g::Fuse::Input::PointerEventArgs* args, double* __retval);
void CircularRangeBehavior__SetDegreesValue_fn(CircularRangeBehavior* __this, float* value, uObject* origin);
void CircularRangeBehavior__get_StartAngleDegrees_fn(CircularRangeBehavior* __this, float* __retval);
void CircularRangeBehavior__set_StartAngleDegrees_fn(CircularRangeBehavior* __this, float* value);
void CircularRangeBehavior__UpdateValue_fn(CircularRangeBehavior* __this, double* angle, double* radius);

struct CircularRangeBehavior : ::g::Fuse::Behavior
{
    uStrong< ::g::Fuse::Elements::Element*> _control;
    uStrong< ::g::Fuse::Controls::RangeControl*> _rangeControl;
    uStrong< ::g::Fuse::Controls::RangeControl2D*> _binaryRangeControl;
    float _startAngle;
    float _endAngle;
    float _minimumRadius;
    float _maximumRadius;
    bool _wrap;
    uStrong< ::g::Fuse::Input::Gesture*> _gesture;
    int32_t _gesturePriority;
    ::g::Fuse::Gestures::double2 _initialValue;
    double _initialAngle;
    double _initialRadius;
    ::g::Uno::Float2 _initialCoord;
    ::g::Uno::Float2 _currentCoord;
    int32_t _down;
    static ::g::Uno::UX::Selector _valueName_;
    static ::g::Uno::UX::Selector& _valueName() { return CircularRangeBehavior_typeof()->Init(), _valueName_; }
    static ::g::Uno::UX::Selector _degreesValueName_;
    static ::g::Uno::UX::Selector& _degreesValueName() { return CircularRangeBehavior_typeof()->Init(), _degreesValueName_; }
    uStrong<uDelegate*> DegreesValueChanged1;

    void ctor_3();
    double Angle(::g::Fuse::Input::PointerEventArgs* args);
    ::g::Uno::Float2 AngleRange();
    ::g::Fuse::Gestures::double2 ControlRelativeValue();
    void ControlRelativeValue(::g::Fuse::Gestures::double2 value);
    double CurrentRadius();
    float DegreesValue();
    void DegreesValue(float value);
    void add_DegreesValueChanged(uDelegate* value);
    void remove_DegreesValueChanged(uDelegate* value);
    float EndAngleDegrees();
    void EndAngleDegrees(float value);
    int32_t GesturePriority();
    void GesturePriority(int32_t value);
    bool IsWrapping();
    void IsWrapping(bool value);
    ::g::Uno::Float2 LocalVector(::g::Fuse::Input::PointerEventArgs* args);
    float MaximumRadius();
    void MaximumRadius(float value);
    float MinimumRadius();
    void MinimumRadius(float value);
    void OnValueChanged(uObject* s, uObject* args);
    double Radius(::g::Fuse::Input::PointerEventArgs* args);
    void SetDegreesValue(float value, uObject* origin);
    float StartAngleDegrees();
    void StartAngleDegrees(float value);
    void UpdateValue(double angle, double radius);
    static CircularRangeBehavior* New2();
};
// }

}}} // ::g::Fuse::Gestures
