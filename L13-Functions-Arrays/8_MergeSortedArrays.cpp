#include <iostream>
using namespace std;

void mergeSortedArrays(int a[], int m, int b[], int n) {
	int i = m - 1;
	int j = n - 1;
	int k = m + n - 1;

	while (j >= 0 and i >= 0) {
		if (a[i] > b[j]) {
			a[k--] = a[i--];
		}
		else {
			a[k] = b[j];
			k--;
			j--;
		}
	}

	while (j >= 0) {
		a[k--] = b[j--];
	}
}


void printArray(int arr[], int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


int main() {

	int a[7] = {3, 5, 7, 9};
	int m = 4;

	int b[3] = {1, 2, 4};
	int n = 3;

	mergeSortedArrays(a, m, b, n);
	printArray(a, m + n);



	return 0;
}
















