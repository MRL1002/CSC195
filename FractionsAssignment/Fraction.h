#pragma once  
#include <iostream>  

namespace mathlib {
    template<typename T>
    class Fraction {

    private:
        T num, denom;

    public:
        Fraction(T num, T denom) : num(num), denom(denom) {
            if (denom == 0) this->denom = 1;
        }

        Fraction<T>& operator+(Fraction<T>& f2);
        Fraction<T>& operator-(Fraction<T>& f2);
        Fraction<T>& operator*(Fraction<T>& f2);
        Fraction<T>& operator/(Fraction<T>& f2);
    };
}
