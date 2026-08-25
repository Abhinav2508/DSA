#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[5] = {1,3,4,5,6};
    int sum1=0;
    int sum2=n*(n+1)/2;
    for(int i=0;i<n;i++){
        sum1=sum1+arr[i];
    }
    
    int ans=sum2-sum1;
    cout<<ans;

    return 0;
}
