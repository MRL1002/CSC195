#include "Bike.h"

void Bike::Read(std::ostream& ostream, std::istream& istream)
{

	Vehicle::Read(ostream, istream);
	ostream << "Enter Weight (in grams): ";
	bool blnVerified = false;

	while (!blnVerified)
		try {

		istream >> m_Weight;
		blnVerified = true;

		}
		catch (exception e) {
			ostream << "Weight must be a number." << endl;
		}


}

void Bike::Write(std::ostream& ostream)
{

	Vehicle::Write(ostream);
	ostream << "Weight: " << m_Weight << " g." << endl;

}

void Bike::Read(std::ifstream& istream)
{
	Vehicle::Read(istream);
	istream >> m_Weight;
}

void Bike::Write(std::ofstream& ostream)
{
	Vehicle::Write(ostream);
	ostream << m_Weight;
}
