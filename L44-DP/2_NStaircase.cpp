#include <iostream>
using namespace std;

int solve(int n, int k) {
	// base case
	if (n == 0) {
		return 1;
	}
	if (n < 0) return 0;

	// recursive case
	int ans = 0;
	for (int i = 1; i <= k; ++i)
	{
		ans += solve(n - i, k);
	}

	return ans;
}

int topDown(int n, int k, int *dp) {
	if (n == 0) {
		return 1;
	}
	if (n < 0) return 0;

	if (dp[n] != -1) {
		return dp[n];
	}
	// recursive case
	int ans = 0;
	for (int i = 1; i <= k; ++i)
	{
		ans += topDown(n - i, k, dp);
	}

	return dp[n] = ans;
}

int bottomUp(int n, int k) { // T.C: O(n*k)
	int dp[1000];
	// dp[n] : Number of ways to stand on nth staircase
	// dp[n-1] : number of ways to stand on n-1 staircase
	// dp[i] = dp[i-1] + dp[i-2]+dp[i-3] + ..... + dp[i-k]
	dp[0] = 1;// initialisation
	for (int i = 1; i <= n; ++i)
	{
		int ans = 0;
		for (int j = 1; j <= k; ++j)
		{
			if (i >= j) {
				ans += dp[i - j];
			}
			else {
				break;
			}
		}

		dp[i] = ans;
	}

	return dp[n];
}

int bottomUp2(int n, int k) { // T.C: O(N)
	// Homework
}

int main() {

	int n = 4, k = 3;

	cout << solve(n, k) << endl;

	int dp[100];
	memset(dp, -1, sizeof dp);

	cout << topDown(n, k, dp) << endl;
	cout << bottomUp(n, k) << endl;


	return 0;
}
















