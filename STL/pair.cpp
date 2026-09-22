#include<bits/stdc++.h>
using namespace std;

// Pairs
void explainPair() {
    pair<string,int> p;
    // p.first = "Abhinav";
    // p.second = 22;

    p=make_pair("Abhinav",22);

    cout<<p.first<<" "<<p.second<<endl;

    pair<int,int> p1 = {1, 3};

    cout<<p1.first <<" " <<p1.second<<endl;

    pair<string,pair<int,int>> p2= {"Abhinav",{22,75}};
    cout<<p2.first<<" "<<p2.second.second<<" "<<p2.second.first<<endl;

    pair<int,int> arr[] ={{1,2},{2,5},{5,1}};
    cout<<arr[1].second;
}

int main() {
    explainPair();
}