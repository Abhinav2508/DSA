// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

bool issum(vector<int> a){
    int n=a.size();
    int totalsum=0,prefix=0;
    for(int i=0;i<n;i++){
        totalsum +=a[i];
    }
    for(int i=0;i<n;i++){
        prefix +=a[i];
        int ans=totalsum-prefix;
        if(ans==prefix) return 1;
    }
    return 0;
}


int main() {
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    vector<int> a(n);
    cout<<"enter elments: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<issum(a);
    
}