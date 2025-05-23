#include <iostream>
#include "Fraction.h"
using namespace mathlib;
using namespace std;

int main()
{
    Fraction<unsigned int> fraction1{ 15, 5 };
    std::cout << fraction1 << std::endl;

    Fraction<unsigned int> fraction2{ 25, 5 };
    fraction2.simplify();
    std::cout << fraction2 << std::endl;

    std::cout << fraction1 << " == " << fraction2 << " result: " << (fraction1 == fraction2) << std::endl;
    std::cout << fraction1 << " > " << fraction2 << " result: " << (fraction1 > fraction2) << std::endl;

    std::cout << fraction1 << " + " << fraction2 << " result: " << (fraction1 + fraction2) << std::endl;
    std::cout << fraction1 << " * " << fraction2 << " result: " << (fraction1 * fraction2) << std::endl;

    Fraction<long> fraction3;
    std::cout << "input fraction (numerator - denominator): \n";
    std::cin >> fraction3;
    std::cout << fraction3 << std::endl;
    std::cout << fraction3.toDouble() << std::endl;
}