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

void printLL(node* h) {
	while (h != NULL) {
		cout << h->data << "-->";
		h = h->next;
	}
	cout << "NULL\n";
}

node* mergeSortedLL(node* a, node* b) {
	if (a == NULL) return b;
	if (b == NULL) return a;

	if (a->data < b->data) {
		node* nH = a;
		nH->next = mergeSortedLL(a->next, b);
		return nH;
	}
	else {
		node* nH = b;
		nH->next = mergeSortedLL(a, b->next);
		return nH;
	}
}


node* midLL(node* head) {
	if (head == NULL or head->next == NULL) {
		return head;
	}


	node* f = head->next;
	node* s = head;
	while (f != NULL and f->next != NULL) {
		f = f->next->next;
		s = s->next;
	}

	return s;
}

int main() {

	node* head = NULL, *tail = NULL;

	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 4);
	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 6);
	insertAtEnd(head, tail, 7);


	printLL(head);

	node* ans = midLL(head);
	cout << "Middle: " << ans->data << endl;



	return 0;
}
















