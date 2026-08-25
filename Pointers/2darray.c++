#include <iostream>
using namespace std;

int main() {
    // 2D array using pointers
    int rows=3, cols=4;
    int **arr=new int*[rows]; // Allocating memory for an array of pointers
    for(int i=0;i<rows;i++){
        arr[i]=new int[cols]; // Allocating memory for each row
    }

    // Assigning values to the 2D array
    int val=1;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            arr[i][j]=val++;
        }
    }

    // Printing the 2D array
    cout<<"2D Array elements: "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // Deallocating memory
    for(int i=0;i<rows;i++){
        delete[] arr[i]; // Deallocating memory for each row
    }
    delete[] arr; // Deallocating memory for the array of pointers

    return 0;
}