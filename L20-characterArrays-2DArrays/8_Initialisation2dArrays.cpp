#include <iostream>
using namespace std;

int main() {

	// Only during initialization we can skip the size of rows...
	int a[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{9, 8, 7},
	};
	int rows = 3, cols = 3;


	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			// cout << a[i][j] << " ";
			cout << *(*(a + i) + j) << " ";
		}
		cout << endl;
	}

	return 0;
}
















