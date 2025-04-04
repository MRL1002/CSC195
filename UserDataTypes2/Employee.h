#pragma once
#include <iostream>
#include <string>

class Employee {
public:
	void Read();
	void Write();

private:
	std::string strName;
    short shtAge;
    unsigned int intZip;
    float fltWage;
    float fltHoursWorked;

    static const float fltTAX;
};
