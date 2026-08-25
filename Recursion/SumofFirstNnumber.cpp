// // Paramaterised way
// #include<bits/stdc++.h>
// using namespace std;

// void print(int i,int sum){
//     if(i<1) {
//         cout<<sum<<endl;
//         return;
//     }
//     print(i-1,sum+i);
// }

// int main() {
//     int n;
//     cin >> n;
//     print(n,0);
// }



#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n==0) return 0;
    return  n+ sum(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
}

