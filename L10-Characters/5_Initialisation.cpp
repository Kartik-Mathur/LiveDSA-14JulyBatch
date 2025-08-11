#include <iostream>
using namespace std;

int main() {

	// int a[] =  {1, 2, 3, 4, 5};
	// int a[10] =  {1, 2, 3, 4, 5}; // [1,2,3,4,5,0,0,0,0,0] other buckets will get value 0
	// int a[10] =  {1}; // [1,0,0,0,0,0,0,0,0,0] other buckets will get value 0
	// int a[10] =  {}; // [0,0,0,0,0,0,0,0,0,0] other buckets will get value 0

	// cout << sizeof(a) << endl;

	int a[10] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);


	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}

	return 0;
}
















