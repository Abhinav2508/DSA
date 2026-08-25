#include<bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dq;

    // Insert elements at the rear
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);

    // Insert elements at the front
    dq.push_front(5);
    dq.push_front(1);

    // Display the deque
    cout << "Deque elements: ";
    for (int x : dq) {
        cout << x << " ";
    }
    cout << endl;

    // Remove elements from the front
    dq.pop_front();
    dq.pop_front();

    // Remove elements from the rear
    dq.pop_back();

    // Display the deque after deletions
    cout << "Deque after deletions: ";
    for (int x : dq) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}