
#include <iostream>
using namespace std;

// this method passes the argument by reference
void set(int& i) {
    i = 100;
}

void swap(int* i1, int* i2) {

    int intTemp = *i1;

    *i1 = *i2;
    *i2 = intTemp;

}

int main()
{
    int i1 = 10;
    int i2 = 20;

    int& r = i1; // r is now a reference to i1, basically like an ailius for it

    int* p; // pointers can be uninitialized, refs can't
            // null pointer is the default typically

    p = &i1; // for pointers to be used, they must POINT to a memory location

    r = 45; // so now, i1 is now 45

    //set(i1);

    swap(&i1, &i2); // swaps the values, we need the ADDRESS to i1 and i2 to be the arguments, not just the values

    cout << "i1: " << i1 << endl;
    cout << "i2: " << i2 << endl;
    cout << endl;
    cout << "i1 Address: " << &i1 << endl; // prints memeory address of i1
    cout << "i1 Reference Address: " << &r << endl;  // pritns address of r, will be the same as above, because it's basically a redirector
    cout << endl;
    cout << "Value stored in p: " << *p << endl;  // will retrieve the val stored in the address stored in p / "dereferece" p
    cout << "address of p: " << &p << endl;  // will retrieve the address of p
    cout << "address STORED IN p: " << p << endl;  // will retrieve the address STORED IN p, or address of i1

}
