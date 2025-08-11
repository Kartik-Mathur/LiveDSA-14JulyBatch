#include <iostream>
using namespace std;

int main() {

	int n; cin >> n;

	for (int r = 1; r <= n; ++r)
	{
		// 1. r times '*'
		for (int i = 0; i < r; ++i)
		{
			cout << '*';
		}
		// 2. Print ' '
		cout << ' ';
		// 3. Print n-r+1 times '*'
		for (int i = 0; i < n - r + 1; ++i)
		{
			cout << '*';
		}
		// 4. Print ' '
		cout << ' ';
		// 5. Print n-r+1 times '*'
		for (int i = 0; i < n - r + 1; ++i)
		{
			cout << '*';
		}
		// 6. Print ' '
		cout << ' ';
		// 7. Print r times '*'
		for (int i = 0; i < r; ++i)
		{
			cout << '*';
		}

		cout << '\n';
	}


	return 0;
}
















