#include<bits/stdc++.h>
using namespace std;
void print(int n ,int cnt =0){
    if(cnt==n) return;
    cout<<"Abhi" <<endl;
    print(n,cnt+1);
}

int main (){
    int n;
    cin>>n;
    print(n);
    return 0;
}