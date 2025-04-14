
#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

void ary() {
	// created the array
	string aryDays[7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };

	// calculates size
	int size = sizeof(aryDays) / sizeof(aryDays[0]);

	// loops through array and prints all of the things inside
	for (int i = 0; i < size; i++) {
		cout << aryDays[i] << endl;
	}
}

void vect() {
	// creates the vector
	vector<int> vectNums = { 2, 4, 6, 8, 10 };
	//adds 12 and 14 to the back
	vectNums.push_back(12);
	vectNums.push_back(14);
	// removes the last item (14)
	vectNums.pop_back();
	// prints every remaning item
	for (int i = 0; i < vectNums.size(); i++) {
		cout << vectNums[i] << endl;
	}
}

void lst() {
	// created the list
	list<string> lstFruits = { "Apple", "Pear", "Grape" };

	// adds banana to the front
	lstFruits.push_front("Banana");

	// adds orange to the back
	lstFruits.push_back("Orange");

	// prints new list
	for (string fruit : lstFruits) {
		cout << fruit << endl;
	}

}

void mp() {
	// creates a new map
	map<string, int> mapList = { {"Milk", 1}, {"Eggs", 12}, {"Apples", 4} };

	// sets apple's paired value to 2
	mapList["Apples"] = 2;

	// prints each item 
	for (auto grocery : mapList) {
		cout << grocery.first << " : " << grocery.second << endl;
	}
}

int main()
{

	cout << "-----Array-----" << endl;

	ary();

	cout << "-----Vector-----" << endl;

	vect();

	cout << "-----List-----" << endl;

	lst();

	cout << "-----Map-----" << endl;
	
	mp();

}