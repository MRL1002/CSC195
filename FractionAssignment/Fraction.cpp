#include "Fraction.h"
#include <type_traits> // needed to see if a variable is signed or not


// mathematical operators


template<typename T>
Fraction<T> Fraction<T>::operator+(Fraction<T> fract2) {

    Fraction answerFraction;

    answerFraction.num = num * fract2.denom + denom * fract2.num;
    answerFraction.denom = denom * fract2.denom;

    answerFraction.simplify();

    return answerFraction;

}

template<typename T>
Fraction<T> Fraction<T>::operator-(Fraction<T> fract2)
{
    Fraction answerFraction;

    answerFraction.num = num * fract2.denom - denom * fract2.num;
    answerFraction.denom = denom * fract2.denom;

    answerFraction.simplify();

    return answerFraction;
}

template<typename T>
Fraction<T> Fraction<T>::operator*(Fraction<T> fract2)
{
    Fraction answerFraction;

    answerFraction.num = num * fract2.num;
    answerFraction.denom = denom * fract2.denom;

    return answerFraction;
}

template<typename T>
Fraction<T> Fraction<T>::operator/(Fraction<T> fract2)
{
    Fraction answerFraction;

    answerFraction.num = num * fract2.denom;
    answerFraction.denom = denom * fract2.num;

    return answerFraction;
}

// comparison operators

template<typename T>
bool Fraction<T>::operator==(Fraction<T> fract2)
{
    if (denom == fract2.denom && num == fract2.num) {
        return true;
    }
    else{
        return false;
    }

}

template<typename T>
bool Fraction<T>::operator!=(Fraction<T> fract2)
{
    if (denom == fract2.denom && num == fract2.num) {
        return false;
    }
    else {
        return true;
    }
}

template<typename T>
bool Fraction<T>::operator>(Fraction<T> fract2)
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

template<typename T>
bool Fraction<T>::operator<(Fraction<T> fract2)
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

template<typename T>
bool Fraction<T>::operator>=(Fraction<T> fract2)
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

template<typename T>
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

template<typename T>
T Fraction<T>::gcd(T num, T denom)
{
    using signedT = typename make_signed<T>::type;

    signedT sNum = static_cast<signedT>(num);
    signedT sDenom = static_cast<signedT>(denom);


    if (sNum < 0 ) { sNum = -sNum; }
    if (sDenom < 0 ) { sDenom = -sDenom; }

    while (sDenom != 0) {
        signedT temp = sDenom;
        sDenom = sNum % sDenom;
        sNum = temp;
    }

    return static_cast<T>(sNum);

}

template<typename T>
void Fraction<T>::simplify()
{

    T devisor = gcd(num, denom);
    num /= devisor;
    denom /= devisor;
}

template<typename T>
double Fraction<T>::toDouble()
{
    double dbl_answer = 0.0;

    dbl_answer = static_cast<double>(num) / denom;
    
    return dbl_answer;

}

template class Fraction<int>;
template class Fraction<unsigned int>;
template class Fraction<long>;
template class Fraction<unsigned long>;