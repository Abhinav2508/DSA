#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int>q;
    q.push(5);
    q.push(8);
    q.push(10);

    q.pop();

    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.empty()<<endl;
}