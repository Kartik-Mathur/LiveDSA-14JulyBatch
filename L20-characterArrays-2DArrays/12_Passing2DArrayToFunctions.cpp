#include <iostream>
using namespace std;

void print(int a[][100], int rows, int cols) {
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {

	int a[100][100];
	int num = 1, rows, cols;
	cout << "Enter number of rows and cols(MAX:100) : ";
	cin >> rows >> cols;

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			a[i][j] = num;
			num++;
		}
	}

	print(a, rows, cols);

	return 0;
}
















