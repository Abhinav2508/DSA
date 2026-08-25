#include <iostream>
using namespace std;
int power(int num,int n){
    if(n==0) return 1;
    return num*power(num,n-1);
} 

int main() {
    int num,n;
    cout<<"Enter the number and power: ";
    cin>>num>>n;
    cout<<power(num,n);

    return 0;
}