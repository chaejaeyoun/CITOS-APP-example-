// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Fuse.Controls.Panels/1.9.0/TreeRendererPanel.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
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
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewHandle;}}}}
namespace g{namespace Fuse{namespace Controls{struct TreeRenderer;}}}
namespace g{namespace Fuse{namespace Controls{struct TreeRendererPanel;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed extern class TreeRendererPanel :15
// {
::g::Fuse::Controls::Panel_type* TreeRendererPanel_typeof();
void TreeRendererPanel__ctor_7_fn(TreeRendererPanel* __this, uObject* nativeViewHost);
void TreeRendererPanel__ClearRoot_fn(TreeRendererPanel* __this, ::g::Fuse::Controls::Native::ViewHandle* viewHandle);
void TreeRendererPanel__New4_fn(uObject* nativeViewHost, TreeRendererPanel** __retval);
void TreeRendererPanel__SetRoot_fn(TreeRendererPanel* __this, ::g::Fuse::Controls::Native::ViewHandle* viewHandle);
void TreeRendererPanel__get_TreeRenderer_fn(TreeRendererPanel* __this, uObject** __retval);
void TreeRendererPanel__get_VisualContext_fn(TreeRendererPanel* __this, int32_t* __retval);

struct TreeRendererPanel : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Controls::TreeRenderer*> _treeRenderer;
    uStrong<uObject*> _nativeViewHost;

    void ctor_7(uObject* nativeViewHost);
    void ClearRoot(::g::Fuse::Controls::Native::ViewHandle* viewHandle);
    void SetRoot(::g::Fuse::Controls::Native::ViewHandle* viewHandle);
    static TreeRendererPanel* New4(uObject* nativeViewHost);
};
// }

}}} // ::g::Fuse::Controls
