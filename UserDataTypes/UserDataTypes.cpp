#include <iostream>
#include "Declarations.h"
using namespace std;

// typedef double salary; --- this is an older way
using salary = double; //using "using" allows blanket changes for datatypes

int main()
{

	salary wage_Reception = 14.4;
	salary wage_Engineer = 32.4;
	salary wage_Analyst = 18.5;

    std::cout << "Hello User!\n";

	Sandwitch pastrami;

	pastrami.mtpMeat = PASTRAMI;
	//pastrami.blnIsToasted = true;
	pastrami.Toast();
	pastrami.fltWeight = 1.0f;

	cout << sizeof(pastrami) << endl;
	cout << sizeof(string) << endl;
	cout << sizeof(float) << endl;
	cout << sizeof(bool) << endl; // will try to match the byte size of other types

}