#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int i = 1;
	while (i <= n) {
		cout << i << " ";

		if (i == 3) {
			i++; // make sure to update before continue
			continue; // continue without updation is infinite loop
		}


		i = i + 1;
	}


	return 0;
}
















