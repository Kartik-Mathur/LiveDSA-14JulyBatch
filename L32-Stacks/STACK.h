#ifndef MY_STACK
#define MY_STACK
template<typename U>
class node {
public:
	U data;
	node<U> * next;
	node(U d) {
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

#endif