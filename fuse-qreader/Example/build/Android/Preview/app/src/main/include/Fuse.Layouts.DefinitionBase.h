// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Fuse.Controls.Panels/1.9.0/Layouts/GridLayout.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyObject.h>
namespace g{namespace Fuse{namespace Layouts{struct DefinitionBase;}}}

namespace g{
namespace Fuse{
namespace Layouts{

// public abstract class DefinitionBase :21
// {
uType* DefinitionBase_typeof();
void DefinitionBase__ctor_1_fn(DefinitionBase* __this);
void DefinitionBase__ctor_2_fn(DefinitionBase* __this, float* extent, int32_t* metric);
void DefinitionBase__ctor_3_fn(DefinitionBase* __this, DefinitionBase* copy, int32_t* creation);
void DefinitionBase__get_ActualOffset_fn(DefinitionBase* __this, float* __retval);
void DefinitionBase__set_ActualOffset_fn(DefinitionBase* __this, float* value);
void DefinitionBase__add_Changed_fn(DefinitionBase* __this, uDelegate* value);
void DefinitionBase__remove_Changed_fn(DefinitionBase* __this, uDelegate* value);
void DefinitionBase__Copy_fn(DefinitionBase* __this, uType* __type, DefinitionBase* copy, int32_t* creation);
void DefinitionBase__get_Extent_fn(DefinitionBase* __this, float* __retval);
void DefinitionBase__set_Extent_fn(DefinitionBase* __this, float* value);
void DefinitionBase__get_IsImplied_fn(DefinitionBase* __this, bool* __retval);
void DefinitionBase__get_Metric_fn(DefinitionBase* __this, int32_t* __retval);
void DefinitionBase__set_Metric_fn(DefinitionBase* __this, int32_t* value);
void DefinitionBase__OnChanged_fn(DefinitionBase* __this);
void DefinitionBase__Parse_fn(uType* __type, uString* data, DefinitionBase** __retval);
void DefinitionBase__Parse1_fn(uType* __type, uString* data, uObject* output);
void DefinitionBase__Serialize_fn(DefinitionBase* __this, uString** __retval);
void DefinitionBase__Serialize1_fn(uType* __type, uObject* columns, uString** __retval);
void DefinitionBase__get_UsesDefault_fn(DefinitionBase* __this, bool* __retval);

struct DefinitionBase : ::g::Uno::UX::PropertyObject
{
    float _actualOffset;
    int32_t Creation;
    int32_t _metric;
    float _extent;
    float ActualExtent;
    bool HasActualExtent;
    uStrong<uDelegate*> Changed1;

    void ctor_1();
    void ctor_2(float extent, int32_t metric);
    void ctor_3(DefinitionBase* copy, int32_t creation);
    float ActualOffset();
    void ActualOffset(float value);
    void add_Changed(uDelegate* value);
    void remove_Changed(uDelegate* value);
    void Copy(uType* __type, DefinitionBase* copy, int32_t creation);
    float Extent();
    void Extent(float value);
    bool IsImplied();
    int32_t Metric();
    void Metric(int32_t value);
    void OnChanged();
    uString* Serialize();
    bool UsesDefault();
    static DefinitionBase* Parse(uType* __type, uString* data);
    static void Parse1(uType* __type, uString* data, uObject* output);
    static uString* Serialize1(uType* __type, uObject* columns);
};
// }

}}} // ::g::Fuse::Layouts
