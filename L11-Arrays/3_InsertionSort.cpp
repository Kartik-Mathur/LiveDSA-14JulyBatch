#include <iostream>
using namespace std;

int main() {

	int a[] = {2, 1, 0, 4, 3};
	int n = sizeof(a) / sizeof(int);
	int i, j;
	for (i = 1; i < n; ++i)
	{
		int hpc = a[i];
		for (j = i - 1; j >= 0 && a[j] > hpc; --j)
		{
			a[j + 1] = a[j];
		}

		a[j + 1] = hpc;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















