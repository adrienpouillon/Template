#pragma once
#include "Node.hpp"
//#include "Iterator.hpp"
template <typename T>
class Iterator
{
private:
	Node<T>* mCurrente;
public:
	Iterator(Node<T>* currente);

	Iterator(T currente, Iterator<T> prev, Iterator<T> next);

	void operator++();

	void operator++(int);

	void operator--();

	void operator--(int);

	const Iterator<T>& operator+(int iNext);
	
	const Iterator<T>& operator-(int iNext);

	T operator*();

	bool operator==(Iterator<T> it);

	bool operator!=(Iterator<T> it);

	~Iterator();
};

template<typename T>
inline Iterator<T>::Iterator(Node<T>* currente) : mCurrente(currente)
{
	
}

template<typename T>
inline Iterator<T>::Iterator(T currenteValue, Iterator<T> prev, Iterator<T> next) : mCurrente(currente)
{
	currenteNode = new Node(currenteValue);
	prev->mCurrente->SetNext(currenteNode);
	next->mCurrente->SetPrev(currenteNode);
}

template<typename T>
inline void Iterator<T>::operator++()
{
	mCurrente = mCurrente->GetNext();
}

template<typename T>
inline void Iterator<T>::operator++(int)
{
	++(*this);
}

template<typename T>
inline void Iterator<T>::operator--()
{
	mCurrente = mCurrente->GetPrev();
}

template<typename T>
inline void Iterator<T>::operator--(int)
{
	--(*this);
}

template<typename T>
inline const Iterator<T>& Iterator<T>::operator+(int iNext)
{
	Iterator<T> it(this->mCurrente);
	for (int i = 0; i < iNext; i++)
	{
		it++;
	}
	return it;
}

template<typename T>
inline const Iterator<T>& Iterator<T>::operator-(int iNext)
{
	Iterator<T> it(this->mCurrente);
	for (int i = 0; i < iNext; i++)
	{
		it--;
	}
	return it;
}

template<typename T>
inline T Iterator<T>::operator*()
{
	return mCurrente->GetValue();
}

template<typename T>
inline bool Iterator<T>::operator==(Iterator<T> it)
{
	return mCurrente == it.mCurrente;
}

template<typename T>
inline bool Iterator<T>::operator!=(Iterator<T> it)
{
	return this == it;
}

template<typename T>
inline Iterator<T>::~Iterator()
{
	
}
