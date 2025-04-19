#include "Bike.h"

void Bike::Read(std::ostream& ostream, std::istream& istream)
{

	Vehicle::Read(ostream, istream);
	ostream << "Enter Color: ";
	istream >> strColor;

}

void Bike::Write(std::ostream& ostream)
{

	Vehicle::Write(ostream);
	ostream << "Color: " << strColor << endl;

}
