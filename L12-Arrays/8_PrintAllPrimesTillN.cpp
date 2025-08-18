#include <iostream>
using namespace std;

bool checkPrime(int n) {
	for (int i = 2; i < n; ++i)
	{
		if (n % i == 0) {
			return false;
		}
	}

	return true;
}

void printAllPrimes(int n) {
	for (int i = 2; i <= n; ++i)
	{
		if (checkPrime(i)) {
			cout << i << " ";
		}
	}
}

int main() {

	int n;
	cin >> n;

	printAllPrimes(n);

	return 0;
}
















