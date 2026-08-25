#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter your Number: ";
    cin>>n;
    
    if(n == 0){
        cout << 0;
        return 0;
    }
    if(n == 1){
        cout << 1;
        return 0;
    }

    
    int arr[1000];
    arr[0]=0;
    arr[1]=1;
    
    for(int i=2;i<n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    cout<<arr[n-1];
}