#include <iostream>
using namespace std;

bool isSafe(int board[][10], int r, int c, int n) {
	// We are checking the column first..
	for (int i = 0; i < r; ++i)
	{
		// board[r][c] = 1, means there is queen on the column we are current at
		if (board[i][c] == 1) {
			return false;
		}
	}

	// 2. Check the upper right diagonal..
	int i = r, j = c;
	while (i >= 0 and j < n) {
		if (board[i][j] == 1) {
			return false;
		}
		i--;
		j++;
	}

	// 3. Check the upper left diagonal
	i = r;
	j = c;
	while (i >= 0 and j >= 0) {
		if (board[i][j] == 1) {
			return false;
		}
		i--;
		j--;
	}

	// This place means queen is not present in same column, or right and left upper diagonal
	return true; // Thus it means the current r,c cell is safe to place queen
}

bool nQueen(int board[][10], int r, int n) {
	// base case
	if (r == n) {
		// Print the board
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if (board[i][j] == 1) {
					cout << "Q ";
				}
				else {
					cout << "_ ";
				}
			}
			cout << endl;
		}
		cout << endl;

		return false; // All queens placed thus return true....
	}

	// recursive case
	// For current row we iterator over all the n columns
	for (int c = 0; c < n; ++c)
	{
		// If it's safe to place queen on r,c cell then we place the queen there
		if (isSafe(board, r, c, n)) {
			board[r][c] = 1; // place the queen on r,c cell
			bool kyaBaatBani = nQueen(board, r + 1, n);
			if (kyaBaatBani) {
				return true; // If all other queens got placed too that means all done
			}

			board[r][c] = 0; // this means r,c is not safe, as we couldnt place other queens
		}
	}
	// Once we exit the column loop that means for r(row) we couldnt place queen on any column
	return false;
}

int main() {

	int n;
	cin >> n;
	int board[10][10] = {};

	nQueen(board, 0, n);

	return 0;
}
















