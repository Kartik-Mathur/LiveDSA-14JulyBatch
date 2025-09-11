#include <iostream>
using namespace std;

void inputString(char a[], int s, char delimiter = '\n') {
	char ch;
	ch = cin.get(); // This will also read one character only including whitespaces
	// cin >> ch; it ignores whitespace characters
	// This will read only 1 character not entire string..

	int i = 0;
	while (ch != delimiter and i < s - 1) {
		a[i] = ch;

		i++;
		ch = cin.get(); // This will also read one character only including whitespaces
		// cin >> ch; it ignores whitespace characters
	}

	a[i] = '\0'; // we need to leave 1 bucket for null character..
}

int main() {

	char a[1000];
	// inputString(a, 1000);
	// cout << a << endl;

	int n; cin >> n;
	cin.ignore(); // It will ignore the character that use enters after number

	for (int i = 0; i < n; ++i)
	{
		inputString(a, 1000);
		cout << a << endl;
	}

	cout << "Outside : " << a << endl;


	return 0;
}
