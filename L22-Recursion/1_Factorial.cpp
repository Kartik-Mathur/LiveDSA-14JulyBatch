#include <iostream>
using namespace std;

/*
int fact(int n) {
	// base case
	if (n == 0) {
		return 1;
	}

	// recursive equation: fact(n) = n*fact(n-1)
	int smaller = fact(n - 1); // Function calling itself (ASSUMPTION)
	int bigger = n * smaller;
	return bigger;
}
*/


int fact(int n) {
	if (n == 0) {
		return 1;
	}

	return n * fact(n - 1);
}


int main() {

	cout << fact(3) << endl;

	return 0;
}
















