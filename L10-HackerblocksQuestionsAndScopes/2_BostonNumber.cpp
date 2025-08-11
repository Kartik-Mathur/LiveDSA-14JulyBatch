#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int copy_n = n;
	int digitsSum = 0;

	while (n > 0) {
		digitsSum += (n % 10);

		n /= 10;
	}


	// How to find factors?
	n = copy_n;
	int f_ds = 0; // factors digit Sum
	int x = 2;
	while (n >= x) {

		while (n % x == 0) {
			// cout << x << " ";
			int y = x; // Since we cannot change x, thus store it inside another bucket
			// and then find the sun of digits of y
			while (y > 0) {
				f_ds += (y % 10);

				y /= 10;
			}


			n /= x;
		}
		x++;
	}

	cout << (f_ds == digitsSum);


	return 0;
}






















