#include <iostream>
using namespace std;

int main() {

	int n, flag, i;
	cin >> n;

	for (int number = 2; number <= n ; ++number)
	{
		flag = 1;

		for (i = 2 ; i < number ; i++) {
			if (number % i == 0) {
				flag =  2;
			}
		}

		if (flag == 1) {
			cout << number << " ";
		}
	}
	cout << endl;

	return 0;
}
















