#pragma once

#include <stdio.h>

#include "FlatMap.h"
#include "HeapPointer.h"
#include "SharedPointer_Yattyan.h"
#include "Any"

typedef int Any;

template<class T>
struct YattyanDictionaly {
	FlatMap < Any, SharedPointer<HeapPointer<T>> F;
};
template <class T> YattyanDictionaly<T> ConstructYattyanDictionaly(size_t N);
template <class T> bool Free(YattyanDictionaly<T>& Y);
template<class T> SharedPointer < HeapPointer<T>>* Index(YattyanDictionaly<T>& Y, Any P);