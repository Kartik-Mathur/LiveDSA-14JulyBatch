#include <iostream>
using namespace std;

void subsequence(char *ip, int i, char *op, int j) {
	// base case
	if (ip[i] == '\0') {
		op[j] = '\0';
		cout << op << endl;
		return;
	}

	// recursive case
	// 1. Exclude the ith character into jth position
	subsequence(ip, i + 1, op, j);

	// 2. Include ith character into jth position
	op[j] = ip[i];
	subsequence(ip, i + 1, op, j + 1);

}

int main() {

	char a[] = "abc";
	char op[100];

	subsequence(a, 0, op, 0);

	return 0;
}
















