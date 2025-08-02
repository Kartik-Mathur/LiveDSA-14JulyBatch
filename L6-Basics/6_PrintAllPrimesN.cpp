#include <iostream>
using namespace std;

int main() {

	int n, number, i, flag;
	cin >> n;

	number = 2;
	while (number <= n) {

		// Check whether number is prime or not
		flag = 1;
		i = 2;
		while (i <= number - 1) {

			if (number % i == 0) {
				flag = 2;
			}

			i = i + 1;
		}

		if (flag == 1) {
			cout << number << " ";
		}


		number = number + 1;
	}

	cout << endl;

	return 0;
}
















