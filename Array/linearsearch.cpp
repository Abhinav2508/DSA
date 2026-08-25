#include <bits/stdc++.h>
using namespace std;

int main(){
    int key=9;
    int index=-1;
    int arr[5]={2,5,8,9,10};
    for(int i=0;i<5;i++){
        if(key==arr[i]){
            index=i;
            break;
        }
    }
    cout<<index;
    return 0;
}