#include <iostream>
#include <queue>
using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;
	node(int d) {
		data = d;
		left = right = NULL;
	}
};

node* insertInBST(node* root, int data) {
	if (root == NULL) {
		// If tree doesn't exist then the data will be at root node
		root = new node(data);
		// create root node and return its address....
		return root;
	}

	if (root->data > data) {
		// Insert data in LST and return me the address of LST ki root node
		// root->left mei LST ke root ka data insert kr dunga mei
		root->left = insertInBST(root->left, data);
	}
	else { // data >= root->data
		// Since data bada hai root -> data se toh RST mei insert karo
		// return krdo RST ki root ka address vo mei current node ke right mei attach kr dunga..
		root->right = insertInBST(root->right, data);
	}
	return root;
}
// Input: 8 3 10 1 6 14 4 7 13 -1
node* buildBST() {
	node* root = NULL;
	int data;
	cin >> data; // Yeh function input lega jab tak -1 nhi aa jaata
	while (data != -1) {
		root = insertInBST(root, data); // To insert this data inside the tree we will have another func

		cin >> data;
	}

	return root;
}



void preorder(node* root) {
	if (root == NULL) { // Tree hi nhi hai toh vapis jaao kuch nhi print ho paega..
		return;
	}

	cout << root->data << " "; // root ka data print krenge sabse pehle
	preorder(root->left); // LST ko print krenge, recursion se keh kar
	preorder(root->right); // RST ko print krenge, recursion se keh kar
}

void inorder(node* root) {
	if (root == NULL) {
		return;
	}

	inorder(root->left); // LST ka kaam recursion ko boldo...
	cout << root->data << " "; // LST ke baad we will print root ka data
	inorder(root->right); // RST ka kaam recursion ko boldo krne ko
}

void postorder(node* root) {
	if (root == NULL) {
		return;
	}

	postorder(root->left); // LST ka kaam recursion ko boldo...
	postorder(root->right); // RST ka kaam recursion ko boldo krne ko
	cout << root->data << " "; // LST and RST ke baad we will print root ka data
}

void levelOrderTraversal(node* root) {
	queue<node*> q;

	q.push(root);
	q.push(NULL);

	while (!q.empty()) {
		node* f = q.front();
		q.pop();
		if (f != NULL) {
			cout << f->data << " ";
			if (f->left != NULL) {
				q.push(f->left);
			}
			if (f->right != NULL) {
				q.push(f->right);
			}
		}
		else {
			cout << endl;
			if (!q.empty()) {
				q.push(NULL);
			}
		}
	}
}


class LinkedList {
public:
	node* head, *tail;
};

LinkedList bstToLL(node* root) {
	// base case
	if (root == NULL) {
		LinkedList l;
		l.head = l.tail = NULL;
		return l; // head and tail both are NULL since tree hi nhi hai
	}

	// recursive case
	if (root->left != NULL and root->right != NULL) { // LST and RST dono hai
		LinkedList left = bstToLL(root->left);
		LinkedList right = bstToLL(root->right);

		// Firstly connect root node, as LST and RST both are converted to LL by recursion
		// left is an object so we use dot operator on it, and tail is a pointer of
		// left object toh arrow operator lagega
		left.tail->right = root; // Left LL ke tail ke aage root lagao
		root->right = right.head; // root -> right par right ka head lagao
		// now we have root connected with LST and RST wali LL
		LinkedList l; // Ab bade tree ke head and tail return krne hai toh new linkedlist banao
		l.head = left.head;
		l.tail = right.tail;
		return l;

	}
	else if (root->left != NULL and root->right == NULL) { // LST hai but RST nhi hai
		LinkedList left = bstToLL(root->left); // LST ko LL mei convert krwaya
		left.tail->right = root; // Left LL ke tail ke aage root lagao
		LinkedList l; // Ab bade tree ke head and tail return krne hai toh new linkedlist banao
		l.head = left.head;
		l.tail = root;
		return l;
	}
	else if (root->left == NULL and root->right != NULL) { // LST nhi hai but RST hai
		LinkedList right = bstToLL(root->right);
		root->right = right.head;
		LinkedList l; // Ab bade tree ke head and tail return krne hai toh new linkedlist banao
		l.head = root;
		l.tail = right.tail;
		return l;
	}
	else { // LST and RST dono hi nhi hai
		LinkedList l;
		l.head = root;
		l.tail = root;
		return l;
	}
}

int main() {

	node* root = buildBST();
	LinkedList l = bstToLL(root);

	node* head = l.head;
	while (head != NULL) {
		cout << head->data << "-->";
		head = head->right;
	}
	cout << "NULL\n";
	// preorder(root);
	// cout << endl;
	// inorder(root);
	// cout << endl;
	// postorder(root);
	// cout << endl;
	// levelOrderTraversal(root);

	return 0;
}
















