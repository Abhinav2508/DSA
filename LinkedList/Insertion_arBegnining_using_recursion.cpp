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

// Recursive function to create linked list (reverse order)
Node* CreateLinkedList(int arr[], int index, int size, Node *prev){

    // Base case:
    // jab saare elements process ho jaye
    if(index == size) 
        return prev;

    // naya node create karo
    Node* temp = new Node(arr[index]);

    // current node ka next previous node banega
    temp->next = prev;

    // recursion call (aage badho)
    return CreateLinkedList(arr, index + 1, size, temp);
}

int main() {

    int arr[] = {2,4,6,8};
    Node *Head = NULL;

    // recursive call
    Head = CreateLinkedList(arr, 0, 4, NULL);

    // print linked list
    Node *temp = Head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
}