#include <iostream>
using namespace std;

int solve(int amount, int *coins, int n) { // O(N^Amount)
	// base case
	if (amount == 0) {
		return 0;
	}

	// recursive case
	int ans = INT_MAX;

	for (int i = 0; i < n; ++i)
	{
		if (amount >= coins[i]) {
			int chotiAmount = amount - coins[i];

			int c_ans = solve(chotiAmount, coins, n);
			if (c_ans != INT_MAX) {
				// Agar c_ans is INT_MAX and we do INT_MAX + 1, it becomes INT_MIN
				ans = min(ans, c_ans + 1);
			}
		}
	}

	return ans;
}


int topDown(int amount, int *coins, int n, int *dp) { // O(N*amount)
	// base case
	if (amount == 0) {
		return 0;
	}

	if (dp[amount] != -1) {
		return dp[amount];
	}

	// recursive case
	int ans = INT_MAX;

	for (int i = 0; i < n; ++i)
	{
		if (amount >= coins[i]) {
			int chotiAmount = amount - coins[i];

			int c_ans = topDown(chotiAmount, coins, n, dp);
			if (c_ans != INT_MAX) {
				// Agar c_ans is INT_MAX and we do INT_MAX + 1, it becomes INT_MIN
				ans = min(ans, c_ans + 1);
			}
		}
	}

	return dp[amount] = ans;
}

int bottomUp(int amount, int *coins, int n) {
	int *dp = new int[amount + 1];
	dp[0] = 0;

	for (int i = 1; i <= amount; ++i)
	{
		int ans = INT_MAX;
		for (int j = 0; j < n; ++j)
		{
			if (i >= coins[j]) {
				if (dp[i - coins[j]] != INT_MAX) {
					ans = min(ans, dp[i - coins[j]] + 1);
				}
			}
		}

		dp[i] = ans;
	}

	return dp[amount];
}

int main() {
	int coins[] = {1, 7, 10};
	int n = sizeof(coins) / sizeof(int);
	int amount;
	cin >> amount;
	int dp[100000];
	memset(dp, -1, sizeof(dp));
	cout << topDown(amount, coins, n, dp) << endl;
	cout << bottomUp(amount, coins, n) << endl;
	cout << solve(amount, coins, n) << endl;
	return 0;
}

















