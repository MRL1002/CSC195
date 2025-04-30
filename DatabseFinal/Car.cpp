#include "Car.h"

void Car::Read(std::ostream& ostream, std::istream& istream)
{

	Vehicle::Read(ostream, istream);
	ostream << "Enter gas mileage: ";
	bool blnVerified = false;

	while(!blnVerified)
		try {

			istream >> m_GasMileage;
			blnVerified = true;

		}
		catch (exception e) {
			ostream << "Gas mileage must be a number." << endl;
		}

}

void Car::Write(std::ostream& ostream)
{

	Vehicle::Write(ostream);
	ostream << "Gas Mileage: " << m_GasMileage << " m/g" << endl;

}

// File input / output

void Car::Read(std::ifstream& istream)
{
	Vehicle::Read(istream);
	istream >> m_GasMileage;

}

void Car::Write(std::ofstream& ostream)
{
	Vehicle::Write(ostream);
	ostream << m_GasMileage;
}
