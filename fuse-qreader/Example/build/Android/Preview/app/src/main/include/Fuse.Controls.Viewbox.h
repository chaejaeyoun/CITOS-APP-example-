// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Fuse.Controls/1.9.0/Viewbox.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.ContentControl.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float2.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Viewbox;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Internal{struct SizingContainer;}}}
namespace g{namespace Fuse{struct FastMatrix;}}
namespace g{namespace Fuse{struct LayoutParams;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Viewbox :28
// {
::g::Fuse::Controls::ContentControl_type* Viewbox_typeof();
void Viewbox__ctor_6_fn(Viewbox* __this);
void Viewbox__ArrangePaddingBox_fn(Viewbox* __this, ::g::Fuse::LayoutParams* lp);
void Viewbox__get_Content1_fn(Viewbox* __this, ::g::Fuse::Elements::Element** __retval);
void Viewbox__set_Content1_fn(Viewbox* __this, ::g::Fuse::Elements::Element* value);
void Viewbox__GetContentSize_fn(Viewbox* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void Viewbox__GetNaturalContentSize_fn(Viewbox* __this, ::g::Uno::Float2* __retval);
void Viewbox__IsMarginBoxDependent_fn(Viewbox* __this, ::g::Fuse::Visual* child, int32_t* __retval);
void Viewbox__New3_fn(Viewbox** __retval);
void Viewbox__OnSizingChanged_fn(Viewbox* __this);
void Viewbox__PrependImplicitTransform_fn(Viewbox* __this, ::g::Fuse::FastMatrix* m);
void Viewbox__get_StretchDirection_fn(Viewbox* __this, int32_t* __retval);
void Viewbox__set_StretchDirection_fn(Viewbox* __this, int32_t* value);
void Viewbox__get_StretchMode_fn(Viewbox* __this, int32_t* __retval);
void Viewbox__set_StretchMode_fn(Viewbox* __this, int32_t* value);

struct Viewbox : ::g::Fuse::Controls::ContentControl
{
    uStrong< ::g::Fuse::Internal::SizingContainer*> sizing;
    ::g::Uno::Float2 _scale;

    void ctor_6();
    ::g::Fuse::Elements::Element* Content1();
    void Content1(::g::Fuse::Elements::Element* value);
    ::g::Uno::Float2 GetNaturalContentSize();
    void OnSizingChanged();
    int32_t StretchDirection();
    void StretchDirection(int32_t value);
    int32_t StretchMode();
    void StretchMode(int32_t value);
    static Viewbox* New3();
};
// }

}}} // ::g::Fuse::Controls
