#pragma once
//#include "Pair.hpp"
template <typename T1, typename T2>
struct Pair 
{
	T1 mValue1;
	T2 mValue2;

	Pair(const T1& ValueT1, const T2& ValueT2);
	const T1& Get1();
	const T2& Get2();
};


template<typename T1, typename T2>
inline Pair<T1, T2>::Pair(const T1& ValueT1, const T2& ValueT2) : mValue1(ValueT1), mValue2(ValueT2)
{

}

template<typename T1, typename T2>
inline const T1& Pair<T1, T2>::Get1()
{
	return mValue1;
}

template<typename T1, typename T2>
inline const T2& Pair<T1, T2>::Get2()
{
	return mValue2;
}
