// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Fuse.Motion/1.9.0/MotionConfig.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct BasicBoundedRegion2D;}}}}
namespace g{namespace Fuse{namespace Motion{struct DestinationMotion;}}}
namespace g{namespace Fuse{namespace Motion{struct MotionConfig;}}}

namespace g{
namespace Fuse{
namespace Motion{

// public class MotionConfig :16
// {
uType* MotionConfig_typeof();
void MotionConfig__ctor__fn(MotionConfig* __this);
void MotionConfig__AcquireSimulation_fn(MotionConfig* __this, uObject** __retval);
void MotionConfig__CreateImpl_fn(MotionConfig* __this);
void MotionConfig__get_Goto_fn(MotionConfig* __this, ::g::Fuse::Motion::DestinationMotion** __retval);
void MotionConfig__get_Overflow_fn(MotionConfig* __this, int32_t* __retval);
void MotionConfig__set_Overflow_fn(MotionConfig* __this, int32_t* value);
void MotionConfig__get_OverflowExtent_fn(MotionConfig* __this, ::g::Uno::Float2* __retval);
void MotionConfig__set_OverflowExtent_fn(MotionConfig* __this, ::g::Uno::Float2* value);
void MotionConfig__ReleaseSimulation_fn(MotionConfig* __this);
void MotionConfig__get_Snap_fn(MotionConfig* __this, ::g::Fuse::Motion::DestinationMotion** __retval);
void MotionConfig__get_Unit_fn(MotionConfig* __this, int32_t* __retval);
void MotionConfig__set_Unit_fn(MotionConfig* __this, int32_t* value);

struct MotionConfig : uObject
{
    uStrong< ::g::Fuse::Motion::Simulation::BasicBoundedRegion2D*> _impl;
    uStrong< ::g::Fuse::Motion::DestinationMotion*> _goto;
    uStrong< ::g::Fuse::Motion::DestinationMotion*> _snap;
    int32_t _overflow;
    ::g::Uno::Float2 _overflowExtent;

    void ctor_();
    uObject* AcquireSimulation();
    void CreateImpl();
    ::g::Fuse::Motion::DestinationMotion* Goto();
    int32_t Overflow();
    void Overflow(int32_t value);
    ::g::Uno::Float2 OverflowExtent();
    void OverflowExtent(::g::Uno::Float2 value);
    void ReleaseSimulation();
    ::g::Fuse::Motion::DestinationMotion* Snap();
    int32_t Unit();
    void Unit(int32_t value);
};
// }

}}} // ::g::Fuse::Motion
