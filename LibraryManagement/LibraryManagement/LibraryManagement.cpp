// LibraryManagement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdexcept>
#include "Header.h"
/*
	exception
		bad_alloc
		bad_exception
		bad_cast
		runtime_error
			overflow_error
			range_error
		logic_failure
			out_of_range
			invalid_argument
	All exceptions are unchecked in C++
*/

class myException : exception {
public:
	void what() {
		cout << "Divide by zero not allowed" <<endl;
	}
};


class Test {
public:
	int x;
	Test() { cout << "Constructor"<<endl; }
	~Test() { cout << "Destructor" << endl; }
};

class Derived :public Test {
public:
	void fun(int *ptr, int i) throw (int *, int) {
		if (ptr == NULL) throw ptr;
		if (i == 0) throw i;
	}

	int divide(int n, int d) {
		int res;
			if (d == 0) {
				myException e;
				throw e;
			}
			res = n / d;
			return res;
	}
};

int main()
{
	Derived d;
	
	try{
		/*Test t1;
		t1.x = 10;*/

		//d.fun(NULL, 0);
		//throw d;

		d.divide(2, 0);
	}
	catch (Derived der) {

	}
	catch (Test t) {

	}
	catch (myException e) {
		e.what();
	}
	catch (...) {
		cout << "Exception caught";
	}

	//int numerator, denominator;

	//cout << "Enter a numerator:";
	//cin >> numerator;

	//cout << "Enter a denominator: ";
	//cin >> denominator;
	//try {
	//	if (denominator == 0) throw denominator;
	//	else{
	//		int result = numerator / denominator;
	//		cout << result;
	//	}
	//}
	//catch (int) {
	//	cout << "Denominator is " ;
	//}
	///*catch (runtime_error &e) {
	//	cout << e.what();
	//}*/
	//catch (...) {
	//	cout << "Exception encountered";
	//}
	
	return 0;
	
}

