#include <bits/stdc++.h>
using namespace std;

class Stack
{
    private:
    int *arr;
    int size;
    int top;
    bool flag; // to check if stack is empty or not
    public:
    Stack(int s){
        size=s;
        arr=new int[s];
        top=-1;
        flag=1;
    }
    void push(int value){
        if(top==size-1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        top++;
        arr[top]=value;
        flag=0;
        cout<<"Pushed "<<value<<" to stack"<<endl;
    }
    void pop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
            return;
        }
        top--;
        cout<<"Popped "<<arr[top+1]<<" from stack"<<endl;
        if(top==-1) flag=1;
    }
    int peek(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    int isSize(){
        return top+1;
    }
    bool isEmpty(){
        return top==-1;
    }
};

int main() {
	Stack S(5);
	S.push(5);
	S.push(6);
	S.push(8);
	cout<<S.peek()<<endl;
	S.pop();
	cout<<S.peek()<<endl;
	cout<<S.isEmpty()<<endl;
	cout<<S.isSize()<<endl;
	

}
