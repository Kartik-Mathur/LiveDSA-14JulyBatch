#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	for (int i = 0; i < n - 1; ++i)
	{
		cout << "Running for i: " << i << endl;
		int swapCnt = 0;

		for (int j = 0; j < n - 1 - i; ++j)
		{
			if (a[j] > a[j + 1]) {
				swapCnt++;
				swap(a[j], a[j + 1]);
			}
		}

		if (swapCnt == 0) {
			break; // stop the loop of i
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















