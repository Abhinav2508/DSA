#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class Queue {
    Node *front;
    Node *rear;
    int count;

public:
    Queue() {
        front = rear = NULL;
        count = 0;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    void enqueue(int x) {
        Node* newNode = new Node(x);

        if(isEmpty()) {
            front = rear = newNode;
        }
        else {
            rear->next = newNode;
            rear = newNode;
        }

        count++;
        cout << "Added " << x << endl;
    }

    void dequeue() {
        if(isEmpty()) {
            cout << "Underflow" << endl;
            return;
        }

        Node* temp = front;
        int x = front->data;

        front = front->next;
        delete temp;

        count--;

        if(front == nullptr)
            rear = nullptr;

        cout << "Deleted " << x << endl;
    }

    int getFront() {
        if(isEmpty())
            return -1;

        return front->data;
    }

    int size() {
        return count;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.dequeue();

    q.enqueue(60);

    cout << "Front: " << q.getFront() << endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    return 0;
}