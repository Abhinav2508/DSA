#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(4);
    l.push_front(5);

    l.pop_back();
    l.pop_front();

    for(auto it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<l.front()<<endl;
    cout<<l.back()<<endl;
    cout<<l.size()<<endl;

    cout<<l.empty()<<endl;
}