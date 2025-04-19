#pragma once
#include "Vehicle.h"

class Car : public Vehicle {
public:

	void Read(std::ostream& ostream, std::istream& istream);
	void Write(std::ostream& ostream);

	eType getType() override { return eType::CAR; }


protected:


};