#include <bits/stdc++.h>
using namespace std;

class Node {
public:
int data;
    int height;
    Node *left, *right;
    Node(int x) {
        data = x;
        height = 1;
        left = right = nullptr;
    }
}; 

    // height function
    int getheight(Node*root){
        if(!root)
            return 0;
        
        return root->height;
    }

    // balance function
    int getbalance(Node*root){
        if(!root)
                return 0;
        return getheight(root->left)-getheight(root->right);
    }
    
    // Right Rotataion
    
    Node*rightRotation(Node*root){
        Node*child=root->left;
        Node*childRight=child->right;
        child->right=root;
        root->left=childRight;
        
        //update height
        root->height=1+max(getheight(root->left),getheight(root->right));
        child->height=1+max(getheight(child->left),getheight(child->right));
        
        return child;
    }
    
    // left Rotataion
    
    Node*leftRotation(Node*root){
        Node*child=root->right;
        Node*childLeft=child->left;
        child->left=root;
        root->right=childLeft;
        
        //update height
        root->height=1+max(getheight(root->left),getheight(root->right));
        child->height=1+max(getheight(child->left),getheight(child->right));
        
        return child;
    }
    
    // insertion
    Node* insertToAVL(Node* root, int key) {
        // code here
        if(!root)
            return new Node(key);
        
        if(key<root->data)
            root->left=insertToAVL(root->left,key);
        
        else if(key>root->data)
            root->right=insertToAVL(root->right,key);
        
        else 
            return root;
            
        // update height
        root->height=1+max(getheight(root->left),getheight(root->right));
        
        // check balance
        int balance =getbalance(root);
        
        //left left case
        if(balance > 1 && key < root->left->data)
            return rightRotation(root);
        //right right case
        else if(balance < -1 && key > root->right->data)
            return leftRotation(root);
        //left right case
        else if(balance > 1 && key > root->left->data){
            root->left=leftRotation(root->left);
            return rightRotation(root);
        }
        //right left case
        else if(balance < -1 && key < root->right->data){
            root->right=rightRotation(root->right);
            return leftRotation(root);
        }
        //balanced case
        else
            return root;
    }

int main() {
    Node* root = nullptr;
    root = insertToAVL(root, 10);
    root = insertToAVL(root, 20);
    root = insertToAVL(root, 30);
    root = insertToAVL(root, 40);
    root = insertToAVL(root, 50);
    root = insertToAVL(root, 25);

    // The AVL tree is now balanced after each insertion
    return 0;
}