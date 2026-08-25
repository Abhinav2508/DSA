#include <bits/stdc++.h>
using namespace std;

void lowertoupper(string &s, int n){
    if(n < 0) return;

    if(s[n] >= 'a' && s[n] <= 'z')
        s[n] = s[n] - 32;

    lowertoupper(s, n-1);
}

int main() {
    string s = "abhinav";
    lowertoupper(s, s.size()-1);
    cout << s;
    return 0;
}