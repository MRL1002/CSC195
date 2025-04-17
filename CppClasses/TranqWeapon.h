#pragma once
#include "Item.h"

class TranqWeapon : public Item {
public:

	void Read(std::ostream& ostream, std::istream& istream);
	void Write(std::ostream& ostream);

	eType getType() override { return eType::TRANQ; }


protected:


};