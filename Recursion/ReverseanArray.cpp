// #include<bits/stdc++.h>
// using namespace std;

// void print(int arr[],int l,int r){
//     if(l>=r) return;
//     swap(arr[l],arr[r]);
//     print(arr,l+1,r-1);
// }

// int main(){
//     int n;
//     cin >>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     print(arr,0,n-1);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }


// // // // // OR // // /// //

#include<bits/stdc++.h>
using namespace std;

void f(int i,int arr[],int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    f(i+1,arr,n);
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    f(0,arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}