#include <bits/stdc++.h>
using namespace std;


int main() {
    int arr[5]={4,15,11,2,8};
    int ans=INT_MAX;
    // int ans2=INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]<ans){
            ans=arr[i];
        }
    }
    cout<<"min element "<<ans<<endl;
    for(int i=0;i<5;i++){
        if(arr[i]>ans){
            ans=arr[i];
        }
    }
    // cout<<"min element "<<ans1<<endl;
    cout<<"max element "<<ans<<endl;
    
    return 0;
}