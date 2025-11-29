#include <iostream>
#include <cstring>
using namespace std;

int fibo(int n) { // T.C: O(2^n)
	if (n <= 1) {
		return n;
	}

	return fibo(n - 1) + fibo(n - 2);
}

int topDown(int n, int *dp) {
	if (n <= 1) {
		return n;
	}

	if (dp[n] != -1) {
		return dp[n]; // simply return the answer
	}

	int ans = topDown(n - 1, dp) + topDown(n - 2, dp);
	dp[n] = ans; // Store it inside the array
	return ans;
}

int bottomUp(int n) {
	int *dp = new int[n + 1];
	dp[0] = 0;
	dp[1] = 1;

	// T.C: O(N)
	for (int i = 2; i <= n; ++i)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	return dp[n];
}

int main() {

	int n;
	cin >> n;
	int dp[100000];
	memset(dp, -1, sizeof(dp));
	// for (int i = 0; i < 100000; ++i)
	// {
	// 	dp[i] = -1;
	// }
	cout << topDown(n, dp) << endl;
	cout << bottomUp(n) << endl;
	cout << fibo(n) << endl;

	return 0;
}





