#include <iostream>
using namespace std;

//virtual inheritance
class A {
public:
	void display() { cout << "in A"; }
};

class B : virtual A {
public:
	void display() { cout << "In B"; }
};

class C : virtual A {
public: 
	void display() { cout << "In c"; }
};

class D : public B, public C {

};
