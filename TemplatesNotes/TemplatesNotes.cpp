#include <iostream>
#include "TemplateClass.h"
using namespace std;

// max is a default method, so we use a namespace to make it our own
namespace izy {

    // making this into a template
    //int max(int i1, int i2) {

    //    return (i1 > i2) ? i1 : i2; //returns whichever # is bigger

    //}

    template<typename T, typename U>
    T max(T num1, U num2) {

        return (num1 > num2) ? num1 : num2;

    }
}

template<class T>
class myFunct {
public:
    myFunct(T num) : m_num{ num } {} 

    myFunct<T> operator + (const myFunct& f2) const {
        return myFunct(this->m_num + f2.m_num);
    }
protected:
    T m_num;
};


int main()
{
    cout << izy::max(242.4122f, 242) << endl;

    TemplateClass<int> tc;
    TemplateClass<float> tc2;
    // assumes an int when not given a type
    TemplateClass<> tc3;

    TemplateArray<string, 5> strAry;

    strAry[2] = 13;

    cout << strAry[2] << endl;

    myFunct<int> funct1{ 1 };

    myFunct<long> funct2{ 2 };

    myFunct<unsigned int> funct3{ 4 };


}