#include <bits/stdc++.h>
using namespace std;

void reverse(string &s,int i,int j){
    if(i>=j) return;
    swap(s[i],s[j]);
    
    reverse(s,i+1,j-1);
}

int main() {
    string s="Abhinav";
    int n=s.size();
    cout << "Original string: ";
    cout << s << endl;
    reverse(s,0,n-1);
    cout << "Reversed string: ";
    cout<<s;

    return 0;
}