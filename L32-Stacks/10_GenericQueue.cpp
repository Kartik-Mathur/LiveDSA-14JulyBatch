#include <iostream>
using namespace std;

template<typename T>
class node {
public:
	T data;
	node<T>* next;
	node(T d) {
		data = d;
		next = NULL;
	}
};

template<typename T>
class Queue {
	node<T>* head, *tail;
	int cs;
public:
	Queue() {
		head = tail = NULL;
		cs = 0;
	}

	void push(T d) {
		if (head == NULL) {
			head = tail = new node<T>(d);
		}
		else {
			node<T>* n = new node<T>(d);
			tail->next = n;
			tail = n;
		}
		cs++;
	}

	void pop() {
		if (head == NULL) { // no node in LL, then simply return
			return;
		}
		else if (head->next == NULL) { // only one node is present
			delete head; // after deleting last node, head and tail both should be NULL
			head = tail = NULL;
			cs--;
		}
		else {
			node<T>* temp = head;
			head = head->next;
			delete temp;
			cs--;
		}
	}

	T front() {
		return head->data;
	}

	int size() {
		return cs;
	}

	bool empty() {
		return head == NULL;
	}

};

int main() {
	Queue<char> q;

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
















