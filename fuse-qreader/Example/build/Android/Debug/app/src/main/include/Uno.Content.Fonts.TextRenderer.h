// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/UnoCore/1.9.0/Source/Uno/Content/Fonts/TextRenderer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Byte4.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Content{namespace Fonts{struct BitmapFont;}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct BitmapFont__GlyphInfo;}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextRenderer;}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextShader;}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextShaderData;}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextTransform;}}}}
namespace g{namespace Uno{namespace Graphics{struct IndexBuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Buffer;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Uno{
namespace Content{
namespace Fonts{

// public sealed class TextRenderer :10
// {
uType* TextRenderer_typeof();
void TextRenderer__ctor__fn(TextRenderer* __this, int32_t* maxCharCount, ::g::Uno::Content::Fonts::TextShader* shader, ::g::Uno::Content::Fonts::TextTransform* transform);
void TextRenderer__Begin_fn(TextRenderer* __this, ::g::Uno::Content::Fonts::BitmapFont* font);
void TextRenderer__get_Color_fn(TextRenderer* __this, ::g::Uno::Float4* __retval);
void TextRenderer__set_Color_fn(TextRenderer* __this, ::g::Uno::Float4* value);
void TextRenderer__End_fn(TextRenderer* __this);
void TextRenderer__get_HasBegun_fn(TextRenderer* __this, bool* __retval);
void TextRenderer__set_HasBegun_fn(TextRenderer* __this, bool* value);
void TextRenderer__MeasureString_fn(TextRenderer* __this, uString* text, ::g::Uno::Float2* __retval);
void TextRenderer__MeasureString1_fn(TextRenderer* __this, uString* text, int32_t* startIndex, int32_t* length, ::g::Uno::Float2* __retval);
void TextRenderer__New1_fn(int32_t* maxCharCount, ::g::Uno::Content::Fonts::TextShader* shader, ::g::Uno::Content::Fonts::TextTransform* transform, TextRenderer** __retval);
void TextRenderer__get_Transform_fn(TextRenderer* __this, ::g::Uno::Content::Fonts::TextTransform** __retval);
void TextRenderer__set_Transform_fn(TextRenderer* __this, ::g::Uno::Content::Fonts::TextTransform* value);
void TextRenderer__WriteGlyph_fn(TextRenderer* __this, ::g::Uno::Content::Fonts::BitmapFont__GlyphInfo* ci, ::g::Uno::Float2* caret);
void TextRenderer__WriteString_fn(TextRenderer* __this, ::g::Uno::Float2* caret, uString* text);
void TextRenderer__WriteString1_fn(TextRenderer* __this, ::g::Uno::Float2* caret, uString* text, int32_t* startIndex, int32_t* length);

struct TextRenderer : uObject
{
    int32_t _maxCharCount;
    float _tracking;
    ::g::Uno::Byte4 _color;
    uStrong< ::g::Uno::Content::Fonts::BitmapFont*> _font;
    uStrong< ::g::Uno::Content::Fonts::TextShader*> _shader;
    uStrong< ::g::Uno::Content::Fonts::TextTransform*> _transform;
    uStrong< ::g::Uno::Buffer*> _buffer;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> _vbo;
    uStrong< ::g::Uno::Graphics::IndexBuffer*> _ibo;
    uStrong< ::g::Uno::Content::Fonts::TextShaderData*> _data;
    bool _HasBegun;

    void ctor_(int32_t maxCharCount, ::g::Uno::Content::Fonts::TextShader* shader, ::g::Uno::Content::Fonts::TextTransform* transform);
    void Begin(::g::Uno::Content::Fonts::BitmapFont* font);
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    void End();
    bool HasBegun();
    void HasBegun(bool value);
    ::g::Uno::Float2 MeasureString(uString* text);
    ::g::Uno::Float2 MeasureString1(uString* text, int32_t startIndex, int32_t length);
    ::g::Uno::Content::Fonts::TextTransform* Transform();
    void Transform(::g::Uno::Content::Fonts::TextTransform* value);
    void WriteGlyph(::g::Uno::Content::Fonts::BitmapFont__GlyphInfo ci, ::g::Uno::Float2 caret);
    void WriteString(::g::Uno::Float2 caret, uString* text);
    void WriteString1(::g::Uno::Float2 caret, uString* text, int32_t startIndex, int32_t length);
    static TextRenderer* New1(int32_t maxCharCount, ::g::Uno::Content::Fonts::TextShader* shader, ::g::Uno::Content::Fonts::TextTransform* transform);
};
// }

}}}} // ::g::Uno::Content::Fonts
