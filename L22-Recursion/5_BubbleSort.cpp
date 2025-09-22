#include <iostream>
using namespace std;

void bubbleSort(int *a, int n, int i = 0) {
	if (i == n - 1) {
		return;
	}

	for (int j = 0; j < n - 1 - i; ++j)
	{
		if (a[j] > a[j + 1]) {
			swap(a[j], a[j + 1]);
		}
	}

	// if we exit loop of j, we increment i
	bubbleSort(a, n, i + 1);
}

void bubbleSort1(int *a, int n, int j, int i = 0) {
	if (i == n - 1) {
		return;
	}

	if (j < n - 1 - i) {
		if (a[j] > a[j + 1]) {
			swap(a[j], a[j + 1]);
		}
		bubbleSort1(a, n, j + 1, i);
	}
	else {
		bubbleSort1(a, n, 0, i + 1);
	}
}

int main() {

	int a[] = {5, 4, 3, 2, 1};
	int n = sizeof(a) / sizeof(int);

	bubbleSort1(a, n, 0, 0);
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















