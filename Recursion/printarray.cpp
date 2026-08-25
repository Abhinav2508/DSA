#include <iostream>
using namespace std;

void print(int arr[], int n){
    if(n < 0) return;

    print(arr, n - 1);
    cout << arr[n] << " ";
}

void printReverse(int arr[], int n){
    if(n < 0) return;

    cout << arr[n] << " ";
    printReverse(arr, n - 1);
}

int main() {
    int arr[] = {3,7,6,2,8};

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original: ";
    print(arr, n - 1);
    cout << endl;
    cout << "Reverse: ";
    printReverse(arr, n - 1);

    return 0;
}