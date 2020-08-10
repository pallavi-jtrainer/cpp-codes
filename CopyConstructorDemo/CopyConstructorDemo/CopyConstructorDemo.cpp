// CopyConstructorDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
class CopyConstructorDemo {
	char *s_copy;

public:
	CopyConstructorDemo(const char *str) {
		s_copy = new char[15];  //dynamically allocate memory
	//	strcpy_s(s_copy, str);
		strcpy(s_copy, str);
	}

	void concatenate(const char *s) {
		strcat(s_copy, s);
	}

	~CopyConstructorDemo() {
		delete[] s_copy; //dynamic deallocation 
	}

	void display() {
		cout << s_copy << endl;
	}
};

int main()
{
	CopyConstructorDemo c1("Soft Copy");
	CopyConstructorDemo c2 = c1;

	c1.display();
	c2.display();
	c1.concatenate("constructor");
	c1.display();
	c2.display();
    
	return 0;
}

