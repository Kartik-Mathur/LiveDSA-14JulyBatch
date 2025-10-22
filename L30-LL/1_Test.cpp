#include <iostream>
using namespace std;

class node {
public:
	int data;
	node * next;

	node(int d) {
		data = d;
		next = NULL; // We always have NULL in a pointer..
	}
};


int main() {

	node a(1);
	node b(2);
	node c(3);

	a.next = &b;
	b.next = &c;

	node* head;
	head = &a;

	node*tail = &c;
	/*
	node* tail;
	tail = &c;
	*/

	return 0;
}
















