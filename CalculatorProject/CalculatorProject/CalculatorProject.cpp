// CalculatorProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

template<class T>
class Calculator {
private:
	T n1, n2;
public:
	Calculator(T m, T n) : n1(m), n2(n) {}

	void DisplayResult() {
		cout << "Numbers are: " << n1 << " & " << n2 << endl;
		cout << "Addition: " << add() << endl;
		cout << "subtract: " << subtract() << endl;
	}


	T add() { return (n1 + n2); }
	T subtract() { return (n1 - n2); }
	T multiply() { return (n1 * n2); }
	T divide() { return (n1 / n2); }

};

class Members {
public:
	int id;
	string name;


};

int main()
{
	Calculator<int> iCalc(2, 4);
	iCalc.DisplayResult();

}

