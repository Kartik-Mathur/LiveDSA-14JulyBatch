#include <iostream>
using namespace std;

int solve(int *price, int *weight, int cap, int n) {
	// base case
	if (n == 0 or cap == 0) {
		return 0;
	}

	int op1 = 0, op2 = 0;
	if (cap >= weight[n - 1]) {
		op1 = price[n - 1] + solve(price, weight, cap - weight[n - 1], n - 1);
	}
	op2 = 0 + solve(price, weight, cap, n - 1);

	return max(op1, op2);
}


int topDown(int *price, int *weight, int cap, int n, int dp[][100]) { // O(n*cap)
	// base case
	if (n == 0 or cap == 0) {
		return 0;
	}

	if (dp[n][cap] != -1) {
		return dp[n][cap];
	}

	int op1 = 0, op2 = 0;
	if (cap >= weight[n - 1]) {
		op1 = price[n - 1] + topDown(price, weight, cap - weight[n - 1], n - 1, dp);
	}
	op2 = 0 + topDown(price, weight, cap, n - 1, dp);

	return dp[n][cap] = max(op1, op2);
}

int bottomUp(int *price, int *wt, int N, int capacity) {
	int dp[100][100] = {0};

	for (int n = 1; n <= N; ++n)
	{
		for (int cap = 1; cap <= capacity; ++cap)
		{
			int op1 = 0, op2 = 0;
			if (cap >= wt[n - 1]) {
				op1 = price[n - 1] + dp[n - 1][cap - wt[n - 1]];
			}
			op2 = 0 + dp[n - 1][cap];
			dp[n][cap] = max(op1, op2);
		}
	}

	// for (int n = 0; n <= N; ++n)
	// {
	// 	for (int cap = 0; cap <= capacity; ++cap)
	// 	{
	// 		cout << dp[n][cap] << " ";
	// 	}
	// 	cout << endl;
	// }

	return dp[N][capacity];
}

int bottomUp2(int *price, int *wt, int N, int capacity) { // S.C: O(capacity), T.C: O(N*capacity)
	int dp[2][100] = {0};

	for (int n = 1; n <= N; ++n)
	{
		for (int cap = 1; cap <= capacity; ++cap)
		{
			int op1 = 0, op2 = 0;
			if (cap >= wt[n - 1]) {
				op1 = price[n - 1] + dp[0][cap - wt[n - 1]];
			}
			op2 = 0 + dp[0][cap];
			dp[1][cap] = max(op1, op2);
		}

		for (int i = 0; i <= capacity; ++i)
		{
			dp[0][i] = dp[1][i];
		}
	}

	return dp[1][capacity];
}

int main() {

	int price[] = {4, 5, 6, 9};
	int weight[] = {1, 2, 3, 4};
	int n = sizeof(price) / sizeof(int);

	cout << solve(price, weight, 5, n) << endl;

	int dp[100][100];
	memset(dp, -1, sizeof dp);
	cout << topDown(price, weight, 5, n, dp) << endl;
	cout << bottomUp(price, weight, n, 5) << endl;
	cout << bottomUp2(price, weight, n, 5) << endl;

	return 0;
}
















