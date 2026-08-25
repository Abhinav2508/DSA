#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int i, int j){
    if(i >= j) return true;
    if(s[i] != s[j]) return false;
    return isPalindrome(s, i + 1, j - 1);
}

int main(){
    string s = "racecar";
    int n = s.length();
    if(isPalindrome(s, 0, n - 1)){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}