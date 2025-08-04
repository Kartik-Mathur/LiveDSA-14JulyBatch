#include <iostream>
using namespace std;

int main() {

	int n = 25;
	cin >> n;

	int i = 0;

	while (i * i <= n) {
		i = i + 1;
	}

	i = i - 1;

	cout << "ans :" << i << endl;

	return 0;
}
















