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

node* createTree() {
	// base case
	int data;
	cin >> data;
	// data -1 aaega toh recursion call nhi hoga that means this is the base case
	if (data == -1) {
		return NULL;
	}
	// recursive case
	// root node hum bana denge
	node * root = new node(data);
	root->left = createTree();// LST recursion ko bolegne chota tree hai tu bana kar de
	root->right = createTree(); // RST recursion ko bolenge chota tree hai tu bana kar de
	return root; // once root, LST and RST both are created we will return the root node..
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

int main() {

	// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
	node* root = createTree();
	levelOrderTraversal(root);
	// preorder(root);
	// cout << endl;
	// inorder(root);
	// cout << endl;
	// postorder(root);
	// cout << endl;


	return 0;
}
















