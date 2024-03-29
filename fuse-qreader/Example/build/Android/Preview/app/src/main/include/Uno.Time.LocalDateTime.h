// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/UnoCore/1.9.0/Source/Uno/Time/LocalDateTime.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Time.Instant.h>
namespace g{namespace Uno{namespace Time{struct CalendarSystem;}}}
namespace g{namespace Uno{namespace Time{struct LocalDateTime;}}}

namespace g{
namespace Uno{
namespace Time{

// public struct LocalDateTime :6
// {
uStructType* LocalDateTime_typeof();
void LocalDateTime__ctor_1_fn(LocalDateTime* __this, int32_t* year, int32_t* month, int32_t* day, int32_t* hour, int32_t* minute, int32_t* second);
void LocalDateTime__ctor_2_fn(LocalDateTime* __this, int32_t* year, int32_t* month, int32_t* day, int32_t* hour, int32_t* minute, int32_t* second, int32_t* millisecond);
void LocalDateTime__ctor_4_fn(LocalDateTime* __this, int32_t* year, int32_t* month, int32_t* day, int32_t* hour, int32_t* minute, int32_t* second, int32_t* millisecond, int32_t* tickWithinMillisecond, ::g::Uno::Time::CalendarSystem* calendar);
void LocalDateTime__ctor_6_fn(LocalDateTime* __this, int32_t* year, int32_t* month, int32_t* day, int32_t* hour, int32_t* minute, int32_t* second, ::g::Uno::Time::CalendarSystem* calendar);
void LocalDateTime__ctor_7_fn(LocalDateTime* __this, int32_t* year, int32_t* month, int32_t* day, int32_t* hour, int32_t* minute, ::g::Uno::Time::CalendarSystem* calendar);
void LocalDateTime__ctor_8_fn(LocalDateTime* __this, ::g::Uno::Time::Instant* instant);
void LocalDateTime__ctor_9_fn(LocalDateTime* __this, ::g::Uno::Time::Instant* instant, ::g::Uno::Time::CalendarSystem* calendar);
void LocalDateTime__get_Calendar_fn(LocalDateTime* __this, ::g::Uno::Time::CalendarSystem** __retval);
void LocalDateTime__get_Day_fn(LocalDateTime* __this, int32_t* __retval);
void LocalDateTime__Equals_fn(LocalDateTime* __this, uType* __type, uObject* obj, bool* __retval);
void LocalDateTime__Equals2_fn(LocalDateTime* __this, LocalDateTime* other, bool* __retval);
void LocalDateTime__GetHashCode_fn(LocalDateTime* __this, uType* __type, int32_t* __retval);
void LocalDateTime__get_Hour_fn(LocalDateTime* __this, int32_t* __retval);
void LocalDateTime__get_Instant_fn(LocalDateTime* __this, ::g::Uno::Time::Instant* __retval);
void LocalDateTime__get_Millisecond_fn(LocalDateTime* __this, int32_t* __retval);
void LocalDateTime__get_Minute_fn(LocalDateTime* __this, int32_t* __retval);
void LocalDateTime__get_Month_fn(LocalDateTime* __this, int32_t* __retval);
void LocalDateTime__New2_fn(int32_t* year, int32_t* month, int32_t* day, int32_t* hour, int32_t* minute, int32_t* second, LocalDateTime* __retval);
void LocalDateTime__New3_fn(int32_t* year, int32_t* month, int32_t* day, int32_t* hour, int32_t* minute, int32_t* second, int32_t* millisecond, LocalDateTime* __retval);
void LocalDateTime__New8_fn(int32_t* year, int32_t* month, int32_t* day, int32_t* hour, int32_t* minute, ::g::Uno::Time::CalendarSystem* calendar, LocalDateTime* __retval);
void LocalDateTime__New9_fn(::g::Uno::Time::Instant* instant, LocalDateTime* __retval);
void LocalDateTime__New10_fn(::g::Uno::Time::Instant* instant, ::g::Uno::Time::CalendarSystem* calendar, LocalDateTime* __retval);
void LocalDateTime__op_Equality_fn(LocalDateTime* left, LocalDateTime* right, bool* __retval);
void LocalDateTime__get_Second_fn(LocalDateTime* __this, int32_t* __retval);
void LocalDateTime__ToString_fn(LocalDateTime* __this, uType* __type, uString** __retval);
void LocalDateTime__get_Year_fn(LocalDateTime* __this, int32_t* __retval);

struct LocalDateTime
{
    uStrong< ::g::Uno::Time::CalendarSystem*> _calendar;
    ::g::Uno::Time::Instant _instant;

    void ctor_1(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second);
    void ctor_2(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond);
    void ctor_4(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t tickWithinMillisecond, ::g::Uno::Time::CalendarSystem* calendar);
    void ctor_6(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, ::g::Uno::Time::CalendarSystem* calendar);
    void ctor_7(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, ::g::Uno::Time::CalendarSystem* calendar);
    void ctor_8(::g::Uno::Time::Instant instant);
    void ctor_9(::g::Uno::Time::Instant instant, ::g::Uno::Time::CalendarSystem* calendar);
    ::g::Uno::Time::CalendarSystem* Calendar();
    int32_t Day();
    bool Equals(uType* __type, uObject* obj) { bool __retval; return LocalDateTime__Equals_fn(this, __type, obj, &__retval), __retval; }
    bool Equals2(LocalDateTime other);
    int32_t GetHashCode(uType* __type) { int32_t __retval; return LocalDateTime__GetHashCode_fn(this, __type, &__retval), __retval; }
    int32_t Hour();
    ::g::Uno::Time::Instant Instant();
    int32_t Millisecond();
    int32_t Minute();
    int32_t Month();
    int32_t Second();
    uString* ToString(uType* __type) { uString* __retval; return LocalDateTime__ToString_fn(this, __type, &__retval), __retval; }
    int32_t Year();
};

LocalDateTime LocalDateTime__New2(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second);
LocalDateTime LocalDateTime__New3(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond);
LocalDateTime LocalDateTime__New8(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, ::g::Uno::Time::CalendarSystem* calendar);
LocalDateTime LocalDateTime__New9(::g::Uno::Time::Instant instant);
LocalDateTime LocalDateTime__New10(::g::Uno::Time::Instant instant, ::g::Uno::Time::CalendarSystem* calendar);
bool LocalDateTime__op_Equality(LocalDateTime left, LocalDateTime right);
// }

}}} // ::g::Uno::Time
