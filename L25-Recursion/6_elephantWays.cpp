#include <iostream>
using namespace std;

int ways(int i, int j) {
	if (i == 0 and j == 0) {
		return 1;
	}
	if (i < 0 or j < 0) {
		return 0;
	}

	int ans = 0;
	for (int k = 0; k < i; ++k)
	{
		ans += ways(k, j);
	}

	for (int k = 0; k < j; ++k)
	{
		ans += ways(i, k);
	}

	return ans;
}

int main() {

	int n, m;
	cin >> n >> m;

	cout << ways(n, m) << endl;


	return 0;
}
















