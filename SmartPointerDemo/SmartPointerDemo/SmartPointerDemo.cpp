// SmartPointerDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

/*
Smart pointer is a RAII modeled class. used to manage dynamically allocated memory
auto_ptr<classname> var(new classname())

unique_ptr

shared_ptr -> believes in sharing ownership
shared_ptr<datatype/classname> var(new datatype/classname);

weak_ptr
*/

class Test {
	
public:
	int m;
	Test(){}
	Test(int a = 0) { m = a; }

	~Test() { cout << "Calling Destructor"; }
};

void Fun(shared_ptr<Test> p1) {
//	shared_ptr<Test> sptr3 = p1;
	cout << p1->m << endl;
}

int main()
{
	shared_ptr<Test> sptr(new Test(4));
	Fun(sptr);
	cout << sptr->m << endl;
	shared_ptr<Test> sptr2 = sptr;
	//auto_ptr<Test> p(new Test(4)); //100
	
	//Fun(p);
	//cout << p->m << endl;
	return 0;
}

