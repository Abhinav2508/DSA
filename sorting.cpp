#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n){
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void insertion_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}

void selection_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int index=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }
}


int main() {
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++) cin>>arr[i];

    bubble_sort(arr,n);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    selection_sort(arr,n);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    insertion_sort(arr,n);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}