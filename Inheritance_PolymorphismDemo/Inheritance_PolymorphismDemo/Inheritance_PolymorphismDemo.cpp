// Inheritance_PolymorphismDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

//class A {
//	int a;
//public:
//	void get_a(int x) { a = x; }
//	void display() { cout << "In A"; }
//};
//
//class B {
//	int b;
//public:
//	void get_b(int x) { b = x; }
//	void display() { cout << "In B"; }
//};
//
//class C : public A, public B {
//
//};

class Person {
public:
	string name;
	int age;

	void acceptData(string n, int i) {
		name = n;
		age = i;
	}

	virtual void display() = 0;

};


class Employee :public Person {
	int salary;
public:
	void accept(int s, string n, int i) { 
		salary = s;
		name = n;
		age = i;
	}
	void display() {
		cout << "Name: ";
		cout << name;
		cout << "Age: ";
		cout << age;
		cout << "Salary: ";
		cout << salary;
	}
};

int main()
{
	Employee e;
	//e.acceptData("New",24);
	e.accept(30000, "New", 24);
	e.display();
	
	/*C c;
	c.display();*/

}

