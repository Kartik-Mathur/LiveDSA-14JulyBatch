#include <iostream>
using namespace std;

int main() {

	int n, r, i;
	cin >> n;

	int nd = (n + 1) / 2;

	for (r = 1; r <= nd; ++r)
	{
		if (r == 1) {
			// print n times stars
			for (i = 1; i <= n; ++i)
			{
				cout << '*';
			}
		}
		else {
			// 1. Stars (nd-r+1)
			for (i = 1; i <= nd - r + 1; ++i)
			{
				cout << '*';
			}

			// 2. Spaces (2r-3)
			for (i = 1; i <= 2 * r - 3; ++i)
			{
				cout << ' ';
			}

			// 3. Stars (nd-r+1)
			for (i = 1; i <= nd - r + 1; ++i)
			{
				cout << '*';
			}
		}

		cout << endl;
	}

	for (int r = nd - 1; r >= 1; --r)
	{
		if (r == 1) {
			// print n times stars
			for (i = 1; i <= n; ++i)
			{
				cout << '*';
			}
		}
		else {
			// 1. Stars (nd-r+1)
			for (i = 1; i <= nd - r + 1; ++i)
			{
				cout << '*';
			}

			// 2. Spaces (2r-3)
			for (i = 1; i <= 2 * r - 3; ++i)
			{
				cout << ' ';
			}

			// 3. Stars (nd-r+1)
			for (i = 1; i <= nd - r + 1; ++i)
			{
				cout << '*';
			}
		}

		cout << endl;
	}

	return 0;
}
















