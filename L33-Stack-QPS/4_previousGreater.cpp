#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void previousGreater(int *a, int n) {
	stack<int> s;
	vector<int> pg(n, -1);

	for (int i = n - 1 ; i >= 0 ; i--)
	{
		while (!s.empty() and a[s.top()] < a[i]) {
			pg[s.top()] = i;
			s.pop();
		}

		s.push(i);
	}

	while (!s.empty()) {
		pg[s.top()] = -1;
		s.pop();
	}

	for (int i = 0; i < n; ++i)
	{
		cout << pg[i] << " ";
	}
	cout << endl;
}

int main() {
	int a[] = {1, 2, 3, 4, 3};
	int n = sizeof(a) / sizeof(int);

	previousGreater(a, n);


	return 0;
}
















