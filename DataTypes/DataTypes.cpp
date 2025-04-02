#include <iostream>
using namespace std;

int main()
{

	string strName;

	char chrInitial;

	short shrAge;
	short shrDaysWorked;

	bool blnIsAdult;

	unsigned int intZip;

	float fltWage;
	float aryHoursWorkedPerDay[7];

	const float fltTAX = 0.1f;

	cout << "Enter name: ";
	cin >> strName;

	cout << "Enter last initial: ";
	cin >> chrInitial;

	cout << "Enter age: ";
	cin >> shrAge;
	blnIsAdult = shrAge >= 18;

	cout << "Enter ZIP code: ";
	cin >> intZip;

	cout << "Enter hourly wage: ";
	cin >> fltWage;

	cout << "Enter number of days worked (max 7): ";
	cin >> shrDaysWorked;


	float fltTotalHours = 0;

	for (int i = 0; i < shrDaysWorked; i++) {
		cout << "Enter hours worked for day " << i + 1 << ": ";
		cin >> aryHoursWorkedPerDay[i];

		fltTotalHours += aryHoursWorkedPerDay[i];
	}

	float fltGrossIncome = fltTotalHours * fltWage;
	float fltTaxAmount = fltGrossIncome * fltTAX;
	float fltNetIncome = fltGrossIncome - fltTaxAmount;



	cout << "\nEmployee Payroll Summary\n";
	cout << "-------------------------\n";
	cout << "Name: " << strName << " " << chrInitial << ".\n";
	cout << "Age: " << shrAge << " (Adult: " << (blnIsAdult ? "Yes" : "No") << ")\n";
	cout << "Zipcode: " << intZip << "\n";
	cout << "Hourly Wage: $" << fltWage << " per hour\n";
	cout << "Total Hours Worked: " << fltTotalHours << " hours\n";
	cout << "Gross Income: $" << fltGrossIncome << "\n";
	cout << "Tax Amount: $" << fltTaxAmount << "\n";
	cout << "Net Income: $" << fltNetIncome << "\n";

}