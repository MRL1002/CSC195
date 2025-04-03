#include <iostream>
#include "declarations.h"
using namespace std;

int main()
{
    std::cout << "Hello User!\n";

	Sandwitch pastrami;

	pastrami.mtpMeat = PASTRAMI;
	//pastrami.blnIsToasted = true;
	pastrami.Toast();
	pastrami.fltWeight = 1.0f;

	cout << sizeof(pastrami) << endl;
	cout << sizeof(string) << endl;
	cout << sizeof(float) << endl;
	cout << sizeof(bool) << endl;

}