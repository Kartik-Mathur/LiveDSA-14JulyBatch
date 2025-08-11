#include <iostream>
using namespace std;

int main() {

	int n, r, i;

	cin >> n;

	for (r = 1; r <= n; ++r)
	{
		if (r == 1) {
			cout << 1;
		}
		else {
			for (int i = 1; i <= r; ++i)
			{
				if (i == 1 || i == r) {
					cout << r - 1;
				}
				else {
					cout << 0;
				}
			}
		}

		cout << '\n'; // new line character
	}



	return 0;
}
















