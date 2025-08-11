#include <iostream>
using namespace std;

// Global scope
int i = 1000;

int main() {

	int i = 1;

	if (i > 0) {
		i = i + 100;

		cout << ::i << endl; // using scope resolution operator -> ::
		::i = ::i + 200;
		int i = -1;
		cout << i << endl;
	}

	cout << i << endl;
	// #Global space se bucket i ko access karo
	cout << ::i << endl; // using scope resolution operator

	/*
		int i = 1;

		if (i > 0) {
			int i = -1;

			i = i + 100;

			cout << i << endl; // -1
		}

		cout << i << endl; // 1
	*/

	return 0;
}
















