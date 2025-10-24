#include <iostream>
// #include <stack> // STL
#include "STACK.h"
using namespace std;

int main() {

	Stack<int> s;

	s.push(1 + 64);
	s.push(2 + 64);
	s.push(3 + 64);
	s.push(4 + 64);

	while (!s.empty()) {
		cout << s.top() << " ";

		s.pop();
	}

	cout << endl;

	return 0;
}
