#include <iostream>
using namespace std;

int main() {

	int n;
	int ans = 0;

	for ( cin >> n  ;  n > 0  ;  n /= 10) {
		ans = ans * 10 + n % 10;
	}

	cout << ans << endl;

	return 0;
}
















