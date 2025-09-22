#include <iostream>
using namespace std;

void solve(int n) {
	if (n == 0) {
		return;
	}
	// Here we work while going upwards in recursion

	solve(n - 1);

	// Here we work while returning from top
	cout << n << " ";
}

int main() {

	int n = 5;
	// cin >> n;
	solve(n);

	return 0;
}
















