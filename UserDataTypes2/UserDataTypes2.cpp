#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    int intNumEmployees;
    std::cout << "Number of employees (max 5): ";
    std::cin >> intNumEmployees;

    if (intNumEmployees > 5) intNumEmployees = 5;

    Employee employees[5];

    for (int i = 0; i < intNumEmployees; i++) {
        std::cout << "\nEnter details for Employee " << (i + 1) << ":\n";
        employees[i].Read();
    }

    std::cout << "\n--- Payroll Summary ---\n";
    for (int i = 0; i < intNumEmployees; i++) {
        employees[i].Write();
    }

    return 0;
}
