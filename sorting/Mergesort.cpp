#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr,int low,int mid,int high){
    int i=low;
    int j=mid+1;
    int index=0;
    
    vector<int> temp(high-low+1);
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            temp[index]=arr[i];
            index++,i++;
        }
        else{
            temp[index]=arr[j];
            index++,j++;
        }
    }
    while(i<=mid){
        temp[index]=arr[i];
        index++,i++;
    }
    while(j<=high){
        temp[index]=arr[j];
        index++,j++;
    }
    for(int k = 0; k < temp.size(); k++){
    arr[low + k] = temp[k];
}
}
void mergesort(vector <int>&arr,int low,int high){
    if(low>=high) return;
    int mid=low+(high-low)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main() {
    vector<int> arr = {5,3,8,4,2,7,1,6};

    mergesort(arr, 0, arr.size()-1);

    cout << "Sorted array:\n";
    for(int x : arr)
        cout << x << " ";

    return 0;
    

    return 0;
}