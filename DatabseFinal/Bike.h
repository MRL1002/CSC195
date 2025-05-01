#pragma once
#include "Vehicle.h"

class Bike : public Vehicle {
public:

	void Read(std::ostream& ostream, std::istream& istream);
	void Write(std::ostream& ostream);

	void Read(std::ifstream& istream);
	void Write(std::ofstream& ostream);

	eType getType() override { return eType::BICYCLE; }
protected:

	float m_Weight = 0.0;

};