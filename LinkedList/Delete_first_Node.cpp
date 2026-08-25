#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

// Function to delete head node
Node* deleteHead(Node* Head){

    // Case 1: Empty list
    if(Head == NULL){
        cout << "List is empty\n";
        return NULL;
    }

    // Case 2: Only one node
    if(Head->next == NULL){
        delete Head;
        return NULL;
    }

    // Case 3: More than one node
    Node* temp = Head;
    Head = Head->next;
    delete temp;

    return Head;
}

int main(){

    // Creating nodes
    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);
    Node *n5 = new Node(50);

    // Linking
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    Node *Head = n1;

    // Call delete function
    Head = deleteHead(Head);

    

    // Print list
    Node *temp = Head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
}