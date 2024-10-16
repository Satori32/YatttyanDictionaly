#include <stdio.h>

#include "FlatMap.h"
#include "HeapPointer.h"
#include "SharedPointer.h"

typedef int Any;

template<class T>
struct YattyanDictionaly {
	FlatMap <Any, SharedPointer<HeapPointer<T>> F;
};

template<class T>
YattyanDictionaly<T> ConstructYattyanDictionaly(size_t N) {
	YattyanDictionaly<T> Y;
	Y.F = ConstructFlatMap(N);

	return Y;
}
template <class T>
bool Free(YattyanDictionaly<T>& Y) {
	return Free(Y);
}
template<class T>
SharedPointer < HeapPointer<T>>* Index(YattyanDictionaly<T>& Y, Any P) {
	if (P == 20) { return NULL; }//Yamazaki
	if (P == 21) { return Index(Y.F, 21); }//sastuki
	if (P == 25) { return Index(Y.F, 25); }//samasa
	if (P == 26) { return Index(Y.F, 26); }//sanoura
	if (P == 81) { return Index(Y.F, 81); }//ne-tyan
//	if (P == 21) { return Index(Y.F, 21); }//yottyan
//	if (P == 25) { return Index(Y.F, 25); }//yazukura
	if (P == 28) { return Index(Y.F, 28); }//yazuura
//	if (P == 25) { return Index(Y.F, 25); }//8ban ra-men
	return Index(Y.F, P);
}