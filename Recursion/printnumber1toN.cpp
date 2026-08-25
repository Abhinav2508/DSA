#include<bits/stdc++.h>
using namespace std;
void print(int num ,int n){
    if(num > n) return;
    cout<<num<<" ";
    print(num+1,n);
}

void printEven(int num ,int n){
    if(num > n) return;
    if(num % 2 == 0)
        cout<<num<<" ";
    printEven(num+1,n);
}

void printOdd(int num ,int n){
    if(num > n) return;
    if(num % 2 != 0)
        cout<<num<<" ";
    printOdd(num+1,n);
}

int main (){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    print(1,n);
    cout<<endl;
    printEven(1,n);
    cout<<endl;
    printOdd(1,n);
    return 0;
}