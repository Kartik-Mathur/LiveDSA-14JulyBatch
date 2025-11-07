#include <iostream>
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

node* searchNode(node* root, int key) {
	// base case
	if (root == NULL) {
		return NULL; // Tree nhi hai toh key bhi nhi ho skti, thus return NULL
	}

	// recursive case
	if (root->data == key) {
		return root; // agar root node ka data is equal to key ka data that means bann gai baat
	}
	// LST mei search karo key ko, agr mill jaati hai toh return krdo address of that node
	node* ans = searchNode(root->left, key);
	if (ans != NULL) { // That means ans has valid address jo mill gaya LST mei
		return ans; // return krdo ans wale address ko
	}
	// RST mei tabhi jaenge jab LST mei key nhi milti, LST mei milne ke baad RST mei jaane ka fayda nhi h
	// Since hum assume kar rahe hai all data is unique
	ans = searchNode(root->right, key);
	return ans; // if ans milla toh theek nhi milla toh NULL hoga whi return krna hai hume bhi
}

int main() {

	// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
	node* root = createTree();
	node * ans = searchNode(root, 114);
	if (ans == NULL) {
		cout << "Key Not Found\n";
	}
	else {
		cout << "Key Found " << ans->data << endl;
	}

	// preorder(root);
	// cout << endl;
	// inorder(root);
	// cout << endl;
	// postorder(root);
	// cout << endl;


	return 0;
}
















