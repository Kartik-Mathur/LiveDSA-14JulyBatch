#include <iostream>
using namespace std;

int solve(string &s1, string &s2, int n, int m) {
	// base case
	if (n == 0 or m == 0) {
		return 0;
	}

	// recursive case
	if (s1[n - 1] == s2[m - 1]) {
		return 1 + solve(s1, s2, n - 1, m - 1);
	}
	else {
		return max(solve(s1, s2, n - 1, m),
		           solve(s1, s2, n, m - 1));
	}
}

int topDown(string &s1, string &s2, int n, int m, int dp[][100]) { // O(N*M)
	// base case
	if (n == 0 or m == 0) {
		return 0;
	}

	if (dp[n][m] != -1) {
		return dp[n][m];
	}

	// recursive case
	if (s1[n - 1] == s2[m - 1]) {
		return dp[n][m] = 1 + topDown(s1, s2, n - 1, m - 1, dp);
	}
	else {
		return dp[n][m] = max(topDown(s1, s2, n - 1, m, dp),
		                      topDown(s1, s2, n, m - 1, dp));
	}
}

int bottomUp(string &s1, string &s2) { // O(N*M)
	int dp[100][100] = {0};

	for (int i = 1; i <= s1.size(); ++i)
	{
		for (int j = 1; j <= s2.size(); ++j)
		{
			if (s1[i - 1] == s2[j - 1]) {
				dp[i][j] = 1 + dp[i - 1][j - 1];
			}
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}

	return dp[s1.size()][s2.size()];
}

void printLCS(string &s1, string &s2, int dp[][100]) {
	int n = s1.size(), m = s2.size();
	string ans = "";
	while ( n != 0 and m != 0) {
		if (s1[n - 1] == s2[m - 1]) {
			ans.push_back(s1[n - 1]);
			n--;
			m--;
		}
		else {
			if (dp[n][m] == dp[n - 1][m]) n--;
			else m--;
		}
	}

	reverse(ans.begin(), ans.end());
	cout << ans << endl;
}


void printLCSRec(string &s1, string &s2, int n, int m, int dp[][100], string &ans) {
	if (n == 0 and m == 0) {
		for (int i = ans.size() - 1; i >= 0 ; i--) {
			cout << ans[i];
		}
		cout << endl;
		return;
	}


	if (s1[n - 1] == s2[m - 1]) {
		ans.push_back(s1[n - 1]);
		printLCSRec(s1, s2, n - 1, m - 1, dp , ans);
		ans.pop_back(); // backtracking
	}
	else {
		if (dp[n][m] == dp[n - 1][m]) {
			printLCSRec(s1, s2, n - 1, m, dp, ans);
		}
		if (dp[n][m] == dp[n][m - 1]) {
			printLCSRec(s1, s2, n, m - 1, dp, ans);
		}
	}
}

int main() {

	string s1 = "abce";
	string s2 = "acbe";
	int dp[100][100];
	memset(dp, -1, sizeof dp);

	cout << solve(s1, s2, s1.size(), s2.size()) << endl;
	cout << topDown(s1, s2, s1.size(), s2.size(), dp) << endl;
	cout << bottomUp(s1, s2) << endl;

	string ans = "";
	// printLCS(s1, s2, dp);
	printLCSRec(s1, s2, s1.size(), s2.size(), dp, ans);


	return 0;
}
















