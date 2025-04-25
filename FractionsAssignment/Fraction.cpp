#include "Fraction.h"
using namespace mathlib;
using namespace std;

namespace mathlib {
	template<typename T>
	Fraction<T>& Fraction<T>::operator+(Fraction<T>& f2)
	{
		mathlib::Fraction result;
		result.num = num + f2.num;
		result.denom = denom + f2.denom;
	}

	template<typename T>
	Fraction<T>& Fraction<T>::operator-(Fraction<T>& f2)
	{
		mathlib::Fraction result;
		result.num = num - f2.num;
		result.denom = denom - f2.denom;
	}

	template<typename T>
	Fraction<T>& Fraction<T>::operator*(Fraction<T>& f2)
	{
		mathlib::Fraction result;
		result.num = num * f2.num;
		result.denom = denom * f2.denom;
	}

	template<typename T>
	Fraction<T>& Fraction<T>::operator/(Fraction<T>& f2)
	{
		mathlib::Fraction result;
		result.num = num / f2.num;
		result.denom = denom / f2.denom;
	}

	template<typename T>
	std::ostream& operator<<(std::ostream& ostream, Fraction<T> fract)
	{
		ostream << fract.num << " / " << fract.denom << endl;

		return ostream;
	}

}