#include <iostream>
using namespace std;

int main() {

	// string a = "12345";
	// string b = "54643";
	// cout << a + b << endl;
	// cout << b + a << endl;

	string a[105];
	int t;
	cin >> t;

	while (t > 0) {

		int n;
		cin >> n;

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}


		for (int i = 0; i < n - 1; ++i)
		{
			for (int j = 0; j < n - 1 - i; ++j)
			{
				string no1 = a[j] + a[j + 1];
				string no2 = a[j + 1] + a[j];

				if (no1 > no2) {
					swap(a[j], a[j + 1]);
				}
			}
		}

		for (int i = n - 1; i >= 0; --i)
		{
			cout << a[i];
		}
		cout << endl;


		t--;
	}

	return 0;
}
















