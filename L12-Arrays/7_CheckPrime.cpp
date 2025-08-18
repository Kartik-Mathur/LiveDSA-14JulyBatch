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

int main() {

	if (checkPrime(7) == true) {
		cout << "Prime\n";
	}
	else {
		cout << "Not Prime\n";
	}

	/*
		bool ans = checkPrime(12);

		if (ans == true) {
			cout << "Prime\n";
		}
		else {
			cout << "Not Prime\n";
		}
	*/
	return 0;
}
















