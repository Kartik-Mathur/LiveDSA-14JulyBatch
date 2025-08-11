#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 3, 4, 5, 3, 3, 3, 3};
	int n = sizeof(a) / sizeof(int);

	int key;
	cout << "Enter key: ";
	cin >> key;
	int i;
	for (i = 0; i < n; ++i)
	{
		if (a[i] == key) {
			cout << "Key found at: " << i << endl;
			break;
		}
	}

	if (i == n) {
		cout << "Key not found\n";
	}

	return 0;
}
















