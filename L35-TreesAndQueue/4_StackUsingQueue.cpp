#include <iostream>
#include <queue>
using namespace std;

class Stack {
	queue<int> q1, q2;
public:
	void push(int d) {
		if (q2.empty() == false) {
			q2.push(d); // if data is inside q2 push the elements inside it
		}
		else { // if both the queues are empty or q1 has elements inside of it in both the cases push
			// data inside q1 only...
			q1.push(d);
		}
	}


	int top() {
		if (q1.empty() == false) {
			while (q1.size() > 1) {
				int f = q1.front();
				q1.pop();
				q2.push(f);
			}

			int top = q1.front();
			q1.pop();
			q2.push(top);
			return top;
		}
		else { // q2 is not empty toh q2 last element would be the top element that we need
			while (q2.size() > 1) {
				int f = q2.front();
				q2.pop();
				q1.push(f);
			}

			int top = q2.front();
			q2.pop();
			q1.push(top);
			return top;
		}
	}

	void pop() {
		if (q1.empty() == false) {
			while (q1.size() > 1) {
				int f = q1.front();
				q1.pop();
				q2.push(f);
			}

			q1.pop();
		}
		else { // q2 is not empty toh q2 last element would be the top element that we need
			while (q2.size() > 1) {
				int f = q2.front();
				q2.pop();
				q1.push(f);
			}
			q2.pop();
		}
	}

	bool empty() {
		if (q1.empty() == true and q2.empty() == true) {
			return true;
		}
		else {
			return false;
		}
	}
};

int main() {
	Stack s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);

	while (!s.empty()) {
		cout << s.top() << " ";

		s.pop();
	}
	cout << endl;

	return 0;
}
















