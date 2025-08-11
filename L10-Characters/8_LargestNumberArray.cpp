#include <iostream>
#include <climits>
using namespace std;

int main() {

	int a[] = {1, 2, 31, 4, 51};
	int n = sizeof(a) / sizeof(int);

	int l = INT_MIN;
	int indx;

	for (int i = 0; i < n; ++i)
	{
		if (a[i] > l) {
			l = a[i];
			indx = i;
		}
	}

	cout << l << " is largest at index: " << indx << endl;

	return 0;
}
















