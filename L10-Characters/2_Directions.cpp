#include <iostream>
using namespace std;

int main() {

	char ch;
	int x = 0, y = 0;

	ch = cin.get();
	while (ch != '\n') {

		if (ch == 'N') y++;
		else if (ch == 'S') y--;
		else if (ch == 'E') x++;
		else x--;

		ch = cin.get();
	}


	if (x >= 0 and y >= 0) {// 1st quadrant
		// x times 'E' and y times 'N'
		for (int i = 0; i < x; ++i)
		{
			cout << 'E';
		}

		for (int i = 0; i < y; ++i)
		{
			cout << 'N';
		}
	}
	else if (x <= 0 and y >= 0) { //  2nd quadrant
		// y times 'N' and |x| times 'W'
		x *= -1; // make x positive
		for (int i = 0; i < y; ++i)
		{
			cout << 'N';
		}

		for (int i = 0; i < x; ++i)
		{
			cout << 'W';
		}
	}
	else if (x <= 0 and y <= 0) { // 3rd quadrant
		// y times 'S' and x times 'W'
		x *= -1;
		y *= -1;
		for (int i = 0; i < y; ++i)
		{
			cout << 'S';
		}

		for (int i = 0; i < x; ++i)
		{
			cout << 'W';
		}
	}
	else { // 4th quadrant
		// x times 'E' and |y| times 'S'
		for (int i = 0; i < x; ++i)
		{
			cout << 'E';
		}

		y *= -1;
		for (int i = 0; i < y; ++i)
		{
			cout << 'S';
		}
	}

	return 0;
}
















