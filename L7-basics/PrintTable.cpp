#include <iostream>
using namespace std;

int main() {

	int f, init, fval, step, c;

	cin >> init >> fval >> step;

	f = init; // Initialization
	while (f <= fval) { // condition check

		c = (5 / 9.0) * (f - 32);

		cout << f << " " << c << endl;

		f = f + step; // updation
	}

	return 0;
}
















