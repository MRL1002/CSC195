#pragma once
#include <iostream>
using namespace std;

template<typename T>	
class Fraction {

protected:

	T num, denom;
		
	T gcd(T num, T denom);

public:

	Fraction() : num{ 1 }, denom{ 1 } {};

	Fraction(T num_val, T denom_val) : num{ num_val }, denom{ denom_val } {
		if (denom_val == 0) {
			denom = 1;
		}
	}

	// streaming
	friend std::ostream& operator<<(std::ostream& ostream, Fraction<T> fract) {
		return ostream << fract.num << " / " << fract.denom;
	};
	friend std::istream& operator>>(std::istream& istream, Fraction<T>& fract) {
		return istream >> fract.num >> fract.denom;
	};

	// mathmatical
	Fraction<T> operator + (Fraction<T> fract2);
	Fraction<T> operator - (Fraction<T> fract2);
	Fraction<T> operator * (Fraction<T> fract2);
	Fraction<T> operator / (Fraction<T> fract2);

	//comparison
	bool operator == (Fraction<T> fract2);
	bool operator != (Fraction<T> fract2);
	bool operator > (Fraction<T> fract2);
	bool operator < (Fraction<T> fract2);
	bool operator >= (Fraction<T> fract2);
	bool operator <= (Fraction<T> fract2);

	//utility
	void simplify();
	double toDouble();

};
