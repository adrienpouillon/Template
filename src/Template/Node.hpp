#pragma once
//#include "Node.hpp"
template <typename T>
class Node
{
private:
	T mValue;
	Node<T>* mNext;
	Node<T>* mBack;
public:
	Node(const T& ValueT);

	Node(const T& valueT, Node<T>* back, Node<T>* next);

	void SetNext(Node<T>* next);

	void SetPrev(Node<T>* prev);

	Node<T>* GetNext();

	Node<T>* GetPrev();

	void GetValue();

	~Node();
};

template<typename T>
inline Node<T>::Node(const T& valueT) : mValue(valueT)
{

}

template<typename T>
inline Node<T>::Node(const T& valueT, Node<T>* back, Node<T>* next) : mValue(valueT), mBack(back), mNext(next)
{
}

template<typename T>
inline void Node<T>::SetNext(Node<T>* next)
{
	mNext = next;
}

template<typename T>
inline void Node<T>::SetPrev(Node<T>* prev)
{
	mBack = prev;
}

template<typename T>
inline Node<T>* Node<T>::GetNext()
{
	return mNext;
}

template<typename T>
inline Node<T>* Node<T>::GetPrev()
{
	return mBack;
}

template<typename T>
inline void Node<T>::GetValue()
{
	return mValue;
}

template<typename T>
inline Node<T>::~Node()
{
}
