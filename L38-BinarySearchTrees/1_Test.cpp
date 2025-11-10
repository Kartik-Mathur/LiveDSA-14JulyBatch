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

int pre[] = {8, 10, 1, 6, 4, 7, 3, 14, 13};
int k = 0;
node* buildBinaryTree(int *in, int s, int e) {
    if (s > e) {
        return NULL;
    }

    node* root = new node(pre[k]);
    k++;
    int i;
    for (int j = s; j <= e; ++j)
    {
        if (in[j] == root->data) {
            i = j;
            break;
        }
    }
    root->left = buildBinaryTree(in, s, i - 1);
    root->right = buildBinaryTree(in, i + 1, e);
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



int main() {

    // 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
    int in[] = {1, 10, 4, 6, 7, 8, 3, 13, 14 };
    int n = sizeof(in) / sizeof(int);

    node* root = buildBinaryTree(in, 0, n - 1);
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    levelOrderTraversal(root);


    return 0;
}
















