// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseScriptingJa-49e3cee5.h>
#include <Fuse.Diagnostic.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.DiagnosticType.h>
#include <Fuse.Marshal.h>
#include <Fuse.MarshalException.h>
#include <Fuse.Reactive.Console.h>
#include <Fuse.Reactive.DebugLog.h>
#include <Fuse.Reactive.FuseJS.-3aad2ff1.h>
#include <Fuse.Reactive.FuseJS.-56ee06ad.h>
#include <Fuse.Reactive.FuseJS.-59912064.h>
#include <Fuse.Reactive.FuseJS.-61f763fd.h>
#include <Fuse.Reactive.FuseJS.-7e6c8c53.h>
#include <Fuse.Reactive.FuseJS.-80396262.h>
#include <Fuse.Reactive.FuseJS.-8e53076b.h>
#include <Fuse.Reactive.FuseJS.-97046318.h>
#include <Fuse.Reactive.FuseJS.-a20c352e.h>
#include <Fuse.Reactive.FuseJS.-bbc0df6b.h>
#include <Fuse.Reactive.FuseJS.Builtins.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.EventE-d4b465f0.h>
#include <Fuse.Scripting.FileModule.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.IThreadWorker.h>
#include <Fuse.Scripting.JSCallback.h>
#include <Fuse.Scripting.Module.h>
#include <Fuse.Scripting.ModuleResult.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.Value.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Action2-2.h>
#include <Uno.Action4-4.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Enume-8ddd045.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.List--251bdc7d.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Func-1.h>
#include <Uno.Func1-2.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.InvalidOperationException.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.StringReader.h>
#include <Uno.IO.TextReader.h>
#include <Uno.Long.h>
#include <Uno.Net.Http.HttpMess-1d2e0b2f.h>
#include <Uno.Net.Http.HttpMess-8a5feb56.h>
#include <Uno.Net.Http.HttpRequestState.h>
#include <Uno.Net.Http.HttpResponseType.h>
#include <Uno.Net.Http.HttpStat-138f9460.h>
#include <Uno.Net.Http.InvalidR-d0abcd6.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[45];
static uType* TYPES[35];

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// C:\Users\채재윤융합IT학부\AppData\Local\Fusetools\Packages\Fuse.Scripting.JavaScript\1.9.0\FuseJS\Http.uno
// ---------------------------------------------------------------------------------------------------

// private sealed class Http.HttpJSDispatcher.ActionClosure :39
// {
static void Http__HttpJSDispatcher__ActionClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(Http__HttpJSDispatcher__ActionClosure, _action), 0);
}

uType* Http__HttpJSDispatcher__ActionClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Http__HttpJSDispatcher__ActionClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Http.HttpJSDispatcher.ActionClosure", options);
    type->fp_build_ = Http__HttpJSDispatcher__ActionClosure_build;
    return type;
}

// public ActionClosure(Uno.Action action) :43
void Http__HttpJSDispatcher__ActionClosure__ctor__fn(Http__HttpJSDispatcher__ActionClosure* __this, uDelegate* action)
{
    __this->ctor_(action);
}

// public ActionClosure New(Uno.Action action) :43
void Http__HttpJSDispatcher__ActionClosure__New1_fn(uDelegate* action, Http__HttpJSDispatcher__ActionClosure** __retval)
{
    *__retval = Http__HttpJSDispatcher__ActionClosure::New1(action);
}

// public void Run(Fuse.Scripting.Context context) :48
void Http__HttpJSDispatcher__ActionClosure__Run_fn(Http__HttpJSDispatcher__ActionClosure* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->Run(context);
}

// public ActionClosure(Uno.Action action) [instance] :43
void Http__HttpJSDispatcher__ActionClosure::ctor_(uDelegate* action)
{
    _action = action;
}

// public void Run(Fuse.Scripting.Context context) [instance] :48
void Http__HttpJSDispatcher__ActionClosure::Run(::g::Fuse::Scripting::Context* context)
{
    uPtr(_action)->InvokeVoid();
}

// public ActionClosure New(Uno.Action action) [static] :43
Http__HttpJSDispatcher__ActionClosure* Http__HttpJSDispatcher__ActionClosure::New1(uDelegate* action)
{
    Http__HttpJSDispatcher__ActionClosure* obj1 = (Http__HttpJSDispatcher__ActionClosure*)uNew(Http__HttpJSDispatcher__ActionClosure_typeof());
    obj1->ctor_(action);
    return obj1;
}
// }

// C:\Users\채재윤융합IT학부\AppData\Local\Fusetools\Packages\Fuse.Scripting.JavaScript\1.9.0\FuseJS\Builtins.uno
// -------------------------------------------------------------------------------------------------------

// internal sealed class Builtins :7
// {
static void Builtins_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FuseJS/Timer");
    ::STRINGS[1] = uString::Const("fuse-builtins: setTimeout");
    ::STRINGS[2] = uString::Const("Could not load setTimout function to context.");
    ::STRINGS[3] = uString::Const("fuse-builtins: es6-promise");
    ::STRINGS[4] = uString::Const("ES6Promise.polyfill();");
    ::STRINGS[5] = uString::Const("FuseJS/Diagnostics");
    ::STRINGS[6] = uString::Const("FuseJS/Observable");
    ::STRINGS[7] = uString::Const("FuseJS/TreeObservable");
    ::STRINGS[8] = uString::Const("fuse-builtins");
    ::STRINGS[9] = uString::Const("Date");
    ::STRINGS[10] = uString::Const("(function(ticks) { return new Date(ticks); })");
    ::STRINGS[11] = uString::Const("Polyfills/Window");
    ::TYPES[0] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Reactive::FuseJS::TimerModule_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[4] = ::g::Fuse::Scripting::Module_typeof();
    type->SetDependencies(
        ::g::FuseScriptingJavaScript_bundle_typeof(),
        ::g::Uno::UX::Resource_typeof());
    type->SetFields(0,
        ::TYPES[2/*Fuse.Scripting.Function*/], offsetof(Builtins, Observable), 0,
        ::TYPES[2/*Fuse.Scripting.Function*/], offsetof(Builtins, TreeObservable), 0,
        ::TYPES[2/*Fuse.Scripting.Function*/], offsetof(Builtins, EventEmitter), 0,
        ::TYPES[2/*Fuse.Scripting.Function*/], offsetof(Builtins, Date), 0,
        ::TYPES[2/*Fuse.Scripting.Function*/], offsetof(Builtins, DateCtor), 0,
        ::TYPES[1/*Fuse.Reactive.FuseJS.TimerModule*/], (uintptr_t)&Builtins::_timer_, uFieldFlagsStatic);
}

uType* Builtins_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Builtins);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Builtins", options);
    type->fp_build_ = Builtins_build;
    return type;
}

// internal Builtins(Fuse.Scripting.Context context) :17
void Builtins__ctor__fn(Builtins* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->ctor_(context);
}

// private static bool IsModule(object module) :61
void Builtins__IsModule_fn(uObject* module, bool* __retval)
{
    *__retval = Builtins::IsModule(module);
}

// internal Builtins New(Fuse.Scripting.Context context) :17
void Builtins__New1_fn(::g::Fuse::Scripting::Context* context, Builtins** __retval)
{
    *__retval = Builtins::New1(context);
}

// internal bool UpdateModules(Fuse.Scripting.Context context) :76
void Builtins__UpdateModules_fn(Builtins* __this, ::g::Fuse::Scripting::Context* context, bool* __retval)
{
    *__retval = __this->UpdateModules(context);
}

uSStrong< ::g::Fuse::Reactive::FuseJS::TimerModule*> Builtins::_timer_;

// internal Builtins(Fuse.Scripting.Context context) [instance] :17
void Builtins::ctor_(::g::Fuse::Scripting::Context* context)
{
    ::g::Fuse::Reactive::DebugLog::Init(context);
    ::g::Fuse::Reactive::Console::Init(context);
    uObject* res;

    if (::g::Uno::UX::Resource::TryFindGlobal(::STRINGS[0/*"FuseJS/Timer"*/], uDelegate::New(::TYPES[0/*Uno.Predicate<object>*/], (void*)Builtins__IsModule_fn), &res))
        Builtins::_timer_ = uCast< ::g::Fuse::Reactive::FuseJS::TimerModule*>(res, ::TYPES[1/*Fuse.Reactive.FuseJS.TimerModule*/]);
    else
        Builtins::_timer_ = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();

    ::g::Fuse::Scripting::Function* setTimout = uCast< ::g::Fuse::Scripting::Function*>(uPtr(context)->Evaluate(::STRINGS[1/*"fuse-builti...*/], uPtr(::g::FuseScriptingJavaScript_bundle::setTimeoutcd42f00f())->ReadAllText()), ::TYPES[2/*Fuse.Scripting.Function*/]);

    if ((setTimout != NULL) && (Builtins::_timer_ != NULL))
        uPtr(setTimout)->Call(context, uArray::Init<uObject*>(::TYPES[3/*object[]*/], 2, (uObject*)uPtr(Builtins::_timer_)->EvaluateExports(context, ::STRINGS[0/*"FuseJS/Timer"*/]), (::g::Fuse::Scripting::Object*)uPtr(context)->GlobalObject()));
    else
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"Could not l...*/]));

    context->Evaluate(::STRINGS[3/*"fuse-builti...*/], uPtr(::g::FuseScriptingJavaScript_bundle::es6promisemin01b0c727())->ReadAllText());
    context->Evaluate(::STRINGS[3/*"fuse-builti...*/], ::STRINGS[4/*"ES6Promise....*/]);
    ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule::New2();
    ::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::FileSource::op_Implicit1(::g::FuseScriptingJavaScript_bundle::Diagnostics53845d2e()))->EvaluateExports(context, ::STRINGS[5/*"FuseJS/Diag...*/]);
    Observable = uCast< ::g::Fuse::Scripting::Function*>(::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::FileSource::op_Implicit1(::g::FuseScriptingJavaScript_bundle::Observabled145fbdf()))->EvaluateExports(context, ::STRINGS[6/*"FuseJS/Obse...*/]), ::TYPES[2/*Fuse.Scripting.Function*/]);
    TreeObservable = uCast< ::g::Fuse::Scripting::Function*>(::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::FileSource::op_Implicit1(::g::FuseScriptingJavaScript_bundle::TreeObservablee217cda9()))->EvaluateExports(context, ::STRINGS[7/*"FuseJS/Tree...*/]), ::TYPES[2/*Fuse.Scripting.Function*/]);
    EventEmitter = ::g::Fuse::Scripting::EventEmitterModule::GetConstructor(context);
    Date = uCast< ::g::Fuse::Scripting::Function*>(context->Evaluate(::STRINGS[8/*"fuse-builtins"*/], ::STRINGS[9/*"Date"*/]), ::TYPES[2/*Fuse.Scripting.Function*/]);
    DateCtor = uCast< ::g::Fuse::Scripting::Function*>(context->Evaluate(::STRINGS[8/*"fuse-builtins"*/], ::STRINGS[10/*"(function(t...*/]), ::TYPES[2/*Fuse.Scripting.Function*/]);
    res = NULL;

    if (::g::Uno::UX::Resource::TryFindGlobal(::STRINGS[11/*"Polyfills/W...*/], uDelegate::New(::TYPES[0/*Uno.Predicate<object>*/], (void*)Builtins__IsModule_fn), &res))
        uPtr(uCast< ::g::Fuse::Scripting::Module*>(res, ::TYPES[4/*Fuse.Scripting.Module*/]))->Evaluate1(context, ::STRINGS[11/*"Polyfills/W...*/]);
}

// internal bool UpdateModules(Fuse.Scripting.Context context) [instance] :76
bool Builtins::UpdateModules(::g::Fuse::Scripting::Context* context)
{
    if (Builtins::_timer_ != NULL)
        return uPtr(Builtins::_timer_)->UpdateModule(context);

    return false;
}

// private static bool IsModule(object module) [static] :61
bool Builtins::IsModule(uObject* module)
{
    return uIs(module, ::TYPES[4/*Fuse.Scripting.Module*/]);
}

// internal Builtins New(Fuse.Scripting.Context context) [static] :17
Builtins* Builtins::New1(::g::Fuse::Scripting::Context* context)
{
    Builtins* obj1 = (Builtins*)uNew(Builtins_typeof());
    obj1->ctor_(context);
    return obj1;
}
// }

// C:\Users\채재윤융합IT학부\AppData\Local\Fusetools\Packages\Fuse.Scripting.JavaScript\1.9.0\FuseJS\Timer.uno
// ----------------------------------------------------------------------------------------------------

// private sealed class TimerModule.CallbackClosure :148
// {
static void TimerModule__CallbackClosure_build(uType* type)
{
    ::STRINGS[12] = uString::Const("func");
    ::STRINGS[13] = uString::Const("args");
    type->SetFields(0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(TimerModule__CallbackClosure, _func), 0,
        uObject_typeof()->Array(), offsetof(TimerModule__CallbackClosure, _args), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(TimerModule__CallbackClosure, _context), 0);
}

uType* TimerModule__CallbackClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(TimerModule__CallbackClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.TimerModule.CallbackClosure", options);
    type->fp_build_ = TimerModule__CallbackClosure_build;
    return type;
}

// public CallbackClosure(Fuse.Scripting.Context context, Fuse.Scripting.Function func, object[] args) :154
void TimerModule__CallbackClosure__ctor__fn(TimerModule__CallbackClosure* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args)
{
    __this->ctor_(context, func, args);
}

// public void Callback(Fuse.Scripting.Context context) :167
void TimerModule__CallbackClosure__Callback_fn(TimerModule__CallbackClosure* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->Callback(context);
}

// public CallbackClosure New(Fuse.Scripting.Context context, Fuse.Scripting.Function func, object[] args) :154
void TimerModule__CallbackClosure__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args, TimerModule__CallbackClosure** __retval)
{
    *__retval = TimerModule__CallbackClosure::New1(context, func, args);
}

// public CallbackClosure(Fuse.Scripting.Context context, Fuse.Scripting.Function func, object[] args) [instance] :154
void TimerModule__CallbackClosure::ctor_(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args)
{
    if (func == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[12/*"func"*/]));

    if (args == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[13/*"args"*/]));

    _context = context;
    _func = func;
    _args = args;
}

// public void Callback(Fuse.Scripting.Context context) [instance] :167
void TimerModule__CallbackClosure::Callback(::g::Fuse::Scripting::Context* context)
{
    uPtr(_func)->Call(context, _args);
}

// public CallbackClosure New(Fuse.Scripting.Context context, Fuse.Scripting.Function func, object[] args) [static] :154
TimerModule__CallbackClosure* TimerModule__CallbackClosure::New1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args)
{
    TimerModule__CallbackClosure* obj1 = (TimerModule__CallbackClosure*)uNew(TimerModule__CallbackClosure_typeof());
    obj1->ctor_(context, func, args);
    return obj1;
}
// }

// C:\Users\채재윤융합IT학부\AppData\Local\Fusetools\Packages\Fuse.Scripting.JavaScript\1.9.0\FuseJS\DiagnosticsImpl.uno
// --------------------------------------------------------------------------------------------------------------

// public sealed class DiagnosticsImplModule :12
// {
static void DiagnosticsImplModule_build(uType* type)
{
    ::STRINGS[14] = uString::Const("FuseJS/DiagnosticsImpl");
    ::STRINGS[15] = uString::Const("report");
    ::STRINGS[16] = uString::Const("Report requires 2 arguments");
    ::STRINGS[17] = uString::Const("C:\\Users\\\354\261\204\354\236\254\354\234\244\354\234\265\355\225\251IT\355\225\231\353\266\200\\AppData\\Local\\Fusetools\\Packages\\Fuse.Scripting.JavaScript\\1.9.0\\FuseJS\\DiagnosticsImpl.uno");
    ::STRINGS[18] = uString::Const("Report");
    ::TYPES[5] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[6] = ::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<Fuse.DiagnosticType>*/, ::g::Fuse::DiagnosticType_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&DiagnosticsImplModule::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* DiagnosticsImplModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DiagnosticsImplModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Reactive.FuseJS.DiagnosticsImplModule", options);
    type->fp_build_ = DiagnosticsImplModule_build;
    type->fp_ctor_ = (void*)DiagnosticsImplModule__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public DiagnosticsImplModule() :16
void DiagnosticsImplModule__ctor_2_fn(DiagnosticsImplModule* __this)
{
    __this->ctor_2();
}

// public DiagnosticsImplModule New() :16
void DiagnosticsImplModule__New2_fn(DiagnosticsImplModule** __retval)
{
    *__retval = DiagnosticsImplModule::New2();
}

// private object Report(Fuse.Scripting.Context context, object[] args) :26
void DiagnosticsImplModule__Report_fn(DiagnosticsImplModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Report(context, args);
}

uSStrong<DiagnosticsImplModule*> DiagnosticsImplModule::_instance_;

// public DiagnosticsImplModule() [instance] :16
void DiagnosticsImplModule::ctor_2()
{
    ctor_1();

    if (DiagnosticsImplModule::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(DiagnosticsImplModule::_instance_ = this, ::STRINGS[14/*"FuseJS/Diag...*/]);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[15/*"report"*/], uDelegate::New(::TYPES[5/*Fuse.Scripting.NativeCallback*/], (void*)DiagnosticsImplModule__Report_fn, this)));
}

// private object Report(Fuse.Scripting.Context context, object[] args) [instance] :26
uObject* DiagnosticsImplModule::Report(::g::Fuse::Scripting::Context* context, uArray* args)
{
    int32_t ret2;
    uString* ret3;

    if (uPtr(args)->Length() != 2)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[16/*"Report requ...*/], this, ::STRINGS[17/*"C:\\Users\\...*/], 30, ::STRINGS[18/*"Report"*/]);
        return NULL;
    }

    int32_t type = (::g::Fuse::Marshal__ToType_fn(::TYPES[6/*Fuse.Marshal.ToType<Fuse.DiagnosticType>*/], uPtr(args)->Strong<uObject*>(0), &ret2), ret2);
    uString* msg = (::g::Fuse::Marshal__ToType_fn(::TYPES[7/*Fuse.Marshal.ToType<string>*/], args->Strong<uObject*>(1), &ret3), ret3);
    ::g::Fuse::Diagnostics::Report(::g::Fuse::Diagnostic::New1(type, msg, NULL, NULL, 0, NULL, NULL));
    return NULL;
}

// public DiagnosticsImplModule New() [static] :16
DiagnosticsImplModule* DiagnosticsImplModule::New2()
{
    DiagnosticsImplModule* obj1 = (DiagnosticsImplModule*)uNew(DiagnosticsImplModule_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\Users\채재윤융합IT학부\AppData\Local\Fusetools\Packages\Fuse.Scripting.JavaScript\1.9.0\FuseJS\Http.uno
// ---------------------------------------------------------------------------------------------------

// private sealed class Http.FuseJSHttpClient :60
// {
static void Http__FuseJSHttpClient_build(uType* type)
{
    ::STRINGS[19] = uString::Const("createRequest");
    ::TYPES[8] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[9] = ::g::Uno::String_typeof();
    type->SetFields(0,
        ::g::Uno::Net::Http::HttpMessageHandler_typeof(), offsetof(Http__FuseJSHttpClient, _client), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(Http__FuseJSHttpClient, _context), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(Http__FuseJSHttpClient, _Obj), 0);
}

uType* Http__FuseJSHttpClient_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Http__FuseJSHttpClient);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Http.FuseJSHttpClient", options);
    type->fp_build_ = Http__FuseJSHttpClient_build;
    return type;
}

// public FuseJSHttpClient(Fuse.Scripting.Context context) :67
void Http__FuseJSHttpClient__ctor__fn(Http__FuseJSHttpClient* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->ctor_(context);
}

// private object CreateRequest(Fuse.Scripting.Context context, object[] args) :76
void Http__FuseJSHttpClient__CreateRequest_fn(Http__FuseJSHttpClient* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->CreateRequest(context, args);
}

// public FuseJSHttpClient New(Fuse.Scripting.Context context) :67
void Http__FuseJSHttpClient__New1_fn(::g::Fuse::Scripting::Context* context, Http__FuseJSHttpClient** __retval)
{
    *__retval = Http__FuseJSHttpClient::New1(context);
}

// public generated Fuse.Scripting.Object get_Obj() :62
void Http__FuseJSHttpClient__get_Obj_fn(Http__FuseJSHttpClient* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->Obj();
}

// private generated void set_Obj(Fuse.Scripting.Object value) :62
void Http__FuseJSHttpClient__set_Obj_fn(Http__FuseJSHttpClient* __this, ::g::Fuse::Scripting::Object* value)
{
    __this->Obj(value);
}

// public FuseJSHttpClient(Fuse.Scripting.Context context) [instance] :67
void Http__FuseJSHttpClient::ctor_(::g::Fuse::Scripting::Context* context)
{
    _context = context;
    _client = ::g::Uno::Net::Http::HttpMessageHandler::New1();
    Obj(uPtr(context)->NewObject());
    uPtr(Obj())->Item(::STRINGS[19/*"createRequest"*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpClient__CreateRequest_fn, this));
}

// private object CreateRequest(Fuse.Scripting.Context context, object[] args) [instance] :76
uObject* Http__FuseJSHttpClient::CreateRequest(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uString* method = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[9/*string*/]);
    uString* url = uAs<uString*>(args->Strong<uObject*>(1), ::TYPES[9/*string*/]);
    ::g::Fuse::Reactive::FuseJS::Http__HttpJSDispatcher* dispatcher = ::g::Fuse::Reactive::FuseJS::Http__HttpJSDispatcher::New1(uPtr(_context)->ThreadWorker());
    return ::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest::New1(_context, uPtr(_client)->CreateRequest1(method, url, (uObject*)dispatcher))->Obj();
}

// public generated Fuse.Scripting.Object get_Obj() [instance] :62
::g::Fuse::Scripting::Object* Http__FuseJSHttpClient::Obj()
{
    return _Obj;
}

// private generated void set_Obj(Fuse.Scripting.Object value) [instance] :62
void Http__FuseJSHttpClient::Obj(::g::Fuse::Scripting::Object* value)
{
    _Obj = value;
}

// public FuseJSHttpClient New(Fuse.Scripting.Context context) [static] :67
Http__FuseJSHttpClient* Http__FuseJSHttpClient::New1(::g::Fuse::Scripting::Context* context)
{
    Http__FuseJSHttpClient* obj1 = (Http__FuseJSHttpClient*)uNew(Http__FuseJSHttpClient_typeof());
    obj1->ctor_(context);
    return obj1;
}
// }

// C:\Users\채재윤융합IT학부\AppData\Local\Fusetools\Packages\Fuse.Scripting.JavaScript\1.9.0\FuseJS\Http.uno
// ---------------------------------------------------------------------------------------------------

// private sealed class Http.FuseJSHttpRequest :86
// {
static void Http__FuseJSHttpRequest_build(uType* type)
{
    ::STRINGS[20] = uString::Const("enableCache");
    ::STRINGS[21] = uString::Const("setTimeout");
    ::STRINGS[22] = uString::Const("setResponseType");
    ::STRINGS[23] = uString::Const("getResponseType");
    ::STRINGS[24] = uString::Const("sendAsync");
    ::STRINGS[25] = uString::Const("abort");
    ::STRINGS[26] = uString::Const("setHeader");
    ::STRINGS[27] = uString::Const("getResponseHeader");
    ::STRINGS[28] = uString::Const("getResponseHeaders");
    ::STRINGS[29] = uString::Const("getState");
    ::STRINGS[30] = uString::Const("getResponseStatus");
    ::STRINGS[31] = uString::Const("getResponseReasonPhrase");
    ::STRINGS[32] = uString::Const("getResponseContentString");
    ::STRINGS[33] = uString::Const("getResponseContentByteArray");
    ::STRINGS[34] = uString::Const("This operation is illegal after request has finished");
    ::STRINGS[35] = uString::Const("Unable to get header.");
    ::STRINGS[36] = uString::Const("onabort");
    ::STRINGS[37] = uString::Const("ondone");
    ::STRINGS[38] = uString::Const("onerror");
    ::STRINGS[39] = uString::Const("onprogress");
    ::STRINGS[40] = uString::Const("onstatechanged");
    ::STRINGS[41] = uString::Const("ontimeout");
    ::STRINGS[42] = uString::Const("buffer");
    ::TYPES[10] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[12] = ::g::Uno::Action4_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof(), NULL);
    ::TYPES[8] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[13] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(0/*FromAction<int>*/, ::g::Uno::Int_typeof(), NULL);
    ::TYPES[14] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL);
    ::TYPES[15] = ::g::Uno::Action_typeof();
    ::TYPES[16] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(1/*FromAction<string, string>*/, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[17] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[18] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(3/*FromFunc<string, string>*/, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[19] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[20] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(2/*FromFunc<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[21] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[22] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(2/*FromFunc<int>*/, ::g::Uno::Int_typeof(), NULL);
    ::TYPES[23] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Int_typeof(), NULL);
    ::TYPES[24] = ::g::Uno::Exception_typeof();
    ::TYPES[25] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[9] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[26] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[27] = ::g::Uno::Int_typeof();
    type->SetDependencies(
        ::g::Uno::Net::Http::HttpStatusReasonPhrase_typeof());
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(Http__FuseJSHttpRequest, _context), 0,
        ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), offsetof(Http__FuseJSHttpRequest, _req), 0,
        ::TYPES[9/*string*/], offsetof(Http__FuseJSHttpRequest, _cachedResponseHeaders), 0,
        uObject_typeof(), offsetof(Http__FuseJSHttpRequest, _cachedResponseContent), 0,
        ::TYPES[27/*int*/], offsetof(Http__FuseJSHttpRequest, _cachedResponseStatus), 0,
        ::g::Uno::Net::Http::HttpResponseType_typeof(), offsetof(Http__FuseJSHttpRequest, _cachedResponseType), 0,
        ::g::Uno::Net::Http::HttpRequestState_typeof(), offsetof(Http__FuseJSHttpRequest, _finalState), 0,
        ::TYPES[26/*Fuse.Scripting.Object*/], offsetof(Http__FuseJSHttpRequest, _Obj), 0);
}

uType* Http__FuseJSHttpRequest_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Http__FuseJSHttpRequest);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", options);
    type->fp_build_ = Http__FuseJSHttpRequest_build;
    return type;
}

// public FuseJSHttpRequest(Fuse.Scripting.Context context, Uno.Net.Http.HttpMessageHandlerRequest req) :103
void Http__FuseJSHttpRequest__ctor__fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req)
{
    __this->ctor_(context, req);
}

// private void Abort() :167
void Http__FuseJSHttpRequest__Abort_fn(Http__FuseJSHttpRequest* __this)
{
    __this->Abort();
}

// private void CheckIsAttached() :193
void Http__FuseJSHttpRequest__CheckIsAttached_fn(Http__FuseJSHttpRequest* __this)
{
    __this->CheckIsAttached();
}

// private void DetachRequest() :133
void Http__FuseJSHttpRequest__DetachRequest_fn(Http__FuseJSHttpRequest* __this)
{
    __this->DetachRequest();
}

// private object EnableCache(Fuse.Scripting.Context context, object[] args) :333
void Http__FuseJSHttpRequest__EnableCache_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->EnableCache(context, args);
}

// private object GetResponseContentByteArray(Fuse.Scripting.Context context, object[] args) :239
void Http__FuseJSHttpRequest__GetResponseContentByteArray_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->GetResponseContentByteArray(context, args);
}

// private string GetResponseContentString(Fuse.Scripting.Context context, object[] args) :224
void Http__FuseJSHttpRequest__GetResponseContentString_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uString** __retval)
{
    *__retval = __this->GetResponseContentString(context, args);
}

// private string GetResponseHeader(string key) :209
void Http__FuseJSHttpRequest__GetResponseHeader_fn(Http__FuseJSHttpRequest* __this, uString* key, uString** __retval)
{
    *__retval = __this->GetResponseHeader(key);
}

// private string GetResponseHeaders() :199
void Http__FuseJSHttpRequest__GetResponseHeaders_fn(Http__FuseJSHttpRequest* __this, uString** __retval)
{
    *__retval = __this->GetResponseHeaders();
}

// private object GetResponseReasonPhrase(Fuse.Scripting.Context context, object[] args) :360
void Http__FuseJSHttpRequest__GetResponseReasonPhrase_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->GetResponseReasonPhrase(context, args);
}

// private int GetResponseStatus() :350
void Http__FuseJSHttpRequest__GetResponseStatus_fn(Http__FuseJSHttpRequest* __this, int32_t* __retval)
{
    *__retval = __this->GetResponseStatus();
}

// private object GetResponseType(Fuse.Scripting.Context context, object[] args) :378
void Http__FuseJSHttpRequest__GetResponseType_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->GetResponseType(context, args);
}

// private object GetState(Fuse.Scripting.Context context, object[] args) :345
void Http__FuseJSHttpRequest__GetState_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->GetState(context, args);
}

// public FuseJSHttpRequest New(Fuse.Scripting.Context context, Uno.Net.Http.HttpMessageHandlerRequest req) :103
void Http__FuseJSHttpRequest__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req, Http__FuseJSHttpRequest** __retval)
{
    *__retval = Http__FuseJSHttpRequest::New1(context, req);
}

// public generated Fuse.Scripting.Object get_Obj() :88
void Http__FuseJSHttpRequest__get_Obj_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->Obj();
}

// private generated void set_Obj(Fuse.Scripting.Object value) :88
void Http__FuseJSHttpRequest__set_Obj_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Object* value)
{
    __this->Obj(value);
}

// private void OnAbort(Uno.Net.Http.HttpMessageHandlerRequest res) :254
void Http__FuseJSHttpRequest__OnAbort_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    __this->OnAbort(res);
}

// private void OnDone(Uno.Net.Http.HttpMessageHandlerRequest res) :285
void Http__FuseJSHttpRequest__OnDone_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    __this->OnDone(res);
}

// private void OnError(Uno.Net.Http.HttpMessageHandlerRequest res, string error) :262
void Http__FuseJSHttpRequest__OnError_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res, uString* error)
{
    __this->OnError(res, error);
}

// private void OnProgress(Uno.Net.Http.HttpMessageHandlerRequest res, int current, int total, bool hastotal) :293
void Http__FuseJSHttpRequest__OnProgress_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res, int32_t* current, int32_t* total, bool* hastotal)
{
    __this->OnProgress(res, *current, *total, *hastotal);
}

// private void OnStateChanged(Uno.Net.Http.HttpMessageHandlerRequest res) :278
void Http__FuseJSHttpRequest__OnStateChanged_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    __this->OnStateChanged(res);
}

// private void OnTimeout(Uno.Net.Http.HttpMessageHandlerRequest res) :270
void Http__FuseJSHttpRequest__OnTimeout_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    __this->OnTimeout(res);
}

// private object SendAsync(Fuse.Scripting.Context context, object[] args) :300
void Http__FuseJSHttpRequest__SendAsync_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->SendAsync(context, args);
}

// private void SetHeader(string key, string value) :181
void Http__FuseJSHttpRequest__SetHeader_fn(Http__FuseJSHttpRequest* __this, uString* key, uString* value)
{
    __this->SetHeader(key, value);
}

// private object SetResponseType(Fuse.Scripting.Context context, object[] args) :365
void Http__FuseJSHttpRequest__SetResponseType_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->SetResponseType(context, args);
}

// private void SetTimeout(int timeout) :187
void Http__FuseJSHttpRequest__SetTimeout_fn(Http__FuseJSHttpRequest* __this, int32_t* timeout)
{
    __this->SetTimeout(*timeout);
}

// public FuseJSHttpRequest(Fuse.Scripting.Context context, Uno.Net.Http.HttpMessageHandlerRequest req) [instance] :103
void Http__FuseJSHttpRequest::ctor_(::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req)
{
    _context = context;
    _req = req;
    Obj(uPtr(context)->NewObject());
    uPtr(_req)->add_Aborted(uDelegate::New(::TYPES[10/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnAbort_fn, this));
    uPtr(_req)->add_Error(uDelegate::New(::TYPES[11/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string>*/], (void*)Http__FuseJSHttpRequest__OnError_fn, this));
    uPtr(_req)->add_Timeout(uDelegate::New(::TYPES[10/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnTimeout_fn, this));
    uPtr(_req)->add_Done(uDelegate::New(::TYPES[10/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnDone_fn, this));
    uPtr(_req)->add_StateChanged(uDelegate::New(::TYPES[10/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnStateChanged_fn, this));
    uPtr(_req)->add_Progress(uDelegate::New(::TYPES[12/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool>*/], (void*)Http__FuseJSHttpRequest__OnProgress_fn, this));
    uPtr(Obj())->Item(::STRINGS[20/*"enableCache"*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__EnableCache_fn, this));
    uPtr(Obj())->Item(::STRINGS[21/*"setTimeout"*/], ::g::Fuse::Scripting::JSCallback::FromAction1(::TYPES[13/*Fuse.Scripting.JSCallback.FromAction<int>*/], uDelegate::New(::TYPES[14/*Uno.Action<int>*/], (void*)Http__FuseJSHttpRequest__SetTimeout_fn, this)));
    uPtr(Obj())->Item(::STRINGS[22/*"setResponse...*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__SetResponseType_fn, this));
    uPtr(Obj())->Item(::STRINGS[23/*"getResponse...*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__GetResponseType_fn, this));
    uPtr(Obj())->Item(::STRINGS[24/*"sendAsync"*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__SendAsync_fn, this));
    uPtr(Obj())->Item(::STRINGS[25/*"abort"*/], ::g::Fuse::Scripting::JSCallback::FromAction(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)Http__FuseJSHttpRequest__Abort_fn, this)));
    uPtr(Obj())->Item(::STRINGS[26/*"setHeader"*/], ::g::Fuse::Scripting::JSCallback::FromAction2(::TYPES[16/*Fuse.Scripting.JSCallback.FromAction<string, string>*/], uDelegate::New(::TYPES[17/*Uno.Action<string, string>*/], (void*)Http__FuseJSHttpRequest__SetHeader_fn, this)));
    uPtr(Obj())->Item(::STRINGS[27/*"getResponse...*/], ::g::Fuse::Scripting::JSCallback::FromFunc1(::TYPES[18/*Fuse.Scripting.JSCallback.FromFunc<string, string>*/], uDelegate::New(::TYPES[19/*Uno.Func<string, string>*/], (void*)Http__FuseJSHttpRequest__GetResponseHeader_fn, this)));
    uPtr(Obj())->Item(::STRINGS[28/*"getResponse...*/], ::g::Fuse::Scripting::JSCallback::FromFunc(::TYPES[20/*Fuse.Scripting.JSCallback.FromFunc<string>*/], uDelegate::New(::TYPES[21/*Uno.Func<string>*/], (void*)Http__FuseJSHttpRequest__GetResponseHeaders_fn, this)));
    uPtr(Obj())->Item(::STRINGS[29/*"getState"*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__GetState_fn, this));
    uPtr(Obj())->Item(::STRINGS[30/*"getResponse...*/], ::g::Fuse::Scripting::JSCallback::FromFunc(::TYPES[22/*Fuse.Scripting.JSCallback.FromFunc<int>*/], uDelegate::New(::TYPES[23/*Uno.Func<int>*/], (void*)Http__FuseJSHttpRequest__GetResponseStatus_fn, this)));
    uPtr(Obj())->Item(::STRINGS[31/*"getResponse...*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__GetResponseReasonPhrase_fn, this));
    uPtr(Obj())->Item(::STRINGS[32/*"getResponse...*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__GetResponseContentString_fn, this));
    uPtr(Obj())->Item(::STRINGS[33/*"getResponse...*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__GetResponseContentByteArray_fn, this));
}

// private void Abort() [instance] :167
void Http__FuseJSHttpRequest::Abort()
{
    if (_req == NULL)
        return;

    if (uPtr(_req)->State() < 5)
    {
        try
        {
            {
                uPtr(_req)->Abort();
            }
        }

        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* exception_ = __t.Exception;
        }
    }
}

// private void CheckIsAttached() [instance] :193
void Http__FuseJSHttpRequest::CheckIsAttached()
{
    if (_req == NULL)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[34/*"This operat...*/]));
}

// private void DetachRequest() [instance] :133
void Http__FuseJSHttpRequest::DetachRequest()
{
    _finalState = uPtr(_req)->State();
    _cachedResponseType = uPtr(_req)->HttpResponseType();

    if (_finalState == 5)
    {
        GetResponseHeaders();
        GetResponseStatus();

        switch (uPtr(_req)->HttpResponseType())
        {
            case 1:
            {
                GetResponseContentByteArray(_context, NULL);
                break;
            }
            case 0:
            {
                GetResponseContentString(_context, NULL);
                break;
            }
        }
    }

    uPtr(_req)->remove_Aborted(uDelegate::New(::TYPES[10/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnAbort_fn, this));
    uPtr(_req)->remove_Error(uDelegate::New(::TYPES[11/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string>*/], (void*)Http__FuseJSHttpRequest__OnError_fn, this));
    uPtr(_req)->remove_Timeout(uDelegate::New(::TYPES[10/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnTimeout_fn, this));
    uPtr(_req)->remove_Done(uDelegate::New(::TYPES[10/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnDone_fn, this));
    uPtr(_req)->remove_StateChanged(uDelegate::New(::TYPES[10/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnStateChanged_fn, this));
    uPtr(_req)->remove_Progress(uDelegate::New(::TYPES[12/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool>*/], (void*)Http__FuseJSHttpRequest__OnProgress_fn, this));
    uPtr(_req)->Dispose();
    _req = NULL;
    Obj(NULL);
}

// private object EnableCache(Fuse.Scripting.Context context, object[] args) [instance] :333
uObject* Http__FuseJSHttpRequest::EnableCache(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() > 0)
        uPtr(_req)->EnableCache(uUnbox<bool>(::g::Uno::Bool_typeof(), uPtr(args)->Strong<uObject*>(0)));

    return NULL;
}

// private object GetResponseContentByteArray(Fuse.Scripting.Context context, object[] args) [instance] :239
uObject* Http__FuseJSHttpRequest::GetResponseContentByteArray(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (_cachedResponseContent == NULL)
    {
        CheckIsAttached();
        _cachedResponseContent = uPtr(_req)->GetResponseContentByteArray();
    }

    uArray* contentAsBytes = uAs<uArray*>(_cachedResponseContent, ::TYPES[25/*byte[]*/]);

    if (contentAsBytes == NULL)
        U_THROW(::g::Uno::Net::Http::InvalidResponseTypeException::New4());

    return contentAsBytes;
}

// private string GetResponseContentString(Fuse.Scripting.Context context, object[] args) [instance] :224
uString* Http__FuseJSHttpRequest::GetResponseContentString(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (_cachedResponseContent == NULL)
    {
        CheckIsAttached();
        _cachedResponseContent = uPtr(_req)->GetResponseContentString();
    }

    uString* contentAsString = uAs<uString*>(_cachedResponseContent, ::TYPES[9/*string*/]);

    if (::g::Uno::String::op_Equality(contentAsString, NULL))
        U_THROW(::g::Uno::Net::Http::InvalidResponseTypeException::New4());

    return contentAsString;
}

// private string GetResponseHeader(string key) [instance] :209
uString* Http__FuseJSHttpRequest::GetResponseHeader(uString* key)
{
    if (_req != NULL)
        return uPtr(_req)->GetResponseHeader(key);

    if (::g::Uno::String::op_Equality(_cachedResponseHeaders, NULL))
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[35/*"Unable to g...*/]));

    return ::g::Fuse::Reactive::FuseJS::HttpHeaders::New1(_cachedResponseHeaders)->GetValue(key);
}

// private string GetResponseHeaders() [instance] :199
uString* Http__FuseJSHttpRequest::GetResponseHeaders()
{
    if (::g::Uno::String::op_Equality(_cachedResponseHeaders, NULL))
    {
        CheckIsAttached();
        _cachedResponseHeaders = uPtr(_req)->GetResponseHeaders();
    }

    return _cachedResponseHeaders;
}

// private object GetResponseReasonPhrase(Fuse.Scripting.Context context, object[] args) [instance] :360
uObject* Http__FuseJSHttpRequest::GetResponseReasonPhrase(::g::Fuse::Scripting::Context* context, uArray* args)
{
    return ::g::Uno::Net::Http::HttpStatusReasonPhrase::GetFromStatusCode(GetResponseStatus());
}

// private int GetResponseStatus() [instance] :350
int32_t Http__FuseJSHttpRequest::GetResponseStatus()
{
    if (_cachedResponseStatus == 0)
    {
        CheckIsAttached();
        _cachedResponseStatus = uPtr(_req)->GetResponseStatus();
    }

    return _cachedResponseStatus;
}

// private object GetResponseType(Fuse.Scripting.Context context, object[] args) [instance] :378
uObject* Http__FuseJSHttpRequest::GetResponseType(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (_req == NULL)
        return uBox<int32_t>(::TYPES[27/*int*/], _cachedResponseType);

    return uBox<int32_t>(::TYPES[27/*int*/], uPtr(_req)->HttpResponseType());
}

// private object GetState(Fuse.Scripting.Context context, object[] args) [instance] :345
uObject* Http__FuseJSHttpRequest::GetState(::g::Fuse::Scripting::Context* context, uArray* args)
{
    return uBox<int32_t>(::TYPES[27/*int*/], (_req != NULL) ? uPtr(_req)->State() : _finalState);
}

// public generated Fuse.Scripting.Object get_Obj() [instance] :88
::g::Fuse::Scripting::Object* Http__FuseJSHttpRequest::Obj()
{
    return _Obj;
}

// private generated void set_Obj(Fuse.Scripting.Object value) [instance] :88
void Http__FuseJSHttpRequest::Obj(::g::Fuse::Scripting::Object* value)
{
    _Obj = value;
}

// private void OnAbort(Uno.Net.Http.HttpMessageHandlerRequest res) [instance] :254
void Http__FuseJSHttpRequest::OnAbort(::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[36/*"onabort"*/]), ::TYPES[2/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(_context, uArray::New(::TYPES[3/*object[]*/], 0));

    DetachRequest();
}

// private void OnDone(Uno.Net.Http.HttpMessageHandlerRequest res) [instance] :285
void Http__FuseJSHttpRequest::OnDone(::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[37/*"ondone"*/]), ::TYPES[2/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(_context, uArray::New(::TYPES[3/*object[]*/], 0));

    DetachRequest();
}

// private void OnError(Uno.Net.Http.HttpMessageHandlerRequest res, string error) [instance] :262
void Http__FuseJSHttpRequest::OnError(::g::Uno::Net::Http::HttpMessageHandlerRequest* res, uString* error)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[38/*"onerror"*/]), ::TYPES[2/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(_context, uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, error));

    DetachRequest();
}

// private void OnProgress(Uno.Net.Http.HttpMessageHandlerRequest res, int current, int total, bool hastotal) [instance] :293
void Http__FuseJSHttpRequest::OnProgress(::g::Uno::Net::Http::HttpMessageHandlerRequest* res, int32_t current, int32_t total, bool hastotal)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[39/*"onprogress"*/]), ::TYPES[2/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(_context, uArray::Init<uObject*>(::TYPES[3/*object[]*/], 3, uBox<int32_t>(::TYPES[27/*int*/], current), uBox<int32_t>(::TYPES[27/*int*/], total), uBox(::g::Uno::Bool_typeof(), hastotal)));
}

// private void OnStateChanged(Uno.Net.Http.HttpMessageHandlerRequest res) [instance] :278
void Http__FuseJSHttpRequest::OnStateChanged(::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[40/*"onstatechan...*/]), ::TYPES[2/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(_context, uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, uBox<int32_t>(::TYPES[27/*int*/], uPtr(_req)->State())));
}

// private void OnTimeout(Uno.Net.Http.HttpMessageHandlerRequest res) [instance] :270
void Http__FuseJSHttpRequest::OnTimeout(::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[41/*"ontimeout"*/]), ::TYPES[2/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(_context, uArray::New(::TYPES[3/*object[]*/], 0));

    DetachRequest();
}

// private object SendAsync(Fuse.Scripting.Context context, object[] args) [instance] :300
uObject* Http__FuseJSHttpRequest::SendAsync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if ((args != NULL) && (uPtr(args)->Length() > 0))
    {
        uObject* a = uPtr(args)->Strong<uObject*>(0);

        if (uIs(a, ::TYPES[9/*string*/]))
        {
            uPtr(_req)->SendAsync2(uAs<uString*>(a, ::TYPES[9/*string*/]));
            return NULL;
        }
        else if (uIs(a, ::TYPES[25/*byte[]*/]))
        {
            uArray* b = uAs<uArray*>(a, ::TYPES[25/*byte[]*/]);
            uPtr(_req)->SendAsync1(b);
            return NULL;
        }
        else
        {
            ::g::Fuse::Scripting::Object* obj = uAs< ::g::Fuse::Scripting::Object*>(a, ::TYPES[26/*Fuse.Scripting.Object*/]);

            if ((obj != NULL) && (uPtr(obj)->Item(::STRINGS[42/*"buffer"*/]) != NULL))
            {
                uArray* b1 = uAs<uArray*>(uPtr(obj)->Item(::STRINGS[42/*"buffer"*/]), ::TYPES[25/*byte[]*/]);
                uPtr(_req)->SendAsync1(b1);
                return NULL;
            }
        }
    }

    uPtr(_req)->SendAsync();
    return NULL;
}

// private void SetHeader(string key, string value) [instance] :181
void Http__FuseJSHttpRequest::SetHeader(uString* key, uString* value)
{
    CheckIsAttached();
    uPtr(_req)->SetHeader(key, value);
}

// private object SetResponseType(Fuse.Scripting.Context context, object[] args) [instance] :365
uObject* Http__FuseJSHttpRequest::SetResponseType(::g::Fuse::Scripting::Context* context, uArray* args)
{
    CheckIsAttached();

    if (uPtr(args)->Length() > 0)
    {
        uObject* arg = uPtr(args)->Strong<uObject*>(0);
        int32_t value = uIs(arg, ::TYPES[27/*int*/]) ? uUnbox<int32_t>(::TYPES[27/*int*/], arg) : (int32_t)uUnbox<double>(::g::Uno::Double_typeof(), arg);
        uPtr(_req)->SetResponseType(value);
    }

    return NULL;
}

// private void SetTimeout(int timeout) [instance] :187
void Http__FuseJSHttpRequest::SetTimeout(int32_t timeout)
{
    CheckIsAttached();
    uPtr(_req)->SetTimeout(timeout);
}

// public FuseJSHttpRequest New(Fuse.Scripting.Context context, Uno.Net.Http.HttpMessageHandlerRequest req) [static] :103
Http__FuseJSHttpRequest* Http__FuseJSHttpRequest::New1(::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req)
{
    Http__FuseJSHttpRequest* obj1 = (Http__FuseJSHttpRequest*)uNew(Http__FuseJSHttpRequest_typeof());
    obj1->ctor_(context, req);
    return obj1;
}
// }

// C:\Users\채재윤융합IT학부\AppData\Local\Fusetools\Packages\Fuse.Scripting.JavaScript\1.9.0\FuseJS\Http.uno
// ---------------------------------------------------------------------------------------------------

// public sealed class Http :12
// {
static void Http_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&Http::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* Http_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Http);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Reactive.FuseJS.Http", options);
    type->fp_build_ = Http_build;
    type->fp_ctor_ = (void*)Http__New2_fn;
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Module*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*))Http__Evaluate_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Http() :15
void Http__ctor_2_fn(Http* __this)
{
    __this->ctor_2();
}

// private object CreateClient(Fuse.Scripting.Context context, object[] args) :26
void Http__CreateClient_fn(Http* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->CreateClient(context, args);
}

// public override sealed void Evaluate(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result) :21
void Http__Evaluate_fn(Http* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result)
{
    uPtr(uPtr(result)->GetObject(c))->Item(uString::Const("exports"), uDelegate::New(::TYPES[8/*Fuse.Scripting.Callback*/], (void*)Http__CreateClient_fn, __this));
}

// public Http New() :15
void Http__New2_fn(Http** __retval)
{
    *__retval = Http::New2();
}

uSStrong<Http*> Http::_instance_;

// public Http() [instance] :15
void Http::ctor_2()
{
    ctor_1();

    if (Http::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Http::_instance_ = this, uString::Const("FuseJS/Http"));
}

// private object CreateClient(Fuse.Scripting.Context context, object[] args) [instance] :26
uObject* Http::CreateClient(::g::Fuse::Scripting::Context* context, uArray* args)
{
    return Http__FuseJSHttpClient::New1(context)->Obj();
}

// public Http New() [static] :15
Http* Http::New2()
{
    Http* obj1 = (Http*)uNew(Http_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\Users\채재윤융합IT학부\AppData\Local\Fusetools\Packages\Fuse.Scripting.JavaScript\1.9.0\FuseJS\Http.uno
// ---------------------------------------------------------------------------------------------------

// internal sealed class HttpHeaders :389
// {
static void HttpHeaders_build(uType* type)
{
    ::STRINGS[43] = uString::Const(", ");
    ::STRINGS[44] = uString::Const("");
    ::TYPES[28] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::String_typeof(), NULL), NULL);
    ::TYPES[29] = ::g::Uno::IDisposable_typeof();
    ::TYPES[30] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(5/*ToArray<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[31] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[32] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[33] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[34] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[28/*Uno.Collections.Dictionary<string, Uno.Collections.IList<string>>*/], offsetof(HttpHeaders, _headers), 0);
}

uType* HttpHeaders_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(HttpHeaders);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.HttpHeaders", options);
    type->fp_build_ = HttpHeaders_build;
    return type;
}

// internal HttpHeaders(string headers) :393
void HttpHeaders__ctor__fn(HttpHeaders* __this, uString* headers)
{
    __this->ctor_(headers);
}

// public string GetValue(string key) :406
void HttpHeaders__GetValue_fn(HttpHeaders* __this, uString* key, uString** __retval)
{
    *__retval = __this->GetValue(key);
}

// internal HttpHeaders New(string headers) :393
void HttpHeaders__New1_fn(uString* headers, HttpHeaders** __retval)
{
    *__retval = HttpHeaders::New1(headers);
}

// private void ParseHeader(string headerLine) :416
void HttpHeaders__ParseHeader_fn(HttpHeaders* __this, uString* headerLine)
{
    __this->ParseHeader(headerLine);
}

// internal HttpHeaders(string headers) [instance] :393
void HttpHeaders::ctor_(uString* headers)
{
    _headers = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[28/*Uno.Collections.Dictionary<string, Uno.Collections.IList<string>>*/]));
    ::g::Uno::IO::StringReader* reader = ::g::Uno::IO::StringReader::New1(headers);

    {
        try
        {
            {
                uString* headerLine = uPtr(reader)->ReadLine();

                while (::g::Uno::String::op_Inequality(headerLine, NULL))
                {
                    ParseHeader(headerLine);
                    headerLine = uPtr(reader)->ReadLine();
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)reader), ::TYPES[29/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)reader), ::TYPES[29/*Uno.IDisposable*/]));
        }
        __after_finally_0:;
    }
}

// public string GetValue(string key) [instance] :406
uString* HttpHeaders::GetValue(uString* key)
{
    bool ret6;
    uObject* list;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_headers), ::g::Uno::String::ToLower(uPtr(key)), (void**)(&list), &ret6), ret6))
        return ::g::Uno::String::Join(::STRINGS[43/*", "*/], (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[30/*Uno.Collections.EnumerableExtensions.ToArray<string>*/], list));

    return ::STRINGS[44/*""*/];
}

// private void ParseHeader(string headerLine) [instance] :416
void HttpHeaders::ParseHeader(uString* headerLine)
{
    bool ret7;
    ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > ret8;
    uObject* ret9;

    if (::g::Uno::String::IsNullOrEmpty(headerLine))
        return;

    int32_t colon = ::g::Uno::String::IndexOf(uPtr(headerLine), ':');

    if (colon == -1)
        return;

    uString* name = ::g::Uno::String::ToLower(uPtr(::g::Uno::String::Trim(uPtr(::g::Uno::String::Substring1(headerLine, 0, colon)))));
    uArray* strings = ::g::Uno::String::Split(uPtr(::g::Uno::String::Trim(uPtr(::g::Uno::String::Substring1(headerLine, colon + 1, headerLine->Length() - (colon + 1))))), uArray::Init<int32_t>(::TYPES[31/*char[]*/], 1, ';'));
    ::g::Uno::Collections::List* values = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[32/*Uno.Collections.List<string>*/]);

    for (int32_t index2 = 0, length3 = uPtr(strings)->Length(); index2 < length3; ++index2)
    {
        uString* s = uPtr(strings)->Strong<uString*>(index2);
        ::g::Uno::Collections::List__Add_fn(uPtr(values), ::g::Uno::String::Trim(uPtr(s)));
    }

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(_headers), name, &ret7), ret7))
    {
        ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > enum4 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(values), &ret8), ret8);

        {
            try
            {
                {
                    while (enum4.MoveNext(::TYPES[33/*Uno.Collections.List<string>.Enumerator*/]))
                    {
                        uString* value = enum4.Current(::TYPES[33/*Uno.Collections.List<string>.Enumerator*/]);
                        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(_headers), name, &ret9), ret9)), ::TYPES[34/*Uno.Collections.ICollection<string>*/]), value);
                    }
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    enum4.Dispose(::TYPES[33/*Uno.Collections.List<string>.Enumerator*/]);
                }
                                throw __t;
                goto __after_finally_1;
            }

            {
                enum4.Dispose(::TYPES[33/*Uno.Collections.List<string>.Enumerator*/]);
            }
            __after_finally_1:;
        }
    }
    else
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_headers), name, (uObject*)values);
}

// internal HttpHeaders New(string headers) [static] :393
HttpHeaders* HttpHeaders::New1(uString* headers)
{
    HttpHeaders* obj5 = (HttpHeaders*)uNew(HttpHeaders_typeof());
    obj5->ctor_(headers);
    return obj5;
}
// }

// C:\Users\채재윤융합IT학부\AppData\Local\Fusetools\Packages\Fuse.Scripting.JavaScript\1.9.0\FuseJS\Http.uno
// ---------------------------------------------------------------------------------------------------

// private sealed class Http.HttpJSDispatcher :31
// {
static void Http__HttpJSDispatcher_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(Http__HttpJSDispatcher_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::IThreadWorker_typeof(), offsetof(Http__HttpJSDispatcher, _worker), 0);
}

Http__HttpJSDispatcher_type* Http__HttpJSDispatcher_typeof()
{
    static uSStrong<Http__HttpJSDispatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Http__HttpJSDispatcher);
    options.TypeSize = sizeof(Http__HttpJSDispatcher_type);
    type = (Http__HttpJSDispatcher_type*)uClassType::New("Fuse.Reactive.FuseJS.Http.HttpJSDispatcher", options);
    type->fp_build_ = Http__HttpJSDispatcher_build;
    type->interface0.fp_Invoke = (void(*)(uObject*, uDelegate*))Http__HttpJSDispatcher__Invoke_fn;
    return type;
}

// public HttpJSDispatcher(Fuse.Scripting.IThreadWorker worker) :34
void Http__HttpJSDispatcher__ctor__fn(Http__HttpJSDispatcher* __this, uObject* worker)
{
    __this->ctor_(worker);
}

// public void Invoke(Uno.Action action) :54
void Http__HttpJSDispatcher__Invoke_fn(Http__HttpJSDispatcher* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public HttpJSDispatcher New(Fuse.Scripting.IThreadWorker worker) :34
void Http__HttpJSDispatcher__New1_fn(uObject* worker, Http__HttpJSDispatcher** __retval)
{
    *__retval = Http__HttpJSDispatcher::New1(worker);
}

// public HttpJSDispatcher(Fuse.Scripting.IThreadWorker worker) [instance] :34
void Http__HttpJSDispatcher::ctor_(uObject* worker)
{
    _worker = worker;
}

// public void Invoke(Uno.Action action) [instance] :54
void Http__HttpJSDispatcher::Invoke(uDelegate* action)
{
    ::g::Fuse::Scripting::IThreadWorker::Invoke1(uInterface(uPtr(_worker), ::g::Fuse::Scripting::IThreadWorker_typeof()), uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), NULL), (void*)Http__HttpJSDispatcher__ActionClosure__Run_fn, Http__HttpJSDispatcher__ActionClosure::New1(action)));
}

// public HttpJSDispatcher New(Fuse.Scripting.IThreadWorker worker) [static] :34
Http__HttpJSDispatcher* Http__HttpJSDispatcher::New1(uObject* worker)
{
    Http__HttpJSDispatcher* obj1 = (Http__HttpJSDispatcher*)uNew(Http__HttpJSDispatcher_typeof());
    obj1->ctor_(worker);
    return obj1;
}
// }

// C:\Users\채재윤융합IT학부\AppData\Local\Fusetools\Packages\Fuse.Scripting.JavaScript\1.9.0\FuseJS\Timer.uno
// ----------------------------------------------------------------------------------------------------

// private sealed class TimerManager.Timer :251
// {
static void TimerManager__Timer_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(TimerManager__Timer, _timeout), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), NULL), offsetof(TimerManager__Timer, _callback), 0,
        ::g::Uno::Bool_typeof(), offsetof(TimerManager__Timer, _repeat), 0,
        ::g::Uno::Bool_typeof(), offsetof(TimerManager__Timer, _isRunning), 0,
        ::g::Uno::Double_typeof(), offsetof(TimerManager__Timer, _startTime), 0,
        ::g::Uno::Int_typeof(), offsetof(TimerManager__Timer, ID), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL), offsetof(TimerManager__Timer, OnStop), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&TimerManager__Timer::_id_, uFieldFlagsStatic);
}

uType* TimerManager__Timer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(TimerManager__Timer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.TimerManager.Timer", options);
    type->fp_build_ = TimerManager__Timer_build;
    return type;
}

// public Timer(double ms, Uno.Action<Fuse.Scripting.Context> callback, bool repeat) :266
void TimerManager__Timer__ctor__fn(TimerManager__Timer* __this, double* ms, uDelegate* callback, bool* repeat)
{
    __this->ctor_(*ms, callback, *repeat);
}

// public static double GetMilliseconds() :317
void TimerManager__Timer__GetMilliseconds_fn(double* __retval)
{
    *__retval = TimerManager__Timer::GetMilliseconds();
}

// public Timer New(double ms, Uno.Action<Fuse.Scripting.Context> callback, bool repeat) :266
void TimerManager__Timer__New1_fn(double* ms, uDelegate* callback, bool* repeat, TimerManager__Timer** __retval)
{
    *__retval = TimerManager__Timer::New1(*ms, callback, *repeat);
}

// private void Start() :275
void TimerManager__Timer__Start_fn(TimerManager__Timer* __this)
{
    __this->Start();
}

// public void Stop() :281
void TimerManager__Timer__Stop_fn(TimerManager__Timer* __this)
{
    __this->Stop();
}

// internal bool Update(Fuse.Scripting.Context context) :288
void TimerManager__Timer__Update_fn(TimerManager__Timer* __this, ::g::Fuse::Scripting::Context* context, bool* __retval)
{
    *__retval = __this->Update(context);
}

int32_t TimerManager__Timer::_id_;

// public Timer(double ms, Uno.Action<Fuse.Scripting.Context> callback, bool repeat) [instance] :266
void TimerManager__Timer::ctor_(double ms, uDelegate* callback, bool repeat)
{
    ID = (TimerManager__Timer::_id_++);
    _timeout = ms;
    _callback = callback;
    _repeat = repeat;
    Start();
}

// private void Start() [instance] :275
void TimerManager__Timer::Start()
{
    _startTime = TimerManager__Timer::GetMilliseconds();
    _isRunning = true;
}

// public void Stop() [instance] :281
void TimerManager__Timer::Stop()
{
    _isRunning = false;

    if (::g::Uno::Delegate::op_Inequality(OnStop, NULL))
        uPtr(OnStop)->InvokeVoid(uCRef<int32_t>(ID));
}

// internal bool Update(Fuse.Scripting.Context context) [instance] :288
bool TimerManager__Timer::Update(::g::Fuse::Scripting::Context* context)
{
    if (!_isRunning)
        return false;

    bool activity = false;
    double now = TimerManager__Timer::GetMilliseconds();
    double elapsed = now - _startTime;

    if (_timeout <= elapsed)
    {
        activity = true;

        {
            try
            {
                {
                    if (::g::Uno::Delegate::op_Inequality(_callback, NULL))
                        uPtr(_callback)->InvokeVoid(context);
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    if (_repeat)
                        _startTime = now;
                    else
                        Stop();
                }
                                throw __t;
                goto __after_finally_2;
            }

            {
                if (_repeat)
                    _startTime = now;
                else
                    Stop();
            }
            __after_finally_2:;
        }
    }

    return activity;
}

// public static double GetMilliseconds() [static] :317
double TimerManager__Timer::GetMilliseconds()
{
    return (double)(::g::Uno::Diagnostics::Clock::GetTicks() / 10000LL);
}

// public Timer New(double ms, Uno.Action<Fuse.Scripting.Context> callback, bool repeat) [static] :266
TimerManager__Timer* TimerManager__Timer::New1(double ms, uDelegate* callback, bool repeat)
{
    TimerManager__Timer* obj1 = (TimerManager__Timer*)uNew(TimerManager__Timer_typeof());
    obj1->ctor_(ms, callback, repeat);
    return obj1;
}
// }

// C:\Users\채재윤융합IT학부\AppData\Local\Fusetools\Packages\Fuse.Scripting.JavaScript\1.9.0\FuseJS\Timer.uno
// ----------------------------------------------------------------------------------------------------

// internal sealed class TimerManager :174
// {
static void TimerManager_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(TimerManager__Timer_typeof(), NULL), offsetof(TimerManager, _timers), 0);
}

uType* TimerManager_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(TimerManager);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.TimerManager", options);
    type->fp_build_ = TimerManager_build;
    type->fp_ctor_ = (void*)TimerManager__New1_fn;
    return type;
}

// public generated TimerManager() :174
void TimerManager__ctor__fn(TimerManager* __this)
{
    __this->ctor_();
}

// public int AddTimer(double ms, Uno.Action<Fuse.Scripting.Context> callback, [bool repeat]) :195
void TimerManager__AddTimer_fn(TimerManager* __this, double* ms, uDelegate* callback, bool* repeat, int32_t* __retval)
{
    *__retval = __this->AddTimer(*ms, callback, *repeat);
}

// public void DeleteAllTimers() :203
void TimerManager__DeleteAllTimers_fn(TimerManager* __this)
{
    __this->DeleteAllTimers();
}

// public bool DeleteTimer(int id) :211
void TimerManager__DeleteTimer_fn(TimerManager* __this, int32_t* id, bool* __retval)
{
    *__retval = __this->DeleteTimer(*id);
}

// private Fuse.Reactive.FuseJS.TimerManager.Timer GetTimer(int id) :231
void TimerManager__GetTimer_fn(TimerManager* __this, int32_t* id, TimerManager__Timer** __retval)
{
    *__retval = __this->GetTimer(*id);
}

// public generated TimerManager New() :174
void TimerManager__New1_fn(TimerManager** __retval)
{
    *__retval = TimerManager::New1();
}

// private void RemoveTimer(int id) :222
void TimerManager__RemoveTimer_fn(TimerManager* __this, int32_t* id)
{
    __this->RemoveTimer(*id);
}

// public bool Tick(Fuse.Scripting.Context context) :241
void TimerManager__Tick_fn(TimerManager* __this, ::g::Fuse::Scripting::Context* context, bool* __retval)
{
    *__retval = __this->Tick(context);
}

// public generated TimerManager() [instance] :174
void TimerManager::ctor_()
{
    _timers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(TimerManager__Timer_typeof(), NULL)));
}

// public int AddTimer(double ms, Uno.Action<Fuse.Scripting.Context> callback, [bool repeat]) [instance] :195
int32_t TimerManager::AddTimer(double ms, uDelegate* callback, bool repeat)
{
    TimerManager__Timer* t = TimerManager__Timer::New1(ms, callback, repeat);
    t->OnStop = uDelegate::New(::TYPES[14/*Uno.Action<int>*/], (void*)TimerManager__RemoveTimer_fn, this);
    ::g::Uno::Collections::List__Add_fn(uPtr(_timers), t);
    return t->ID;
}

// public void DeleteAllTimers() [instance] :203
void TimerManager::DeleteAllTimers()
{
    TimerManager__Timer* ret2;

    for (int32_t i = uPtr(_timers)->Count() - 1; i >= 0; i--)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_timers), uCRef<int32_t>(i), &ret2), ret2))->Stop();
}

// public bool DeleteTimer(int id) [instance] :211
bool TimerManager::DeleteTimer(int32_t id)
{
    TimerManager__Timer* timer = GetTimer(id);

    if (timer != NULL)
    {
        uPtr(timer)->Stop();
        return true;
    }

    return false;
}

// private Fuse.Reactive.FuseJS.TimerManager.Timer GetTimer(int id) [instance] :231
TimerManager__Timer* TimerManager::GetTimer(int32_t id)
{
    TimerManager__Timer* ret4;

    for (int32_t i = 0; i < uPtr(_timers)->Count(); i++)
    {
        TimerManager__Timer* timer = (::g::Uno::Collections::List__get_Item_fn(uPtr(_timers), uCRef<int32_t>(i), &ret4), ret4);

        if (uPtr(timer)->ID == id)
            return timer;
    }

    return NULL;
}

// private void RemoveTimer(int id) [instance] :222
void TimerManager::RemoveTimer(int32_t id)
{
    TimerManager__Timer* ret5;

    for (int32_t i = 0; i < uPtr(_timers)->Count(); i++)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_timers), uCRef<int32_t>(i), &ret5), ret5))->ID == id)
            uPtr(_timers)->RemoveAt(i);
}

// public bool Tick(Fuse.Scripting.Context context) [instance] :241
bool TimerManager::Tick(::g::Fuse::Scripting::Context* context)
{
    TimerManager__Timer* ret6;
    bool activity = false;

    for (int32_t i = 0; i < uPtr(_timers)->Count(); i++)
        activity = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_timers), uCRef<int32_t>(i), &ret6), ret6))->Update(context) || activity;

    return activity;
}

// public generated TimerManager New() [static] :174
TimerManager* TimerManager::New1()
{
    TimerManager* obj1 = (TimerManager*)uNew(TimerManager_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\채재윤융합IT학부\AppData\Local\Fusetools\Packages\Fuse.Scripting.JavaScript\1.9.0\FuseJS\Timer.uno
// ----------------------------------------------------------------------------------------------------

// public sealed class TimerModule :26
// {
static void TimerModule_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Marshal_typeof(),
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        ::g::Fuse::Reactive::FuseJS::TimerManager_typeof(), offsetof(TimerModule, _tm), 0,
        type, (uintptr_t)&TimerModule::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* TimerModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(TimerModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Reactive.FuseJS.TimerModule", options);
    type->fp_build_ = TimerModule_build;
    type->fp_ctor_ = (void*)TimerModule__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public TimerModule() :43
void TimerModule__ctor_2_fn(TimerModule* __this)
{
    __this->ctor_2();
}

// private object Create(Fuse.Scripting.Context context, object[] args) :80
void TimerModule__Create_fn(TimerModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Create(context, args);
}

// private object Delete(Fuse.Scripting.Context context, object[] args) :121
void TimerModule__Delete_fn(TimerModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Delete(context, args);
}

// public TimerModule New() :43
void TimerModule__New2_fn(TimerModule** __retval)
{
    *__retval = TimerModule::New2();
}

// private void OnReset(object sender, Uno.EventArgs args) :56
void TimerModule__OnReset_fn(TimerModule* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnReset(sender, args);
}

// internal bool UpdateModule(Fuse.Scripting.Context context) :139
void TimerModule__UpdateModule_fn(TimerModule* __this, ::g::Fuse::Scripting::Context* context, bool* __retval)
{
    *__retval = __this->UpdateModule(context);
}

uSStrong<TimerModule*> TimerModule::_instance_;

// public TimerModule() [instance] :43
void TimerModule::ctor_2()
{
    ctor_1();

    if (TimerModule::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(TimerModule::_instance_ = this, ::STRINGS[0/*"FuseJS/Timer"*/]);
    _tm = ::g::Fuse::Reactive::FuseJS::TimerManager::New1();
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(uString::Const("create"), uDelegate::New(::TYPES[5/*Fuse.Scripting.NativeCallback*/], (void*)TimerModule__Create_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(uString::Const("delete"), uDelegate::New(::TYPES[5/*Fuse.Scripting.NativeCallback*/], (void*)TimerModule__Delete_fn, this)));
    add_Reset(uDelegate::New(::g::Uno::EventHandler_typeof(), (void*)TimerModule__OnReset_fn, this));
}

// private object Create(Fuse.Scripting.Context context, object[] args) [instance] :80
uObject* TimerModule::Create(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() < 3)
        U_THROW(::g::Fuse::Scripting::Error::New4(uString::Const("create(): requires at least three arguments")));

    if (!uIs((uObject*)uPtr(args)->Strong<uObject*>(0), ::TYPES[2/*Fuse.Scripting.Function*/]))
        U_THROW(::g::Fuse::Scripting::Error::New4(uString::Const("create(): first argument must be a function")));

    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[2/*Fuse.Scripting.Function*/]);
    double ms = ::g::Fuse::Scripting::Value::ToNumber(args->Strong<uObject*>(1));
    bool repeat = uUnbox<bool>(::g::Uno::Bool_typeof(), args->Strong<uObject*>(2));
    uArray* innerArgs = uArray::New(::TYPES[3/*object[]*/], args->Length() - 3);

    for (int32_t i = 0; i < innerArgs->Length(); i++)
        uPtr(innerArgs)->Strong<uObject*>(i) = uPtr(args)->Strong<uObject*>(3 + i);

    return uBox<int32_t>(::TYPES[27/*int*/], uPtr(_tm)->AddTimer(ms, uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), NULL), (void*)TimerModule__CallbackClosure__Callback_fn, TimerModule__CallbackClosure::New1(context, func, innerArgs)), repeat));
}

// private object Delete(Fuse.Scripting.Context context, object[] args) [instance] :121
uObject* TimerModule::Delete(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() < 1)
        U_THROW(::g::Fuse::Scripting::Error::New4(uString::Const("delete(): requires one argument")));

    try
    {
        {
            int32_t handle = ::g::Fuse::Marshal::ToInt(uPtr(args)->Strong<uObject*>(0));
            uPtr(_tm)->DeleteTimer(handle);
        }
    }

    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::g::Fuse::MarshalException_typeof()))
        {
            ::g::Fuse::MarshalException* me = (::g::Fuse::MarshalException*)__t.Exception;
            ::g::Fuse::Diagnostics::UserWarning(uString::Const("Timer.delete(): The parameter is not a valid timer handle"), this, uString::Const("C:\\Users\\\354\261\204\354\236\254\354\234\244\354\234\265\355\225\251IT\355\225\231\353\266\200\\AppData\\Local\\Fusetools\\Packages\\Fuse.Scripting.JavaScript\\1.9.0\\FuseJS\\Timer.uno"), 133, uString::Const("Delete"));
        }
        else         throw __t;
    }

    return NULL;
}

// private void OnReset(object sender, Uno.EventArgs args) [instance] :56
void TimerModule::OnReset(uObject* sender, ::g::Uno::EventArgs* args)
{
    if (_tm != NULL)
        uPtr(_tm)->DeleteAllTimers();
}

// internal bool UpdateModule(Fuse.Scripting.Context context) [instance] :139
bool TimerModule::UpdateModule(::g::Fuse::Scripting::Context* context)
{
    if (_tm != NULL)
        return uPtr(_tm)->Tick(context);

    return false;
}

// public TimerModule New() [static] :43
TimerModule* TimerModule::New2()
{
    TimerModule* obj1 = (TimerModule*)uNew(TimerModule_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

}}}} // ::g::Fuse::Reactive::FuseJS
