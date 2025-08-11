#include<iostream>
using namespace std;
int main() {
	int c, init, final, step;
	cin >> init >> final >> step;
	for (int f = init; f <= final; f = f + step) {
		c = (5 / 9.0) * (f - 32);
		cout << f << " " << c << endl;
	}

	return 0;
}