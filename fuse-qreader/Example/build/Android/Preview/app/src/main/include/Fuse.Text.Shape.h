// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Fuse.Text/1.9.0/Shape.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{namespace Bidirectional{struct Run;}}}}
namespace g{namespace Fuse{namespace Text{struct Font;}}}
namespace g{namespace Fuse{namespace Text{struct PositionedRun;}}}
namespace g{namespace Fuse{namespace Text{struct Shape;}}}
namespace g{namespace Fuse{namespace Text{struct ShapedRun;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Text{

// public static class Shape :7
// {
uClassType* Shape_typeof();
void Shape__PositionLines_fn(::g::Fuse::Text::Font* font, float* pixelWidth, float* lineSpacing, float* alignment, ::g::Uno::Collections::List* lines, ::g::Uno::Collections::List** __retval);
void Shape__ShapeLines_fn(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* lines, ::g::Uno::Collections::List** __retval);

struct Shape : uObject
{
    static ::g::Uno::Collections::List* PositionLines(::g::Fuse::Text::Font* font, float pixelWidth, float lineSpacing, float alignment, ::g::Uno::Collections::List* lines);
    static ::g::Uno::Collections::List* ShapeLines(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* lines);
};
// }

}}} // ::g::Fuse::Text
