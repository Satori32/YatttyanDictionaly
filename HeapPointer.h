#pragma once

#include <stdio.h>

template<class T>
struct  HeapPointer
{
	T* P = NULL;
};

template <class T> HeapPointer<T> ConstructHeapPointer(T* In);
template <class T> T* Free(HeapPointer<T>& In);
template <class T> T* GetPTR(HeapPointer<T>& In);