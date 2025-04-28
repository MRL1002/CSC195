#include "Fraction.h"
#include <type_traits> // needed to see if a variable is signed or not


// mathematical operators


namespace mathlib {
    template<class T>
    Fraction<T> Fraction<T>::operator+(Fraction fract2) {

        Fraction answerFraction;

        answerFraction.num = num * fract2.denom + denom * fract2.num;
        answerFraction.denom = denom * fract2.denom;

        return answerFraction;

    }

    template<class T>
    Fraction<T> Fraction<T>::operator-(Fraction fract2)
    {
        Fraction answerFraction;

        answerFraction.num = num * fract2.denom - denom * fract2.num;
        answerFraction.denom = denom * fract2.denom;

        return answerFraction;
    }

    template<class T>
    Fraction<T> Fraction<T>::operator*(Fraction fract2)
    {
        Fraction answerFraction;

        answerFraction.num = num * fract2.num;
        answerFraction.denom = denom * fract2.denom;

        return answerFraction;
    }

    template<class T>
    Fraction<T> Fraction<T>::operator/(Fraction fract2)
    {
        Fraction answerFraction;

        answerFraction.num = num * fract2.denom;
        answerFraction.denom = denom * fract2.num;

        return answerFraction;
    }

    // comparison operators

    template<class T>
    bool Fraction<T>::operator==(const Fraction fract2)
    {
        if (denom == fract2.denom && num == fract2.num) {
            return true;
        }
        else {
            return false;
        }

    }

    template<class T>
    bool Fraction<T>::operator!=(Fraction fract2)
    {
        if (denom == fract2.denom && num == fract2.num) {
            return false;
        }
        else {
            return true;
        }
    }

    template<class T>
    bool Fraction<T>::operator>(Fraction fract2)
    {
        if (denom > fract2.denom) {
            return false;
        }
        else if (denom == fract2.denom && num > fract2.num) {
            return true;
        }
        else {
            return true;
        }
    }

    template<class T>
    bool Fraction<T>::operator<(Fraction fract2)
    {
        if (denom > fract2.denom) {
            return true;
        }
        else if (denom == fract2.denom && num > fract2.num) {
            return false;
        }
        else {
            return false;
        }
    }

    template<class T>
    bool Fraction<T>::operator>=(Fraction fract2)
    {
        if (denom > fract2.denom) {
            return false;
        }
        else if (denom == fract2.denom && num > fract2.num) {
            return true;
        }
        else {
            return true;
        }

    }

    template<class T>
    bool Fraction<T>::operator<=(Fraction<T> fract2)
    {
        if (denom > fract2.denom) {
            return true;
        }
        else if (denom == fract2.denom && num > fract2.num) {
            return false;
        }
        else {
            return false;
        }
    }



    // utilty methods

    template<class T>
    int Fraction<T>::gcd(int num, int denom)
    {

        while (denom != 0) {
            int temp = denom;
            denom = num % denom;
            num = temp;
        }

        return num;

    }

    template<class T>
    void Fraction<T>::simplify()
    {

        int devisor = gcd(num, denom);
        num /= devisor;
        denom /= devisor;
    }

    template<class T>
    double Fraction<T>::toDouble()
    {
        double dbl_answer = 0.0;

        dbl_answer = static_cast<double>(num) / denom;

        return dbl_answer;

    }
}