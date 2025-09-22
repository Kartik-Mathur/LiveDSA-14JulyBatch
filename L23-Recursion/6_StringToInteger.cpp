#include <iostream>
#include <cstring>
using namespace std;

int stringToInt(char* a, int n) {
	// base case
	if (n == 0) return 0;
	// recursive case
	int ld = a[n - 1] - '0';
	return stringToInt(a, n - 1) * 10 + ld;
}

int main() {

	char a[] = "1234";

	int x = stringToInt(a, strlen(a));

	cout << "X    : " << x << endl;
	cout << "X+10 : " << x + 10 << endl;

	return 0;
}
















