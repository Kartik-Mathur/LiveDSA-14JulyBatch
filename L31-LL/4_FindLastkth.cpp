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

node* findLastK(node* head, int k) {
	node* f = head, * s = head;
	for (int i = 0; i < k; ++i)
	{
		f = f->next;
	}

	while (f != NULL) {
		f = f->next;
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
	insertAtEnd(head, tail, 8);
	insertAtEnd(head, tail, 9);


	printLL(head);

	node* ans = findLastK(head, 4);
	cout << ans->data << endl;





	return 0;
}
















