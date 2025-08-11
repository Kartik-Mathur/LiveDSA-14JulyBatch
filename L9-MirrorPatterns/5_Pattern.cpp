#include <iostream>
using namespace std;

int main() {

	int n, r, i;
	cin >> n;

	int nd = (n + 1) / 2;

	for (r = 1; r <= nd; ++r)
	{
		if (r == 1) {
			// 1. Print nd-r times spaces
			for (i = 1; i <= nd - r; ++i)
			{
				cout << ' ';
			}

			// 2. Print '*'
			cout << '*';
		}
		else {
			// 1. Print nd-r times spaces
			for (i = 1; i <= nd - r; ++i)
			{
				cout << ' ';
			}

			// 2. Print '*'
			cout << '*';
			// 3. Print 2r-3 times spaces
			for (i = 1; i <= 2 * r - 3; ++i)
			{
				cout << ' ';
			}
			// 4. Print '*'
			cout << '*';
		}

		cout << endl;
	}


	// Pattern Mirror
	for (int r = nd - 1; r >= 1; --r)
	{
		if (r == 1) {
			// 1. Print nd-r times spaces
			for (i = 1; i <= nd - r; ++i)
			{
				cout << ' ';
			}

			// 2. Print '*'
			cout << '*';
		}
		else {
			// 1. Print nd-r times spaces
			for (i = 1; i <= nd - r; ++i)
			{
				cout << ' ';
			}

			// 2. Print '*'
			cout << '*';
			// 3. Print 2r-3 times spaces
			for (i = 1; i <= 2 * r - 3; ++i)
			{
				cout << ' ';
			}
			// 4. Print '*'
			cout << '*';
		}

		cout << endl;
	}

	return 0;
}
















