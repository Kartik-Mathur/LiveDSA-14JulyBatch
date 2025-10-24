#include <iostream>
using namespace std;

template<typename T>
class node {
public:
	T data;
	node<T> * next;
	node(T d) {
		data = d;
		next = NULL;
	}
};


template<typename T>
class Stack {
	node<T>* head;
public:
	Stack() {
		head = NULL;
	}

	void push(T d) {
		node<T> * n = new node<T>(d);
		n->next = head;
		head = n;
	}

	void pop() {
		node<T>* temp = head;
		head = head-> next;
		delete temp;
	}

	T top() {
		return head->data;
	}

	bool empty() {
		return head == NULL;
		// return head == NULL ? true: false;
		/*
		if(head == NULL){
			return true;
		}
		return false;
		*/
	}

};

int main() {

	Stack<int> s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	while (!s.empty()) {
		cout << s.top() << " ";

		s.pop();
	}

	cout << endl;
	return 0;
}











