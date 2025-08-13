#include <iostream>
using namespace std;

int main() {

	char ch;
	ch = 'W';

	switch (ch) {
	case 'n':
	case 'N':
		cout << "North\n";
		break;
	case 'e':
	case 'E':
		cout << "East\n";
		break;
	case 'w':
	case 'W':
		cout << "West\n";
		break;
	case 's':
	case 'S':
		cout << "South\n";
		break;
	default:
		cout << "Invalid Input\n";
	}

	return 0;
}
















