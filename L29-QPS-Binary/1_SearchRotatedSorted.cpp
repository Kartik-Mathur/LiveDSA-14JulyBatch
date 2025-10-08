#include <iostream>
using namespace std;

void search_in_N_Time(int *a, int n, int key) {
	int i;

	for (i = 0; i < n; ++i)
	{
		if (a[i] == key) {
			cout << "Key Found : " << i << endl;
			break;
		}
	}

	if (i == n) {
		cout << "Key Not Found\n";
	}
}

int searchOptimised(int *a, int n, int key) {
	int s = 0;
	int e = n - 1; // [0,n-1] indexes they are my search space
	while (s <= e) {
		int mid = (s + e) / 2;

		if (a[mid] == key) {
			return mid;
		}
		else if (a[mid] <= a[n - 1]) { // Currently mid is at Range-2
			if (key >= a[mid] && key <= a[n - 1]) {
				s = mid + 1;
			}
			else {
				e = mid - 1;
			}
		}
		else { // mid is at range - 1
			if (key >= a[0] && key <= a[mid]) {
				e = mid - 1;
			}
			else {
				s = mid + 1;
			}
		}
	}

	return -1;
}

int main() {

	int a[] = {230, 247, 300, 301, 444, 505, 666, 777, 1, 3, 5, 8, 9, 11, 16, 201, 220};
	int n = sizeof(a) / sizeof(int);

	int key = 0;

	search_in_N_Time(a, n, key); // O(N) time
	cout << searchOptimised(a, n, key) << endl;

	return 0;
}
















