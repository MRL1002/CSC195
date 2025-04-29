#include "Car.h"

void Car::Read(std::ostream& ostream, std::istream& istream)
{

	Vehicle::Read(ostream, istream);
	ostream << "Enter color: ";
	istream >> strColor;

}

void Car::Write(std::ostream& ostream)
{

	Vehicle::Write(ostream);
	ostream << "Color: " << strColor << endl;

}
