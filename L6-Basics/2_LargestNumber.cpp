#include <iostream>
using namespace std;

int main() {

	int a, b, c;
	cin >> a >> b >> c;

	if (a >= b and a >= c) { // && == and
		cout << a << endl;
	}
	else if (b >= c) {
		cout << b << endl;
	}
	else {
		cout << c << endl;
	}

	return 0;
}
















