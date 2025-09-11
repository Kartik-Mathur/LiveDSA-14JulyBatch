#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	for (int number = 0; number <= n; ++number)
	{
		cout << number << " : ";

		for (int i = 2; i >= 0; --i)
		{
			if ((number & (1 << i)) > 0) {
				cout << 1;
			}
			else {
				cout << 0;
			}
		}

		cout << endl;
	}

	return 0;
}
















