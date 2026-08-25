#include<bits/stdc++.h>

using namespace std;
int main(){
    // int arr[5];
    // cout<<"Enter elements: ";
    // for (int i=0;i<=4;i++){
    //     cin>>arr[i];
    // }
    // // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >>arr[4];

    // // cout <<arr[3];

    // for (int i=0;i<=4;i++){
    //     cout<<arr[i] << " ";
    // }
    // return 0;



    // 2d array

    int arr[2][3];
    cout<<"Enter the elements:";
    for(int i=0;i<=2;i++){
        for(int j=0;j<=4;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"\n 2d array is \n";
    for(int i=0;i<=2;i++){
        for(int j=0;j<=4;j++){
            cout<<arr[i][j] << " ";
        }
        cout<<endl;
    }

}