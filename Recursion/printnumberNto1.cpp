#include <iostream>
using namespace std;

void nto1(int n){
    if(n == 0) return;
    cout << n << endl;
    nto1(n - 1);
}

void even(int n){
    if(n == 0) return;
    if(n % 2 == 0)
        cout << n << endl;
    even(n - 1);
}

void odd(int n){
    if(n == 0) return;
    if(n % 2 != 0)
        cout << n << endl;
    odd(n - 1);
}

int main() {
    odd(10);
    return 0;
}