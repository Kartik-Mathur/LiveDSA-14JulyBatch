#include <iostream>
using namespace std;

void permutations(char *a, int i) {
	if (a[i] == '\0') {
		cout << a << endl;
		return;
	}

	// Recursive case
	// Bring all characters from ith index onwards to ith index and ask rec to do job for
	// smaller problem
	for (int j = i; a[j] != '\0'; ++j)
	{
		swap(a[i], a[j]); // We bring one of the jth index to ith index position and then ask
		// recursion to do the work from i+1 position
		permutations(a, i + 1);
		swap(a[i], a[j]); // BACKTRACKING
	}
}

int main() {

	char a[] = "abc";
	permutations(a, 0);

	return 0;
}
















