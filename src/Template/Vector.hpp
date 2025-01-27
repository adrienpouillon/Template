#pragma once
#include "Iterator.hpp"
//#include "Vector.hpp"
template <typename T>
class Vector
{
private:
	Iterator<T>* mBegin;
	Iterator<T>* mEnd;
public:
	Vector();

	void Add(T value);

	int GetSize();

	T operator[](int i);

	Iterator<T>* GetBegin();

	Iterator<T>* GetEnd();

	~Vector();
};

template<typename T>
inline Vector<T>::Vector()
{
	mEnd = Iterator<T>(new Node<T>(T()));
	mBegin = mEnd;
}

template<typename T>
inline void Vector<T>::Add(T value)
{
	*(*mEnd) = value;
	mEnd = new Iterator(value, mEnd, nullptr);
}

template<typename T>
inline int Vector<T>::GetSize()
{
	int size = 0;
	for (Iterator* it = GetBegin(); *it == GetEnd(); (*it)++)
	{
		size++;
	}
	return size;
	
}

template<typename T>
inline T Vector<T>::operator[](int i)
{
	Iterator* it = GetBegin();
	(*it) = (*it) + i;
	return *(*it);
}

template<typename T>
inline Iterator<T>* Vector<T>::GetBegin()
{
	return mbegin;
}

template<typename T>
inline Iterator<T>* Vector<T>::GetEnd()
{
	return mEnd;
}

template<typename T>
inline Vector<T>::~Vector()
{
}
