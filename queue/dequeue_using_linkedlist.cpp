#include <bits/stdc++.h>
using namespace std;

// Each node stores data and pointers to both neighbors.
// This lets us insert/remove from both ends in O(1) time.
class Node {
  public:
   int data;
   Node* prev;
   Node* next;

   Node(int x) {
       data = x;
       prev = next = nullptr;
   }
};

// Double-ended queue implemented using a doubly linked list.
// front -> first element
// rear  -> last element
class myDeque {
   Node *front, *rear;

  public:
   myDeque() {
       // Empty deque: both ends point to null.
       front = rear = nullptr;
   }

   // Adds x at the front of the deque.
   // Example: 10, 20, 30 -> insertFront(5) => 5, 10, 20, 30
   void insertFront(int x) {
       if (front == NULL) {
           // Empty deque: new node becomes both front and rear.
           front = rear = new Node(x);
           return;
       }

       Node* temp = new Node(x);
       temp->next = front;   // new node points to old front
       front->prev = temp;   // old front points back to new node
       front = temp;         // update front pointer
   }

   // Adds x at the rear of the deque.
   // Example: 10, 20, 30 -> insertRear(40) => 10, 20, 30, 40
   void insertRear(int x) {
       if (front == NULL) {
           // Empty deque: new node becomes both front and rear.
           front = rear = new Node(x);
           return;
       }

       Node* temp = new Node(x);
       rear->next = temp;    // old rear points forward to new node
       temp->prev = rear;    // new node points back to old rear
       rear = temp;          // update rear pointer
   }

   // Removes the front element.
   // Important: after deleting the old front, reconnect the new front's prev to null.
   void deleteFront() {
       if (front == nullptr) return; // nothing to delete

       Node* temp = front;
       front = front->next;
       delete temp;

       if (front) {
           front->prev = NULL; // new front has no previous node
       } else {
           rear = NULL; // deque becomes empty
       }
   }

   // Removes the rear element.
   // Important: after deleting the old rear, reconnect the new rear's next to null.
   void deleteRear() {
       if (front == nullptr) return; // nothing to delete

       Node* temp = rear;
       rear = rear->prev;
       delete temp;

       if (rear) {
           rear->next = NULL; // new rear has no next node
       } else {
           front = NULL; // deque becomes empty
       }
   }

   // Returns the first element; -1 if deque is empty.
   int getFront() {
       if (front == NULL) return -1;
       return front->data;
   }

   // Returns the last element; -1 if deque is empty.
   int getRear() {
       if (front == NULL) return -1;
       return rear->data;
   }
};

int main() {
   myDeque dq;

   // Remember the pattern: front insertion adds to the left side,
   // rear insertion adds to the right side.
   dq.insertFront(10);
   dq.insertRear(20);

   cout << "Front: " << dq.getFront() << endl; // Output: 10
   cout << "Rear: " << dq.getRear() << endl;   // Output: 20

   dq.deleteFront();
   cout << "Front after deletion: " << dq.getFront() << endl; // Output: 20

   dq.deleteRear();
   cout << "Rear after deletion: " << dq.getRear() << endl;   // Output: -1 (empty)

   return 0;
}
