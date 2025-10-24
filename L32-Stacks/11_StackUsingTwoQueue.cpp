#include <iostream>
#include <stack>
using namespace std;
// HOME WORK
class Queue {
	stack<int> s1, s2;
	int cs;
public:
	void push(int d) {}
	void pop() {}
	int front() {}
	bool empty() {}
	int size() {}
}

int main() {
	Queue q;

	q.push(1 + 64);
	q.push(2 + 64);
	q.push(3 + 64);
	q.push(4 + 64);
	q.push(5 + 64);
	q.push(6 + 64);

	while (!q.empty()) {
		cout << q.front() << " ";

		q.pop();
	}
	cout << endl;

	return 0;
}
















