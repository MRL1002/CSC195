#include "Declarations.h"
using namespace std;

int main()
{
	string strDiff;

	cout << "Select difficults: Easy, Normal, or Hard" << endl;

	cin >> strDiff;

	runGame(diffSelect(strDiff));

}