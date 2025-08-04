#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	for (int r = 1; r <= n; ++r)
	{

		// 1. Increasing alphabets
		char ch = 'A';

		for (int i = 0; i < n - r + 1; ++i)
		{
			cout << ch;
			ch++;
		}

		// 2. Decreasing alphabets
		ch--;
		for (int i = 0; i < n - r + 1; ++i)
		{
			cout << ch;
			ch--;
		}

		cout << endl;
	}


	return 0;
}
















