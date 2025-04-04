#include "Employee.h"

const float Employee::fltTAX = 0.1f;

void Employee::Read() {
    std::cout << "Enter name: ";
    std::cin >> strName;

    std::cout << "Enter age: ";
    std::cin >> shtAge;

    std::cout << "Enter zipcode: ";
    std::cin >> intZip;

    std::cout << "Enter hourly wage: ";
    std::cin >> fltWage;

    std::cout << "Enter total hours worked this week: ";
    std::cin >> fltHoursWorked;
}

void Employee::Write() {
    float weeklyGross = fltWage * fltHoursWorked;
    float weeklyTax = weeklyGross * fltTAX;
    float weeklyNet = weeklyGross - weeklyTax;
    float yearlyGross = weeklyGross * 52;
    float yearlyNet = yearlyGross - (yearlyGross * fltTAX);

    std::cout << "\nEmployee Payroll Summary\n";
    std::cout << "-------------------------\n";
    std::cout << "Name: " << strName << "\n";
    std::cout << "Age: " << shtAge << "\n";
    std::cout << "Zipcode: " << intZip << "\n";
    std::cout << "Hourly Wage: $" << fltWage << "\n";
    std::cout << "Hours Worked: " << fltHoursWorked << "\n";
    std::cout << "Weekly Gross Pay: $" << weeklyGross << "\n";
    std::cout << "Weekly Net Pay: $" << weeklyNet << "\n";
    std::cout << "Yearly Gross Pay: $" << yearlyGross << "\n";
    std::cout << "Yearly Net Pay: $" << yearlyNet << "\n";

}