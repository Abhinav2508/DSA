#include<bits/stdc++.h>
using namespace std;

// Pairs
void explainPair() {
    pair<int,int> p1 = {1, 3};

    cout<<p1.first <<" " <<p1.second;

    pair<int,pair<int,int>> p2= {1,{3,4}};
    cout<<p2.first<<" "<<p2.second.second<<" "<<p2.second.first;

    pair<int,int> arr[] ={{1,2},{2,5},{5,1}};
    cout<<arr[1].second;
}

int main() {
    explainPair();
}