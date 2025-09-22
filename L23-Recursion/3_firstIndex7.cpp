#include <iostream>
using namespace std;

int first7(int *a, int n, int i = 0) {
	// base case
	if (i == n) {
		return -1;
	}

	// recursion case
	if (a[i] == 7) {
		return i;
	}

	return first7(a, n, i + 1);
}

int last7(int *a, int n) {
	// base case
	if (n == 0) {
		return -1;
	}

	// recursion case
	if (a[n - 1] == 7) {
		return n - 1;
	}

	return last7(a, n - 1);
}

void allindex7(int *a, int n, int i) {
	// base case
	if (i == n) {
		return;
	}
	// I will check ith index and print it if the value is 7 at that index
	if (a[i] == 7) {
		cout << i << " ";
	}

	// I will ask recursion to do the work for the smaller array
	allindex7(a, n, i + 1); // PURE ASSUMPTION
}


int main() {

	int a[] = {1, 2, 7, 3, 4, 5, 7, 7, 7, 7};
	int n = sizeof(a) / sizeof(int);

	cout << first7(a, n) << endl;
	cout << last7(a, n) << endl;
	allindex7(a, n, 0);


	return 0;
}
















