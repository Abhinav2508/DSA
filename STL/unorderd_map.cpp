#include<bits/stdc++.h>
using namespace std;

// unique elements, no duplicates allowed
// order is not maintained
int main(){
    unordered_map<int,int> um;
    // ways to insert elements in unordered_map
    um.insert({1,10});
    um.insert(make_pair(2,20));
    um[3] = 30;

    for(auto it=um.begin();it!=um.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}