#include <bits/stdc++.h>
using namespace std;

// // using sliding window technique

void print_windows(vector<int>&arr,int k){
    int left=0;
    for(int right=0;right<arr.size();right++){
        if(right-left+1==k){
            for(int i=left;i<=right;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            left++;
        }
    }

}

// // using queue

// void print_windows(vector<int>&arr,int k){
//     queue<int> q;
//     for(int i=0;i<arr.size();i++){
//         q.push(arr[i]);

//         if(q.size()==k){
//             queue<int> temp=q;
//             while(!temp.empty()){
//                 cout<<temp.front()<<" ";
//                 temp.pop();
//             }
//             cout<<endl;
//             q.pop();
//         }
//     }

// }

int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,9};
    int k=3;
     print_windows(arr,k);
}