// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Fuse.Animations/1.9.0/Mixer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IMixerHandle-1.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct MasterBase;}}}
namespace g{namespace Fuse{namespace Animations{struct MixerHandle;}}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class MixerHandle<T> :360
// {
struct MixerHandle_type : uType
{
    ::g::Fuse::Animations::IMixerHandle interface0;
};

MixerHandle_type* MixerHandle_typeof();
void MixerHandle__ctor__fn(MixerHandle* __this, ::g::Fuse::Animations::MasterBase* master, int32_t* mode, int32_t* priority);
void MixerHandle__get_HasValue_fn(MixerHandle* __this, bool* __retval);
void MixerHandle__get_MixOp_fn(MixerHandle* __this, int32_t* __retval);
void MixerHandle__set_MixOp_fn(MixerHandle* __this, int32_t* value);
void MixerHandle__New1_fn(uType* __type, ::g::Fuse::Animations::MasterBase* master, int32_t* mode, int32_t* priority, MixerHandle** __retval);
void MixerHandle__get_Priority_fn(MixerHandle* __this, int32_t* __retval);
void MixerHandle__set_Priority_fn(MixerHandle* __this, int32_t* value);
void MixerHandle__get_RestValue_fn(MixerHandle* __this, uTRef __retval);
void MixerHandle__Set_fn(MixerHandle* __this, void* value, float* strength);
void MixerHandle__Unregister_fn(MixerHandle* __this);

struct MixerHandle : uObject
{
    uTField Value() { return __type->Field(this, 0); }
    float Strength;
    bool _hasValue;
    uStrong< ::g::Fuse::Animations::MasterBase*> Master;
    int32_t _MixOp;
    int32_t _Priority;

    void ctor_(::g::Fuse::Animations::MasterBase* master, int32_t mode, int32_t priority);
    bool HasValue();
    int32_t MixOp();
    void MixOp(int32_t value);
    int32_t Priority();
    void Priority(int32_t value);
    template<class T>
    T RestValue() { T __retval; return MixerHandle__get_RestValue_fn(this, &__retval), __retval; }
    template<class T>
    void Set(T value, float strength) { MixerHandle__Set_fn(this, uConstrain(__type->T(0), value), &strength); }
    void Unregister();
    static MixerHandle* New1(uType* __type, ::g::Fuse::Animations::MasterBase* master, int32_t mode, int32_t priority);
};
// }

}}} // ::g::Fuse::Animations
