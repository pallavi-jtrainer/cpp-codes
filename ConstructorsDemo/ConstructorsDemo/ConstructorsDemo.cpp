// ConstructorsDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class numbers {
	double real, imaginary;
public:
	
	numbers() :real(0), imaginary(0) {}
	
	numbers(const numbers& obj) {
		real = obj.real;
		imaginary = obj.imaginary;
	}

	explicit numbers(double r, double i = 0.0){
		real = r;
		imaginary = i;
	}

	friend void display(numbers n);
};

void display(numbers n){
	cout << "Real: " << n.real << " Imaginary: " << n.imaginary << endl;
}

int main()
{
	numbers n1(1);
	display(n1);
	numbers n2(200);
	display(n2);

	return 0;
}


