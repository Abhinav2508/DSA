#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=10;
    int y=20;
    int z=30;

    // 3D array using pointers
    int ***arr=new int**[2]; // Allocating memory for an array of pointers to pointers
    for(int i=0;i<2;i++){
        arr[i]=new int*[3]; // Allocating memory for an array of pointers
        for(int j=0;j<3;j++){
            arr[i][j]=new int[4]; // Allocating memory for each row
        }
    }

    // Assigning values to the 3D array
    int val=1;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<4;k++){
                arr[i][j][k]=val++;
            }
        }
    }

    // Printing the 3D array
    cout<<"3D Array elements: "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<4;k++){
                cout<<arr[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    // Deallocating memory
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            delete[] arr[i][j]; // Deallocating memory for each row
        }
        delete[] arr[i]; // Deallocating memory for the array of pointers
    }
    delete[] arr; // Deallocating memory for the array of pointers to pointers

    return 0;
}