#include <iostream>
#include <cmath>
using namespace std;

bool isSafe(int mat[][9], int i, int j, int n, int number) {
	for (int k = 0; k < n; ++k)
	{
		if (mat[i][k] == number or mat[k][j] == number) {
			return false;
		}
	}

	n = sqrt(n);
	int si = (i / n) * n;
	int sj = (j / n) * n;

	for (int i = si; i < si + n; ++i)
	{
		for (int j = sj; j < sj + n; ++j)
		{
			if (mat[i][j] == number) {
				return false;
			}
		}
	}

	return true;
}

bool sudokuSolver(int mat[][9], int i, int j, int n) {
	// Base case
	if (i == n) {
		// Print the matrix
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
		return true;
	}

	if (j == n) {
		// If we filled the current row then move to the next row and ask recursion to solve
		// And whatever recursion returns we will simply return that answer...
		return sudokuSolver(mat, i + 1, 0, n);
	}

	// If we come across the already filled cell then what to do?
	if (mat[i][j] != 0) {
		// Simply ask recursion to do the work for remaining sudoku
		// And whatever recursion returns we will simply return that answer...
		return sudokuSolver(mat, i, j + 1, n);
	}

	// Recursive case
	for (int number = 1; number <= 9; ++number)
	{
		if (isSafe(mat, i, j, n, number)) {
			mat[i][j] = number; // place the number if its safe

			bool kyaBakiSolveHua = sudokuSolver(mat, i, j + 1, n);
			if (kyaBakiSolveHua == true) {
				return true;
			}

			mat[i][j] = 0; // Backtracking
		}
	}

	// That means for the cell we tried all numbers from 1 to 9
	return false;
}

int main() {

	int mat[9][9] = {
		{5, 3, 0, 0, 7, 0, 0, 0, 0},
		{6, 0, 0, 1, 9, 5, 0, 0, 0},
		{0, 9, 8, 0, 0, 0, 0, 6, 0},
		{8, 0, 0, 0, 6, 0, 0, 0, 3},
		{4, 0, 0, 8, 0, 3, 0, 0, 1},
		{7, 0, 0, 0, 2, 0, 0, 0, 6},
		{0, 6, 0, 0, 0, 0, 2, 8, 0},
		{0, 0, 0, 4, 1, 9, 0, 0, 5},
		{0, 0, 0, 0, 8, 0, 0, 7, 9}
	};

	sudokuSolver(mat, 0, 0, 9);


	return 0;
}
















