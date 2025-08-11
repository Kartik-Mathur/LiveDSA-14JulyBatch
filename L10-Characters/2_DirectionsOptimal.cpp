#include <iostream>
#include <cmath> // for abs()
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

	// E, N, S, W
	if (x >= 0) {
		for (int i = 0; i < x; ++i)
		{
			cout << 'E';
		}
	}

	// Print either N or S
	char temp;
	if (y >= 0) temp = 'N';
	else temp = 'S';

	y = abs(y); // y = |y|
	for (int i = 0; i < y; ++i)
	{
		cout << temp;
	}

	if (x <= 0) {
		x = abs(x);
		for (int i = 0; i < x; ++i)
		{
			cout << 'W';
		}
	}


	return 0;
}
















