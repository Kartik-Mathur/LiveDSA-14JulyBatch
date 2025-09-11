#include <iostream>
using namespace std;

int main() {
	char c = 'A';
	int a = 10;
	char c1 = 'B';
	bool b = true;


	cout << &a << endl; // Address of bucket a
	cout << sizeof(&a) << endl;

	cout << &b << endl; // Address of bucket b
	cout << sizeof(&b) << endl;

	int arr[100] = {1, 2, 3, 4}; // All remaining buckets will get 0 value...

	cout << arr << endl;
	cout << &arr[0] << endl;

	// Address of character buckets are treated differently....
	cout << &c << endl;
	cout << &c1 << endl;
	// While printing address of a character bucket we need to fool the compiler by telling
	// its an address of integer bucket...
	cout << (int*)&c1 << endl;
	cout << (float*)&c << endl;
	cout << (void*)&c << endl;

	return 0;
}
















