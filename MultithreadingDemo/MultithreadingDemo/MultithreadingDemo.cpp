// MultithreadingDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
thread -> header file with all the necessary functions
*/



#include <iostream>
#include <thread>
#include <vector>
#include <string>
using namespace std;

void printVector(int n, string msg) {
	string str = to_string(n) + ":" + msg;
	cout << str << endl;
}

int main() {

	vector<string> s = {
		"springpeople.com",
		"udemy.com",
		"examly.com",
		"lydia.com"
	};

	vector<thread> threads;

	for (int i = 0; i < s.size(); i++) {
		threads.push_back(thread(printVector, i, s[i]));
	}

	for (auto &t : threads) {
		t.join();
	}

	return 0;

}

















//void fun( int x) {
//	for (int i = 0; i < x; i++)
//		cout << "Called " << i << endl;
//}
//
//class threadClass {
//public:
//	void operator()(int x) {
//		for (int i = 0; i < x; i++) {
//			cout << "Object as Callable" << endl;
//		}
//	}
//};
//
//
//int main()
//{
//	thread t(fun, 3);
//	thread t2(threadClass(), 3);
//	t.join();
//	t2.join();
//	return 0;
//}




