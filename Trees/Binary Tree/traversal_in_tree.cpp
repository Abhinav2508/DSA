#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void preorderTraversal(Node* root) {
    if (root == nullptr)
        return;

    cout << root->data << " "; //Node
    preorderTraversal(root->left); //Left
    preorderTraversal(root->right); //Right
}
void inorderTraversal(Node* root) {
    if (root == nullptr)
        return;

    inorderTraversal(root->left); //Left
    cout << root->data << " "; //Node
    inorderTraversal(root->right); //Right
}
void postorderTraversal(Node* root) {
    if (root == nullptr)
        return;

    postorderTraversal(root->left); //Left
    postorderTraversal(root->right); //Right
    cout << root->data << " ";  //Node
}

Node* createTree() {
    int data;
    cin >> data;

    // -1 means no node
    if(data == -1)
        return nullptr;

    Node* root = new Node(data);

    cout << "Enter left child of " << data << ": ";
    root->left = createTree();

    cout << "Enter right child of " << data << ": ";
    root->right = createTree();

    return root;
}

int main() {
    cout << "Enter tree elements (-1 for NULL):" << endl;

    Node* root = createTree();

    cout << "Preorder Traversal: ";
    preorderTraversal(root);
    cout << endl;
    cout << "Inorder Traversal: ";  
    inorderTraversal(root);
    cout << endl;
    cout << "Postorder Traversal: ";
    postorderTraversal(root);
    cout << endl;

    return 0;
}