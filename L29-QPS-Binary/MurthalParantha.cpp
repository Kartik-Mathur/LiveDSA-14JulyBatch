#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

ll cookRank[100005];
ll n;
ll totalParanthas;

bool isPossible(int mid) {
	ll paranthasCooked = 0;

	for (int i = 0; i < n; ++i)
	{
		ll r = cookRank[i];
		ll t = 0;
		ll cnt = 1;
		while (t + cnt * r <= mid) {
			t += cnt * r;
			cnt++;
			paranthasCooked++;

			if (paranthasCooked == totalParanthas) {
				return true;
			}
		}
	}

	return false;
}

ll solve() {
	ll s = 0, e = 1e9; // 1e9 = 10^9
	ll ans;
	while (s <= e) {
		ll mid = (s + e) / 2;

		if (isPossible(mid) == true) {
			ans = mid;
			e = mid - 1;
		}
		else {
			s = mid + 1;
		}
	}

	return ans;
}


int main() {

	cin >> totalParanthas;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> cookRank[i];
	}

	cout << solve() << endl;



	return 0;
}
















