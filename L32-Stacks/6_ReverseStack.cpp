#include <iostream>
#include <stack>
using namespace std;

void pushBottom(stack<int> &s, int topElement) {
	if (s.empty()) {
		s.push(topElement);
		return;
	}

	int top = s.top();
	s.pop();
	pushBottom(s, topElement);
	s.push(top);
}

void reverseStack(stack<int> &s) {
	if (s.empty()) return;

	int topElement = s.top();
	s.pop();
	reverseStack(s);

	// stack s ke andar topElement ko last mei insert krne ke liye alag function banana hoga..
	pushBottom(s, topElement);
}

void printStack(stack<int> s) {
	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
}

int main() {

	stack<int> s;

	for (int i = 1; i < 5; ++i)
	{
		s.push(i);
	}

	// 4 3 2 1
	printStack(s);
	reverseStack(s);
	printStack(s);

	// 1 2 3 4


	return 0;
}
