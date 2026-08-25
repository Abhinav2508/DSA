#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[4][4]={5,8,3,9,6,2,8,4,5,3,2,2,2,8,1,9};
    cout<<"original array: "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(int i=0;i<4;i++){
        int start=0,end=3;
        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++,end--;
        }
    }
    cout<<"Array after reversing row:"<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}