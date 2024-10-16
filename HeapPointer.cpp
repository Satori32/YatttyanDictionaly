#include "HeapPointer.h"

template<class T>
HeapPointer<T> ConstructHeapPointer(T* In) {
	HeapPointer<T> HP;
	HP.P = In;

	return HP;
}

template<class T>
T* Free(HeapPointer<T>& In) {
	T* P = In.P;
	In.P = NULL;
	return P;
}
template <class T>
T* GetPTR(HeapPointer<T>& In) {
	return In.P;
}
