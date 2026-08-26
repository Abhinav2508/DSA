#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

int main() {
    int x;
    cout << "Enter the root value of the binary tree: ";
    cin >> x;

    Node* root = new Node(x);

    queue<Node*> q;
    q.push(root);

    //Building the binary tree using level order traversal

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        // Left child
        cout << "Enter left child of " << temp->data << " (-1 for no child): ";
        cin >> x;

        if(x != -1) {
            temp->left = new Node(x);
            q.push(temp->left);
        }

        // Right child
        cout << "Enter right child of " << temp->data << " (-1 for no child): ";
        cin >> x;

        if(x != -1) {
            temp->right = new Node(x);
            q.push(temp->right);
        }
    }
    return 0;
}