#include <iostream>
using namespace std;

void copy(char largest[], char a[]) {
	int lena =  strlen(a);
	for (int i = 0; i <= lena; ++i)
	{
		largest[i] = a[i];
	}
}

int main() {

	char a[1000];
	char largest[1000];

	int llen = 0;

	int n;
	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; ++i)
	{
		cin.getline(a, 1000);
		int len = strlen(a);

		if (len > llen) {
			// update the largest and llen because we found the largest string.
			llen = len;
			// copy(largest, a);
			strcpy(largest, a);
		}
	}

	cout << largest << endl;

	return 0;
}
















