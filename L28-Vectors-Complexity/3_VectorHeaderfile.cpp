#include <iostream>
using namespace std;
#include "Vector.h"

int main() {

	Vector<char> v;
	// char c = 'A';
	for (int i = 1; i <= 5; ++i)
	{
		v.push_back(i + 64);
		// v.push_back(c);
		// c++;
	}

	cout << v.size() << ", " << v.capacity() << endl;

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << ' ';
	}
	cout << endl;

	return 0;
}
















