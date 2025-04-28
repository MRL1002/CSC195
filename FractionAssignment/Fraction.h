#pragma once
#include <iostream>
using namespace std;

namespace mathlib {
	template<typename T, int S>
	class Fraction {

	protected:

		int num, denom;

		int gcd(int num, int denom);

	public:

		Fraction() : num{ 1 }, denom{ 1 } {};

		Fraction(int num_val, int denom_val) : num{ num_val }, denom{ denom_val } {
			if (denom_val == 0) {
				denom = 1;
			}
		}

		// streaming
		friend std::ostream& operator<<(std::ostream& ostream, Fraction fract) {
			return ostream << fract.num << " / " << fract.denom;
		};
		friend std::istream& operator>>(std::istream& istream, Fraction& fract) {
			return istream >> fract.num >> fract.denom;
		};

		// mathmatical
		Fraction operator + (Fraction fract2);
		Fraction operator - (Fraction fract2);
		Fraction operator * (Fraction fract2);
		Fraction operator / (Fraction fract2);

		//comparison
		bool operator == (Fraction fract2);
		bool operator != (Fraction fract2);
		bool operator > (Fraction fract2);
		bool operator < (Fraction fract2);
		bool operator >= (Fraction fract2);
		bool operator <= (Fraction fract2);

		//utility
		void simplify();
		double toDouble();

	};
}