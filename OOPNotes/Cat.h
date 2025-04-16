#pragma once
#include "Animal.h"
#include <string>

class Cat : public Animal {
public:

	Cat() {
		m_intLimbs = 4;
		intFurColor = 412;

		std::cout << "Cat Constructor Called" << std::endl;

	}

	~Cat() {
		std::cout << "Cat destructed" << std::endl;
	}

	void navigate() override; // override is optional but it's good practice

	void speak() override;

protected:
	int intFurColor;


};