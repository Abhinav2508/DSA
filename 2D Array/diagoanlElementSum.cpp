#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[4][4]={5,8,3,9,6,2,8,4,5,3,2,2,2,8,1,9};
    int sum=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==j){
                sum +=arr[i][j];
            }
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i+j==3){
                sum +=arr[i][j];
            }
        }
    }
    
    cout<<"Elements of array are: "<<endl;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"Sum of diagonal: "<<sum;
}