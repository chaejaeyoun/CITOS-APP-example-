// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/UnoCore/1.9.0/Source/Uno/Platform/EventSources.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Platform{namespace EventSources{struct TextSource;}}}}

namespace g{
namespace Uno{
namespace Platform{
namespace EventSources{

// public static class TextSource :67
// {
uClassType* TextSource_typeof();
void TextSource__get_IsTextInputActive_fn(bool* __retval);

struct TextSource : uObject
{
    static bool IsTextInputActive();
};
// }

}}}} // ::g::Uno::Platform::EventSources
