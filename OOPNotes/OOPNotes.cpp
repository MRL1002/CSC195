#include <iostream>
#include "Animal.h" // since Cat is an animal, cat links to animal
#include "Cat.h"
using namespace std;


int main()
{

	Animal animal1;		// allocated memory on stack | no "new" keyword
	animal1.navigate();


	Cat cat1;
	cat1.navigate();


	Animal* ptrAnimal = new Animal;	// memory is now allocated on the heap | includes * + new
	(*ptrAnimal).navigate(); // or ptrAnimal->navigate();


	Animal* ptrCat = new Cat;
	ptrCat->navigate();			// without the virtual keyword in the parent's .h, it won't actually override the method


	// using methods from a function

	animal1.setLimbs(4);
	cout << animal1.getLimbs() << endl;

	Animal animal2(6);	// setting things with a constructor ( number of limbs )
	cout << animal2.getLimbs() << endl;


}