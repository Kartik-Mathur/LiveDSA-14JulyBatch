#include <iostream>
using namespace std;

bool isArraySorted(int *a, int n) {
	// base case
	if (n == 0 || n == 1) {
		return true;
	}

	// recursive case
	if (a[0] < a[1] and isArraySorted(a + 1, n - 1) == true) {
		return true;
	}

	return false;
}

bool isArraySorted1(int *a, int n) {
	// base case
	if (n == 0 || n == 1) {
		return true;
	}

	// recursive case
	if (a[n - 1] > a[n - 2] and isArraySorted1(a, n - 1) == true) {
		return true;
	}

	return false;
}

bool isArraySorted2(int *a, int n, int i) {
	// base case
	if (i >= n - 1) {
		return true;
	}

	// recursive case
	if (a[i] < a[i + 1] and isArraySorted2(a, n, i + 1) == true) {
		return true;
	}

	return false;
}

int main() {

	int a[] = {1, 2, -3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	if (isArraySorted2(a, n, 0)) {
		cout << "Sorted\n";
	}
	else {
		cout << "Not Sorted\n";
	}


	return 0;
}
















