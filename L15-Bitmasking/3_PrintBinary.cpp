#include <iostream>
using namespace std;

int main() {

	int no = 15;
	// cin >> no;

	for (int i = 30; i >= 0; --i)
	{
		if ((no & (1 << i)) > 0) {
			cout << 1;
		}
		else {
			cout << 0;
		}
	}

	cout << endl;
	return 0;
}
















