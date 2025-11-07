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

int countNodes(node* root) {
	if (root == NULL) {
		return 0; // Tree hi nhi hai toh nodes kaha se hongi..
	}

	int lstNodesCount = countNodes(root->left); // LST ki nodes ka count reccursion ko bolo laakar dega
	int rstNodesCount = countNodes(root->right); // RST ki nodes ka count reccursion ko bolo laakar dega
	return lstNodesCount + rstNodesCount + 1; // root node ke liye 1 hum add kr denge..
}

int heightTree(node* root) {
	// base case
	if (root == NULL) {
		return 0; // Tree hi nhi hai toh height bhi nahi ho skti
	}
	// recursive case
	int lstHeight = heightTree(root->left); // Recursion ko bolo LST ki height laakar de
	int rstHeight = heightTree(root->right); // Recursion ko bolo RST ki height laakar de

	return max(lstHeight, rstHeight) + 1; // root ke liye 1 mei add kr dunga
}

int diameter(node* root) { // Time Complexity: O(N^2)
	// base case
	if (root == NULL) {
		return 0; // Tree nahi toh diameter bhi nhi ho skta....
	}

	// recursive case
	// 1. root node ke through diameter mei nikal leta hoon by height function
	int op1 = heightTree(root->left) + heightTree(root->right);
	// 2. LST ka maximum diameter jo bhi hai lets ask recursion to find it
	int op2 = diameter(root->left);
	// 3. RST ka maximum diameter jo bhi hai lets ask recursion to find it
	int op3 = diameter(root->right);

	return max(op1, max(op2, op3) );
}

// FAST HEIGHT and DIAMETER
class Pair { // Pair class ka naam capital P se hi shuru krna humesha bcoz pair is keyword
public:
	int height, diameter;
};

// From this we are trying to return a Pair that will get us both height and diameter
Pair fastDiameter(node* root) { // O(N) time... mei work krega yeh
	// base case
	if (root == NULL) { // Tree hi nhi hai agr
		Pair p;
		p.height = p.diameter = 0; // height bhi and dia bhi 0 hoga
		return p;
	}
	// recursive case
	// Pehle LST, RST, THEN ROOT KA KAAM KIA HAI -> "POST ORDER TRAVERSAL"
	Pair left = fastDiameter(root->left); // LST se uski height and max dia pucho
	Pair right = fastDiameter(root->right); // RST se uski height and max dia pucho

	Pair ans; // Ek pair poore tree ka hume return karna hoga that will have height and dia
	ans.height = max(left.height, right.height) + 1; // bade tree ki height nikal li

	// Bade tree ka diameter nikalo
	int op1 = left.height + right.height;
	int op2 = left.diameter;
	int op3 = right.diameter;
	ans.diameter = max(op1, max(op2, op3));

	return ans; // Pair ans return kardo usmei max height and diameter dono added hai
}

int main() {

	// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
	node* root = createTree();
	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	postorder(root);
	cout << endl;
	cout << "Count     : " << countNodes(root) << endl;
	cout << "Height    : " << heightTree(root) << endl;
	cout << "Diameter  : " << diameter(root) << endl;

	Pair ans = fastDiameter(root);
	cout << "Fast height   : " << ans.height << endl;
	cout << "Fast Diameter : " << ans.diameter << endl;

	return 0;
}
















