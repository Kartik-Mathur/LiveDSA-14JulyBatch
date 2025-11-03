#include <iostream>
using namespace std;
#define ll long long

ll combineNumbers(ll a, ll b) {
	ll x = b;
	// O(1) mei kaam krega yeh, because we can have at max 18 digits in a number
	// long long has 18 digits, 18 time kam krna for computer is constant only.
	ll mul = 1; // initially mul ko 1 maanlo
	while (x > 0) {
		mul *= 10; // jab tak there are digits inside x mul ko *10 krte jaao

		x = x / 10;
	}
	// my b has not changed here at all, because we used x that was copy of b only..
	// mul = 10^(count of digits in b), yeh value yaha store hogi....
	// to get combined number ab, we can do a*mul + b
	// a: 123, b: 4321
	// 123*10^4 + 4321 -> (a*mul + b), we get a combined number this way..
	return a * mul + b;
}

void formBiggestNumber(ll*a, ll n) {
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - 1 - i; ++j)
		{
			ll no1 = combineNumbers(a[j], a[j + 1]);
			ll no2 = combineNumbers(a[j + 1], a[j]);

			if (no1 > no2) {
				swap(a[j], a[j + 1]);
			}
		}
	}

	for (ll i = n - 1; i >= 0; --i)
	{
		cout << a[i];
	}
	cout << endl;
}

int main() {

	ll testcases, m;
	cin >> testcases;
	ll a[105];

	for (ll i = 0; i < testcases; ++i)
	{
		cin >> m;
		for (int j = 0; j < m; ++j)
		{
			cin >> a[j];
		}

		formBiggestNumber(a, m);
	}


	// ll a = 123456789;
	// ll b = 95647381;

	// ll ans = combineNumbers(b, a);

	// cout << ans << endl;



	return 0;
}
















