// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Fuse.Animations/1.9.0/Mixer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct Mixer;}}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class Mixer :35
// {
uType* Mixer_typeof();
void Mixer__get_Default_fn(uObject** __retval);
void Mixer__get_DefaultDiscrete_fn(uObject** __retval);

struct Mixer : uObject
{
    static uSStrong<uObject*> _default_;
    static uSStrong<uObject*>& _default() { return Mixer_typeof()->Init(), _default_; }
    static uSStrong<uObject*> _defaultDiscrete_;
    static uSStrong<uObject*>& _defaultDiscrete() { return Mixer_typeof()->Init(), _defaultDiscrete_; }

    static uObject* Default();
    static uObject* DefaultDiscrete();
};
// }

}}} // ::g::Fuse::Animations
