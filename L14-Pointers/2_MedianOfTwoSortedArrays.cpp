#include <iostream>
using namespace std;

void print(int a[], int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void mergeSortedArrays(int a[], int n, int b[], int m, int c[]) {
	int i = 0, j = 0, k = 0;

	while (i < n and j < m) {
		if (a[i] < b[j]) c[k++] = a[i++];
		else c[k++] = b[j++];
	}
	// Single line hoti hai agar, while ya if mei toh curly braces can be skipped
	while (i < n) c[k++] = a[i++];

	while (j < n) c[k++] = b[j++];
}

int main() {

	int a[] = {1, 3, 5, 8, 9};
	int n = sizeof(a) / sizeof(int);

	int b[] = {2, 4, 6};
	int m = sizeof(b) / sizeof(int);

	int c[100]; // After merging size of c[] would be n+m
	mergeSortedArrays(a, n, b, m, c);
	print(c, m + n);

	if ((m + n) % 2 == 1) {
		cout << c[(m + n) / 2] << endl;
	}
	else {
		cout << (c[(m + n) / 2] + c[(m + n) / 2 - 1 ]) / 2.0 << endl;
	}

	return 0;
}
















