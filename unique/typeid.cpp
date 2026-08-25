
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    auto x=10;
    auto y=10.0;
    auto c='a';
    auto a="bhi";
    auto d=10.5f;
    auto ptr=&x;
    auto lambda=[](){return 0;};
    auto vec=vector<int>{1,2,3};
    auto map=unordered_map<int,int>{{1,2},{3,4}};
    cout<<typeid(x).name()<<endl;
    cout<<typeid(y).name()<<endl;
    cout<<typeid(c).name()<<endl;
    cout<<typeid(a).name()<<endl;
    cout<<typeid(d).name()<<endl;
    cout<<typeid(ptr).name()<<endl;
    cout<<typeid(lambda).name()<<endl;
    cout<<typeid(vec).name()<<endl;
    cout<<typeid(map).name()<<endl;

    return 0;
}