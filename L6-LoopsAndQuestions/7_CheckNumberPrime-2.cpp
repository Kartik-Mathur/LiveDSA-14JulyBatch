#include <iostream>
using namespace std;

int main() {

	int number, i, flag;
	cin >> number;


	flag = 1; // Initially the flag is 1
	i = 2;
	while (i <= number - 1) {

		if (number % i == 0) {
			flag = 2; // On number being not prime i'll change the flag to 2
		}

		i = i + 1;
	}

	// Loop ke bahar check if the number is prime or not prime?
	if (flag == 1) {
		cout << number; // Print the number only if it is prime
	}




	return 0;
}






