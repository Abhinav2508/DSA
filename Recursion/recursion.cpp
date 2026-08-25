#include <iostream>
using namespace std;

void fun(int n){
    if(n == 0){
        cout << "Happy Birthday";
        return;
    }
    
    cout << n << " days left for Birthday\n";
    fun(n -1);
}

int main() {
    fun(6);

    return 0;
}