#include <iostream>
using namespace std;

void bubbleSort(int *a, int n) {
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - 1 - i; ++j)
		{
			if (*(a + j) > *(a + j + 1)) {
				swap(*(a + j), *(a + j + 1));
			}
		}
	}
}

void print(int*p , int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << *(p + i) << " ";
	}
	cout << endl;
}

int main() {

	int a[] = {5, 6, 4, 3, 2, 0, 1};
	int n = sizeof(a) / sizeof(int);

	bubbleSort(a, n);
	print(a, n);



	return 0;
}
















