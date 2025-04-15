#pragma once


class Animal {
public:

	Animal() {				// constructor w/o params
		m_intLimbs = 0;
	}

	Animal(int numLimbs) {	// constructor WITH params, what I'm used to
		setLimbs(numLimbs);
	}

	virtual void navigate();

	// get + set
	int getLimbs() { return m_intLimbs; }
	void setLimbs(int limbs) { m_intLimbs = limbs; }


protected:

	int m_intLimbs;

private:


};