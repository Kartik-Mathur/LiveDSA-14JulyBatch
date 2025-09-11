#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 5, 4, 3, 4};
	int n = sizeof(a) / sizeof(int);
	int X = 5;

	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (a[i] + a[j] == X) {
				cout << a[i] << ", " << a[j] << endl;
			}
		}
	}

	return 0;
}
















