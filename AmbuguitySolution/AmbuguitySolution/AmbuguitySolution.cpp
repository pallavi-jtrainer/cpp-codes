// AmbuguitySolution.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class A {
public:
	void display() { cout << "In A"; }
};

class B {
public:
	void display() { cout << "In B"; }
};

class C :public A, public B {

};

int main()
{
	C c;
	c.A::display();
	c.B::display();
}

