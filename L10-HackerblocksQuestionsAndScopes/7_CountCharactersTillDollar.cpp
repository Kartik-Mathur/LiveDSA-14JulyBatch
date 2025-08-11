#include <iostream>
using namespace std;

int main() {

	int cnt = 0;

	char ch;
	cin >> ch;

	while (ch != '$') {

		cnt++;

		cin >> ch;
	}

	cout << "Total characters count: " << cnt << endl;
	return 0;
}

