#include <iostream>
using namespace std;

int main() {
    // Dynamic memory allocation in C++
    int *ptr=new int;
    *ptr=5; // Assigning value to the allocated memory
    cout<<*ptr<<endl;

    float *ptr2=new float;
    *ptr2=3.14; // Assigning value to the allocated memory
    cout<<*ptr2<<endl;

    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int *arr=new int[n]; // Allocating memory for an array of integers
    for(int i=0;i<n;i++){
        arr[i]=i+1; // Assigning values to the array
    }

    cout<<"Array elements: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; // Printing the array elements
    }

    // Deallocating the memory
    delete ptr; // Deallocating memory for the integer
    delete ptr2; // Deallocating memory for the float
    delete[] arr; // Deallocating memory for the array

    return 0;
}