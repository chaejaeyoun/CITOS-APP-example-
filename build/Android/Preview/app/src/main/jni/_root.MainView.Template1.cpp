// This file was generated based on /Users/devel/github/CITOS-APP/build/Android/Preview/cache/ux15/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Home.h>
#include <_root.MainView.h>
#include <_root.MainView.Template1.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Node.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[2];

namespace g{

// public partial sealed class MainView.Template1 :28
// {
// static Template1() :37
static void MainView__Template1__cctor__fn(uType* __type)
{
    MainView__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Home"*/]);
}

static void MainView__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Home");
    ::STRINGS[1] = uString::Const("MainView.ux");
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(MainView__Template1, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(MainView__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template1::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template1__New2_fn, 0, true, type, 2, ::g::MainView_typeof(), ::g::MainView_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(MainView__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template1", options);
    type->fp_build_ = MainView__Template1_build;
    type->fp_cctor_ = MainView__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template1__New1_fn;
    return type;
}

// public Template1(MainView parent, MainView parentInstance) :32
void MainView__Template1__ctor_1_fn(MainView__Template1* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :40
void MainView__Template1__New1_fn(MainView__Template1* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template1", "New()");
    ::g::Home* __self1 = ::g::Home::New5(uPtr(__this->__parent1)->router);
    __self1->Name(MainView__Template1::__selector0_);
    __self1->SourceLineNumber(8);
    __self1->SourceFileName(::STRINGS[1/*"MainView.ux"*/]);
    return *__retval = __self1, void();
}

// public Template1 New(MainView parent, MainView parentInstance) :32
void MainView__Template1__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template1** __retval)
{
    *__retval = MainView__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MainView__Template1::__selector0_;

// public Template1(MainView parent, MainView parentInstance) [instance] :32
void MainView__Template1::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(::STRINGS[0/*"Home"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(MainView parent, MainView parentInstance) [static] :32
MainView__Template1* MainView__Template1::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template1* obj1 = (MainView__Template1*)uNew(MainView__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
