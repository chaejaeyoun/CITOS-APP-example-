// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Fuse.Drawing/1.9.0/Brushes/LinearGradient.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implement-476e2792.h>
namespace g{namespace Fuse{namespace Drawing{struct GradientStop;}}}
namespace g{namespace Fuse{namespace Drawing{struct LinearGradient;}}}
namespace g{namespace Fuse{namespace Drawing{struct LinearGradientDrawable;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed class LinearGradientDrawable :340
// {
uType* LinearGradientDrawable_typeof();
void LinearGradientDrawable__ctor__fn(LinearGradientDrawable* __this);
void LinearGradientDrawable__FillBuffer_fn(LinearGradientDrawable* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::LinearGradient* lg, ::g::Uno::Graphics::Framebuffer* fb, ::g::Uno::Float2* __retval);
void LinearGradientDrawable__FillBuffer_Colors_ae3a1d65_1_6_6_fn(int32_t* Colors_1_6_4, uArray* Colors_1_6_5, uArray** __retval);
void LinearGradientDrawable__FillBuffer_Offsets_ae3a1d65_1_5_4_fn(int32_t* Offsets_1_5_1, uArray* Offsets_1_5_2, uArray** __retval);
void LinearGradientDrawable__init_DrawCalls_fn(LinearGradientDrawable* __this);
void LinearGradientDrawable__New1_fn(LinearGradientDrawable** __retval);

struct LinearGradientDrawable : uObject
{
    static uSStrong<LinearGradientDrawable*> Singleton_;
    static uSStrong<LinearGradientDrawable*>& Singleton() { return LinearGradientDrawable_typeof()->Init(), Singleton_; }
    uStrong< ::g::Uno::Graphics::VertexBuffer*> FillBuffer_TexCoord_ae3a1d65_1_1_1;
    uStrong<uArray*> FillBuffer_Vertices_ae3a1d65_1_0_9;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_ae3a1d65;

    void ctor_();
    ::g::Uno::Float2 FillBuffer(::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::LinearGradient* lg, ::g::Uno::Graphics::Framebuffer* fb);
    void init_DrawCalls();
    static uArray* FillBuffer_Colors_ae3a1d65_1_6_6(int32_t Colors_1_6_4, uArray* Colors_1_6_5);
    static uArray* FillBuffer_Offsets_ae3a1d65_1_5_4(int32_t Offsets_1_5_1, uArray* Offsets_1_5_2);
    static LinearGradientDrawable* New1();
};
// }

}}} // ::g::Fuse::Drawing
