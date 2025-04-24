#include <iostream>
#include <string>
#include <fstream> // stream content to a file

#include <vector>

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

	ostream << text << endl;

}

// writes a vector specifically to a file
void Write(const vector<int> numbs, ofstream& ostream) {

	for (int n : numbs) {
		ostream << n << endl;
	}

}

// helps read something from a file
void Read(string text, ifstream& ifstream) {

	ifstream >> text;

}

// reads a vector from a file
void Read(vector<int>& numbs, ifstream& ifstream) {

	// eof means end of file
	while (!ifstream.eof()) {
		int n;
		ifstream >> n;
		
		// there's 5 lines in the txt though there's only 4 numbs
		// adding this means the last value isn't printed twice as white space is not an int
		if(!ifstream.fail()){
			numbs.push_back(n);
		}

	}
	
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

	// save to file
	ofstream fOut("data.txt"); //basically create/set the file you want to output to

	Write(strText, fOut);

	int i = 5;
	fOut << i << endl;

	fOut.close();

	// input from file | default only reads 1 (first) line from a file

	ifstream fIn("data.txt");

	//getline(fIn, strText);
	Read(strText, fIn);
	fIn >> i;

	fIn.close();

	cout << "Read from file" << endl;
	cout << strText << endl;
	cout << i << endl;

	// storing vectors in a file

	vector<int> numbs = { 1,2,3,4 };

	fOut.open("numbers.txt");
	Write(numbs, fOut);

	fOut.close();

	//clear the vector
	numbs.clear();

	fIn.open("numbers.txt");
	Read(numbs, fIn);
	fIn.close();

	//prints an extra 4 at the end

	for (int n : numbs) {
		cout << n << endl;
	}

}