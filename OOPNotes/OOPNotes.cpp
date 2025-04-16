#include <iostream>
#include "Animal.h" // since Cat is an animal, cat links to animal
#include "Cat.h"
#include "Snake.h"
#include <vector>
using namespace std;


int main()
{

	//Animal animal1;		// allocated memory on stack | no "new" keyword
	//animal1.navigate();


	//Cat cat1;
	//cat1.navigate();


	//Animal* ptrAnimal = new Animal;	// memory is now allocated on the heap | includes * + new
	//(*ptrAnimal).navigate(); // or ptrAnimal->navigate();


	//Animal* ptrCat = new Cat;
	//ptrCat->navigate();			// without the virtual keyword in the parent's .h, it won't actually override the method


	// using methods from a function

	//animal1.setLimbs(4);
	//cout << animal1.getLimbs() << endl;

	//Animal animal2(6);	// setting things with a constructor ( number of limbs )
	//cout << animal2.getLimbs() << endl;

	{
		//Animal* ptrAnimal2 = new Animal; // calls the destructor the very next line
		// since this is the last line the DEstrcuctor is called here
	}

	//Snake solid_snake(false, 4);
	//solid_snake.navigate();
	//solid_snake.speak();

	//Cat kitty;
	//kitty.navigate();
	//kitty.speak();

	// containers to store class instances
	// they can all be implemented because they're child classes to Animal

	vector<Animal*> animals;

	animals.push_back(new Cat);
	animals.push_back(new Snake);

	//iterate through

	for (Animal* anim : animals) {

		anim->speak();

	}

	for (Animal* anim : animals) {

		delete anim; // deletes eatch thing from heap memory, the pointers still point, but now to nothing

	}

	animals.clear(); // clears pointers
}