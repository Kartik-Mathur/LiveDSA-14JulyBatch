#include <iostream>
using namespace std;

int main() {

	int no = 15;
	// cin >> no;
	int cnt = 0;

	// Way-1
	while (no) {
		if (no & 1) {
			cnt++;
		}

		no = no >> 1;
	}

	/*
	// Way-2
	for (int i = 30; i >= 0; --i)
	{
		if ((no & (1 << i)) > 0) {
			cnt++;
		}
	}
	*/
	cout << cnt << endl;
	return 0;
}
















