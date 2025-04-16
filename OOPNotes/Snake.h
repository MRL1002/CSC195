#pragma once
#include "Animal.h"

class Snake :public Animal {

public:

	Snake() {
		m_intLimbs = 0;
		blnIsVenom = true;
		std::cout << "keptcha' waitin huh? (snake const called)" << std::endl;
	};


	// takes in num limbs and if he's venom
	// the limbs gets passed over to the animal constructor to set the value
	// sets if he's venom in THIS constructor
	Snake(bool isVenom, int intLimbs) : Animal(intLimbs) {
		//m_intLimbs = 0; // snakes have no limbs
		blnIsVenom = isVenom;
		std::cout << "keptcha' waitin huh? (snake const called)" << std::endl;
	}

	~Snake() {
		std::cout << "GRAHHHHH!!! (Snake destructed)" << std::endl;
	}

	void navigate() override;

	void speak() override;


protected:
	bool blnIsVenom;


};