#include <iostream>
using namespace std;

int main() {

	int n, no, i, r;

	cin >> n;

	r = 1;
	while (r <= n) {

		i = 1;
		while (i <= n - r) {
			cout << " ";
			i = i + 1;
		}


		no = r;
		i = 1;
		while (i <= r) {
			cout << no;
			no = no + 1;
			i = i + 1;
		}


		no = 2 * r - 2;
		i = 1;
		while (i < r) {

			cout << no;
			no = no - 1;
			i = i + 1;
		}

		cout << endl;
		r = r + 1;
	}


	return 0;
}
















