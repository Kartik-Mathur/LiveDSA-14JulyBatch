#include <iostream>
using namespace std;

int topDown(string &s1, string &s2, int n, int m, int dp[][100]) {
	if (n == 0) return m;
	if (m == 0) return n;

	if (dp[n][m] != -1) {
		return dp[n][m];
	}

	if (s1[n - 1] == s2[m - 1]) {
		return dp[n][m] = topDown(s1, s2, n - 1, m - 1, dp);
	}
	else {
		return dp[n][m] = 1 + min(topDown(s1, s2, n - 1, m, dp),
		                          min(
		                              topDown(s1, s2, n, m - 1, dp),
		                              topDown(s1, s2, n - 1, m - 1, dp)
		                          ));
	}
}

void bottomUp(string &s1, string &s2) {
	int dp[100][100] = {0};
	int n = s1.size();
	int m = s2.size();

	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= m; ++j)
		{
			if (i == 0) dp[i][j] = j;
			else if (j == 0) dp[i][j] = i;
			else if (s1[i - 1] == s2[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1];
			}
			else {
				dp[i][j] = 1 + min(
				               dp[i][j - 1],
				               min(
				                   dp[i - 1][j],
				                   dp[i - 1][j - 1])
				           );
			}
		}
	}

	cout << dp[n][m] << " ";
}

int main() {

	string s1 = "saturday";
	string s2 = "sunday";


	bottomUp(s1, s2);
	int dp[100][100] = {0};
	memset(dp, -1, sizeof dp);
	cout << endl << topDown(s1, s2, s1.size(), s2.size(), dp) << endl;


	return 0;
}
















