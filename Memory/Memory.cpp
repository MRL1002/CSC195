
#include <iostream>
using namespace std;

void set(int i) {
    i = 100;
}

int main()
{
    int i1 = 10;
    int i2 = 20;

    int& r = i1; // r is now a reference to i1

    //set(i1);
    r = 45; // so now, i1 is now 45

    cout << i1 << endl;

}
