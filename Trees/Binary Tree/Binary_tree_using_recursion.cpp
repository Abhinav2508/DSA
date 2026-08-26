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

    return 0;
}-1