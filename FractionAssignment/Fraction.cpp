#include "Fraction.h"
#include <type_traits> // needed to see if a variable is signed or not


// mathematical operators



Fraction Fraction::operator+(Fraction fract2) {

    Fraction answerFraction;

    answerFraction.num = num * fract2.denom + denom * fract2.num;
    answerFraction.denom = denom * fract2.denom;

    answerFraction.simplify();

    return answerFraction;

}


Fraction Fraction::operator-(Fraction fract2)
{
    Fraction answerFraction;

    answerFraction.num = num * fract2.denom - denom * fract2.num;
    answerFraction.denom = denom * fract2.denom;

    answerFraction.simplify();

    return answerFraction;
}


Fraction Fraction::operator*(Fraction fract2)
{
    Fraction answerFraction;

    answerFraction.num = num * fract2.num;
    answerFraction.denom = denom * fract2.denom;

    return answerFraction;
}


Fraction Fraction::operator/(Fraction fract2)
{
    Fraction answerFraction;

    answerFraction.num = num * fract2.denom;
    answerFraction.denom = denom * fract2.num;

    return answerFraction;
}

// comparison operators


bool Fraction::operator==(Fraction fract2)
{
    if (denom == fract2.denom && num == fract2.num) {
        return true;
    }
    else{
        return false;
    }

}


bool Fraction::operator!=(Fraction fract2)
{
    if (denom == fract2.denom && num == fract2.num) {
        return false;
    }
    else {
        return true;
    }
}


bool Fraction::operator>(Fraction fract2)
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


bool Fraction::operator<(Fraction fract2)
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


bool Fraction::operator>=(Fraction fract2)
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


bool Fraction::operator<=(Fraction fract2)
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


int Fraction::gcd(int num, int denom)
{

    while (denom != 0) {
        int temp = denom;
        denom = num % denom;
        num = temp;
    }

    return num;

}


void Fraction::simplify()
{

    int devisor = gcd(num, denom);
    num /= devisor;
    denom /= devisor;
}


double Fraction::toDouble()
{
    double dbl_answer = 0.0;

    dbl_answer = static_cast<double>(num) / denom;
    
    return dbl_answer;

}