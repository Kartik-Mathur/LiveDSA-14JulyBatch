#include <iostream>
using namespace std;

int main() {

	// int a[] = {2 , 3 , 7, 10, 12, 15, 30, 34};
	// int n = sizeof(a) / sizeof(int);

	// int b[] = {1, 5, 7, 8, 10, 15, 16, 19};
	// int m = sizeof(b) / sizeof(int);

	int a[10000], b[10000], n, m;
	int t;
	cin >> t;

	for (int p = 0; p < t; ++p)
	{
		cin >> n >> m;
		for (int i = 0; i < n; ++i) cin >> a[i];
		for (int i = 0; i < m; ++i) cin >> b[i];


		int i = 0, j = 0, sa = 0, sb = 0, ans = 0;

		while (i < n and j < m) {
			if (a[i] < b[j]) sa += a[i++];
			else if (a[i] > b[j]) sb += b[j++];
			else {
				ans += max(sa, sb) + a[i];
				sa = sb = 0;
				i++;
				j++;
			}
		}

		while (i < n) {
			sa += a[i++];
		}
		while (j < n) {
			sb += b[j];
			j++;
		}

		ans += max(sa, sb);
		cout << ans << endl;
	}


	return 0;
}
















