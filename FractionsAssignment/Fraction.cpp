#include "Fraction.h"

namespace mathlib {
	template<typename T>
	Fraction<T>& Fraction<T>::operator+(Fraction<T>& f2)
	{
		Fracton result;
		result.num = num + f2.num;
		result.denom = denom + f2.denom;
	}

	template<typename T>
	Fraction<T>& Fraction<T>::operator-(Fraction<T>& f2)
	{
		Fracton result;
		result.num = num - f2.num;
		result.denom = denom - f2.denom;
	}

	template<typename T>
	Fraction<T>& Fraction<T>::operator*(Fraction<T>& f2)
	{
		Fracton result;
		result.num = num * f2.num;
		result.denom = denom * f2.denom;
	}

	template<typename T>
	Fraction<T>& Fraction<T>::operator/(Fraction<T>& f2)
	{
		Fracton result;
		result.num = num / f2.num;
		result.denom = denom / f2.denom;
	}


}