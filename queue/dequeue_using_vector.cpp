#include <iostream>
#include <vector>
using namespace std;

class Deque {
    vector<int> dq;

public:
    bool isEmpty() { return dq.empty(); }

    void insertFront(int x) {
        dq.insert(dq.begin(), x);
    }

    void insertRear(int x) {
        dq.push_back(x);
    }

    void deleteFront() {
        if (!isEmpty()) dq.erase(dq.begin());
    }

    void deleteRear() {
        if (!isEmpty()) dq.pop_back();
    }

    int getFront() {
        return isEmpty() ? -1 : dq.front();
    }

    int getRear() {
        return isEmpty() ? -1 : dq.back();
    }

    void display() {
        for (int x : dq) cout << x << " ";
        cout << "\n";
    }
};

int main() {
    Deque dq;
    dq.insertRear(10);
    dq.insertRear(20);
    dq.insertFront(5);
    dq.insertRear(30);
    dq.display();
    dq.deleteFront();
    dq.deleteRear();
    dq.display();
    dq.insertFront(1);
    dq.insertRear(50);
    dq.display();
}