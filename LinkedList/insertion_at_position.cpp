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

    int pos = 3;      // insert after position 3 (0-based)
    int value = 35;

    // Case: insert at head
    if(pos == 0){
        Node* newNode = new Node(value);
        newNode->next = Head;
        Head = newNode;
    }
    else{
        Node* temp = Head;

        // move to (pos-1)
        for(int i=0; i<pos-1; i++){
            if(temp == NULL){
                cout<<"Position out of range\n";
                return 0;
            }
            temp = temp->next;
        }

        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Print list
    Node *temp1 = Head;
    while(temp1){
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }
}