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

void bubbleSortLL(node* &head) {
	node* c, *p, *n;
	int len = lengthLL(head);

	for (int i = 0; i < len - 1; ++i)
	{
		c = head;
		p = NULL;

		while (c != NULL and c->next != NULL) {
			node * n = c->next;
			if (c->data > n->data) { // Swapping will take place

				if (p == NULL) { // head will change
					c->next = n->next;
					n->next = c;
					p = head = n;
				}
				else { // head will not change
					c->next = n->next;
					n->next = c;
					p->next = n;
					p = n;
				}

			}
			else { // swapping will not take place
				p = c;
				c = n;
			}
		}
	}
}


int main() {

	node* head = NULL, *tail = NULL;
	insertAtEnd(head, tail, 11);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 31);
	insertAtEnd(head, tail, 14);
	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 5);


	printLL(head);
	bubbleSortLL(head);
	printLL(head);





	return 0;
}
















