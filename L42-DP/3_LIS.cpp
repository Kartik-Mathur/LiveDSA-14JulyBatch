#include <iostream>
#include <vector>
using namespace std;

void printLIS(int *a, int *dp, int indx) {
	vector<int> v;

	int len = dp[indx];
	int x = INT_MAX;
	int k = indx;

	while (len > 0)
	{
		if (a[k] < x and dp[k] == len) {
			v.push_back(a[k]);
			len --;
			x = a[k];
		}
		k--;
	}

	reverse(v.begin(), v.end());
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

int bottomUp(int *a, int n) {
	int dp[100];


	for (int i = 0; i < n; ++i)
	{
		dp[i] = 1;
	}

	for (int i = 1; i < n; ++i)
	{
		for (int j = i - 1; j >= 0; --j)
		{
			if (a[j] < a[i]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}

	int ans = 1;
	int indx;
	for (int i = 0; i < n; ++i)
	{
		if (dp[i] > ans) {
			ans = dp[i];
			indx = i; // This indx will point to the highest value in dp[]
		}
	}

	printLIS(a, dp, indx);
	return ans;
}

int main() {

	int a[] = {10, 9, 3, 5, 4, 11, 7, 8};
	int n = sizeof(a) / sizeof(int);

	cout << bottomUp(a, n) << endl;

	return 0;
}
















