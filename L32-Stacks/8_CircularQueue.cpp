#include <iostream>
#include <vector>
using namespace std;

class Queue {
	vector<int> v;
	// int * v;
	int n;
	int f, e, cs;
public:
	Queue(int s = 5) {
		v.resize(s);
		// v = new int[s];
		n = s;
		cs = 0;
		f = 0;
		e = n - 1;
	}

	void push(int d) {
		if (cs >= n) {
			cout << "Overflow\n";
			return;
		}
		e = (e + 1) % n;
		v[e] = d;
		cs++;
	}

	void pop() {
		if (cs <= 0) {
			cout << "Underflow\n";
			return;
		}

		f = (f + 1) % n;
		cs--;
	}

	int front() {
		return v[f];
	}

	int size() {
		return cs;
	}

	bool empty() {
		return cs == 0;
	}

};

int main() {
	Queue q(6);

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);

	while (!q.empty()) {
		cout << q.front() << " ";

		q.pop();
	}
	cout << endl;

	return 0;
}
















