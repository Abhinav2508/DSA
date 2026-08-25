#include<bits/stdc++.h>
using namespace std;

void subsequence(string s, int n, int index, string temp, vector<string>& ans){
    if(index==n){
        ans.push_back(temp);
        return;
    }
    //exclude the element
    subsequence(s, n, index+1, temp, ans);
    //include the element
    temp.push_back(s[index]);
    subsequence(s, n, index+1, temp, ans);
    temp.pop_back(); //backtrack to remove the last element added
    
}

int main(){
    string s="abc";
    int n=s.size();
    vector<string> ans; //final answer will be stored in this vector
    string temp="";
    subsequence(s, n, 0, temp, ans);
    for(auto it:ans){   
        cout<<it<<endl;
    }
}