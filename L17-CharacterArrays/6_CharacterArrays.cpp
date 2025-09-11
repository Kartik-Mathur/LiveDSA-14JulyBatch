#include <iostream>
using namespace std;

int main() {
	// char a[6] = "Hello";


	// char a[100] = "Hello World";
	char a[1000];
	// cin >> a;
	// String is a set of characters terminated by NULL character.
	// cin.getline(a, no_of_characters, delimiter_Character);
	// Default delimiter character is : '\n'(Enter)

	cin.getline(a, 1000); // This will help you to read the string with whitespace characters.
	cout << a << endl;

	return 0;
}
















