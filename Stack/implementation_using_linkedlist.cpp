#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node*next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
class Stack
{
    Node* Top;
    int Size;
    public:
    Stack(){
        Top=NULL;
        Size=0;
    }
    void Push(int value){
        Node*temp=new Node(value);
        temp->next=Top;
        Top=temp;
        Size++;
    }
    void Pop(){
        if(Top==NULL){
            cout<<"under flow"<<endl;
        }
        Node*temp=Top;
        Top=Top->next;
        delete temp;
        Size--;
    }
    int Peek(){
        if(Top==NULL){
            cout<<"empty stack"<<endl;
            return -1;
        }
        else return Top->data;
    }
    bool isEmpty(){
        return Top==NULL;
    }
    int isSize(){
        return Size;
    }
    
};

int main() {
	// your code goes here
	Stack s;
	s.Push(8);
    s.Push(18);
    s.Push(28);
    s.Push(8);
	s.Pop();
	s.Pop();
    cout<<s.Peek()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.isSize()<<endl; 

}