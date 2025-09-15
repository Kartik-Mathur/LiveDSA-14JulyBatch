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

// a[] = (*a)
// void wavePrint(int (*a)[100], int rows, int cols) {
void wavePrint(int a[][100], int rows, int cols) {
	for (int c = 0; c < cols; ++c)
	{
		if (c % 2 == 0) {
			for (int r = 0; r < rows; ++r)
			{
				cout << a[r][c] << " ";
			}
		}
		else {
			for (int r = rows - 1; r >= 0; --r)
			{
				cout << a[r][c] << " ";
			}
		}
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
	wavePrint(a, rows, cols);

	return 0;
}
















