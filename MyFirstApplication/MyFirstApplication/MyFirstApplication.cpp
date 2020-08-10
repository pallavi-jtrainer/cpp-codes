// MyFirstApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;
/*
multiline comment
*/
enum days { MONDAY=1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

int main()
{
	////method 1
	//const int a = 10; //initialization
	//float f = 10.0;
	//char c = 'd';

	////a = 19;

	////method 2 => constructor initialization
	//int var(12);

	////method 3 => uniform initialization
	//int myVar{34};

	//string s = "This is a string";

	/*
		c++11 
		simillar to aggregate initialization
		int myVar[] = {34};

	*/

	/*cout << var;
	cout << myVar;
	cout << "String " + s;*/


	/*cout << a;

	cout << "Hello World!\n";
	cout << "Welcome to the world of C++";*/

	//if else
	/*
		if (condition) statements;
		else statements;
	*/

	int x = 10;

	if (x == 10) {
		cout << x;
	}
	else {
		cout << "Sorry";
	}

	//branching statement - switch case
	days dayOfWeek = THURSDAY;

	switch(dayOfWeek)
	{
	case MONDAY: cout << "This is Monday" << endl;
		break;
	case TUESDAY: cout << "Tuesday" << endl;
		break;
	case 3: cout << "Wednesday" << endl;
		break;
	default: cout << "Default case ";
		break;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
