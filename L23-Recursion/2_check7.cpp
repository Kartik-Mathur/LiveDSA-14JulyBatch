#include <iostream>
using namespace std;

// bool check7(int *a, int n) {
// 	// Base case
// 	if (n == 0) {
// 		return false;
// 	}


// 	if (a[0] == 7) {
// 		return true;
// 	}

// 	// if 0th index doesn't contain 7 ask recursion to tell 7 is there in smaller array
// 	// or not
// 	bool is7Present = check7(a + 1, n - 1);

// 	if (is7Present == true) {
// 		return true;
// 	}
// 	else {
// 		return false;
// 	}
// }

bool check7(int *a, int n) {
	// Base case
	if (n == 0) return false;

	if (a[0] == 7) return true;

	return check7(a + 1, n - 1);
}

int main() {

	int a[] = {1, 2, 3, 4, 5, 7};
	int n = sizeof(a) / sizeof(int);

	bool ans = check7(a, n);
	if (ans == true) {
		cout << "7 Is present\n";
	}
	else {
		cout << "7 is not present\n";
	}
	return 0;
}
















