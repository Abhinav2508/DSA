#include<bits/stdc++.h>

using namespace std;

int main(){
    int n= 7789;

    while(n>0){
        int last_digit=n%10;
        n= n/10;
        cout<<last_digit<<endl ;
    }
}