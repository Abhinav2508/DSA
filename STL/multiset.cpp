#include<bits/stdc++.h>
using namespace std;

int main(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);
    ms.insert(1);

    for(auto it=ms.begin();it!=ms.end();it++){
        cout<<*it<<" ";
    }

    ms.find(2) != ms.end() ? cout << "Found" : cout << "Not Found";
    ms.erase(1); // erase all occurrences of 1
    cout << "\nAfter erasing 1: ";
    for(auto it=ms.begin();it!=ms.end();it++){
        cout<<*it<<" ";
    }
}