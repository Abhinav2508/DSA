#include <bits/stdc++.h>
using namespace std;

int main() {
    int row,col;
    cout<<"enter row and column:  ";
    cin>>row>>col;
    int arr[100][100];
    int element;
    cout<<"enter element to search: ";
    cin>>element;
    cout<<"enter elements: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"elements are: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j] <<" ";
            
        }
        cout<<endl;
    }

    bool found=false;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==element){
                found=true;
                break;
            }
        }
    }

    if(found){
        cout<<"element found";
    }
    else{
        cout<<"element not found";
    }

    return 0;
}