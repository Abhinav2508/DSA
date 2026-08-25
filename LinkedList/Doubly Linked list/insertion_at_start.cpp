#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *next;
    node*prev;
    node(int value){
        data=value;
        next=NULL;
        prev=NULL;
    }
};

int main() {
	int arr[]={1,2,3,4,5};
	node *head=NULL;
	for(int i=0;i<5;i++){
    	if(head==NULL){
    	    head = new node(arr[i]);
    	}
    	else{
    	    node*temp=new node(arr[i]);
    	    temp->next=head;
    	    head->prev=temp;
    	    head=temp;
    	}
	}
	 // Print list
    node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

}
