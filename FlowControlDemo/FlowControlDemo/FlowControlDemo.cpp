// FlowControlDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    /*enum days{Monday=1, Tuesday, Wednesday, Thrusday, Friday, Saturday, Sunday};

	days day = Tuesday;
	switch (day) {
	case Monday: cout << "Monday";
		break;
	case Tuesday: cout << "Tuesday";
		break;
	case Wednesday: cout << "Wednesday";
		break;
	default: cout << "default";
		break;
	}*/

	//iteration statements
	//for
	int ans = 0 ;
	/*for (i = 0; i < 5; i++) {
		cout << i;
	}*/

	/*while (i < 10) {
		cout << i;
		++i;
	}*/

	/*do {
		cout << "Enter your name: ";
		string name;
		getline(cin, name);

		cout << "1. Print Hello" << endl;
		cout << "2. Print Goodbye" << endl;
		string str;

		cin >> ans;

		switch (ans) {
		case 1: str = "Hello";
			cout << str + " " + name;
			break;
		default:
			cout << "goodbye " + name;
			break;
		}
		
	} while (ans < 2);*/

	//range based for loop
	//for (variable declaration : collection) statements
	/*string str = "Welcome";
	for (auto c : str) {
		cout << "[" << c << "]";
	}
*/
	//jump statements 
	/*
	break
	continue
	goto
	*/

	/*for (int n = 0; n < 10; n++) {
		cout << n << endl;
		if (n == 5)
			break;
	}*/

	/*for (int r = 0; r < 3; r++) {
		for (int c = 0; c < 3; c++) {
			cout << r << " " << c << endl;
			if (c == 1)
				break;
		}
	}*/

	//for (int n = 10; n > 0; n--) {
	//	if (n == 5) 
	//		continue;
	//	
	//	cout << n << "  ";
	//}

	int n = 10;

myLabel: 
	cout << n << " ";
	n--;

	if (n > 0) goto myLabel;

	cout << "done";
	


	return 0;
}

