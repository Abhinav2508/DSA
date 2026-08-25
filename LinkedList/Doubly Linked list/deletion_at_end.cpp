#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node* prev;
    node(int value){
        data=value;
        next=NULL;
        prev=NULL;
    }
};

node* createdll(int arr[],int index,int size,node*back){
    if(index==size) return NULL;
    node* temp=new node(arr[index]);
    temp->prev=back;
    temp->next= createdll(arr,index+1,size,temp);
    return temp;
}

int main() {
	int arr[]={1,2,3,4,5};
	node*head=createdll(arr,0,5,NULL);
	
    // Case 1: empty list
    if (head == NULL) return 0;

    // Case 2: only one node
    if (head->next == NULL) {
        delete head;
        head= NULL;
        return 0;
    }

    node* temp = head;

    // go to last node
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->prev->next = NULL;
    delete temp;
	
	
	
    temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
