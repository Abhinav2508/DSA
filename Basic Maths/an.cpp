#include <bits/stdc++.h>
using namespace std;

int countdigit(int n){
    if(n == 0) return 1;
    int count = 0;
    while(n != 0){
        n /= 10;
        count++;
    }
    return count;
}

bool armstrong(int digit,int num){
    int n=num,ans=0;
    while(n!=0){
        int rem = n%10;
        n /= 10;
        ans = ans + (int)pow(rem,digit);
    }
    return ans == num;
}

int main() {
    int a;
    cin >> a;
    int digit = countdigit(a);
    cout << armstrong(digit,a);
    return 0;
}
