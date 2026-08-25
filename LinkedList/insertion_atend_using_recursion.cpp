#include <bits/stdc++.h>
using namespace std;

// Node class for Linked List
class Node
{
public:
    int data;      // value stored in node
    Node *next;    // pointer to next node

    // constructor to initialize node
    Node(int value){
        data = value;
        next = NULL;
    }
};

// Recursive function to create linked list from array
Node* CreateLinkedList(int arr[], int index, int size)
{
    // Base Case:
    // If index reaches size, no more elements left
    if(index == size) 
        return NULL;

    // Create new node with current array value
    Node *temp = new Node(arr[index]);

    // Recursive call for next element
    temp->next = CreateLinkedList(arr, index + 1, size);

    // Return current node (acts as head for this recursion level)
    return temp;
}

int main() 
{
    Node *Head = NULL;   // Head pointer of linked list

    int arr[] = {2,4,6,8};

    // Create linked list using recursion
    Head = CreateLinkedList(arr, 0, 4);

    // Traversing and printing the linked list
    Node *temp = Head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
}