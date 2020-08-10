// UDT_Demo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

#define ROWS 4
#define COLS 3
#define ADDNUM(a,b) (a+b)

struct Person {
	int id;
	string name;
	string address;
	int phone;
};

class Person1 {
private:
	int id;
	string name;
public:
	//default constructor
	Person1() {
		cout << "Default construtor"<<endl;
	}

	//parameterized constructor
	Person1(int x, string n) {
		id = x;
		name = n;
	}

	//destructor
	~Person1() {
		cout << "Destructor called" << endl;
	}

	//copy constructor
	Person1(const Person1 &obj) {
		id = obj.id;
		name = obj.name;
	}

	void AddPerson(int i, string n) {
		id = i;
		name = n;
	}

	void DisplayPerson();
};

void Person1::DisplayPerson() {
	cout << "Id: " << id << " Name: " << name <<endl;
}

int main()
{
	/*
	copy constructor helps with deep copy
	classname(const classname &obj);
	*/

	Person1 p1;
	//Person1 *p2 = new Person1();
	Person1 p2;

	p1.AddPerson(1, "Person1");
	p1.DisplayPerson();

	p2.AddPerson(2, "Person2");
	p2.DisplayPerson();

	/*Person1 p3(3, "Person3");
	p3.DisplayPerson();

	Person1 p4 = p2;
	p4.DisplayPerson();*/

	/*
	struct as a primitive class
	has only the properties
	*/

	//Person person;

	//cout << "Enter the Id: ";
	//cin >> person.id;
	//cout << "Enter name: ";
	////fflush(stdin);
	////getline(cin, person.name);
	//cin >> person.name;
	//cout << endl <<endl;

	//cout << "\nDisplaying Info\n";
	//cout << "Id: " << person.id << endl;
	//cout << "Name: " << person.name << endl;

    /*
	Arrays: a data structure that stores similar datatypes in continuous memory
	every array starts from 0 to n-1
	size is n
	
	data_type arr_name[size];
	data_type arr_name[] = {ele1, ele2, ....};
	*/

	//int arr[5] = {2,4,6,7,9};

	//arr[0] = 12;

	//int arr[5];

	////to load contents into the array
	//for (int i = 0; i < 5; i++) {
	//	arr[i] = i + 2;
	//}


	//cout << arr[3];

	//printing the contents of an array
	/*for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {
		cout << arr[i] << endl;
	}*/

	/*for (auto i : arr) {
		cout << i << endl;
	}*/

	/*int arr1[ROWS][COLS];

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr1[i][j] = i + j + 2;
		}
	}

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}*/

	/*int result = ADDNUM(12, 23);
	cout << result;*/

	return 0;

}