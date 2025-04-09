#include <iostream>
using namespace std;

int main() 
{
	int num1 = 1; // creates an int on the stack

	int* hnum1 = new int(2); // creates number on the heap with a pointer from the stack

	int* arrayNum = new int[4]; // creates an array

	arrayNum[0] = 45;

}
