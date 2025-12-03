#include <iostream>
using namespace std;

int bottomUp(int cost[][4], int n, int m) {
	int dp[100][100];

	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= m; ++j)
		{
			dp[i][j] = cost[i][j] + min(i - 1 >= 0 ? dp[i - 1][j] : 0,
			                            (j - 1) >= 0 ? dp[i][j - 1] : 0);
		}
	}

	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= m; ++j)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}

	return dp[n][m];
}

int main() {

	int cost[][4] = {
		{1, 1, 2, 3},
		{6, 1, 1, 4},
		{9, 5, 1, 1},
		{4, 7, 8, 1},
	};



	int n = 3, m = 3;

	cout << bottomUp(cost, n, m) << endl;

	return 0;
}
















