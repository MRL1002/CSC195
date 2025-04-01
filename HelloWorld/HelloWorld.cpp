#include <iostream>
using namespace std;

int main() {
    // std:: is redundant by adding using namespace std
    std::cout << "Hello, World!" << endl;
    std::cout << "Git is now tracking this project." << endl;


    string strName;

	cout << "enter Name\n";

	cin >> strName;

	cout << "Hello " << strName << endl;

    return 0;
}