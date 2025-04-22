#include <iostream>
#include<string>
#include <fstream> // stream content to a file

using namespace std;

// simply streamlines printing to console
// must pass cout and cin as a reference, not as a value
// ostream and istream can't create coppies

// passing by reference allows the method to manipulate the original variable

// passing things (especially strings) by reference means that it will take up LESS memory overall because
//  it doesn't create a copy in memory

// Use pass by reference whenever possible | UNLESS the var needs to be null, then use a pointer
void Write(const string& text, ostream& ostream) {
	
	// const keyword makes text unchangable IN the method
	//text = "I'm different now.";

	ostream << text;

}


int main()
{

	string strText;

//	string StrText = "Hello World\n";
//	cout << StrText;

	// cin will break on the first space
	// inputting "Hello World" will only print "Hello"
//	cin >> StrText;
//	cout << StrText << endl;

	// uses string to now no longer break on a space
	// breaks on first new line char
	getline(cin, strText);
	Write(strText, cout);

	// save to file
	ofstream fOut("data.txt"); //basically create/set the file you want to output to

	fOut << strText;

	fOut.close();



}