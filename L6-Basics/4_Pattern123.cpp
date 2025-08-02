#include <iostream>
using namespace std;

int main() {

	int n, no, r, c;
	cin >> n;
	no = 1;
	r = 1;

	while (r <= n) {
		c = 1;

		while (c <= r) {

			cout << no << " ";

			no = no + 1;

			c = c + 1;
		}

		cout << '\n';
		r = r + 1;
	}


	return 0;
}
















