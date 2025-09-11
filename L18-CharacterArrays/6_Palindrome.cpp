#include <iostream>
using namespace std;

bool isPlaindrome(char a[]) {
	int i = 0, j = strlen(a) - 1;
	while (i < j) {
		if (a[i] != a[j]) {
			return false; ß
		}

		i++;
		j--;
	}

	return true;
}


int main() {

	char a[100];
	cin.getline(a, 100);

	if (isPlaindrome(a)) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}

	return 0;
}
















