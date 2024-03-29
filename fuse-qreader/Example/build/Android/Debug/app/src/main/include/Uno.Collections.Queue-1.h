// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/UnoCore/1.9.0/Source/Uno/Collections/Queue.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct Queue;}}}
namespace g{namespace Uno{namespace Collections{template<class T>struct Queue__Enumerator;}}}

namespace g{
namespace Uno{
namespace Collections{

// public sealed class Queue<T> :6
// {
struct Queue_type : uType
{
    ::g::Uno::Collections::IEnumerable interface0;
};

Queue_type* Queue_typeof();
void Queue__ctor__fn(Queue* __this);
void Queue__Clear_fn(Queue* __this);
void Queue__get_Count_fn(Queue* __this, int32_t* __retval);
void Queue__Dequeue_fn(Queue* __this, uTRef __retval);
void Queue__ElementAt_fn(Queue* __this, int32_t* index, uTRef __retval);
void Queue__Enqueue_fn(Queue* __this, void* item);
void Queue__EnsureCapacity_fn(Queue* __this);
void Queue__GetEnumerator_fn(Queue* __this, uTRef __retval);
void Queue__GetEnumerator_boxed_fn(Queue* __this, uObject** __retval);
void Queue__New1_fn(uType* __type, Queue** __retval);

struct Queue : uObject
{
    uStrong<uArray*> _data;
    int32_t _head;
    int32_t _tail;
    int32_t _size;
    int32_t _version;

    void ctor_();
    void Clear();
    int32_t Count();
    template<class T>
    T Dequeue() { T __retval; return Queue__Dequeue_fn(this, &__retval), __retval; }
    template<class T>
    T ElementAt(int32_t index) { T __retval; return Queue__ElementAt_fn(this, &index, &__retval), __retval; }
    template<class T>
    void Enqueue(T item) { Queue__Enqueue_fn(this, uConstrain(__type->T(0), item)); }
    void EnsureCapacity();
    template<class T>
    Queue__Enumerator<T> GetEnumerator();
    uObject* GetEnumerator_boxed();
    static Queue* New1(uType* __type);
};

}}} // ::g::Uno::Collections

#include <Uno.Collections.Queue-a4ffa9de.h>

namespace g{
namespace Uno{
namespace Collections{

template<class T>
Queue__Enumerator<T> Queue::GetEnumerator() { Queue__Enumerator<T> __retval; return Queue__GetEnumerator_fn(this, &__retval), __retval; }
// }

}}} // ::g::Uno::Collections
