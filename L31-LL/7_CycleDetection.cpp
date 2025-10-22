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

void breakCycle(node* head, node* f) {
	node* s = head, *fp;

	while (f != s) {
		fp = f;
		f = f->next;
		s = s->next;
	}

	fp->next = NULL;
}

bool isCyclePresentLL(node* head) {
	node* f = head, *s = head;
	while (f != NULL and f->next != NULL) {
		f = f->next->next;
		s = s->next;

		if (f == s) {
			breakCycle(head, f);
			return true;
		}
	}

	return false;
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
	insertAtEnd(head, tail, 8);
	insertAtEnd(head, tail, 9);
	insertAtEnd(head, tail, 10);
	insertAtEnd(head, tail, 11);
	insertAtEnd(head, tail, 12);

	tail->next = head->next->next;

	if (isCyclePresentLL(head) == true) {
		cout << "Cycle is Present\n";
		printLL(head);
	}




	return 0;
}
















