#include <bits/stdc++.h>
using namespace std;

int vowel(string s,int n){
    
    if(n<0) return 0;
    
    if(s[n]=='a' ||s[n]=='e'||s[n]=='i'||s[n]=='o'||s[n]=='u' ){
        return 1+vowel(s,n-1);
    }
    return vowel(s,n-1);
}

int main() {
    string s="rohit";
    int n=s.size();
    cout << vowel(s,n-1) << endl;
    
    
}