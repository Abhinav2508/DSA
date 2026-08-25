#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]={3,4,5,7,8};
    int index=-1;
    int key=4;
    int low=0;
    int high=4;
    
    
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key) {
        index=mid;
        break;
        }
        else if(arr[mid]>key){
             high=mid-1;
        }
        else {
            low=mid+1;
        }
    }
    
    if (index==-1) cout<<"element not found";
    else
    cout<<"Elment found at index: "<<index;
}