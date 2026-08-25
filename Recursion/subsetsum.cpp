#include <bits/stdc++.h>
using namespace std;

void subsetsum(int arr[],int index,int n,int sum,vector<int>&temp){
    if(index==n){
        // print subset
        cout<<"{ ";
        for(int x:temp) cout<<x<<" ";
        cout<<"} -> "<<sum<<endl;
        return;
    }

    // NOT TAKE
    subsetsum(arr,index+1,n,sum,temp);

    // TAKE
    temp.push_back(arr[index]);
    subsetsum(arr,index+1,n,sum+arr[index],temp);
    temp.pop_back(); // backtrack
}

int main() {

    int arr[]={3,4,5};
    vector<int> temp;

    subsetsum(arr,0,3,0,temp);
}