#include <iostream>
using namespace std;

int main() {
    char arr[5]="1234";
    char *ptr =arr;
    cout<<arr<<endl; // print the string stored in arr
    cout<<ptr<<endl; // print the string stored in arr using pointer (ptr points to the first character of arr)
    cout<<*(ptr)++<<endl; // print the first character of arr (dereferencing the pointer and incrementing it)
    cout<<ptr<<endl; // print the string starting from the second character of arr (ptr now points to the second character)
    return 0;
}