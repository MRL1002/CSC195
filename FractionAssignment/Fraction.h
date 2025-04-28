#pragma once
#include <iostream>
#include <type_traits>

using namespace std;

namespace mathlib {
    template<typename T = int>
    class Fraction {

    protected:
        T num, denom;

        int gcd(int num, int denom) {
            while (denom != 0) {
                int temp = denom;
                denom = num % denom;
                num = temp;
            }
            return num;
        }

    public:
        Fraction() : num{ 1 }, denom{ 1 } {}

        Fraction(T num_val, T denom_val) : num{ num_val }, denom{ denom_val } {
            if (denom_val == 0) {
                denom = 1;
            }
        }

        // Streaming operators

        friend std::ostream& operator<<(std::ostream& ostream, Fraction<T> fract) {
            return ostream << fract.num << " / " << fract.denom;
        }
        friend std::istream& operator>>(std::istream& istream, Fraction<T>& fract) {
            return istream >> fract.num >> fract.denom;
        }

        // Mathematical operators

        Fraction<T> operator+(Fraction fract2) {
            Fraction answerFraction;
            answerFraction.num = num * fract2.denom + denom * fract2.num;
            answerFraction.denom = denom * fract2.denom;
            return answerFraction;
        }

        Fraction<T> operator-(Fraction fract2) {
            Fraction answerFraction;
            answerFraction.num = num * fract2.denom - denom * fract2.num;
            answerFraction.denom = denom * fract2.denom;
            return answerFraction;
        }

        Fraction<T> operator*(Fraction fract2) {
            Fraction answerFraction;
            answerFraction.num = num * fract2.num;
            answerFraction.denom = denom * fract2.denom;
            return answerFraction;
        }

        Fraction<T> operator/(Fraction fract2) {
            Fraction answerFraction;
            answerFraction.num = num * fract2.denom;
            answerFraction.denom = denom * fract2.num;
            return answerFraction;
        }

        // Comparison operators

        bool operator==(Fraction fract2) {
            return (denom == fract2.denom && num == fract2.num);
        }

        bool operator!=(Fraction fract2) {
            return !(denom == fract2.denom && num == fract2.num);
        }

        bool operator>(Fraction fract2) {
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

        bool operator<(Fraction fract2) {
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

        bool operator>=(Fraction fract2) {
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

        bool operator<=(Fraction fract2) {
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

        // Utility

        void simplify() {
            int devisor = gcd(num, denom);
            num /= devisor;
            denom /= devisor;
        }

        double toDouble() {
            return static_cast<double>(num) / denom;
        }
    };
}