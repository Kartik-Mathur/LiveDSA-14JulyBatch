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

void spiralPrint(int a[][100], int rows, int cols) {
	int sr = 0, er = rows - 1, sc = 0, ec = cols - 1;

	while (sr <= er and sc <= ec) {
		// 1. Print sr, [sc,ec]
		for (int c = sc; c <= ec; ++c)
		{
			cout << a[sr][c] << " ";
		}
		sr++;

		// 2. Print ec, [sr,er]
		for (int r = sr; r <= er; ++r)
		{
			cout << a[r][ec] << " ";
		}
		ec--;

		// 3. Print er, [ec,sc]
		if (sr < er) {
			for (int c = ec; c >= sc; --c)
			{
				cout << a[er][c] << " ";
			}
			er--;
		}

		// 4. Print sc, [er, sr]
		if (sc < ec) {
			for (int r = er; r >= sr; --r)
			{
				cout << a[r][sc] << " ";
			}
			sc++;
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
	spiralPrint(a, rows, cols);

	return 0;
}
















