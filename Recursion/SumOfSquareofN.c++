 #include <bits/stdc++.h>
using namespace std;
int sqsum(int n){
    if(n<=0) return 0;
    
    return pow(n,2)+sqsum(n-1);
}

int main() {
    cout<<sqsum(3);

    return 0;
}