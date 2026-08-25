#include <bits/stdc++.h>
using namespace std;

class Dequeue {
    int *arr;
    int front;
    int rear;
    int size;

public:

    Dequeue(int n) {
        size = n;
        arr = new int[n];
        front = rear = -1;
    }

    ~Dequeue() {
        delete[] arr;
    }

    bool isEmpty() {
        return front == -1 && rear == -1;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }

    void push_front(int x) {
        if (isEmpty()) {
            front = rear = 0;
            arr[front] = x;
        }
        else if (isFull()) {
            cout << "Dequeue is full" << endl;
        }
        else {
            front = (front - 1 + size) % size;
            arr[front] = x;
        }
    }

    void push_back(int x) {
        if (isEmpty()) {
            front = rear = 0;
            arr[rear] = x;
        }
        else if (isFull()) {
            cout << "Dequeue is full" << endl;
        }
        else {
            rear = (rear + 1) % size;
            arr[rear] = x;
        }
    }

    void pop_front() {
        if (isEmpty()) {
            cout << "Dequeue is empty" << endl;
        }
        else if (front == rear) {
            front = rear = -1;
        }
        else {
            front = (front + 1) % size;
        }
    }

    void pop_back() {
        if (isEmpty()) {
            cout << "Dequeue is empty" << endl;
        }
        else if (front == rear) {
            front = rear = -1;
        }
        else {
            rear = (rear - 1 + size) % size;
        }
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Dequeue is empty" << endl;
            return -1;
        }

        return arr[front];
    }

    int getRear() {
        if (isEmpty()) {
            cout << "Dequeue is empty" << endl;
            return -1;
        }

        return arr[rear];
    }
};

int main() {
    Dequeue dq(5);

    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(3);
    dq.push_front(4);

    dq.pop_front();
    dq.pop_back();

    cout << "Front: " << dq.getFront() << endl;
    cout << "Rear: " << dq.getRear() << endl;

    return 0;
}