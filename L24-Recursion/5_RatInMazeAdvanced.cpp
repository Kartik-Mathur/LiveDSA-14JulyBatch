#include <iostream>
using namespace std;

bool ratInMaze(char maze[][100], int i, int j,
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
		sol[i][j] = 0; // Backtracking
		return false; // FOOL the recursion to print all the solution, even though we found the solution
		// still tell that solution is not found..
	}

	// recursive case
	// 1. Assume the cell we are standing at as part of solution
	sol[i][j] = 1;
	// 2. Check right side
	if (j + 1 < m and maze[i][j + 1] != 'X' and sol[i][j + 1] != 1) {
		bool kyaRightSeRaastaMilla = ratInMaze(maze, i, j + 1, n, m, sol);
		if (kyaRightSeRaastaMilla == true) {
			return true;
		}
	}

	// 3. Check down side
	if (i + 1 < n and maze[i + 1][j] != 'X' and sol[i + 1][j] != 1) {
		bool kyaNeecheSeRaastaMilla = ratInMaze(maze, i + 1, j, n, m, sol);
		if (kyaNeecheSeRaastaMilla) {
			return true;
		}
	}

	// 4. Check left side
	if (j - 1 >= 0 and maze[i][j - 1] != 'X' and sol[i][j - 1] != 1) {
		bool kyaLeftSeRaastaMilla = ratInMaze(maze, i, j - 1, n, m, sol);
		if (kyaLeftSeRaastaMilla == true) {
			return true;
		}
	}

	// 5. Check upwards side
	if (i - 1 >= 0 and maze[i - 1][j] != 'X' and sol[i - 1][j] != 1) {
		bool kyaUparSeRaastaMilla = ratInMaze(maze, i - 1, j, n, m, sol);
		if (kyaUparSeRaastaMilla == true) {
			return true;
		}
	}

	// Solution from i,j is not possible
	sol[i][j] = 0; // BACKTRACKING
	return false; // Thus return false, as we couldnt find ways from right or down both sides.
}

int main() {

	char maze[][100] = {
		"0X000",
		"0X0X0",
		"0X0X0",
		"0X0X0",
		"000X0"
	};
	int sol[10][10] = {0};

	ratInMaze(maze, 0, 0, 5, 5, sol);

	return 0;
}
















