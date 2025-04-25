#pragma once  
#include <iostream>  

namespace mathlib {
    template<typename T>
    class Fraction {

    private:
        T num, denom;

    public:

        Fraction() : num{ 0 }, denom{ 0 } {};

        Fraction(T inNum, T inDenom) : num{ inNum }, denom{ inDenom } { if (denom == 0) this->denom = 1; };

        Fraction<T>& operator+(Fraction<T>& f2);
        Fraction<T>& operator-(Fraction<T>& f2);
        Fraction<T>& operator*(Fraction<T>& f2);
        Fraction<T>& operator/(Fraction<T>& f2);

        friend std::ostream& operator<<(std::ostream& ostream, Fraction<T> fract);
    };
}
