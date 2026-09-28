#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(1);


    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    // search operation
    s.find(2) != s.end() ? cout << "Found" : cout << "Not Found";
    cout<<endl;
    cout<<*s.begin()<<endl;
    cout<<*s.rbegin()<<endl;
    cout<<s.size()<<endl;

    cout<<s.empty()<<endl;

}