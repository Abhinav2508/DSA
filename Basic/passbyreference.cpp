#include<bits/stdc++.h>

using namespace std;


// // Pass by value
// void doSomething (int num) {
//     cout <<num <<endl;
//     num +=5;
//     cout << num << endl;
//     num +=5;
//     cout << num <<endl;
// }
// int main() {
//     int num =2;
//     doSomething(num);
//     cout << num <<endl;
//     return 0;
// }


// pass by refrence
void doSomething (int &num) {
    cout <<num <<endl;
    num +=5;
    cout << num << endl;
    num +=5;
    cout << num <<endl;
}
int main() {
    int num =2;
    doSomething(num);
    cout << num <<endl;
    return 0;
}
