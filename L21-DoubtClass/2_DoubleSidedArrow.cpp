#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	n = (n + 1) / 2;

	for (int r = 1; r <= 4 ; ++r)
	{
		// 1. Print spaces
		for (int i = 0; i < 2 * (n - r); ++i)
		{
			cout << "  ";
		}
		// 2. Print decreasing number
		int start = r;
		for (int i = 0; i < r; ++i)
		{
			cout << start << " ";
			start--;
		}

		if (r > 1) {
			// 3. Print spaces
			for (int i = 0; i < 2 * r - 3; ++i)
			{
				cout << "  ";
			}
			// 4. Print increasing numbers
			int start = 1;
			for (int i = 0; i < r; ++i)
			{
				cout << start << " ";
				start++;
			}
		}

		cout << endl;
	}

	// Pattern Mirror
	for (int r = n - 1; r >= 1 ; --r)
	{
		// 1. Print spaces
		for (int i = 0; i < 2 * (n - r); ++i)
		{
			cout << "  ";
		}
		// 2. Print decreasing number
		int start = r;
		for (int i = 0; i < r; ++i)
		{
			cout << start << " ";
			start--;
		}

		if (r > 1) {
			// 3. Print spaces
			for (int i = 0; i < 2 * r - 3; ++i)
			{
				cout << "  ";
			}
			// 4. Print increasing numbers
			int start = 1;
			for (int i = 0; i < r; ++i)
			{
				cout << start << " ";
				start++;
			}
		}

		cout << endl;
	}

	return 0;
}
















