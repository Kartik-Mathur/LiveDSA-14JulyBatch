#include <iostream>
using namespace std;

int kadanes(int *a, int n) {
	int s = 0, ans = INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		s += a[i];
		if (s < 0) s = 0;

		ans = max(ans, s);
	}

	return ans;
}

int totalSum(int *a, int n) {
	int s = 0;
	for (int i = 0; i < n; ++i)
	{
		s += a[i];
	}

	return s;
}

int main() {

	int a[] = {1, 4, -3, 2, 6, -4, -8, -12, 10, -11, 5};
	int n = sizeof(a) / sizeof(int);

	int op1 = kadanes(a, n);

	int ts = totalSum(a, n);

	for (int i = 0; i < n; ++i)
	{
		a[i] = -a[i];
	}
	int minSum = kadanes(a, n);
	int op2 = ts + minSum;

	cout << max(op1, op2) << endl;




	return 0;
}
















