// CastingDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//dynamic casting
//static casting
//const casting
//reinterpret_cast

#include <iostream>
#include <string>
using namespace std;

//static_cast
class Base {
public:
	int x; int  y;

	Base(int a = 0, int b = 20) : x(a), y(b) { cout << "Constructor" << endl; }

	void print() {
		cout << " Base Object -> a: " << x << " ,b: " << y << endl;
	}

	~Base() { cout << "Destructor" << endl; }
};

class Derived : public Base {
public: 
	int z;
	Derived(int c = 10):z(c) {}

	void print() {
		cout << " Derived Object -> a: " << x << " ,b: " << y << " ,c: "<< z <<endl;
	}
	~Derived() { cout << "Derived Destructor" << endl; }
};

int main() {
	Base *b = new Base(20, 25);
	Derived *d = new Derived(35);

	/*b->print();
	d->print();*/

	//downcasting
	Derived *bd = static_cast<Derived*>(b);

	bd->print();

	//upcasting
	Base *db = static_cast<Base*>(d);
	db->print();
	
	return 0;
}



//dynamic_cast
//class Base {
//protected:
//	int val;
//public:
//	Base(int value) {
//		val = value;
//	}
//
//	virtual ~Base(){}
//
//};
//
//class Derived : public Base {
//protected:
//	string name;
//
//public:
//	Derived(int value, string n) :Base(value) {
//		name = n;
//	}
//
//	string getName() { return name; }
//};
//
//
//Base* getObject(bool returnObj) {
//	if (returnObj)
//		return new Derived(1, "TestString");
//	else
//		return new Base(2);
//}
//
//int main()
//{
//	Base *b = getObject(false);
//
//	Derived *d = dynamic_cast<Derived*>(b);
//
//	if(d)
//		cout << "Derived: " << d->getName() << endl;
//}

