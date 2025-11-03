#include <iostream>
#include <queue>
using namespace std;

class Stack {
	queue<int> q;
public:
	void reverseQueue() { // using recursion write a code to reverse queue
		if (q.size() == 0) {
			return;
		}

		int f = q.front();
		q.pop();
		reverseQueue();
		q.push(f);
	}

	void push(int d) {
		q.push(d);
	}


	int top() {
		reverseQueue();
		int ans = q.front();
		reverseQueue();
		return ans;
	}

	void pop() {
		reverseQueue();
		q.pop();
		reverseQueue();

	}

	bool empty() {
		if (q.size() == 0) {
			return true;
		}

		return false;
	}
};

int main() {
	Stack s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.pop();
	s.push(6);


	while (!s.empty()) {
		cout << s.top() << " ";

		s.pop();
	}
	cout << endl;

	return 0;
}
















