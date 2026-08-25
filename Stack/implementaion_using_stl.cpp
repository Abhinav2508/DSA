#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s;

    // Push
    s.push(8);
    cout << "Pushed 8 to stack" << endl;
    s.push(10);
    cout << "Pushed 10 to stack" << endl;
    s.push(15);
    cout << "Pushed 15 to stack" << endl;

    // Peek (top element)
    cout << "Top: " << s.top() << endl;

    // Pop
    s.pop();
    cout << "Popped from stack" << endl;
    // Size
    cout << "Size: " << s.size() << endl;

    // Check empty
    if(s.empty()){
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}