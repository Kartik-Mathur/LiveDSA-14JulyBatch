#include <iostream>
using namespace std;

bool ratInMaze(char maze[][5], int i, int j,
               int n, int m, int sol[][10]) {
	// base case
	if (i == n - 1 and j == m - 1) {
		sol[i][j] = 1;
		// Print the solution
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cout << sol[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;

		return false; // FOOL the recursion to print all the solution, even though we found the solution
		// still tell that solution is not found..
	}

	// recursive case
	// 1. Assume the cell we are standing at as part of solution
	sol[i][j] = 1;
	// 2. Check right side
	if (j + 1 < m and maze[i][j + 1] != 'X') {
		bool kyaRightSeRaastaMilla =
		    ratInMaze(maze, i, j + 1, n, m, sol);
		if (kyaRightSeRaastaMilla == true) {
			return true;
		}
	}

	// 3. Check down side
	if (i + 1 < n and maze[i + 1][j] != 'X') {
		bool kyaNeecheSeRaastaMilla =
		    ratInMaze(maze, i + 1, j, n, m, sol);
		if (kyaNeecheSeRaastaMilla) {
			return true;
		}
	}

	// 4. Solution from i,j is not possible
	sol[i][j] = 0; // BACKTRACKING
	return false; // Thus return false, as we couldnt find ways from right or down both sides.
}

int main() {

	char maze[][5] = {
		"0000",
		"00XX",
		"0000",
		"XX00"
	};
	int sol[10][10] = {0};

	ratInMaze(maze, 0, 0, 4, 4, sol);

	return 0;
}
















