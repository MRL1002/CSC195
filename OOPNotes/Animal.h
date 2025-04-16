#pragma once
#include <iostream> // including it here removes redundaency

class Animal {
public:

	Animal() {				// default constructor, helpful for default values, especially numbers
		m_intLimbs = 0;
		m_ptr = new int(25);
		std::cout << "Animal constructor ran\n";
	}

	Animal(int numLimbs) {	// constructor WITH params, what I'm used to
		setLimbs(numLimbs);
	}

	// DEstructor, frees memory after the scope of the class is passed
	~Animal() {		
		delete m_ptr;
		std::cout << "Animal destructed\n";
	}

	// virtual means that child classes CAN override the method
	virtual void navigate();

	virtual void speak() = 0; //EX of a pure vitrual function, basically makes the whole class abstract

	// get + set
	int getLimbs() { return m_intLimbs; }
	void setLimbs(int limbs) { m_intLimbs = limbs; }


protected:

	int m_intLimbs;

	int* m_ptr = nullptr;

private:


};