#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> m;
    // ways to insert elements in map
    m.insert({1,10});
    m.insert(make_pair(2,20));
    m[3] = 30;

    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}