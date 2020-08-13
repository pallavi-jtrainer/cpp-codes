// TemplateDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Template => blueprint of a function or class


#include <iostream>
using namespace std;

//template class
template<class T>
class MyClass {
public:
	explicit MyClass(T* ptr = NULL) { p = ptr; }

	~MyClass() { 
		cout << "Destructor" << endl;
		delete p; }

	T& operator *() {
		return *p;
	}

	T& operator ->() {
		return p;
	}
private:
	T* p;
};

class A {

};

int main() {
	MyClass<int> m_p(new int());
	*m_p = 10;

	cout << *m_p;

	return 0;
}





////template function
//template<typename T>
//T add(T a, T b) { return (a + b); }
//
//template<class T>
//void BubbleSort(T obj[], int i) {
//	for (int x = 0; x < i-1; x++) {
//		for (int y = i - 1; x < y; y--) {
//			if (obj[y] < obj[x - 1]) {
//				swap(obj[y], obj[x - 1]);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int a[5] = { 12,76,45,30,49 };
//	int len = sizeof(a) / sizeof(a[0]);
//
//	BubbleSort<int>(a, len);
//
//	cout << "Sorted Array: " << endl;
//	for (int i = 0; i < len; i++) {
//		cout << a[i] << endl;
//	}
//
//
//	/*cout << "Adding integers: " << add(2, 3) << endl;
//	cout << "Adding Floats: " << add(2.4, 4.5) << endl;*/
//}
//
