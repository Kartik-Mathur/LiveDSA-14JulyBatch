#include <iostream>
using namespace std;

int fact(int n) {

	int ans = 1;
	for (int i = 1; i <= n; ++i)
	{
		ans *= i;
	}

	return ans;
}

int ncr(int n, int r) {
	int f_n = fact(n);
	int f_r = fact(r);
	int f_nr = fact(n - r);

	int ans = f_n / (f_r * f_nr);

	return ans;
}

int main() {

	cout << ncr(5, 2) << endl;

	return 0;
}
















