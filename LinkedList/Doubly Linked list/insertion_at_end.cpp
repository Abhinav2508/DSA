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

int main() {
	int arr[]={1,2,3,4,5};
	node *head=NULL,*tail=NULL;
	for(int i=0;i<5;i++){
	    node * temp=new node(arr[i]);
	    
	    if(head==NULL){
	        head=tail=temp;
	    }
	    else{
	        tail->next=temp;
	        temp->prev=tail;
	        tail=temp;
	    }
	}
	
    node *temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}



// #include <bits/stdc++.h>
// using namespace std;

// class node {
// public:
//     int data;
//     node *next;
//     node *prev;

//     node(int value) {
//         data = value;
//         next = NULL;
//         prev = NULL;
//     }
// };

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     node *head = NULL;

//     for (int i = 0; i < 5; i++) {
//         node *temp = new node(arr[i]);

//         if (head == NULL) {
//             head = temp;
//         } else {
//             node *curr = head;

//             // go to last node
//             while (curr->next != NULL) {
//                 curr = curr->next;
//             }

//             curr->next = temp;
//             temp->prev = curr;
//         }
//     }

//     // Print list
//     node* temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }