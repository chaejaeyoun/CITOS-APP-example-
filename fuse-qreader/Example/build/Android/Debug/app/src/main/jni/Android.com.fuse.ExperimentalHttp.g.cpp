// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.AndroidB-e9b6d531.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitiv-2b9696be.h>
#include <Android.Base.Primitiv-45253430.h>
#include <Android.Base.Primitiv-e437692f.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.com.fuse.Expe-9d584358.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Type.h>
//~Callbacks forHttpRequest

//#if !#{Android.com.fuse.ExperimentalHttp.HttpRequest.OnDataReceived(Android.Base.Wrappers.IJWrapper,int):IsStripped}
JNFUN(void,Android_com_fuse_ExperimentalHttp_HttpRequest__OnDataReceived44285,jlong ujPtr, jobject arg0, jint arg1, jlong arg2, jlong arg3) {
    INITCALLBACK(uPtr,::g::Android::com::fuse::ExperimentalHttp::HttpRequest*);

    JARG_TO_UNO(arg2,uObject*,((::g::Android::Base::Wrappers::JWrapper*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::Base::Wrappers::JWrapper_typeof(), false, false, true)));

    JTRY
    uPtr->OnDataReceived(tmparg2, ((int32_t)arg1));

    JCATCH
}
//#endif

//#if !#{Android.com.fuse.ExperimentalHttp.HttpRequest.OnAborted():IsStripped}
JNFUN(void,Android_com_fuse_ExperimentalHttp_HttpRequest__OnAborted44286,jlong ujPtr) {
    INITCALLBACK(uPtr,::g::Android::com::fuse::ExperimentalHttp::HttpRequest*);
    JTRY
    uPtr->OnAborted();
    JCATCH
}
//#endif

//#if !#{Android.com.fuse.ExperimentalHttp.HttpRequest.OnError(Android.Base.Wrappers.IJWrapper):IsStripped}
JNFUN(void,Android_com_fuse_ExperimentalHttp_HttpRequest__OnError44287,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,::g::Android::com::fuse::ExperimentalHttp::HttpRequest*);
    JARG_TO_UNO(arg1,uObject*,((::g::Android::Base::Wrappers::JWrapper*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::Base::Wrappers::JWrapper_typeof(), false, false, true)));
    JTRY
    uPtr->OnError(tmparg1);
    JCATCH
}
//#endif

//#if !#{Android.com.fuse.ExperimentalHttp.HttpRequest.OnTimeout():IsStripped}
JNFUN(void,Android_com_fuse_ExperimentalHttp_HttpRequest__OnTimeout44288,jlong ujPtr) {
    INITCALLBACK(uPtr,::g::Android::com::fuse::ExperimentalHttp::HttpRequest*);
    JTRY
    uPtr->OnTimeout();
    JCATCH
}
//#endif

//#if !#{Android.com.fuse.ExperimentalHttp.HttpRequest.OnDone():IsStripped}
JNFUN(void,Android_com_fuse_ExperimentalHttp_HttpRequest__OnDone44289,jlong ujPtr) {
    INITCALLBACK(uPtr,::g::Android::com::fuse::ExperimentalHttp::HttpRequest*);
    JTRY
    uPtr->OnDone();
    JCATCH
}
//#endif

//#if !#{Android.com.fuse.ExperimentalHttp.HttpRequest.OnHeadersReceived():IsStripped}
JNFUN(void,Android_com_fuse_ExperimentalHttp_HttpRequest__OnHeadersReceived44290,jlong ujPtr) {
    INITCALLBACK(uPtr,::g::Android::com::fuse::ExperimentalHttp::HttpRequest*);
    JTRY
    uPtr->OnHeadersReceived();
    JCATCH
}
//#endif

//#if !#{Android.com.fuse.ExperimentalHttp.HttpRequest.OnProgress(int,int,bool):IsStripped}
JNFUN(void,Android_com_fuse_ExperimentalHttp_HttpRequest__OnProgress44291,jlong ujPtr, jint arg0, jint arg1, jboolean arg2, jlong arg3, jlong arg4, jlong arg5) {
    INITCALLBACK(uPtr,::g::Android::com::fuse::ExperimentalHttp::HttpRequest*);
    JTRY
    uPtr->OnProgress(((int32_t)arg0), ((int32_t)arg1), ((bool)arg2));
    JCATCH
}
//#endi

namespace g{
namespace Android{
namespace com{
namespace fuse{
namespace ExperimentalHttp{

// C:\Users\채재윤융합IT학부\AppData\Local\Fusetools\Packages\Uno.Net.Http\1.9.0\Implementation\Android\ExperimentalHttp\HttpRequest.uno
// ------------------------------------------------------------------------------------------------------------------------------

// public abstract extern class HttpRequest :7
// {
static void HttpRequest_build(uType* type)
{
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(HttpRequest_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(HttpRequest_type, interface1));
    type->SetFields(4,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&HttpRequest::_javaClass1_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&HttpRequest::_javaProxyClass1_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&HttpRequest::InstallCache_44279_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&HttpRequest::HttpRequest_44284_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&HttpRequest::HttpRequest_44284_ID_c_prox_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&HttpRequest::SetResponseType_44292_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&HttpRequest::SetHeader_44293_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&HttpRequest::SetTimeout_44294_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&HttpRequest::SetCaching_44295_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&HttpRequest::GetResponseString_44297_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&HttpRequest::SendAsync_44299_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&HttpRequest::SendAsyncBuf_44300_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&HttpRequest::SendAsyncStr_44301_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&HttpRequest::Abort_44305_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&HttpRequest::GetResponseStatus_44306_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&HttpRequest::GetResponseHeader_44307_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&HttpRequest::GetResponseHeaders_44308_ID_, uFieldFlagsStatic);
}

HttpRequest_type* HttpRequest_typeof()
{
    static uSStrong<HttpRequest_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Android::Base::Wrappers::JWrapper_typeof();
    options.FieldCount = 21;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(HttpRequest);
    options.TypeSize = sizeof(HttpRequest_type);
    type = (HttpRequest_type*)uClassType::New("Android.com.fuse.ExperimentalHttp.HttpRequest", options);
    type->fp_build_ = HttpRequest_build;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    return type;
}

// protected HttpRequest(Android.Base.Wrappers.IJWrapper arg0, Android.Base.Wrappers.IJWrapper arg1, Android.Base.Wrappers.IJWrapper arg2) :59
void HttpRequest__ctor_4_fn(HttpRequest* __this, uObject* arg0, uObject* arg1, uObject* arg2)
{
    __this->ctor_4(arg0, arg1, arg2);
}

// public static extern new void _Init() :17
void HttpRequest___Init1_fn()
{
    HttpRequest::_Init1();
}

// public static extern new void _InitProxy() :13
void HttpRequest___InitProxy1_fn()
{
    HttpRequest::_InitProxy1();
}

// public static extern new bool _IsThisType(Android.Base.Wrappers.IJWrapper obj) :15
void HttpRequest___IsThisType1_fn(uObject* obj_, bool* __retval)
{
    *__retval = HttpRequest::_IsThisType1(obj_);
}

// public void Abort() :141
void HttpRequest__Abort_fn(HttpRequest* __this)
{
    __this->Abort();
}

// public static extern void Abort_IMPL_44305(bool arg0, Android.Base.Primitives.ujobject arg1) :230
void HttpRequest__Abort_IMPL_44305_fn(bool* arg0_, jobject* arg1_)
{
    HttpRequest::Abort_IMPL_44305(*arg0_, *arg1_);
}

// public Android.Base.Wrappers.IJWrapper GetResponseHeader(Android.Base.Wrappers.IJWrapper arg0) :151
void HttpRequest__GetResponseHeader_fn(HttpRequest* __this, uObject* arg0, uObject** __retval)
{
    *__retval = __this->GetResponseHeader(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper GetResponseHeader_IMPL_44307(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :236
void HttpRequest__GetResponseHeader_IMPL_44307_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = HttpRequest::GetResponseHeader_IMPL_44307(*arg0_, *arg1_, arg2_);
}

// public Android.Base.Wrappers.IJWrapper GetResponseHeaders() :156
void HttpRequest__GetResponseHeaders_fn(HttpRequest* __this, uObject** __retval)
{
    *__retval = __this->GetResponseHeaders();
}

// public static extern Android.Base.Wrappers.IJWrapper GetResponseHeaders_IMPL_44308(bool arg0, Android.Base.Primitives.ujobject arg1) :239
void HttpRequest__GetResponseHeaders_IMPL_44308_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = HttpRequest::GetResponseHeaders_IMPL_44308(*arg0_, *arg1_);
}

// public int GetResponseStatus() :146
void HttpRequest__GetResponseStatus_fn(HttpRequest* __this, int32_t* __retval)
{
    *__retval = __this->GetResponseStatus();
}

// public static extern int GetResponseStatus_IMPL_44306(bool arg0, Android.Base.Primitives.ujobject arg1) :233
void HttpRequest__GetResponseStatus_IMPL_44306_fn(bool* arg0_, jobject* arg1_, int32_t* __retval)
{
    *__retval = HttpRequest::GetResponseStatus_IMPL_44306(*arg0_, *arg1_);
}

// public Android.Base.Wrappers.IJWrapper GetResponseString() :106
void HttpRequest__GetResponseString_fn(HttpRequest* __this, uObject** __retval)
{
    *__retval = __this->GetResponseString();
}

// public static extern Android.Base.Wrappers.IJWrapper GetResponseString_IMPL_44297(bool arg0, Android.Base.Primitives.ujobject arg1) :209
void HttpRequest__GetResponseString_IMPL_44297_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = HttpRequest::GetResponseString_IMPL_44297(*arg0_, *arg1_);
}

// public static extern Android.Base.Primitives.ujobject HttpRequest_IMPL_44284(Android.Base.Wrappers.IJWrapper arg0, Android.Base.Wrappers.IJWrapper arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :191
void HttpRequest__HttpRequest_IMPL_44284_fn(uObject* arg0_, uObject* arg1_, uObject* arg2_, uObject* arg3_, jobject* __retval)
{
    *__retval = HttpRequest::HttpRequest_IMPL_44284(arg0_, arg1_, arg2_, arg3_);
}

// public static bool InstallCache(Android.Base.Wrappers.IJWrapper arg0, long arg1) :34
void HttpRequest__InstallCache_fn(uObject* arg0, int64_t* arg1, bool* __retval)
{
    *__retval = HttpRequest::InstallCache(arg0, *arg1);
}

// public static extern bool InstallCache_IMPL_44279(Android.Base.Wrappers.IJWrapper arg0, long arg1) :175
void HttpRequest__InstallCache_IMPL_44279_fn(uObject* arg0_, int64_t* arg1_, bool* __retval)
{
    *__retval = HttpRequest::InstallCache_IMPL_44279(arg0_, *arg1_);
}

// public void SendAsync() :111
void HttpRequest__SendAsync_fn(HttpRequest* __this)
{
    __this->SendAsync();
}

// public static extern void SendAsync_IMPL_44299(bool arg0, Android.Base.Primitives.ujobject arg1) :212
void HttpRequest__SendAsync_IMPL_44299_fn(bool* arg0_, jobject* arg1_)
{
    HttpRequest::SendAsync_IMPL_44299(*arg0_, *arg1_);
}

// public void SendAsyncBuf(Android.Base.Wrappers.IJWrapper arg0) :116
void HttpRequest__SendAsyncBuf_fn(HttpRequest* __this, uObject* arg0)
{
    __this->SendAsyncBuf(arg0);
}

// public static extern void SendAsyncBuf_IMPL_44300(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :215
void HttpRequest__SendAsyncBuf_IMPL_44300_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    HttpRequest::SendAsyncBuf_IMPL_44300(*arg0_, *arg1_, arg2_);
}

// public void SendAsyncStr(Android.Base.Wrappers.IJWrapper arg0) :121
void HttpRequest__SendAsyncStr_fn(HttpRequest* __this, uObject* arg0)
{
    __this->SendAsyncStr(arg0);
}

// public static extern void SendAsyncStr_IMPL_44301(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :218
void HttpRequest__SendAsyncStr_IMPL_44301_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    HttpRequest::SendAsyncStr_IMPL_44301(*arg0_, *arg1_, arg2_);
}

// public void SetCaching(bool arg0) :96
void HttpRequest__SetCaching_fn(HttpRequest* __this, bool* arg0)
{
    __this->SetCaching(*arg0);
}

// public static extern void SetCaching_IMPL_44295(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :203
void HttpRequest__SetCaching_IMPL_44295_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    HttpRequest::SetCaching_IMPL_44295(*arg0_, *arg1_, *arg2_);
}

// public void SetHeader(Android.Base.Wrappers.IJWrapper arg0, Android.Base.Wrappers.IJWrapper arg1) :86
void HttpRequest__SetHeader_fn(HttpRequest* __this, uObject* arg0, uObject* arg1)
{
    __this->SetHeader(arg0, arg1);
}

// public static extern void SetHeader_IMPL_44293(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :197
void HttpRequest__SetHeader_IMPL_44293_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_)
{
    HttpRequest::SetHeader_IMPL_44293(*arg0_, *arg1_, arg2_, arg3_);
}

// public void SetResponseType(int arg0) :81
void HttpRequest__SetResponseType_fn(HttpRequest* __this, int32_t* arg0)
{
    __this->SetResponseType(*arg0);
}

// public static extern void SetResponseType_IMPL_44292(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :194
void HttpRequest__SetResponseType_IMPL_44292_fn(bool* arg0_, jobject* arg1_, int32_t* arg2_)
{
    HttpRequest::SetResponseType_IMPL_44292(*arg0_, *arg1_, *arg2_);
}

// public void SetTimeout(int arg0) :91
void HttpRequest__SetTimeout_fn(HttpRequest* __this, int32_t* arg0)
{
    __this->SetTimeout(*arg0);
}

// public static extern void SetTimeout_IMPL_44294(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :200
void HttpRequest__SetTimeout_IMPL_44294_fn(bool* arg0_, jobject* arg1_, int32_t* arg2_)
{
    HttpRequest::SetTimeout_IMPL_44294(*arg0_, *arg1_, *arg2_);
}

jclass HttpRequest::_javaClass1_;
jclass HttpRequest::_javaProxyClass1_;
jmethodID HttpRequest::InstallCache_44279_ID_;
jmethodID HttpRequest::HttpRequest_44284_ID_c_;
jmethodID HttpRequest::HttpRequest_44284_ID_c_prox_;
jmethodID HttpRequest::SetResponseType_44292_ID_;
jmethodID HttpRequest::SetHeader_44293_ID_;
jmethodID HttpRequest::SetTimeout_44294_ID_;
jmethodID HttpRequest::SetCaching_44295_ID_;
jmethodID HttpRequest::GetResponseString_44297_ID_;
jmethodID HttpRequest::SendAsync_44299_ID_;
jmethodID HttpRequest::SendAsyncBuf_44300_ID_;
jmethodID HttpRequest::SendAsyncStr_44301_ID_;
jmethodID HttpRequest::Abort_44305_ID_;
jmethodID HttpRequest::GetResponseStatus_44306_ID_;
jmethodID HttpRequest::GetResponseHeader_44307_ID_;
jmethodID HttpRequest::GetResponseHeaders_44308_ID_;

// protected HttpRequest(Android.Base.Wrappers.IJWrapper arg0, Android.Base.Wrappers.IJWrapper arg1, Android.Base.Wrappers.IJWrapper arg2) [instance] :59
void HttpRequest::ctor_4(uObject* arg0, uObject* arg1, uObject* arg2)
{
    ctor_1(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    _subclassed = HttpRequest::_IsThisType1((uObject*)this);
    HttpRequest* wrapper = _subclassed ? this : NULL;
    _javaObject = HttpRequest::HttpRequest_IMPL_44284((uObject*)wrapper, arg0, arg1, arg2);
}

// public void Abort() [instance] :141
void HttpRequest::Abort()
{
    HttpRequest::Abort_IMPL_44305(_subclassed, _javaObject);
}

// public Android.Base.Wrappers.IJWrapper GetResponseHeader(Android.Base.Wrappers.IJWrapper arg0) [instance] :151
uObject* HttpRequest::GetResponseHeader(uObject* arg0)
{
    return HttpRequest::GetResponseHeader_IMPL_44307(_subclassed, _javaObject, arg0);
}

// public Android.Base.Wrappers.IJWrapper GetResponseHeaders() [instance] :156
uObject* HttpRequest::GetResponseHeaders()
{
    return HttpRequest::GetResponseHeaders_IMPL_44308(_subclassed, _javaObject);
}

// public int GetResponseStatus() [instance] :146
int32_t HttpRequest::GetResponseStatus()
{
    return HttpRequest::GetResponseStatus_IMPL_44306(_subclassed, _javaObject);
}

// public Android.Base.Wrappers.IJWrapper GetResponseString() [instance] :106
uObject* HttpRequest::GetResponseString()
{
    return HttpRequest::GetResponseString_IMPL_44297(_subclassed, _javaObject);
}

// public void SendAsync() [instance] :111
void HttpRequest::SendAsync()
{
    HttpRequest::SendAsync_IMPL_44299(_subclassed, _javaObject);
}

// public void SendAsyncBuf(Android.Base.Wrappers.IJWrapper arg0) [instance] :116
void HttpRequest::SendAsyncBuf(uObject* arg0)
{
    HttpRequest::SendAsyncBuf_IMPL_44300(_subclassed, _javaObject, arg0);
}

// public void SendAsyncStr(Android.Base.Wrappers.IJWrapper arg0) [instance] :121
void HttpRequest::SendAsyncStr(uObject* arg0)
{
    HttpRequest::SendAsyncStr_IMPL_44301(_subclassed, _javaObject, arg0);
}

// public void SetCaching(bool arg0) [instance] :96
void HttpRequest::SetCaching(bool arg0)
{
    bool arg0_ = arg0;
    HttpRequest::SetCaching_IMPL_44295(_subclassed, _javaObject, arg0_);
}

// public void SetHeader(Android.Base.Wrappers.IJWrapper arg0, Android.Base.Wrappers.IJWrapper arg1) [instance] :86
void HttpRequest::SetHeader(uObject* arg0, uObject* arg1)
{
    HttpRequest::SetHeader_IMPL_44293(_subclassed, _javaObject, arg0, arg1);
}

// public void SetResponseType(int arg0) [instance] :81
void HttpRequest::SetResponseType(int32_t arg0)
{
    int32_t arg0_ = arg0;
    HttpRequest::SetResponseType_IMPL_44292(_subclassed, _javaObject, arg0_);
}

// public void SetTimeout(int arg0) [instance] :91
void HttpRequest::SetTimeout(int32_t arg0)
{
    int32_t arg0_ = arg0;
    HttpRequest::SetTimeout_IMPL_44294(_subclassed, _javaObject, arg0_);
}

// public static extern new void _Init() [static] :17
void HttpRequest::_Init1()
{
    if (HttpRequest::_javaClass1_) { return; }
    INIT_JNI;
    HttpRequest::_javaClass1_ = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("com/fuse/ExperimentalHttp/HttpRequest"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!HttpRequest::_javaClass1_) { THROW_UNO_EXCEPTION("Unable to cache class 'com.fuse.ExperimentalHttp.HttpRequest'", 61);; }
}

// public static extern new void _InitProxy() [static] :13
void HttpRequest::_InitProxy1()
{
    if (HttpRequest::_javaProxyClass1_) { return; }
    INIT_JNI;
    HttpRequest::_javaProxyClass1_ = NEW_GLOBAL_REF(jclass,::g::Android::Base::JNI::LoadClass(jni, "com.Bindings.Android_com_fuse_ExperimentalHttp_HttpRequest"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!HttpRequest::_javaProxyClass1_) { THROW_UNO_EXCEPTION("Unable to cache class 'Android_com_fuse_ExperimentalHttp_HttpRequest'", 69);; }
    
    BEGIN_REG_MTD(7);
    //#if !#{Android.com.fuse.ExperimentalHttp.HttpRequest.OnDataReceived(Android.Base.Wrappers.IJWrapper,int):IsStripped}
    REG_MTD(0,"__n_OnDataReceived","(J[BIJJ)V",::Android_com_fuse_ExperimentalHttp_HttpRequest__OnDataReceived44285);
    //#endif
    //#if !#{Android.com.fuse.ExperimentalHttp.HttpRequest.OnAborted():IsStripped}
    REG_MTD(1,"__n_OnAborted","(J)V",::Android_com_fuse_ExperimentalHttp_HttpRequest__OnAborted44286);
    //#endif
    //#if !#{Android.com.fuse.ExperimentalHttp.HttpRequest.OnError(Android.Base.Wrappers.IJWrapper):IsStripped}
    REG_MTD(2,"__n_OnError","(JLjava/lang/String;J)V",::Android_com_fuse_ExperimentalHttp_HttpRequest__OnError44287);
    //#endif
    //#if !#{Android.com.fuse.ExperimentalHttp.HttpRequest.OnTimeout():IsStripped}
    REG_MTD(3,"__n_OnTimeout","(J)V",::Android_com_fuse_ExperimentalHttp_HttpRequest__OnTimeout44288);
    //#endif
    //#if !#{Android.com.fuse.ExperimentalHttp.HttpRequest.OnDone():IsStripped}
    REG_MTD(4,"__n_OnDone","(J)V",::Android_com_fuse_ExperimentalHttp_HttpRequest__OnDone44289);
    //#endif
    //#if !#{Android.com.fuse.ExperimentalHttp.HttpRequest.OnHeadersReceived():IsStripped}
    REG_MTD(5,"__n_OnHeadersReceived","(J)V",::Android_com_fuse_ExperimentalHttp_HttpRequest__OnHeadersReceived44290);
    //#endif
    //#if !#{Android.com.fuse.ExperimentalHttp.HttpRequest.OnProgress(int,int,bool):IsStripped}
    REG_MTD(6,"__n_OnProgress","(JIIZJJJ)V",::Android_com_fuse_ExperimentalHttp_HttpRequest__OnProgress44291);
    //#endif
    COMMIT_REG_MTD(HttpRequest::_javaProxyClass1_);
}

// public static extern new bool _IsThisType(Android.Base.Wrappers.IJWrapper obj) [static] :15
bool HttpRequest::_IsThisType1(uObject* obj_)
{
    int N = 44;
    const char* typ = "Android.com.fuse.ExperimentalHttp.HttpRequest";
    const char* potential = obj_->__type->FullName;
    for (int i = 0; i < N; ++i)
    {
        if (potential[i]==0 || (potential[i] != typ[i])) {
            return true;
        }
    }
    return false;
}

// public static extern void Abort_IMPL_44305(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :230
void HttpRequest::Abort_IMPL_44305(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    
    CLASS_INIT(HttpRequest::_javaClass1_,HttpRequest::_Init1());
    CACHE_METHOD(HttpRequest::Abort_44305_ID_,HttpRequest::_javaClass1_,"Abort","()V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.Abort could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HttpRequest::_javaClass1_, HttpRequest::Abort_44305_ID_);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HttpRequest::Abort_44305_ID_);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper GetResponseHeader_IMPL_44307(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :236
uObject* HttpRequest::GetResponseHeader_IMPL_44307(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CLASS_INIT(HttpRequest::_javaClass1_,HttpRequest::_Init1());
    CACHE_METHOD(HttpRequest::GetResponseHeader_44307_ID_,HttpRequest::_javaClass1_,"GetResponseHeader","(Ljava/lang/String;)Ljava/lang/String;",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.GetResponseHeader could not be cached",98);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, HttpRequest::_javaClass1_, HttpRequest::GetResponseHeader_44307_ID_, _obArg2),result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, HttpRequest::GetResponseHeader_44307_ID_, _obArg2),result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper GetResponseHeaders_IMPL_44308(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :239
uObject* HttpRequest::GetResponseHeaders_IMPL_44308(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    
    uObject* result;
    CLASS_INIT(HttpRequest::_javaClass1_,HttpRequest::_Init1());
    CACHE_METHOD(HttpRequest::GetResponseHeaders_44308_ID_,HttpRequest::_javaClass1_,"GetResponseHeaders","()Ljava/lang/String;",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.GetResponseHeaders could not be cached",99);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, HttpRequest::_javaClass1_, HttpRequest::GetResponseHeaders_44308_ID_),result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, HttpRequest::GetResponseHeaders_44308_ID_),result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    
    return result;
}

// public static extern int GetResponseStatus_IMPL_44306(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :233
int32_t HttpRequest::GetResponseStatus_IMPL_44306(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    
    int32_t result;
    CLASS_INIT(HttpRequest::_javaClass1_,HttpRequest::_Init1());
    CACHE_METHOD(HttpRequest::GetResponseStatus_44306_ID_,HttpRequest::_javaClass1_,"GetResponseStatus","()I",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.GetResponseStatus could not be cached",98);
    if (arg0_) {
        result = ((int32_t)U_JNIVAR->CallNonvirtualIntMethod(arg1_, HttpRequest::_javaClass1_, HttpRequest::GetResponseStatus_44306_ID_));
    }
    else
    {
        result = ((int32_t)U_JNIVAR->CallIntMethod(arg1_, HttpRequest::GetResponseStatus_44306_ID_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper GetResponseString_IMPL_44297(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :209
uObject* HttpRequest::GetResponseString_IMPL_44297(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    
    uObject* result;
    CLASS_INIT(HttpRequest::_javaClass1_,HttpRequest::_Init1());
    CACHE_METHOD(HttpRequest::GetResponseString_44297_ID_,HttpRequest::_javaClass1_,"GetResponseString","()Ljava/lang/String;",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.GetResponseString could not be cached",98);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, HttpRequest::_javaClass1_, HttpRequest::GetResponseString_44297_ID_),result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, HttpRequest::GetResponseString_44297_ID_),result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    
    return result;
}

// public static extern Android.Base.Primitives.ujobject HttpRequest_IMPL_44284(Android.Base.Wrappers.IJWrapper arg0, Android.Base.Wrappers.IJWrapper arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :191
jobject HttpRequest::HttpRequest_IMPL_44284(uObject* arg0_, uObject* arg1_, uObject* arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(HttpRequest::_javaClass1_,HttpRequest::_Init1());
    CACHE_METHOD(HttpRequest::HttpRequest_44284_ID_c_,HttpRequest::_javaClass1_,"<init>","(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.<init> could not be cached",87);
    if (arg0_) {
        CLASS_INIT(HttpRequest::_javaProxyClass1_,HttpRequest::_InitProxy1());
        CACHE_METHOD(HttpRequest::HttpRequest_44284_ID_c_prox_,HttpRequest::_javaProxyClass1_,"<init>","(JLandroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V",GetMethodID,"Proxy Id for method Android_com_fuse_ExperimentalHttp_HttpRequest.HttpRequest_44284_ID_c_prox could not be cached",113);
    }
    jobject _obArg1 = ((!arg1_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg1_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject result;
    jobject _tmp;
    if (!arg0_) {
        _tmp = U_JNIVAR->NewObject(HttpRequest::_javaClass1_, HttpRequest::HttpRequest_44284_ID_c_, _obArg1, _obArg2, _obArg3);
        result = NEW_GLOBAL_REF(jobject,_tmp);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    } else {
            _tmp = U_JNIVAR->NewObject(HttpRequest::_javaProxyClass1_, HttpRequest::HttpRequest_44284_ID_c_prox_, (jlong)arg0_->__weakptr, _obArg1, _obArg2, _obArg3);
        result = NEW_GLOBAL_REF(jobject,_tmp);
        ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    }
    
    U_JNIVAR->DeleteLocalRef(_tmp);
    return result;
}

// public static bool InstallCache(Android.Base.Wrappers.IJWrapper arg0, long arg1) [static] :34
bool HttpRequest::InstallCache(uObject* arg0, int64_t arg1)
{
    return HttpRequest::InstallCache_IMPL_44279(arg0, arg1);
}

// public static extern bool InstallCache_IMPL_44279(Android.Base.Wrappers.IJWrapper arg0, long arg1) [static] :175
bool HttpRequest::InstallCache_IMPL_44279(uObject* arg0_, int64_t arg1_)
{
    INIT_JNI;
    jobject _obArg0 = ((!arg0_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CLASS_INIT(HttpRequest::_javaClass1_,HttpRequest::_Init1());
    CACHE_METHOD(HttpRequest::InstallCache_44279_ID_,HttpRequest::_javaClass1_,"InstallCache","(Landroid/app/Activity;J)Z",GetStaticMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.InstallCache could not be cached",93);
    result = ((bool)U_JNIVAR->CallStaticBooleanMethod(HttpRequest::_javaClass1_, HttpRequest::InstallCache_44279_ID_, _obArg0, ((jlong)arg1_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    
    return result;
}

// public static extern void SendAsync_IMPL_44299(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :212
void HttpRequest::SendAsync_IMPL_44299(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    
    CLASS_INIT(HttpRequest::_javaClass1_,HttpRequest::_Init1());
    CACHE_METHOD(HttpRequest::SendAsync_44299_ID_,HttpRequest::_javaClass1_,"SendAsync","()V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.SendAsync could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HttpRequest::_javaClass1_, HttpRequest::SendAsync_44299_ID_);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HttpRequest::SendAsync_44299_ID_);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void SendAsyncBuf_IMPL_44300(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :215
void HttpRequest::SendAsyncBuf_IMPL_44300(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CLASS_INIT(HttpRequest::_javaClass1_,HttpRequest::_Init1());
    CACHE_METHOD(HttpRequest::SendAsyncBuf_44300_ID_,HttpRequest::_javaClass1_,"SendAsyncBuf","(Ljava/nio/ByteBuffer;)V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.SendAsyncBuf could not be cached",93);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HttpRequest::_javaClass1_, HttpRequest::SendAsyncBuf_44300_ID_, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HttpRequest::SendAsyncBuf_44300_ID_, _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void SendAsyncStr_IMPL_44301(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :218
void HttpRequest::SendAsyncStr_IMPL_44301(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CLASS_INIT(HttpRequest::_javaClass1_,HttpRequest::_Init1());
    CACHE_METHOD(HttpRequest::SendAsyncStr_44301_ID_,HttpRequest::_javaClass1_,"SendAsyncStr","(Ljava/lang/String;)V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.SendAsyncStr could not be cached",93);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HttpRequest::_javaClass1_, HttpRequest::SendAsyncStr_44301_ID_, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HttpRequest::SendAsyncStr_44301_ID_, _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void SetCaching_IMPL_44295(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :203
void HttpRequest::SetCaching_IMPL_44295(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    
    CLASS_INIT(HttpRequest::_javaClass1_,HttpRequest::_Init1());
    CACHE_METHOD(HttpRequest::SetCaching_44295_ID_,HttpRequest::_javaClass1_,"SetCaching","(Z)V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.SetCaching could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HttpRequest::_javaClass1_, HttpRequest::SetCaching_44295_ID_, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HttpRequest::SetCaching_44295_ID_, ((jboolean)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void SetHeader_IMPL_44293(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :197
void HttpRequest::SetHeader_IMPL_44293(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_)
{
    INIT_JNI;
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CLASS_INIT(HttpRequest::_javaClass1_,HttpRequest::_Init1());
    CACHE_METHOD(HttpRequest::SetHeader_44293_ID_,HttpRequest::_javaClass1_,"SetHeader","(Ljava/lang/String;Ljava/lang/String;)V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.SetHeader could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HttpRequest::_javaClass1_, HttpRequest::SetHeader_44293_ID_, _obArg2, _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HttpRequest::SetHeader_44293_ID_, _obArg2, _obArg3);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void SetResponseType_IMPL_44292(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :194
void HttpRequest::SetResponseType_IMPL_44292(bool arg0_, jobject arg1_, int32_t arg2_)
{
    INIT_JNI;
    
    CLASS_INIT(HttpRequest::_javaClass1_,HttpRequest::_Init1());
    CACHE_METHOD(HttpRequest::SetResponseType_44292_ID_,HttpRequest::_javaClass1_,"SetResponseType","(I)V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.SetResponseType could not be cached",96);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HttpRequest::_javaClass1_, HttpRequest::SetResponseType_44292_ID_, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HttpRequest::SetResponseType_44292_ID_, ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void SetTimeout_IMPL_44294(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :200
void HttpRequest::SetTimeout_IMPL_44294(bool arg0_, jobject arg1_, int32_t arg2_)
{
    INIT_JNI;
    
    CLASS_INIT(HttpRequest::_javaClass1_,HttpRequest::_Init1());
    CACHE_METHOD(HttpRequest::SetTimeout_44294_ID_,HttpRequest::_javaClass1_,"SetTimeout","(I)V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.SetTimeout could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HttpRequest::_javaClass1_, HttpRequest::SetTimeout_44294_ID_, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HttpRequest::SetTimeout_44294_ID_, ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

}}}}} // ::g::Android::com::fuse::ExperimentalHttp
