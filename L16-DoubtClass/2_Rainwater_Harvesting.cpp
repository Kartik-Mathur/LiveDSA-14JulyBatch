#include <iostream>
using namespace std;

int main() {

	int a[] = {8, 3, 10, 1, 6, 4, 8, 2};
	int n = sizeof(a) / sizeof(int);

	int left[100], right[100];

	int mx = a[0];
	left[0] = 0;
	for (int i = 1; i < n; ++i)
	{
		left[i] = mx;
		mx = max(mx, a[i]);
	}

	right[n - 1] = 0;
	mx = a[n - 1];
	for (int i = n - 2; i >= 0; --i)
	{
		right[i] = mx;
		mx = max(mx, a[i]);
	}

	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		if (min(left[i], right[i]) - a[i] > 0) {
			ans += min(left[i], right[i]) - a[i];
		}
	}

	cout << ans << endl;

	return 0;
}
















