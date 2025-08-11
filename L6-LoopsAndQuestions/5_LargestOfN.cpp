#include <iostream>
#include <climits> // INT_MIN = -2^31 , INT_MAX = 2^31-1
using namespace std;

int main() {

	int n, ans = INT_MIN, i, no;

	cin >> n;

	i = 1;
	while (i <= n) {

		cin >> no;

		if (no > ans) {
			ans = no; // we check if input no is greater than ans simply update ans
		}


		i = i + 1;
	}


	cout << "Largest: " << ans << endl;


	return 0;
}
















