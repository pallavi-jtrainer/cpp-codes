// PointersDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
/*
  datatype *var;
  & -> get the address
  
 */

/*stores the address of a function -> function pointer
	datatype (*funcptrname)(args_list);
*/

class Base {
public:
	void show() {
		cout << "In Base" << endl;
	}
};

void swap(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int add(int a, int b) {
	return (a + b);
}

int subtract(int a, int b) {
	return (a - b);
}

int fun(int a) {
	return a;
}

int fun2(int (*ptr)(int), int s) {
	int b = ptr(s);
	return b;
}


int main()
{
	//cout << "Address of main: " << &main << endl;


	//function pointer declaration
	int(*funcptr)(int, int);

	funcptr = add; //points to add method
	
	int sum = funcptr(34, 23);
	
	cout << sum << endl;
		
	int res = fun2(fun, 12);
	cout << res << endl;

//	funcptr = subtract;


	/*Base *ptr = new Base();
	ptr->show();

	delete ptr;*/
	
	//int arr[5] = { 1,2,3,4,5 };

	//int arr1[2][2] = { {1,2},{2,4} };
	////*(*arr1) => arr1[0][0]
	////*(*arr1 + 1) => arr1[0][1]
	////*(*(arr1+1)) => arr1[1][0];
	////*(*(arr1+1)+1) => arr1[1][1];
	//cout << *(*arr1);

	/*int a = 12;
	int b = 9;
	cout << "Before swap: a: " << a << " b: " << b << endl;
	swap(a, b);
	cout << "After swap: a: " << a << " b: " << b << endl;*/
}

