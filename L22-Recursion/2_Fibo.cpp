#include <iostream>
using namespace std;

/*
int fibo(int n) {
	// base case
	if (n == 0 || n == 1) {
		return n;
	}

	// recursive case : fibo(n) = fibo(n-1) + fibo(n-2)
	int smaller1 = fibo(n - 1); // PURE ASSUMPTION
	int smaller2 = fibo(n - 2); // PURE ASSUMPTION
	int bigger = smaller1 + smaller2;

	return bigger;
}
*/

int fibo(int n) {
	if (n == 0 || n == 1) {
		return n;
	}

	return fibo(n - 1) + fibo(n - 2);
}

int main() {

	cout << fibo(4) << endl;


	return 0;
}
















