#include<bits/stdc++.h>
using namespace std;

int minElement(int arr[], int n){
    if(n == 1) return arr[0];
    return min(arr[n-1], minElement(arr, n-1));
}

int main(){
    int arr[] = {3,7,6,2,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum element in the array is: " << minElement(arr, n) << endl;
    
}