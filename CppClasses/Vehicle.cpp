#include "Vehicle.h"

void Vehicle::Read(std::ostream& ostream, std::istream& istream)
{
	ostream << "Enter Name: ";
	istream >> strName;

}

void Vehicle::Write(std::ostream& ostream)
{
	
	ostream << "Name: " << strName << endl;

}

string Vehicle::getName()
{
	return strName;
}

string Vehicle::getColor()
{
	return strColor;
}
