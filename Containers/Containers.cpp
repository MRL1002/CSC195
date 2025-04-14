#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main()
{
	// continuation of memory notes

	int num1 = 1; // creates an int on the stack

	int* hnum1 = new int(2); // creates number on the heap with a pointer from the stack

	// CONTAINERS START HERE

	// SEQUENCE CONTAINERS

	int arrayNum[4]; // creates an array with no defined values
	arrayNum[3] = {}; // assigns all values as 0

	//arrayNum[0] = 45;

	string aryFruit[5] = { "apple", "strawBerry", "banana", "kiwi", "apple 2" }; // by default strings are empty

	vector<int> vectNums; // creating a vector

	// adding elements to the end
	vectNums.push_back(1);
	vectNums.push_back(3);
	vectNums.push_back(4);
	vectNums.push_back(21);
	vectNums.push_back(57);
	// deleting elements from the end
	vectNums.pop_back();
	vectNums.pop_back();

	for (int i = 0; i < vectNums.size(); i++) {
		cout << vectNums[i] << endl;
	}

	// deques are like vectors but stuff can be adde to both the front and the back

	cout << "--------------------------------------" << endl;

	// pointer arithmetic

	string chemicles[5] = { "Mercury","Hydrochloric Adic","Chlorine","Bromine","Table Salt" };

	cout << chemicles[2] << endl;

	cout << chemicles << endl; // returns address of the FIRST element
	cout << &chemicles[0] << endl; // same thing

	cout << "--------------------------------------" << endl;

	// a way to get the size of an array
	// complete size of array in bytes
	// size of first element in bytes aswell
	int size = sizeof(chemicles) / sizeof(chemicles[0]);
	cout << size << endl;

	// use the thing above for the size
	for (int i = 0; i < size; i++) { 
		cout << &chemicles[i] << endl;
	}

	//OR use a foreach

	for(string chemicle : chemicles) {
		cout << chemicle << endl;
	}


	cout << "--------------------------------------" << endl;

	string* strpoint = chemicles;

	cout << strpoint << endl;

	// incramenting memory spaces per element
	// having ++ BEFORE the var, it will increment BEFORE it prints it out
	// having it AFTER will increment AFTER it prints
	//cout << ++strpoint << endl;
	cout << ++strpoint << endl;

	// decrementing memory spaces
	cout << --strpoint << endl;

	// incrementing memory by more than 1
	cout << strpoint + 2 << endl;

	// decrement
	cout << strpoint - 3 << endl;

	// can assign and reassign
	strpoint = nullptr;

	// dev our own iterators

	cout << "--------------------------------------" << endl;

	// containers / LISTS

	// NODES, a basic unit of data that contains data and may also link to other nodes
	// the data contains things like the next and previous memory addresses

	// a singly linked list's node only knows how to go to the NEXT (forward_list)
	// a doubly linked list knows how to go forward AND backwards (list)

	//heads and tails - front and back, they point to nullon some end

	// lists don't have adjacent memory spaces, they're scatered
	list<string> strCarList = {"Hyundai", "ferrari", "Dodge", "Volvo" };

	cout << strCarList.front() << endl;
	cout << strCarList.back() << endl;
	//removes back
	strCarList.pop_back();

	cout << strCarList.back() << endl;
	//adds to front
	strCarList.push_front("Tesla");

	cout << strCarList.front() << endl;


	cout << "--------------------------------------" << endl;


	//maps, they work very simillarly to dictionaries in python

	map<string, int> pet = { {"Dogs", 24}, {"Cats", 21}, {"Turtles", 500} };

	cout << pet["Dogs"] << endl;

	pet["Cats"] = 50;

	cout << pet["Cats"] << endl;

	pet["Spiders"] = 3;


	// tells if is empty or not 
	// 0 = empty
	cout << pet.empty() << endl;
}
