#include "Vehicle.h"

void Vehicle::Read(std::ostream& ostream, std::istream& istream)
{
	ostream << "Enter Name: ";
	istream >> strName;

	ostream << "Enter Color: ";
	istream >> strColor;

}

void Vehicle::Write(std::ostream& ostream)
{
	
	ostream << "Name: " << strName << endl;
	ostream << "Color: " << strColor << endl;

}

// File input / output

void Vehicle::Read(std::ifstream& istream)
{

	istream >> strName;
	istream >> strColor;

}

void Vehicle::Write(std::ofstream& ostream)
{

	ostream << strName << endl;
	ostream << strColor << endl;

}

string Vehicle::getName()
{
	return strName;
}

string Vehicle::getColor()
{
	return strColor;
}

// streaming operators

std::istream& operator>>(std::istream& istream, Vehicle& vehicle)
{
	vehicle.Read(cout,istream);
	return istream;
}

std::ostream& operator<<(std::ostream& ostream, Vehicle& vehicle)
{
	vehicle.Write(ostream);
	return ostream;
}

// File streaming operators

std::istream& operator>>(std::ifstream& istream, Vehicle& vehicle)
{
	vehicle.Read(cout, istream);
	return istream;
}

std::ostream& operator<<(std::ofstream& ostream, Vehicle& vehicle)
{
	vehicle.Write(ostream);
	return ostream;
}