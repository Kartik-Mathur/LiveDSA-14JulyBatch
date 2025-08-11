#include <iostream>
using namespace std;

int main() {

	int n, nd;

	cin >> n;

	nd = (n + 1) / 2;

	for (int r = 1; r <= nd; ++r)
	{
		for (int i = 1; i <= nd - r; ++i)
		{
			cout << ' ';
		}

		for (int i = 1; i <= 2 * r - 1; ++i)
		{
			cout << '*';
		}

		cout << endl;
	}

	// Pattern Mirror
	for (int r = nd - 1; r >= 1; --r)
	{
		for (int i = 1; i <= nd - r; ++i)
		{
			cout << ' ';
		}

		for (int i = 1; i <= 2 * r - 1; ++i)
		{
			cout << '*';
		}

		cout << endl;
	}


	return 0;
}
















