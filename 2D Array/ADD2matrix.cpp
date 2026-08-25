
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr1[3][3]={1,2,3,4,5,6,7,8,9};
    int arr2[3][3]={1,2,3,4,5,6,7,8,9};
    int sum[100][100];
    
    if(sizeof(arr1)/sizeof(arr1[0])!=sizeof(arr2)/sizeof(arr2[0]) || sizeof(arr1[0])/sizeof(int)!=sizeof(arr2[0])/sizeof(int)){
        cout<<"Addition not possible";
        return 0;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    cout<<"Sum of two matrices is: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
}