#include <iostream>
using namespace std;

void update(int &w) {
	w = w + 1;
	cout << "Inside update: " << w << endl;
}



int main() {

	int x = 1;
	cout << x << endl;
	// x = x + 1;
	update(x);

	cout << "X: " << x << endl;

	return 0;
}
















