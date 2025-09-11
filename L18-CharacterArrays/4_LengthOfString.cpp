#include <iostream>
using namespace std;

int lengthString(char a[]) {
	// int cnt = 0;
	int i;
	for (i = 0; a[i] != '\0'; ++i)
	{
		// cnt++;
	}

	return i;
}

int main() {

	char a[1000];
	cin.getline(a, 1000); // hello

	cout << lengthString(a) << endl; // 5
	cout << strlen(a) << endl; // 5, inbuilt function to calculate length of string.

	return 0;
}
















