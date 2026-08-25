// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class Queue{
    int *arr;
    int front,rear;
    int size;
    public:

    Queue(int n){
        arr=new int[n];
        front=-1,rear=-1;
        size=n;
    }

    bool IsEmpty(){
        return front==-1;
    }
    bool IsFull(){
        return (rear+1)%size==front;
    }

    void push(int x){
        if(IsEmpty()){
            cout<<"pushed "<<x<<" in the queue\n";
            front=rear=0;
            arr[0]=x;
        }
        else if(IsFull()){
            cout<<"Queue overflow\n";
            return;
        }
        else{
            cout<<"pushed "<<x<<" in the queue\n";
            rear=(rear+1)%size;
            arr[rear]=x;;
        }

    }
    void pop(){
        if(IsEmpty()){
            cout<<"Queue underflow\n";
            return;
        }
        else{
            if(front==rear){
                cout<<"popped "<<arr[front]<<" from the queue\n";
                front=rear=-1;
            }
            else{
                cout<<"popped "<<arr[front]<<" from the queue\n";
                front=(front+1)%size;
            }
        }

    }
    int getfront(){
        if(IsEmpty()) {
            cout<<"Queue is empty\n";
            return -1;
        }
        else return arr[front];
    }
    int getrear(){
        if(IsEmpty()) {
            cout<<"Queue is empty\n";
            return -1;
        }
        else return arr[rear];

    }
};

int main() {
    // Write C++ code here
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.pop();
    q.push(60);
    cout<<q.getfront();
    return 0;
}