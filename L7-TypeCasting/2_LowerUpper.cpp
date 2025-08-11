#include <iostream>
using namespace std;

int main() {

	char ch;
	cin >> ch;

	int x = ch; // Get the ascii value of the character bucket

	if (x >= 65 and x <= 90) {
		cout << "Uppercase\n";
	}
	else if (x >= 97 and x <= 122) {
		cout << "Lowercase\n";
	}
	else {
		cout << "Not an alphabet\n";
	}


	return 0;
}
















