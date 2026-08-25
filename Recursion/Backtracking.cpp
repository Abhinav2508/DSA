// Backtracking from 1 to n
// #include<bits/stdc++.h>
// using namespace std;
// void print(int i){
//     if(i<1) return;
//     print(i-1);
//     cout<<i <<endl;
    
// }

// int main (){
    
//     int n;
//     cin>>n;
//     print(n);
//     return 0;
// }

// Backtracking from n to 1
#include<bits/stdc++.h>
using namespace std;
void print(int n,int i=0){
    if(i>n) return;
    print(n,i+1);
    cout<<i <<endl;
    
}

int main (){
    
    int n;
    cin>>n;
    print(n);
    return 0;
}
