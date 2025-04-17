#pragma once
#include <iostream>
using namespace std;

class Item {
public:

	enum class eType {

		HEALING,
		STEALTH,
		COSMETIC,

		TRANQ,
		LETHAL,
		CQC

	};

	virtual void Read(std::ostream& ostream, std::istream& istream);
	virtual void Write(std::ostream& ostream);

	string getName();
	float getWeight();

	virtual eType getType() = 0;



protected:

	string strName;

	float fltWeight;

};

