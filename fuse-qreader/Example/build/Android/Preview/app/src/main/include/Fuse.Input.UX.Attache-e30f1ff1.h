// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Fuse.Nodes/1.9.0/Input/UX/AttachedFocusMembers.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Input{namespace UX{struct AttachedFocusMembers;}}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Input{
namespace UX{

// public static class AttachedFocusMembers :5
// {
uClassType* AttachedFocusMembers_typeof();
void AttachedFocusMembers__AddFocusGainedHandler_fn(::g::Fuse::Visual* node, uDelegate* handler);
void AttachedFocusMembers__AddFocusLostHandler_fn(::g::Fuse::Visual* node, uDelegate* handler);
void AttachedFocusMembers__RemoveFocusGainedHandler_fn(::g::Fuse::Visual* node, uDelegate* handler);
void AttachedFocusMembers__RemoveFocusLostHandler_fn(::g::Fuse::Visual* node, uDelegate* handler);

struct AttachedFocusMembers : uObject
{
    static void AddFocusGainedHandler(::g::Fuse::Visual* node, uDelegate* handler);
    static void AddFocusLostHandler(::g::Fuse::Visual* node, uDelegate* handler);
    static void RemoveFocusGainedHandler(::g::Fuse::Visual* node, uDelegate* handler);
    static void RemoveFocusLostHandler(::g::Fuse::Visual* node, uDelegate* handler);
};
// }

}}}} // ::g::Fuse::Input::UX
