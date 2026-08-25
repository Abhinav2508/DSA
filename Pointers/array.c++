#include<bits/stdc++.h>   
using namespace std;

int main()    
{    
    int arr[5] = {1, 2, 3, 4, 5}; // array of integers

    // print the address of the first element of the array
    cout << "Address of arr: " << arr << endl; // arr is a pointer to the first element
                //or
    cout << "Address of arr[0]: " << &arr[0] << endl; // address of the first element
                //or
    cout<<arr+0<<endl; // address of the first element (arr + 0)

    // print the elements of the array using pointer arithmetic
    cout << "Elements of arr: ";
    for(int i = 0; i < 5; i++) {
        cout << *(arr + i) << " "; // dereferencing the pointer to get the value
    }
    cout << endl;

    //print the adress of each element of the array
    cout << "Addresses of each element in arr: ";
    for(int i = 0; i < 5; i++) {
        cout << (arr + i) << " "; // address of each element (arr + i)
    }
    cout << endl;

    // size of the array
    cout << "Size of arr: " << sizeof(arr) << " bytes" << endl; // size of the entire array (5 * size of int)

    int *ptr = arr; // pointer to the first element of the array
    cout << "Address stored in ptr: " << ptr << endl; // address of the first element of the array

    //print the elements of the array using the pointer
    cout << "Elements of arr using ptr: ";
    for(int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " "; // dereferencing the pointer to get the value
    }

    //print the address of each element of the array using the pointer
    cout << "\nAddresses of each element in arr using ptr: ";
    for(int i = 0; i < 5; i++) {
        cout << (ptr + i) << " "; // address of each element (ptr + i)
    }

    //arithmetic with pointer
    for(int i = 0; i < 5; i++) {
        cout << "\nValue at ptr: " << *ptr << " at address: " << ptr << endl; // print value and address
        ptr++; // move the pointer to the next element
    }
}