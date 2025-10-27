#include <iostream>
#include <stack>
using namespace std;


int main() {

	int a[] = {5, 3, 2, 4, 6, 8, 7};
	int n = sizeof(a) / sizeof(int);
	int ng[100]; // This array will store the index of the next greater element

	stack<int> s;

	for (int i = 0; i < n; ++i)
	{
		while (!s.empty() and a[s.top()] < a[i]) {
			ng[s.top()] = i;
			s.pop();
		}

		s.push(i);
	}

	while (!s.empty()) {
		ng[s.top()] = -1;
		s.pop();
	}

	for (int i = 0; i < n; ++i)
	{
		cout << ng[i] << " ";
	}
	cout << endl;


	return 0;
}
















