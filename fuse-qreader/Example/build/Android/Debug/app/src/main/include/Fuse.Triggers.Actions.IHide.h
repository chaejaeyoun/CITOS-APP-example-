// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Fuse.Triggers/1.9.0/Actions/Visibility.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public abstract interface IHide :42
// {
uInterfaceType* IHide_typeof();

struct IHide
{
    void(*fp_Hide)(uObject*);
    static void Hide(const uInterface& __this) { __this.VTable<IHide>()->fp_Hide(__this); }
};
// }

}}}} // ::g::Fuse::Triggers::Actions
