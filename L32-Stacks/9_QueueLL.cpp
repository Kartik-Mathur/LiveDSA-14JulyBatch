#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;
	node(int d) {
		data = d;
		next = NULL;
	}
};

class Queue {
	node* head, *tail;
	int cs;
public:
	Queue() {
		head = tail = NULL;
		cs = 0;
	}

	void push(int d) {
		if (head == NULL) {
			head = tail = new node(d);
		}
		else {
			node* n = new node(d);
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
			node* temp = head;
			head = head->next;
			delete temp;
			cs--;
		}
	}

	int front() {
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
	Queue q;

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
















