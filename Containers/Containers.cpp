#include <iostream>
#include <vector>
using namespace std;

int main()
{
	// continuation of memory notes

	int num1 = 1; // creates an int on the stack

	int* hnum1 = new int(2); // creates number on the heap with a pointer from the stack

	// CONTAINERS START HERE

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
}
