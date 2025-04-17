#include "TranqWeapon.h"

void TranqWeapon::Read(std::ostream& ostream, std::istream& istream)
{

	Item::Read(ostream, istream);
	ostream << "Enter weight: ";
	istream >> fltWeight;

}

void TranqWeapon::Write(std::ostream& ostream)
{

	Item::Write(ostream);
	ostream << "Weight: " << fltWeight << endl;

}
