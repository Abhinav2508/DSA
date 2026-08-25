#include <iostream>
using namespace std;

int main() {
    int a=10;
    // print the address of a
    cout<<&a<<endl;

    // pointer variable
    int *ptr = &a; // ptr is a pointer to an integer and it holds the address of a

    // print the address stored in ptr
    cout<<ptr<<endl;
    //size of pointer
    cout<<sizeof(ptr)<<endl; // size of pointer (usually 4 or 8 bytes depending on the system)
    cout<<*ptr<<endl; // dereferencing the pointer to get the value of a
    a++; // incrementing a to show that ptr still points to the same address
    cout<<*ptr<<endl; // dereferencing the pointer again to show the updated value of a 

    int b=20;
    ptr = &b; // now ptr points to b
    cout<<ptr<<endl; // print the address stored in ptr (address of b)
    cout<<*ptr<<endl; // dereferencing the pointer to get the value of b 
    //float pointer 
    float f=3.14;
    // pointer to float
    float *ptr1 = &f; // fptr is a pointer to a float and it holds the address of f
    cout<<ptr1<<endl;
    
    return 0;   
}