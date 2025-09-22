#include <iostream>
using namespace std;

int solve(int *a, int n) {
	if (n == 0) {
		return 0;
	}

	return a[0] + solve(a + 1, n - 1);
}

int main() {

	int a[] = {1, 2, 3, 4};
	int n = sizeof(a) / sizeof(int);

	cout << solve(a, n) << endl;


	return 0;
}
















