#include <iostream>
using namespace std;

int main() {

	// Whitespaces : [' ', '\n', '\t']
	int digits = 0, alpha = 0, spaces = 0, special = 0;

	char ch;
	ch = cin.get(); // cin>>ch;

	while (ch != '$') {
		if ((ch >= 'a' and ch <= 'z') || (ch >= 'A' and ch <= 'Z')) {
			alpha++;
		}
		else if (ch >= '0' and ch <= '9') {
			digits++;
		}
		else if (ch == ' ' || ch == '\n' || ch == '\t') {
			spaces++;
		}
		else {
			special++;
		}

		ch = cin.get(); // cin>>ch;
	}


	cout << "Digits  :  " << digits << endl;
	cout << "Alpha   :  " << alpha << endl;
	cout << "Spaces  :  " << spaces << endl;
	cout << "Special :  " << special << endl;


	return 0;
}
















