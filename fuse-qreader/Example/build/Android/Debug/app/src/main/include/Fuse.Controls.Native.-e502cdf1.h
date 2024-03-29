// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Fuse.Nodes/1.9.0/ViewHandle.Android.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Int2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewHandle;}}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public extern class ViewHandle :12
// {
struct ViewHandle_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_Dispose)(::g::Fuse::Controls::Native::ViewHandle*);
    void(*fp_Measure)(::g::Fuse::Controls::Native::ViewHandle*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*);
};

ViewHandle_type* ViewHandle_typeof();
void ViewHandle__ctor__fn(ViewHandle* __this, ::g::Java::Object* nativeHandle);
void ViewHandle__ctor_1_fn(ViewHandle* __this, ::g::Java::Object* nativeHandle, bool* isLeafView);
void ViewHandle__ctor_2_fn(ViewHandle* __this, ::g::Java::Object* nativeHandle, bool* isLeafView, bool* handlesInput);
void ViewHandle__ctor_3_fn(ViewHandle* __this, ::g::Java::Object* nativeHandle, bool* isLeafView, bool* handlesInput, int32_t* invalidation);
void ViewHandle__BringToFront_fn(ViewHandle* __this);
void ViewHandle__CopyState_fn(ViewHandle* sourceHandle, ViewHandle* destHandle);
void ViewHandle__Dispose_fn(ViewHandle* __this);
void ViewHandle__Format_fn(ViewHandle* __this, uString** __retval);
void ViewHandle__GetMeasuredHeight_fn(::g::Java::Object* handle, int32_t* __retval);
void ViewHandle__GetMeasuredWidth_fn(::g::Java::Object* handle, int32_t* __retval);
void ViewHandle__IndexOfChild_fn(ViewHandle* __this, ViewHandle* childHandle, int32_t* __retval);
void ViewHandle__InsertChild_fn(ViewHandle* __this, ViewHandle* childHandle);
void ViewHandle__InsertChild1_fn(ViewHandle* __this, ViewHandle* childHandle, int32_t* index);
void ViewHandle__Invalidate_fn(ViewHandle* __this);
void ViewHandle__InvalidateImpl_fn(ViewHandle* __this);
void ViewHandle__IsViewGroup_fn(ViewHandle* __this, bool* __retval);
void ViewHandle__Measure_fn(ViewHandle* __this, ::g::Fuse::LayoutParams* lp, float* density, ::g::Uno::Float2* __retval);
void ViewHandle__Measure1_fn(::g::Java::Object* handle, int32_t* w, int32_t* h, bool* hasX, bool* hasY);
void ViewHandle__New1_fn(::g::Java::Object* nativeHandle, ViewHandle** __retval);
void ViewHandle__New2_fn(::g::Java::Object* nativeHandle, bool* isLeafView, ViewHandle** __retval);
void ViewHandle__OnSizeChanged_fn(ViewHandle* __this);
void ViewHandle__RemoveChild_fn(ViewHandle* __this, ViewHandle* childHandle);
void ViewHandle__ResetLayoutParams_fn(ViewHandle* __this);
void ViewHandle__ResetState_fn(ViewHandle* __this);
void ViewHandle__SetBackgroundColor_fn(ViewHandle* __this, int32_t* color);
void ViewHandle__SetClipToBounds_fn(ViewHandle* __this, bool* clipToBounds);
void ViewHandle__SetEnabled_fn(ViewHandle* __this, bool* value);
void ViewHandle__SetHitTestEnabled_fn(ViewHandle* __this, bool* enabled);
void ViewHandle__SetIsVisible_fn(ViewHandle* __this, bool* isVisible);
void ViewHandle__SetOpacity_fn(ViewHandle* __this, float* value);
void ViewHandle__get_Size_fn(ViewHandle* __this, ::g::Uno::Int2* __retval);
void ViewHandle__set_Size_fn(ViewHandle* __this, ::g::Uno::Int2* value);
void ViewHandle__ToString_fn(ViewHandle* __this, uString** __retval);
void ViewHandle__UpdateTransform_fn(ViewHandle* __this, float* scaleX, float* scaleY, float* rotation, float* rotationX, float* rotationY);
void ViewHandle__UpdateViewRect_fn(ViewHandle* __this, ::g::Uno::Float4x4* transform, ::g::Uno::Float2* size, float* density);
void ViewHandle__UpdateViewRect1_fn(ViewHandle* __this, int32_t* x, int32_t* y, int32_t* w, int32_t* h);
void ViewHandle__UpdateViewRectImpl_fn(ViewHandle* __this, int32_t* x, int32_t* y, int32_t* w, int32_t* h);

struct ViewHandle : uObject
{
    uStrong< ::g::Java::Object*> NativeHandle;
    ::g::Uno::Int2 _size;
    bool NeedsInvalidation;
    bool IsLeafView;
    bool HandlesInput;

    void ctor_(::g::Java::Object* nativeHandle);
    void ctor_1(::g::Java::Object* nativeHandle, bool isLeafView);
    void ctor_2(::g::Java::Object* nativeHandle, bool isLeafView, bool handlesInput);
    void ctor_3(::g::Java::Object* nativeHandle, bool isLeafView, bool handlesInput, int32_t invalidation);
    void BringToFront();
    void Dispose() { (((ViewHandle_type*)__type)->fp_Dispose)(this); }
    uString* Format();
    int32_t IndexOfChild(ViewHandle* childHandle);
    void InsertChild(ViewHandle* childHandle);
    void InsertChild1(ViewHandle* childHandle, int32_t index);
    void Invalidate();
    void InvalidateImpl();
    bool IsViewGroup();
    ::g::Uno::Float2 Measure(::g::Fuse::LayoutParams lp, float density);
    void OnSizeChanged();
    void RemoveChild(ViewHandle* childHandle);
    void ResetLayoutParams();
    void ResetState();
    void SetBackgroundColor(int32_t color);
    void SetClipToBounds(bool clipToBounds);
    void SetEnabled(bool value);
    void SetHitTestEnabled(bool enabled);
    void SetIsVisible(bool isVisible);
    void SetOpacity(float value);
    ::g::Uno::Int2 Size();
    void Size(::g::Uno::Int2 value);
    void UpdateTransform(float scaleX, float scaleY, float rotation, float rotationX, float rotationY);
    void UpdateViewRect(::g::Uno::Float4x4 transform, ::g::Uno::Float2 size, float density);
    void UpdateViewRect1(int32_t x, int32_t y, int32_t w, int32_t h);
    void UpdateViewRectImpl(int32_t x, int32_t y, int32_t w, int32_t h);
    static void CopyState(ViewHandle* sourceHandle, ViewHandle* destHandle);
    static void Dispose(ViewHandle* __this) { ViewHandle__Dispose_fn(__this); }
    static int32_t GetMeasuredHeight(::g::Java::Object* handle);
    static int32_t GetMeasuredWidth(::g::Java::Object* handle);
    static ::g::Uno::Float2 Measure(ViewHandle* __this, ::g::Fuse::LayoutParams lp, float density);
    static void Measure1(::g::Java::Object* handle, int32_t w, int32_t h, bool hasX, bool hasY);
    static ViewHandle* New1(::g::Java::Object* nativeHandle);
    static ViewHandle* New2(::g::Java::Object* nativeHandle, bool isLeafView);
};

}}}} // ::g::Fuse::Controls::Native

#include <Fuse.LayoutParams.h>
#include <Uno.Float2.h>
#include <Uno.Float4x4.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

inline ::g::Uno::Float2 ViewHandle::Measure(::g::Fuse::LayoutParams lp, float density) { ::g::Uno::Float2 __retval; return (((ViewHandle_type*)__type)->fp_Measure)(this, &lp, &density, &__retval), __retval; }
inline ::g::Uno::Float2 ViewHandle::Measure(ViewHandle* __this, ::g::Fuse::LayoutParams lp, float density) { ::g::Uno::Float2 __retval; return ViewHandle__Measure_fn(__this, &lp, &density, &__retval), __retval; }
// }

}}}} // ::g::Fuse::Controls::Native
