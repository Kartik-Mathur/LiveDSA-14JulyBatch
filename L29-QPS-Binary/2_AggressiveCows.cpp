#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

ll a[100005];
ll totalCows;
ll n;

bool isPossible(int mid) {

	ll cowsPlaced = 1;
	int x = 0; // Place the first cow on 0th index stall position

	for (int i = 1; i < n; ++i)
	{
		if (a[i] - a[x] >= mid) {
			cowsPlaced ++;
			x = i;
		}

		if (cowsPlaced == totalCows) {
			return true;
		}
	}

	// This means we couldnt place all the cows therefore this mid distance is not a valid dist.
	return false;
}


ll solve() {
	ll s = 0;
	ll e = a[n - 1] - a[0];

	// [s,e] is called as search space of binary Search Algorithm.....

	ll ans;
	while (s <= e) {
		ll mid = (s + e) / 2;

		if (isPossible(mid) == true) {
			ans = mid;
			s = mid + 1;
		}
		else {
			e = mid - 1;
		}
	}

	return ans;
}


int main() {

	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		// Take the input
		cin >> n >> totalCows;
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		sort(a, a + n); // Sort the stalls array first

		cout << solve() << endl;

	}

	return 0;
}
















