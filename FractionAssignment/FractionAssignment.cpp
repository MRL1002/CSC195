#include <iostream>
#include "Fraction.h"
using namespace std;

int main()
{
    Fraction fraction1{ 15, 5 };
    std::cout << fraction1 << std::endl;

    Fraction fraction2{ 25, 5 };
    fraction2.simplify();
    std::cout << fraction2 << std::endl;

    std::cout << fraction1 << " == " << fraction2 << " result: " << (fraction1 == fraction2) << std::endl;
    std::cout << fraction1 << " > " << fraction2 << " result: " << (fraction1 > fraction2) << std::endl;

    std::cout << fraction1 << " + " << fraction2 << " result: " << (fraction1 + fraction2) << std::endl;
    std::cout << fraction1 << " * " << fraction2 << " result: " << (fraction1 * fraction2) << std::endl;

    Fraction fraction3;
    std::cout << "input fraction (numerator - denominator): \n";
    std::cin >> fraction3;
    std::cout << fraction3 << std::endl;
    std::cout << fraction3.toDouble() << std::endl;

}