#pragma once
#include <iostream>
using namespace std;

class Vehicle {
public:

	enum class eType {
	
		CAR,
		BICYCLE

	};

	virtual void Read(std::ostream& ostream, std::istream& istream);
	virtual void Write(std::ostream& ostream);

	string getName();
	string getColor();

	virtual eType getType() = 0;



protected:

	string strName;

	string strColor;

};

