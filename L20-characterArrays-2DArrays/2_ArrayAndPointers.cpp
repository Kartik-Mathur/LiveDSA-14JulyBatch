#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	cout << sizeof(a) << endl;
	int *p;
	cout << sizeof(p) << endl;

	for (int i = 0; i < n; ++i)
	{
		cout << *(a + i) << " ";
		// cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















