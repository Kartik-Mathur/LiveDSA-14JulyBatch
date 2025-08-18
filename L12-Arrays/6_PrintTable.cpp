#include <iostream>
using namespace std;

void printCelAndFarTable(int init, int fval, int step) { // parameters
	int f, c;
	f = init;
	while (f <= fval) {

		c = (5 / 9.0) * (f - 32);

		cout << f << " " << c << endl;

		f = f + step;
	}

	return; // void mei return ke aage kuch nhi likhte
}

int main() {


	int init, fval, step;

	// cin >> init >> fval >> step;

	// printTable(init, fval, step);
	printCelAndFarTable(0, 300, 20); // arguments
	printCelAndFarTable(0, 350, 50);



	return 0;
}
















