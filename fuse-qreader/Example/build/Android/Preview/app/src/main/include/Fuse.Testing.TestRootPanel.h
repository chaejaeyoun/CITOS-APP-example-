// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Fuse.Testing/1.9.0/TestRootPanel.uno.
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
namespace g{namespace Fuse{namespace Testing{struct TestFailedException;}}}
namespace g{namespace Fuse{namespace Testing{struct TestRootPanel;}}}
namespace g{namespace Fuse{namespace Testing{struct TestRootViewport;}}}
namespace g{namespace Fuse{struct Diagnostic;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Testing{

// public sealed class TestRootPanel :54
// {
::g::Fuse::Controls::Panel_type* TestRootPanel_typeof();
void TestRootPanel__ctor_7_fn(TestRootPanel* __this);
void TestRootPanel__FindTestFailedException_fn(TestRootPanel* __this, ::g::Uno::Exception* e, ::g::Fuse::Testing::TestFailedException** __retval);
void TestRootPanel__IncrementFrameImpl_fn(TestRootPanel* __this, float* elapsedTime, int32_t* flags);
void TestRootPanel__New4_fn(TestRootPanel** __retval);
void TestRootPanel__OnDiagnostic_fn(TestRootPanel* __this, ::g::Fuse::Diagnostic* d);
void TestRootPanel__get_RootViewport_fn(TestRootPanel* __this, ::g::Fuse::Testing::TestRootViewport** __retval);
void TestRootPanel__RunTest_fn(TestRootPanel* __this);
void TestRootPanel__StepFrameJS_fn(TestRootPanel* __this);

struct TestRootPanel : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Testing::TestRootViewport*> _rootViewport;
    uStrong< ::g::Uno::Collections::List*> _errors;
    float _frameIncrement;

    void ctor_7();
    ::g::Fuse::Testing::TestFailedException* FindTestFailedException(::g::Uno::Exception* e);
    void IncrementFrameImpl(float elapsedTime, int32_t flags);
    void OnDiagnostic(::g::Fuse::Diagnostic* d);
    ::g::Fuse::Testing::TestRootViewport* RootViewport();
    void RunTest();
    void StepFrameJS();
    static TestRootPanel* New4();
};
// }

}}} // ::g::Fuse::Testing
