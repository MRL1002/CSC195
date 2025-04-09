#include <iostream>
using namespace std;
struct Person
{
	char name[32];
	int id;
};

void square(int& i) {
	i = i * i;
}

void dbl(int* i) {
	*i = *i * 2;
}

int main()
{
	// ** REFERENCE **
	//
	// declare an int variable and set the value to some number (less than 10)
	
	int intSomeNum = 4;

	// declare a int reference and set it to the int variable above
	
	int& intref = intSomeNum;

	// output the int variable
	
	cout << intSomeNum << endl;

	// set the int reference to some number
	
	intref = 6;
	
	// output the int variable
	
	cout << intSomeNum << endl;

	// what happened to the int variable when the reference was changed? (insert answer)

	/*
	
	the int variable also changed when the reference was changed.
	
	*/

	// output the address of the int variable
	
	cout << &intSomeNum << endl;

	// output the address of the int reference
	 
	cout << &intref << endl;
	 
	// are the addresses the same or different? (insert answer)
	
	/*
	 
	the memory adresses are both the same.

	*/


	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int parameter
	// in the function, multiply the int parameter by itself and assign it back to the parameter(i = i * i)
	// call the Square function with the int variable created in the REFERENCE section
	
	square(intSomeNum);

	// output the int variable to the console

	cout << intSomeNum << endl;
	 
	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
	// change the Square function to take a int reference
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""


	// ** POINTER VARIABLE **
	//
	// declare an int pointer, set it to nullptr (it points to nothing)
	
	int* intPoint = nullptr;

	// set the int pointer to the address of the int variable created in the REFERENCE section
	
	intPoint = &intSomeNum;

	// output the value of the pointer
	
	cout << intPoint << endl;
	 
	// what is this address that the pointer is pointing to? (insert answer)
	/*
	
	The address in the pointer is pointing to the original variable

	*/ 
	// output the value of the object the pointer is pointing to (dereference the pointer)
	
	cout << *intPoint << endl;

	// ** POINTER PARAMETER **
	//
	// create a function above main() called Double that takes in an int pointer parameter
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter(i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!
	// call the Double function with the pointer created in the POINTER VARIABLE section

	dbl(intPoint);
 
	// output the dereference pointer

	cout << *intPoint << endl;

	// output the int variable created in the REFERENCE section
	
	cout << intSomeNum << endl;

	// did the int variable's value change when using the pointer?
	/*
	
	Yes, the int's value changed when using the pointer as the parameter
	
	*/
}
