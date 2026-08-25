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

int main() {

    Node *n1=new Node(10);
    Node *n2=new Node(20);
    Node *n3=new Node(30);
    Node *n4=new Node(40);
    Node *n5=new Node(50);

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;

    Node *Head=n1;

    // 🔴 Delete last node

    // Case 1: Empty list
    if(Head == NULL){
        cout<<"List is empty\n";
    }

    // Case 2: Only one node
    else if(Head->next == NULL){
        delete Head;
        Head = NULL;
    }

    // Case 3: More than one node
    else{
        Node *curr = Head;
        Node *prev = NULL;

        while(curr->next != NULL){
            prev = curr;
            curr = curr->next;
        }

        delete curr;
        prev->next = NULL;
    }

    // Print list
    Node* temp = Head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
} 