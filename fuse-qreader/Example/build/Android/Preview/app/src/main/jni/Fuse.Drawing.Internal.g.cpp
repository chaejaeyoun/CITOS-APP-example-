// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Drawing.Internal-35dc6d45.h>
#include <Fuse.Drawing.Internal-3dcc41e8.h>
#include <Fuse.Drawing.Internal-a5c6f893.h>
#include <Fuse.Drawing.Internal-b9d8148e.h>
#include <Fuse.Drawing.Internal-bacec382.h>
#include <Fuse.Drawing.Internal-bcd6298f.h>
#include <Fuse.Drawing.Internal-cee8ff18.h>
#include <Fuse.Drawing.Internal-eebb25d1.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.VertexAt-4a875e1d.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Short.h>
#include <Uno.UShort.h>

namespace g{
namespace Fuse{
namespace Drawing{
namespace Internal{

// C:\Users\채재윤융합IT학부\AppData\Local\Fusetools\Packages\Fuse.Drawing\1.9.0\Internal\BufferCollections.uno
// -----------------------------------------------------------------------------------------------------

// public sealed class MultiBuffer.Field :193
// {
static void MultiBuffer__Field_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Graphics::VertexAttributeType_typeof(), offsetof(MultiBuffer__Field, Type), 0,
        ::g::Uno::Int_typeof(), offsetof(MultiBuffer__Field, Offset), 0,
        ::g::Fuse::Drawing::Internal::MultiBuffer_typeof(), offsetof(MultiBuffer__Field, _owner), 0);
    type->Reflection.SetFields(3,
        new uField("_owner", 2),
        new uField("Offset", 1),
        new uField("Type", 0));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MultiBuffer__Field__New1_fn, 0, true, type, 0));
}

uType* MultiBuffer__Field_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(MultiBuffer__Field);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Internal.MultiBuffer.Field", options);
    type->fp_build_ = MultiBuffer__Field_build;
    type->fp_ctor_ = (void*)MultiBuffer__Field__New1_fn;
    return type;
}

// public generated Field() :193
void MultiBuffer__Field__ctor__fn(MultiBuffer__Field* __this)
{
    __this->ctor_();
}

// public generated Field New() :193
void MultiBuffer__Field__New1_fn(MultiBuffer__Field** __retval)
{
    *__retval = MultiBuffer__Field::New1();
}

// public generated Field() [instance] :193
void MultiBuffer__Field::ctor_()
{
}

// public generated Field New() [static] :193
MultiBuffer__Field* MultiBuffer__Field::New1()
{
    MultiBuffer__Field* obj1 = (MultiBuffer__Field*)uNew(MultiBuffer__Field_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\채재윤융합IT학부\AppData\Local\Fusetools\Packages\Fuse.Drawing\1.9.0\Internal\BufferCollections.uno
// -----------------------------------------------------------------------------------------------------

// public sealed class Float2Buffer :149
// {
static void Float2Buffer_build(uType* type)
{
    type->SetFields(6);
    type->Reflection.SetFunctions(4,
        new uFunction("Append", NULL, (void*)Float2Buffer__Append_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("Append", NULL, (void*)Float2Buffer__Append1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction(".ctor", NULL, (void*)Float2Buffer__New3_fn, 0, true, type, 0),
        new uFunction("Set", NULL, (void*)Float2Buffer__Set_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float2_typeof()));
}

uType* Float2Buffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Internal::TypedBuffer_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(Float2Buffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Internal.Float2Buffer", options);
    type->fp_build_ = Float2Buffer_build;
    type->fp_ctor_ = (void*)Float2Buffer__New3_fn;
    return type;
}

// public Float2Buffer() :150
void Float2Buffer__ctor_2_fn(Float2Buffer* __this)
{
    __this->ctor_2();
}

// public void Append(double x, double y) :162
void Float2Buffer__Append_fn(Float2Buffer* __this, double* x, double* y)
{
    __this->Append(*x, *y);
}

// public void Append(float2 value) :157
void Float2Buffer__Append1_fn(Float2Buffer* __this, ::g::Uno::Float2* value)
{
    __this->Append1(*value);
}

// public Float2Buffer New() :150
void Float2Buffer__New3_fn(Float2Buffer** __retval)
{
    *__retval = Float2Buffer::New3();
}

// public void Set(int offset, float2 value) :153
void Float2Buffer__Set_fn(Float2Buffer* __this, int32_t* offset, ::g::Uno::Float2* value)
{
    __this->Set(*offset, *value);
}

// public Float2Buffer() [instance] :150
void Float2Buffer::ctor_2()
{
    ctor_1(8, 32);
}

// public void Append(double x, double y) [instance] :162
void Float2Buffer::Append(double x, double y)
{
    Append1(::g::Uno::Float2__New2((float)x, (float)y));
}

// public void Append(float2 value) [instance] :157
void Float2Buffer::Append1(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Drawing.Internal.Float2Buffer", "Append(float2)");
    CheckGrow();
    Set(size++, value);
}

// public void Set(int offset, float2 value) [instance] :153
void Float2Buffer::Set(int32_t offset, ::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Drawing.Internal.Float2Buffer", "Set(int,float2)");
    uPtr(back)->Set5(offset * typeSize, value, true);
}

// public Float2Buffer New() [static] :150
Float2Buffer* Float2Buffer::New3()
{
    Float2Buffer* obj1 = (Float2Buffer*)uNew(Float2Buffer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\Users\채재윤융합IT학부\AppData\Local\Fusetools\Packages\Fuse.Drawing\1.9.0\Internal\BufferCollections.uno
// -----------------------------------------------------------------------------------------------------

// public sealed class Float3Buffer :113
// {
static void Float3Buffer_build(uType* type)
{
    type->SetFields(6);
    type->Reflection.SetFunctions(4,
        new uFunction("Append", NULL, (void*)Float3Buffer__Append_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("Append", NULL, (void*)Float3Buffer__Append1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction(".ctor", NULL, (void*)Float3Buffer__New3_fn, 0, true, type, 0),
        new uFunction("Set", NULL, (void*)Float3Buffer__Set_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float3_typeof()));
}

uType* Float3Buffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Internal::TypedBuffer_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(Float3Buffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Internal.Float3Buffer", options);
    type->fp_build_ = Float3Buffer_build;
    type->fp_ctor_ = (void*)Float3Buffer__New3_fn;
    return type;
}

// public Float3Buffer() :114
void Float3Buffer__ctor_2_fn(Float3Buffer* __this)
{
    __this->ctor_2();
}

// public void Append(double x, double y, double z) :126
void Float3Buffer__Append_fn(Float3Buffer* __this, double* x, double* y, double* z)
{
    __this->Append(*x, *y, *z);
}

// public void Append(float3 value) :121
void Float3Buffer__Append1_fn(Float3Buffer* __this, ::g::Uno::Float3* value)
{
    __this->Append1(*value);
}

// public Float3Buffer New() :114
void Float3Buffer__New3_fn(Float3Buffer** __retval)
{
    *__retval = Float3Buffer::New3();
}

// public void Set(int offset, float3 value) :117
void Float3Buffer__Set_fn(Float3Buffer* __this, int32_t* offset, ::g::Uno::Float3* value)
{
    __this->Set(*offset, *value);
}

// public Float3Buffer() [instance] :114
void Float3Buffer::ctor_2()
{
    ctor_1(12, 32);
}

// public void Append(double x, double y, double z) [instance] :126
void Float3Buffer::Append(double x, double y, double z)
{
    Append1(::g::Uno::Float3__New2((float)x, (float)y, (float)z));
}

// public void Append(float3 value) [instance] :121
void Float3Buffer::Append1(::g::Uno::Float3 value)
{
    uStackFrame __("Fuse.Drawing.Internal.Float3Buffer", "Append(float3)");
    CheckGrow();
    Set(size++, value);
}

// public void Set(int offset, float3 value) [instance] :117
void Float3Buffer::Set(int32_t offset, ::g::Uno::Float3 value)
{
    uStackFrame __("Fuse.Drawing.Internal.Float3Buffer", "Set(int,float3)");
    uPtr(back)->Set6(offset * typeSize, value, true);
}

// public Float3Buffer New() [static] :114
Float3Buffer* Float3Buffer::New3()
{
    Float3Buffer* obj1 = (Float3Buffer*)uNew(Float3Buffer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\Users\채재윤융합IT학부\AppData\Local\Fusetools\Packages\Fuse.Drawing\1.9.0\Internal\BufferCollections.uno
// -----------------------------------------------------------------------------------------------------

// public sealed class FloatBuffer :131
// {
static void FloatBuffer_build(uType* type)
{
    type->SetFields(6);
    type->Reflection.SetFunctions(4,
        new uFunction("Append", NULL, (void*)FloatBuffer__Append_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Append", NULL, (void*)FloatBuffer__Append1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)FloatBuffer__New3_fn, 0, true, type, 0),
        new uFunction("Set", NULL, (void*)FloatBuffer__Set_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float_typeof()));
}

uType* FloatBuffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Internal::TypedBuffer_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(FloatBuffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Internal.FloatBuffer", options);
    type->fp_build_ = FloatBuffer_build;
    type->fp_ctor_ = (void*)FloatBuffer__New3_fn;
    return type;
}

// public FloatBuffer() :132
void FloatBuffer__ctor_2_fn(FloatBuffer* __this)
{
    __this->ctor_2();
}

// public void Append(double x) :144
void FloatBuffer__Append_fn(FloatBuffer* __this, double* x)
{
    __this->Append(*x);
}

// public void Append(float value) :139
void FloatBuffer__Append1_fn(FloatBuffer* __this, float* value)
{
    __this->Append1(*value);
}

// public FloatBuffer New() :132
void FloatBuffer__New3_fn(FloatBuffer** __retval)
{
    *__retval = FloatBuffer::New3();
}

// public void Set(int offset, float value) :135
void FloatBuffer__Set_fn(FloatBuffer* __this, int32_t* offset, float* value)
{
    __this->Set(*offset, *value);
}

// public FloatBuffer() [instance] :132
void FloatBuffer::ctor_2()
{
    ctor_1(4, 32);
}

// public void Append(double x) [instance] :144
void FloatBuffer::Append(double x)
{
    Append1((float)x);
}

// public void Append(float value) [instance] :139
void FloatBuffer::Append1(float value)
{
    uStackFrame __("Fuse.Drawing.Internal.FloatBuffer", "Append(float)");
    CheckGrow();
    Set(size++, value);
}

// public void Set(int offset, float value) [instance] :135
void FloatBuffer::Set(int32_t offset, float value)
{
    uStackFrame __("Fuse.Drawing.Internal.FloatBuffer", "Set(int,float)");
    uPtr(back)->Set4(offset * typeSize, value, true);
}

// public FloatBuffer New() [static] :132
FloatBuffer* FloatBuffer::New3()
{
    FloatBuffer* obj1 = (FloatBuffer*)uNew(FloatBuffer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\Users\채재윤융합IT학부\AppData\Local\Fusetools\Packages\Fuse.Drawing\1.9.0\Internal\BufferCollections.uno
// -----------------------------------------------------------------------------------------------------

// public sealed class MultiBuffer :192
// {
static void MultiBuffer_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetFields(6,
        ::g::Uno::Collections::List_typeof()->MakeType(MultiBuffer__Field_typeof(), NULL), offsetof(MultiBuffer, fields), 0,
        ::g::Uno::Int_typeof(), offsetof(MultiBuffer, offset), 0);
    type->Reflection.SetFunctions(22,
        new uFunction("Add", NULL, (void*)MultiBuffer__Add_fn, 0, false, MultiBuffer__Setter_typeof(), 0),
        new uFunction("AllocFloat", NULL, (void*)MultiBuffer__AllocFloat_fn, 0, false, MultiBuffer__Field_typeof(), 0),
        new uFunction("AllocFloat2", NULL, (void*)MultiBuffer__AllocFloat2_fn, 0, false, MultiBuffer__Field_typeof(), 0),
        new uFunction("AllocFloat3", NULL, (void*)MultiBuffer__AllocFloat3_fn, 0, false, MultiBuffer__Field_typeof(), 0),
        new uFunction("AllocFloat4", NULL, (void*)MultiBuffer__AllocFloat4_fn, 0, false, MultiBuffer__Field_typeof(), 0),
        new uFunction("AllocUShort", NULL, (void*)MultiBuffer__AllocUShort_fn, 0, false, MultiBuffer__Field_typeof(), 0),
        new uFunction("AppendByte", NULL, (void*)MultiBuffer__AppendByte_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Byte_typeof()),
        new uFunction("AppendByteNF", NULL, (void*)MultiBuffer__AppendByteNF_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("AppendEnd", NULL, (void*)MultiBuffer__AppendEnd_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("AppendFloat", NULL, (void*)MultiBuffer__AppendFloat_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("AppendFloat2", NULL, (void*)MultiBuffer__AppendFloat2_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("AppendFloat2", NULL, (void*)MultiBuffer__AppendFloat21_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("AppendFloat3", NULL, (void*)MultiBuffer__AppendFloat3_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("AppendFloat3", NULL, (void*)MultiBuffer__AppendFloat31_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("AppendFloat4", NULL, (void*)MultiBuffer__AppendFloat4_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("AppendOpen", NULL, (void*)MultiBuffer__AppendOpen_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("AppendUShort", NULL, (void*)MultiBuffer__AppendUShort_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("AppendUShort", NULL, (void*)MultiBuffer__AppendUShort1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UShort_typeof()),
        new uFunction("AppendUShortNF", NULL, (void*)MultiBuffer__AppendUShortNF_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("EndAlloc", NULL, (void*)MultiBuffer__EndAlloc_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)MultiBuffer__New3_fn, 0, true, type, 0),
        new uFunction("get_Stride", NULL, (void*)MultiBuffer__get_Stride_fn, 0, false, ::g::Uno::Int_typeof(), 0));
}

uType* MultiBuffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Internal::TypedBuffer_typeof();
    options.FieldCount = 8;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(MultiBuffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Internal.MultiBuffer", options);
    type->fp_build_ = MultiBuffer_build;
    type->fp_ctor_ = (void*)MultiBuffer__New3_fn;
    return type;
}

// public MultiBuffer() :211
void MultiBuffer__ctor_2_fn(MultiBuffer* __this)
{
    __this->ctor_2();
}

// public Fuse.Drawing.Internal.MultiBuffer.Setter Add() :336
void MultiBuffer__Add_fn(MultiBuffer* __this, MultiBuffer__Setter** __retval)
{
    *__retval = __this->Add();
}

// private Fuse.Drawing.Internal.MultiBuffer.Field Alloc(Uno.Graphics.VertexAttributeType type, int size) :221
void MultiBuffer__Alloc_fn(MultiBuffer* __this, int32_t* type, int32_t* size1, MultiBuffer__Field** __retval)
{
    *__retval = __this->Alloc(*type, *size1);
}

// public Fuse.Drawing.Internal.MultiBuffer.Field AllocFloat() :232
void MultiBuffer__AllocFloat_fn(MultiBuffer* __this, MultiBuffer__Field** __retval)
{
    *__retval = __this->AllocFloat();
}

// public Fuse.Drawing.Internal.MultiBuffer.Field AllocFloat2() :235
void MultiBuffer__AllocFloat2_fn(MultiBuffer* __this, MultiBuffer__Field** __retval)
{
    *__retval = __this->AllocFloat2();
}

// public Fuse.Drawing.Internal.MultiBuffer.Field AllocFloat3() :238
void MultiBuffer__AllocFloat3_fn(MultiBuffer* __this, MultiBuffer__Field** __retval)
{
    *__retval = __this->AllocFloat3();
}

// public Fuse.Drawing.Internal.MultiBuffer.Field AllocFloat4() :241
void MultiBuffer__AllocFloat4_fn(MultiBuffer* __this, MultiBuffer__Field** __retval)
{
    *__retval = __this->AllocFloat4();
}

// public Fuse.Drawing.Internal.MultiBuffer.Field AllocUShort() :244
void MultiBuffer__AllocUShort_fn(MultiBuffer* __this, MultiBuffer__Field** __retval)
{
    *__retval = __this->AllocUShort();
}

// public void AppendByte(byte value) :303
void MultiBuffer__AppendByte_fn(MultiBuffer* __this, uint8_t* value)
{
    __this->AppendByte(*value);
}

// public void AppendByteNF(float value) :308
void MultiBuffer__AppendByteNF_fn(MultiBuffer* __this, float* value)
{
    __this->AppendByteNF(*value);
}

// public void AppendEnd() :262
void MultiBuffer__AppendEnd_fn(MultiBuffer* __this)
{
    __this->AppendEnd();
}

// public void AppendFloat(double value) :277
void MultiBuffer__AppendFloat_fn(MultiBuffer* __this, double* value)
{
    __this->AppendFloat(*value);
}

// public void AppendFloat2(double x, double y) :286
void MultiBuffer__AppendFloat2_fn(MultiBuffer* __this, double* x, double* y)
{
    __this->AppendFloat2(*x, *y);
}

// public void AppendFloat2(float2 value) :282
void MultiBuffer__AppendFloat21_fn(MultiBuffer* __this, ::g::Uno::Float2* value)
{
    __this->AppendFloat21(*value);
}

// public void AppendFloat3(double x, double y, double z) :294
void MultiBuffer__AppendFloat3_fn(MultiBuffer* __this, double* x, double* y, double* z)
{
    __this->AppendFloat3(*x, *y, *z);
}

// public void AppendFloat3(float3 value) :290
void MultiBuffer__AppendFloat31_fn(MultiBuffer* __this, ::g::Uno::Float3* value)
{
    __this->AppendFloat31(*value);
}

// public void AppendFloat4(float4 value) :298
void MultiBuffer__AppendFloat4_fn(MultiBuffer* __this, ::g::Uno::Float4* value)
{
    __this->AppendFloat4(*value);
}

// public void AppendOpen() :258
void MultiBuffer__AppendOpen_fn(MultiBuffer* __this)
{
    __this->AppendOpen();
}

// public void AppendUShort(int value) :270
void MultiBuffer__AppendUShort_fn(MultiBuffer* __this, int32_t* value)
{
    __this->AppendUShort(*value);
}

// public void AppendUShort(ushort value) :266
void MultiBuffer__AppendUShort1_fn(MultiBuffer* __this, uint16_t* value)
{
    __this->AppendUShort1(*value);
}

// public void AppendUShortNF(float value) :273
void MultiBuffer__AppendUShortNF_fn(MultiBuffer* __this, float* value)
{
    __this->AppendUShortNF(*value);
}

// public void EndAlloc() :252
void MultiBuffer__EndAlloc_fn(MultiBuffer* __this)
{
    __this->EndAlloc();
}

// public MultiBuffer New() :211
void MultiBuffer__New3_fn(MultiBuffer** __retval)
{
    *__retval = MultiBuffer::New3();
}

// public int get_Stride() :215
void MultiBuffer__get_Stride_fn(MultiBuffer* __this, int32_t* __retval)
{
    *__retval = __this->Stride();
}

// public MultiBuffer() [instance] :211
void MultiBuffer::ctor_2()
{
    fields = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(MultiBuffer__Field_typeof(), NULL)));
    ctor_();
}

// public Fuse.Drawing.Internal.MultiBuffer.Setter Add() [instance] :336
MultiBuffer__Setter* MultiBuffer::Add()
{
    uStackFrame __("Fuse.Drawing.Internal.MultiBuffer", "Add()");
    CheckGrow();
    MultiBuffer__Setter* s = MultiBuffer__Setter::New1(this, size);
    size++;
    return s;
}

// private Fuse.Drawing.Internal.MultiBuffer.Field Alloc(Uno.Graphics.VertexAttributeType type, int size) [instance] :221
MultiBuffer__Field* MultiBuffer::Alloc(int32_t type, int32_t size1)
{
    uStackFrame __("Fuse.Drawing.Internal.MultiBuffer", "Alloc(Uno.Graphics.VertexAttributeType,int)");
    MultiBuffer__Field* collection1;
    collection1 = MultiBuffer__Field::New1();
    uPtr(collection1)->Type = type;
    uPtr(collection1)->Offset = typeSize;
    uPtr(collection1)->_owner = this;
    MultiBuffer__Field* f = collection1;
    typeSize = (typeSize + size1);
    ::g::Uno::Collections::List__Add_fn(uPtr(fields), f);
    return f;
}

// public Fuse.Drawing.Internal.MultiBuffer.Field AllocFloat() [instance] :232
MultiBuffer__Field* MultiBuffer::AllocFloat()
{
    uStackFrame __("Fuse.Drawing.Internal.MultiBuffer", "AllocFloat()");
    return Alloc(1, 4);
}

// public Fuse.Drawing.Internal.MultiBuffer.Field AllocFloat2() [instance] :235
MultiBuffer__Field* MultiBuffer::AllocFloat2()
{
    uStackFrame __("Fuse.Drawing.Internal.MultiBuffer", "AllocFloat2()");
    return Alloc(2, 8);
}

// public Fuse.Drawing.Internal.MultiBuffer.Field AllocFloat3() [instance] :238
MultiBuffer__Field* MultiBuffer::AllocFloat3()
{
    uStackFrame __("Fuse.Drawing.Internal.MultiBuffer", "AllocFloat3()");
    return Alloc(3, 12);
}

// public Fuse.Drawing.Internal.MultiBuffer.Field AllocFloat4() [instance] :241
MultiBuffer__Field* MultiBuffer::AllocFloat4()
{
    uStackFrame __("Fuse.Drawing.Internal.MultiBuffer", "AllocFloat4()");
    return Alloc(4, 16);
}

// public Fuse.Drawing.Internal.MultiBuffer.Field AllocUShort() [instance] :244
MultiBuffer__Field* MultiBuffer::AllocUShort()
{
    uStackFrame __("Fuse.Drawing.Internal.MultiBuffer", "AllocUShort()");
    return Alloc(11, 2);
}

// public void AppendByte(byte value) [instance] :303
void MultiBuffer::AppendByte(uint8_t value)
{
    uStackFrame __("Fuse.Drawing.Internal.MultiBuffer", "AppendByte(byte)");
    uPtr(back)->Set18((size * typeSize) + offset, (int16_t)value, true);
    offset = (offset + 1);
}

// public void AppendByteNF(float value) [instance] :308
void MultiBuffer::AppendByteNF(float value)
{
    uStackFrame __("Fuse.Drawing.Internal.MultiBuffer", "AppendByteNF(float)");
    AppendByte((uint8_t)::g::Uno::Math::Clamp1(value * 255.0f, 0.0f, 255.0f));
}

// public void AppendEnd() [instance] :262
void MultiBuffer::AppendEnd()
{
    size++;
}

// public void AppendFloat(double value) [instance] :277
void MultiBuffer::AppendFloat(double value)
{
    uStackFrame __("Fuse.Drawing.Internal.MultiBuffer", "AppendFloat(double)");
    uPtr(back)->Set4((size * typeSize) + offset, (float)value, true);
    offset = (offset + 4);
}

// public void AppendFloat2(double x, double y) [instance] :286
void MultiBuffer::AppendFloat2(double x, double y)
{
    uStackFrame __("Fuse.Drawing.Internal.MultiBuffer", "AppendFloat2(double,double)");
    AppendFloat21(::g::Uno::Float2__New2((float)x, (float)y));
}

// public void AppendFloat2(float2 value) [instance] :282
void MultiBuffer::AppendFloat21(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Drawing.Internal.MultiBuffer", "AppendFloat2(float2)");
    uPtr(back)->Set5((size * typeSize) + offset, value, true);
    offset = (offset + 8);
}

// public void AppendFloat3(double x, double y, double z) [instance] :294
void MultiBuffer::AppendFloat3(double x, double y, double z)
{
    uStackFrame __("Fuse.Drawing.Internal.MultiBuffer", "AppendFloat3(double,double,double)");
    AppendFloat31(::g::Uno::Float3__New2((float)x, (float)y, (float)z));
}

// public void AppendFloat3(float3 value) [instance] :290
void MultiBuffer::AppendFloat31(::g::Uno::Float3 value)
{
    uStackFrame __("Fuse.Drawing.Internal.MultiBuffer", "AppendFloat3(float3)");
    uPtr(back)->Set6((size * typeSize) + offset, value, true);
    offset = (offset + 12);
}

// public void AppendFloat4(float4 value) [instance] :298
void MultiBuffer::AppendFloat4(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Drawing.Internal.MultiBuffer", "AppendFloat4(float4)");
    uPtr(back)->Set8((size * typeSize) + offset, value, true);
    offset = (offset + 16);
}

// public void AppendOpen() [instance] :258
void MultiBuffer::AppendOpen()
{
    uStackFrame __("Fuse.Drawing.Internal.MultiBuffer", "AppendOpen()");
    CheckGrow();
    offset = 0;
}

// public void AppendUShort(int value) [instance] :270
void MultiBuffer::AppendUShort(int32_t value)
{
    uStackFrame __("Fuse.Drawing.Internal.MultiBuffer", "AppendUShort(int)");
    AppendUShort1((uint16_t)value);
}

// public void AppendUShort(ushort value) [instance] :266
void MultiBuffer::AppendUShort1(uint16_t value)
{
    uStackFrame __("Fuse.Drawing.Internal.MultiBuffer", "AppendUShort(ushort)");
    uPtr(back)->Set23((size * typeSize) + offset, value, true);
    offset = (offset + 2);
}

// public void AppendUShortNF(float value) [instance] :273
void MultiBuffer::AppendUShortNF(float value)
{
    uStackFrame __("Fuse.Drawing.Internal.MultiBuffer", "AppendUShortNF(float)");
    AppendUShort1((uint16_t)(::g::Uno::Math::Clamp1(value, 0.0f, 1.0f) * 65535.0f));
}

// public void EndAlloc() [instance] :252
void MultiBuffer::EndAlloc()
{
    Init(32);
}

// public int get_Stride() [instance] :215
int32_t MultiBuffer::Stride()
{
    return typeSize;
}

// public MultiBuffer New() [static] :211
MultiBuffer* MultiBuffer::New3()
{
    MultiBuffer* obj2 = (MultiBuffer*)uNew(MultiBuffer_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// C:\Users\채재윤융합IT학부\AppData\Local\Fusetools\Packages\Fuse.Drawing\1.9.0\Internal\BufferCollections.uno
// -----------------------------------------------------------------------------------------------------

// public sealed class MultiBuffer.Setter :313
// {
static void MultiBuffer__Setter_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Drawing::Internal::MultiBuffer_typeof(), offsetof(MultiBuffer__Setter, owner), 0,
        ::g::Uno::Int_typeof(), offsetof(MultiBuffer__Setter, index), 0,
        ::g::Uno::Int_typeof(), offsetof(MultiBuffer__Setter, baseP), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MultiBuffer__Setter__New1_fn, 0, true, type, 2, ::g::Fuse::Drawing::Internal::MultiBuffer_typeof(), ::g::Uno::Int_typeof()));
}

uType* MultiBuffer__Setter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(MultiBuffer__Setter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Internal.MultiBuffer.Setter", options);
    type->fp_build_ = MultiBuffer__Setter_build;
    return type;
}

// public Setter(Fuse.Drawing.Internal.MultiBuffer owner, int index) :317
void MultiBuffer__Setter__ctor__fn(MultiBuffer__Setter* __this, ::g::Fuse::Drawing::Internal::MultiBuffer* owner1, int32_t* index1)
{
    __this->ctor_(owner1, *index1);
}

// public Setter New(Fuse.Drawing.Internal.MultiBuffer owner, int index) :317
void MultiBuffer__Setter__New1_fn(::g::Fuse::Drawing::Internal::MultiBuffer* owner1, int32_t* index1, MultiBuffer__Setter** __retval)
{
    *__retval = MultiBuffer__Setter::New1(owner1, *index1);
}

// public Setter(Fuse.Drawing.Internal.MultiBuffer owner, int index) [instance] :317
void MultiBuffer__Setter::ctor_(::g::Fuse::Drawing::Internal::MultiBuffer* owner1, int32_t index1)
{
    uStackFrame __("Fuse.Drawing.Internal.MultiBuffer.Setter", ".ctor(Fuse.Drawing.Internal.MultiBuffer,int)");
    owner = owner1;
    index = index1;
    baseP = (index1 * uPtr(owner1)->typeSize);
}

// public Setter New(Fuse.Drawing.Internal.MultiBuffer owner, int index) [static] :317
MultiBuffer__Setter* MultiBuffer__Setter::New1(::g::Fuse::Drawing::Internal::MultiBuffer* owner1, int32_t index1)
{
    MultiBuffer__Setter* obj1 = (MultiBuffer__Setter*)uNew(MultiBuffer__Setter_typeof());
    obj1->ctor_(owner1, index1);
    return obj1;
}
// }

// C:\Users\채재윤융합IT학부\AppData\Local\Fusetools\Packages\Fuse.Drawing\1.9.0\Internal\BufferCollections.uno
// -----------------------------------------------------------------------------------------------------

// public class TypedBuffer :20
// {
static void TypedBuffer_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Buffer_typeof(), offsetof(TypedBuffer, back), 0,
        ::g::Uno::Int_typeof(), offsetof(TypedBuffer, typeSize), 0,
        ::g::Uno::Int_typeof(), offsetof(TypedBuffer, capacity), 0,
        ::g::Uno::Int_typeof(), offsetof(TypedBuffer, size), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(TypedBuffer, deviceIndex), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(TypedBuffer, deviceVertex), 0);
    type->Reflection.SetFunctions(8,
        new uFunction("Clear", NULL, (void*)TypedBuffer__Clear_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Count", NULL, (void*)TypedBuffer__Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetBuffer", NULL, (void*)TypedBuffer__GetBuffer_fn, 0, false, ::g::Uno::Buffer_typeof(), 0),
        new uFunction("GetDeviceIndex", NULL, (void*)TypedBuffer__GetDeviceIndex_fn, 0, false, ::g::Uno::Graphics::IndexBuffer_typeof(), 0),
        new uFunction("GetDeviceVertex", NULL, (void*)TypedBuffer__GetDeviceVertex_fn, 0, false, ::g::Uno::Graphics::VertexBuffer_typeof(), 0),
        new uFunction("InitDeviceIndex", NULL, (void*)TypedBuffer__InitDeviceIndex_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Graphics::BufferUsage_typeof()),
        new uFunction("InitDeviceVertex", NULL, (void*)TypedBuffer__InitDeviceVertex_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Graphics::BufferUsage_typeof()),
        new uFunction("UpdateDevice", NULL, (void*)TypedBuffer__UpdateDevice_fn, 0, false, uVoid_typeof(), 0));
}

uType* TypedBuffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(TypedBuffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Internal.TypedBuffer", options);
    type->fp_build_ = TypedBuffer_build;
    type->fp_ctor_ = (void*)TypedBuffer__New1_fn;
    return type;
}

// protected TypedBuffer() :39
void TypedBuffer__ctor__fn(TypedBuffer* __this)
{
    __this->ctor_();
}

// protected TypedBuffer(int typeSize, [int initSize]) :28
void TypedBuffer__ctor_1_fn(TypedBuffer* __this, int32_t* typeSize1, int32_t* initSize)
{
    __this->ctor_1(*typeSize1, *initSize);
}

// protected void CheckGrow() :94
void TypedBuffer__CheckGrow_fn(TypedBuffer* __this)
{
    __this->CheckGrow();
}

// public void Clear() :107
void TypedBuffer__Clear_fn(TypedBuffer* __this)
{
    __this->Clear();
}

// public int Count() :74
void TypedBuffer__Count_fn(TypedBuffer* __this, int32_t* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Buffer GetBuffer() :79
void TypedBuffer__GetBuffer_fn(TypedBuffer* __this, ::g::Uno::Buffer** __retval)
{
    *__retval = __this->GetBuffer();
}

// public Uno.Graphics.IndexBuffer GetDeviceIndex() :53
void TypedBuffer__GetDeviceIndex_fn(TypedBuffer* __this, ::g::Uno::Graphics::IndexBuffer** __retval)
{
    *__retval = __this->GetDeviceIndex();
}

// public Uno.Graphics.VertexBuffer GetDeviceVertex() :61
void TypedBuffer__GetDeviceVertex_fn(TypedBuffer* __this, ::g::Uno::Graphics::VertexBuffer** __retval)
{
    *__retval = __this->GetDeviceVertex();
}

// protected void Init(int initSize) :34
void TypedBuffer__Init_fn(TypedBuffer* __this, int32_t* initSize)
{
    __this->Init(*initSize);
}

// public void InitDeviceIndex([Uno.Graphics.BufferUsage bu]) :50
void TypedBuffer__InitDeviceIndex_fn(TypedBuffer* __this, int32_t* bu)
{
    __this->InitDeviceIndex(*bu);
}

// public void InitDeviceVertex([Uno.Graphics.BufferUsage bu]) :58
void TypedBuffer__InitDeviceVertex_fn(TypedBuffer* __this, int32_t* bu)
{
    __this->InitDeviceVertex(*bu);
}

// protected TypedBuffer New() :39
void TypedBuffer__New1_fn(TypedBuffer** __retval)
{
    *__retval = TypedBuffer::New1();
}

// protected TypedBuffer New(int typeSize, [int initSize]) :28
void TypedBuffer__New2_fn(int32_t* typeSize1, int32_t* initSize, TypedBuffer** __retval)
{
    *__retval = TypedBuffer::New2(*typeSize1, *initSize);
}

// public void UpdateDevice() :65
void TypedBuffer__UpdateDevice_fn(TypedBuffer* __this)
{
    __this->UpdateDevice();
}

// protected TypedBuffer() [instance] :39
void TypedBuffer::ctor_()
{
    uStackFrame __("Fuse.Drawing.Internal.TypedBuffer", ".ctor()");
    typeSize = 0;
    capacity = 0;
    size = 0;
    back = ::g::Uno::Buffer::New4(0);
}

// protected TypedBuffer(int typeSize, [int initSize]) [instance] :28
void TypedBuffer::ctor_1(int32_t typeSize1, int32_t initSize)
{
    typeSize = typeSize1;
    size = 0;
    Init(initSize);
}

// protected void CheckGrow() [instance] :94
void TypedBuffer::CheckGrow()
{
    uStackFrame __("Fuse.Drawing.Internal.TypedBuffer", "CheckGrow()");

    if (size < capacity)
        return;

    int32_t newCap = capacity * 2;
    ::g::Uno::Buffer* newBuf = ::g::Uno::Buffer::New4(typeSize * newCap);

    for (int32_t i = 0; i < uPtr(back)->SizeInBytes(); ++i)
        uPtr(newBuf)->Set(i, uPtr(back)->Item(i));

    back = newBuf;
    capacity = newCap;
}

// public void Clear() [instance] :107
void TypedBuffer::Clear()
{
    size = 0;
}

// public int Count() [instance] :74
int32_t TypedBuffer::Count()
{
    return size;
}

// public Uno.Buffer GetBuffer() [instance] :79
::g::Uno::Buffer* TypedBuffer::GetBuffer()
{
    return back;
}

// public Uno.Graphics.IndexBuffer GetDeviceIndex() [instance] :53
::g::Uno::Graphics::IndexBuffer* TypedBuffer::GetDeviceIndex()
{
    return deviceIndex;
}

// public Uno.Graphics.VertexBuffer GetDeviceVertex() [instance] :61
::g::Uno::Graphics::VertexBuffer* TypedBuffer::GetDeviceVertex()
{
    return deviceVertex;
}

// protected void Init(int initSize) [instance] :34
void TypedBuffer::Init(int32_t initSize)
{
    uStackFrame __("Fuse.Drawing.Internal.TypedBuffer", "Init(int)");
    capacity = initSize;
    back = ::g::Uno::Buffer::New4(typeSize * initSize);
}

// public void InitDeviceIndex([Uno.Graphics.BufferUsage bu]) [instance] :50
void TypedBuffer::InitDeviceIndex(int32_t bu)
{
    uStackFrame __("Fuse.Drawing.Internal.TypedBuffer", "InitDeviceIndex([Uno.Graphics.BufferUsage])");
    deviceIndex = ::g::Uno::Graphics::IndexBuffer::New1(uPtr(back)->GetBytes(), bu);
}

// public void InitDeviceVertex([Uno.Graphics.BufferUsage bu]) [instance] :58
void TypedBuffer::InitDeviceVertex(int32_t bu)
{
    uStackFrame __("Fuse.Drawing.Internal.TypedBuffer", "InitDeviceVertex([Uno.Graphics.BufferUsage])");
    deviceVertex = ::g::Uno::Graphics::VertexBuffer::New1(uPtr(back)->GetBytes(), bu);
}

// public void UpdateDevice() [instance] :65
void TypedBuffer::UpdateDevice()
{
    uStackFrame __("Fuse.Drawing.Internal.TypedBuffer", "UpdateDevice()");

    if (deviceIndex != NULL)
        uPtr(deviceIndex)->Update(uPtr(back)->GetBytes());

    if (deviceVertex != NULL)
        uPtr(deviceVertex)->Update(uPtr(back)->GetBytes());
}

// protected TypedBuffer New() [static] :39
TypedBuffer* TypedBuffer::New1()
{
    TypedBuffer* obj2 = (TypedBuffer*)uNew(TypedBuffer_typeof());
    obj2->ctor_();
    return obj2;
}

// protected TypedBuffer New(int typeSize, [int initSize]) [static] :28
TypedBuffer* TypedBuffer::New2(int32_t typeSize1, int32_t initSize)
{
    TypedBuffer* obj1 = (TypedBuffer*)uNew(TypedBuffer_typeof());
    obj1->ctor_1(typeSize1, initSize);
    return obj1;
}
// }

// C:\Users\채재윤융합IT학부\AppData\Local\Fusetools\Packages\Fuse.Drawing\1.9.0\Internal\BufferCollections.uno
// -----------------------------------------------------------------------------------------------------

// public sealed class UShortBuffer :167
// {
static void UShortBuffer_build(uType* type)
{
    type->SetFields(6);
    type->Reflection.SetFunctions(5,
        new uFunction("Append", NULL, (void*)UShortBuffer__Append_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Append", NULL, (void*)UShortBuffer__Append1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UShort_typeof()),
        new uFunction("AppendTri", NULL, (void*)UShortBuffer__AppendTri_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)UShortBuffer__New3_fn, 0, true, type, 0),
        new uFunction("Set", NULL, (void*)UShortBuffer__Set_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::UShort_typeof()));
}

uType* UShortBuffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Internal::TypedBuffer_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(UShortBuffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Internal.UShortBuffer", options);
    type->fp_build_ = UShortBuffer_build;
    type->fp_ctor_ = (void*)UShortBuffer__New3_fn;
    return type;
}

// public UShortBuffer() :168
void UShortBuffer__ctor_2_fn(UShortBuffer* __this)
{
    __this->ctor_2();
}

// public void Append(int value) :180
void UShortBuffer__Append_fn(UShortBuffer* __this, int32_t* value)
{
    __this->Append(*value);
}

// public void Append(ushort value) :175
void UShortBuffer__Append1_fn(UShortBuffer* __this, uint16_t* value)
{
    __this->Append1(*value);
}

// public void AppendTri(int a, int b, int c) :185
void UShortBuffer__AppendTri_fn(UShortBuffer* __this, int32_t* a, int32_t* b, int32_t* c)
{
    __this->AppendTri(*a, *b, *c);
}

// public UShortBuffer New() :168
void UShortBuffer__New3_fn(UShortBuffer** __retval)
{
    *__retval = UShortBuffer::New3();
}

// public void Set(int offset, ushort value) :171
void UShortBuffer__Set_fn(UShortBuffer* __this, int32_t* offset, uint16_t* value)
{
    __this->Set(*offset, *value);
}

// public UShortBuffer() [instance] :168
void UShortBuffer::ctor_2()
{
    ctor_1(2, 32);
}

// public void Append(int value) [instance] :180
void UShortBuffer::Append(int32_t value)
{
    uStackFrame __("Fuse.Drawing.Internal.UShortBuffer", "Append(int)");
    CheckGrow();
    Set(size++, (uint16_t)value);
}

// public void Append(ushort value) [instance] :175
void UShortBuffer::Append1(uint16_t value)
{
    uStackFrame __("Fuse.Drawing.Internal.UShortBuffer", "Append(ushort)");
    CheckGrow();
    Set(size++, value);
}

// public void AppendTri(int a, int b, int c) [instance] :185
void UShortBuffer::AppendTri(int32_t a, int32_t b, int32_t c)
{
    uStackFrame __("Fuse.Drawing.Internal.UShortBuffer", "AppendTri(int,int,int)");
    Append1((uint16_t)a);
    Append1((uint16_t)b);
    Append1((uint16_t)c);
}

// public void Set(int offset, ushort value) [instance] :171
void UShortBuffer::Set(int32_t offset, uint16_t value)
{
    uStackFrame __("Fuse.Drawing.Internal.UShortBuffer", "Set(int,ushort)");
    uPtr(back)->Set23(offset * typeSize, value, true);
}

// public UShortBuffer New() [static] :168
UShortBuffer* UShortBuffer::New3()
{
    UShortBuffer* obj1 = (UShortBuffer*)uNew(UShortBuffer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

}}}} // ::g::Fuse::Drawing::Internal
