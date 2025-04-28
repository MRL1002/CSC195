#include <iostream>

using namespace std;

// access part of the debugger to check for memory leaks
#define _DBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#include <memory>


// smart pointer class
template<typename T>
class smart_ptr

{

public:
	smart_ptr(T* ptr = nullptr) : _ptr{ ptr } {}

	// delete methods
	smart_ptr(const smart_ptr&) = delete; // "copy constructor" | this one says "don't allow creation of coppies"
	smart_ptr& operator = (const smart_ptr&) = delete; // don't allow use of the assignment (=) operator

	~smart_ptr() { if (_ptr)  delete _ptr; }

	T& operator * () { return *_ptr; }
	T* operator & () { return  _ptr; }
	T* operator -> () { return  _ptr; }

	T* get() { return _ptr; }

private:
	T* _ptr{};
};


int main()
{
	//int arry[] = { 2, 4, 6, 8 };
	// 
	//int* p = arry;	// %arry[0] | passing address of 0th(first) element
	// 
	//p++; // increment by 4 bytes since it's an array of ints
	//p = p + 2;
	// 
	//cout << *p << endl; // prints 2

	int* p = new int{ 5 }; // new allocates memory on the HEAP, wihtout a value the default is 0

	cout << *p << endl; // without deleting this pointer, the memory "leaks"

	delete p; // deltes pointer, clearing memory

	_CrtDumpMemoryLeaks(); // returns debug logs in the output window that tell us what memory is still being used

	//Smart pointers - doesn't need an explicit call to delete, because it knows ot delete itself when it's out of scope
	// called using unique_ptr<datatype> name{ new datatype(value) };

	unique_ptr<int> uptr{ new int(5) };

	
	{
		smart_ptr<int> sp{new int(15)};
		unique_ptr<int> up{ new int(20) };

		//unique_ptr<int> upc(up); // CAN'T make coppies of unique pointers
		//smart_ptr<int> spc{ sp };  // same here

		// can't make coppies because when one is deleted, it has the chance to try and delete an
		// already deleted spot in memory

	} // the smart pointer will DIE here, deltes it at the end of its' scope

	_CrtDumpMemoryLeaks();
}