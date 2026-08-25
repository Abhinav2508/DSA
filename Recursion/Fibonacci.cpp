#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0,b=1;
    cout << a << " " << b << " ";
    for(int i=2;i<n;i++){
        int c = a+b;
        cout<<c<<" ";
        a=b;
        b=c;
        
    }
}


// #include<bits/stdc++.h>
// using namespace std;

// int fibonacci(int n){
//     int a=0,b=1;
//     if (n <= 1) return n;

//     return fibonacci(n-1)+fibonacci(n-2);

// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<fibonacci(n);
// }
