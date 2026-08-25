#include<bits/stdc++.h>
using namespace std;

void subsequence(int arr[], int n, int index, vector<int> temp, vector<vector<int>>& ans){
    if(index==n){
        ans.push_back(temp);
        return;
    }
    //exclude the element
    subsequence(arr, n, index+1, temp, ans);
    //include the element
    temp.push_back(arr[index]);
    subsequence(arr, n, index+1, temp, ans);
    temp.pop_back(); //backtrack to remove the last element added
    
}

int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<vector<int>> ans;
    vector<int> temp;
    subsequence(arr, n, 0, temp, ans);
    for(auto it:ans){   
        for(auto i:it){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}