#include <iostream>
using namespace std;

class node {
public:
	int data;
	node * next;

	node(int d) {
		data = d;
		next = NULL;
	}
};

void insertAtFront(node* &h, node* &t, int d) {
	if (h == NULL) {
		node* n = new node(d);
		h = t = n;
	}
	else {
		node* n = new node(d);
		n->next = h;
		h = n;
	}
}

void insertAtEnd(node* &h, node* &t, int d) {
	if (h == NULL) {
		node* n = new node(d);
		h = t = n;
	}
	else {
		node* n = new node(d);
		t->next = n;
		t = n;
	}
}

int lengthLL(node* h) {
	int cnt = 0;
	while (h != NULL) {
		cnt++;
		h = h->next;
	}

	return cnt;
}

void insertAtMid(node* &head, node *&tail, int d, int pos) {
	if (pos == 0) {
		insertAtFront(head, tail, d);
	}
	else if (pos >= lengthLL(head)) {
		insertAtEnd(head, tail, d);
	}
	else {
		node* t = head;
		for (int i = 0; i < pos - 1; ++i)
		{
			t = t->next;
		}

		node* n = new node(d);
		n->next = t->next;
		t->next = n;
	}
}

void printLL(node* h) {
	while (h != NULL) {
		cout << h->data << "-->";
		h = h->next;
	}
	cout << "NULL\n";
}


void deleteAtFront(node* &head, node*& tail) {
	if (head == NULL) {
		return;
	}
	else if (head->next == NULL) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* temp = head;
		head = head->next;
		delete temp;
	}
}

void deleteAtEnd(node* &head, node*& tail) {
	if (head == NULL) {
		return;
	}
	else if (head->next == NULL) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* temp = head;
		while (temp->next != tail) {
			temp = temp->next;
		}

		delete tail;
		tail = temp;
		tail->next = NULL;
	}
}

void deleteAtMid(node* &head, node* &tail, int pos) {
	if (pos == 0) {
		deleteAtFront(head, tail);
	}
	else if (pos == lengthLL(head) - 1) {
		deleteAtEnd(head, tail);
	}
	else if (pos >= lengthLL(head)) {
		return ;
	}
	else {
		node* temp = head;
		for (int i = 0; i < pos - 1; ++i)
		{
			temp = temp->next;
		}

		node* n = temp -> next;
		temp->next = n->next;
		delete n;
	}
}

void reverseLL(node* &head, node*  &tail) {
	node* c = head, * p = NULL;

	while (c != NULL) {
		node * n = c->next;
		c->next = p;
		p = c;
		c = n;
	}
	swap(head, tail);
}

int main() {

	node* head = NULL, *tail = NULL;

	insertAtFront(head, tail, 1);
	insertAtFront(head, tail, 2);
	insertAtFront(head, tail, 3);
	insertAtFront(head, tail, 4);
	insertAtFront(head, tail, 5);
	insertAtEnd(head, tail, 6);
	insertAtEnd(head, tail, 7);
	insertAtMid(head, tail, 10, 5);

	printLL(head);
	// deleteAtFront(head, tail);
	// deleteAtEnd(head, tail);
	// deleteAtMid(head, tail, 5);
	reverseLL(head, tail);
	printLL(head);


	return 0;
}
















