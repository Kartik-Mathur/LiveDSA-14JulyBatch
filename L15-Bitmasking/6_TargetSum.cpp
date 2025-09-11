#include <iostream>
using namespace std;

int main() {
	int arr[10000];
	int n, targetSum, cnt = 0;
	cin >> n >> targetSum;

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	for (int number = 0; number <= (1 << n) - 1; ++number)
	{
		// cout << number << " : ";
		int ans = 0;
		for (int i = n - 1; i >= 0; --i)
		{
			if ((number & (1 << i)) > 0) {
				// cout << '+' << arr[i];
				ans += (+arr[i]);
			}
			else {
				// cout << '-' << arr[i];
				ans += (-arr[i]);
			}
		}

		// cout << ", " << ans << endl;
		if (ans == targetSum) {
			cnt++;
		}
	}

	cout << cnt << endl;
	return 0;
}
















