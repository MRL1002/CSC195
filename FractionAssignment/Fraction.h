#pragma once
#include <iostream>
using namespace std;

class Fraction {

protected:

	int num, denom;

public:

	Fraction() : num{ 1 }, denom{ 1 } {};

	Fraction(int num_val, int denom_val) : num{ num_val }, denom{ denom_val } {
		if (denom_val == 0) {
			denom = 1;
		}
	}

	// streaming
	friend std::ostream& operator<<(std::ostream& ostream, Fraction fract);
	friend std::istream& operator>>(std::istream& istream, Fraction& fract);

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
	Fraction simplify();
	double toDouble();

};
