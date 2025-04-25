#include "Fraction.h"

// streaming

std::ostream& operator<<(std::ostream& ostream, Fraction fract)
{
    return ostream << fract.num << " / " << fract.denom;   
}

std::istream& operator>>(std::istream& istream, Fraction& fract)
{
    return istream >> fract.num >> fract.denom;
}



// mathematical operators

Fraction Fraction::operator+(Fraction fract2) {

    Fraction answerFraction;

    answerFraction.num = num + fract2.num;
    answerFraction.denom = denom + fract2.denom;

    return answerFraction;

}

Fraction Fraction::operator-(Fraction fract2)
{
    Fraction answerFraction;

    answerFraction.num = num - fract2.num;
    answerFraction.denom = denom - fract2.denom;

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

Fraction Fraction::simplify()
{
    Fraction fract;
    return fract;
}

double Fraction::toDouble()
{
    double dbl_answer;

    dbl_answer = static_cast<double>(num) / denom;
    
    return dbl_answer;

}
