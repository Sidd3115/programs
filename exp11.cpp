#include <iostream>
using namespace std;
struct Node {
    int key;
    Node *left, *right;
    int height;
};
int height(Node *n) {
    if (n == NULL)
        return 0;
    return n->height;
}
int max(int a, int b) {
    return (a > b) ? a : b;
}
Node* newNode(int key) {
    Node* node = new Node();
    node->key = key;
    node->left = node->right = NULL;
    node->height = 1;
    return node;
}
Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;
    x->right = y;
    y->left = T2;
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;
    return x;
}
Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;
    y->left = x;
    x->right = T2;
    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;
    return y;
}
int getBalance(Node* n) {
    if (n == NULL)
        return 0;
    return height(n->left) - height(n->right);
}

Node* insert(Node* node, int key) {
    if (node == NULL)
        return newNode(key);

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    else
        return node;
   node->height = 1 + max(height(node->left), height(node->right));
   int balance = getBalance(node);
   if (balance > 1 && key < node->left->key)
        return rightRotate(node);
   if (balance < -1 && key > node->right->key)
        return leftRotate(node);
  if (balance > 1 && key > node->left->key) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }
   if (balance < -1 && key < node->right->key) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }
    return node;
}
void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}
int main() {
    Node* root = NULL;
    int choice, value;
    do {
        cout << "\n1.Insert\n2.Display\n3.Exit\n";
        cin >> choice;
        switch(choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                root = insert(root, value);
                break;
             case 2:
                inorder(root);
                cout << endl;
                break;
             case 3:
                break;

            default:
                cout << "Invalid choice";
        }

    } while(choice != 3);
    return 0;
}
