#include <bits/stdc++.h>
using namespace std;

void selectionsort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        int minindex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minindex]){
                minindex = j;
            }
        }
        swap(arr[i], arr[minindex]);
    }
}

int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin >> n;

    int arr[1000];

    cout<<"Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    selectionsort(arr, n);

    cout<<"Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
