// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/FileCache.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct FileCache;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct UxFileSource;}}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class FileCache :7
// {
uType* FileCache_typeof();
void FileCache__ctor__fn(FileCache* __this);
void FileCache__GetFileSource_fn(uString* path, ::g::Outracks::Simulator::Runtime::UxFileSource** __retval);
void FileCache__New1_fn(FileCache** __retval);
void FileCache__Update_fn(uString* path, uArray* bytes);

struct FileCache : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _cache_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _cache() { return FileCache_typeof()->Init(), _cache_; }

    void ctor_();
    static ::g::Outracks::Simulator::Runtime::UxFileSource* GetFileSource(uString* path);
    static FileCache* New1();
    static void Update(uString* path, uArray* bytes);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
