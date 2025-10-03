#include <iostream>
using namespace std;

int main() {

	int *a = new int;
	*a = 10;
	cout << *a << endl;

	delete a;
	a = NULL;

	cout << *a << endl;

	int n; // Garabage value
	cin >> n;

	int *arr = new int[n]; // DMA
	for (int i = 0; i < n; ++i)
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;


	return 0;
}
















