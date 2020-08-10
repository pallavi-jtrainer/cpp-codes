// ClassStaticDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class StaticVariableDemo {
public: 
	static int counter;
	
	//string name;
	static int age;
	

	StaticVariableDemo() {
		counter++;
	}

	static void Display(int x) {
		cout << "Inside a static method";
		age = x;
	}
};

int StaticVariableDemo::counter = 0;

void fun() {
	static StaticVariableDemo obj;
}

int main()
{
	StaticVariableDemo s1;
	StaticVariableDemo s2;
	
	s1.counter = 10;

	cout << "Counter s1: " << StaticVariableDemo::counter;
	cout << "Counter s2: " << s2.counter;

	StaticVariableDemo::Display(23);

	return 0;
}
