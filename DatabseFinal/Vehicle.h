#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Vehicle {
public:

	enum class eType {
	
		CAR,
		BICYCLE

	};

	virtual void Read(std::ostream& ostream, std::istream& istream);
	virtual void Write(std::ostream& ostream);

	virtual void Read(std::ifstream& istream);
	virtual void Write(std::ofstream& ostream);

	friend std::istream& operator >> (std::istream& istream, Vehicle& vehicle);
	friend std::ostream& operator << (std::ostream& ostream, Vehicle& vehicle);

	friend std::istream& operator >> (std::ifstream& istream, Vehicle& vehicle);
	friend std::ostream& operator << (std::ofstream& ostream, Vehicle& vehicle);

	virtual eType getType() = 0;

	string getName();
	string getColor();

protected:

	string strName;

	string strColor;

};

