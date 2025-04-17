#include "Equipment.h"

void Equipment::Read(std::ostream& ostream, std::istream& istream)
{

	Item::Read(ostream, istream);
	ostream << "Enter weight: ";
	istream >> fltWeight;

}

void Equipment::Write(std::ostream& ostream)
{

	Item::Write(ostream);
	ostream << "Weight: " << fltWeight << endl;

}
