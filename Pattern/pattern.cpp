#include<bits/stdc++.h>
using namespace std;

// Pattern 1: Solid Square
// *****
// *****
// *****
// *****
void print1(int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}


// Pattern 2: Increasing Right Triangle
// *
// * *
// * * *
// * * * *
void print2(int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}


// Pattern 3: Increasing Number Triangle
// 1
// 12
// 123
// 1234
void print3(int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}


// Pattern 4: Same Number in Each Row
// 1
// 22
// 333
// 4444
void print4(int n) {
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i <<" ";
        }
        cout<<endl;
    }
}


// Pattern 5: Decreasing Right Triangle
// * * * *
// * * *
// * *
// *
void print5(int n) {
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}


// Pattern 6: Decreasing Number Triangle
// 1234
// 123
// 12
// 1
void print6(int n) {
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j <<" ";
        }
        cout<<endl;
    }
}


// Pattern 7: Centered Pyramid
//    *
//   ***
//  *****
// *******
void print7(int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }

        for(int j=1;j<n-i-1;j++){
            cout<<" ";
        }

        cout<<endl;
    }
}


// Pattern 8: Inverted Centered Pyramid
// *******
//  *****
//   ***
//    *
void print8(int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }

        for(int j=0;j<(2*n-(2*i+1));j++){
            cout<<"*";
        }

        cout<<endl;
    }
}


// Pattern 9: Diamond
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *
void print9(int n) {

    // Upper pyramid
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }

        for(int j=1;j<n-i-1;j++){
            cout<<" ";
        }

        cout<<endl;
    }

    // Lower inverted pyramid
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }

        for(int j=0;j<(2*n-(2*i+1));j++){
            cout<<"*";
        }

        cout<<endl;
    }
}


// Pattern 10: Hourglass / Inverted V + V
// *****
// ****
// ***
// **
// *
// **
// ***
// ****
// *****
void print10(int n) {

    // Decreasing
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    // Increasing
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}


// Pattern 11: Alternating 0-1 Triangle
// 1
// 01
// 101
// 0101
void print11(int n) {
    int start =1;

    for(int i=0;i<n;i++){

        if(i%2==0)
            start =1;
        else
            start =0;

        for(int j=0 ;j<i;j++) {
            cout<<start;
            start = 1-start;
        }

        cout<<endl;
    }
}


// Pattern 12: Number Palindrome Pyramid
// 1      1
// 12    21
// 123  321
// 12344321
void print12(int n) {
    for(int i=1;i<=n;i++){

        // Increasing numbers
        for(int j=1;j<=i;j++){
            cout<<j;
        }

        // Spaces
        for(int j=1;j<=2*n-2*i;j++){
            cout<<" ";
        }

        // Decreasing numbers
        for(int j=i;j>=1;j--){
            cout<<j;
        }

        cout<<endl;
    }
}


// Pattern 13: Continuous Number Triangle
// 1
// 2 3
// 4 5 6
// 7 8 9 10
void print13(int n) {
    int count=1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count <<" ";
            count++;
        }
        cout<<endl;
    }
}


// Pattern 14: Increasing Alphabet Triangle
// A
// A B
// A B C
// A B C D
void print14(int n) {

    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch <<" ";
        }
        cout<<endl;
    }
}


// Pattern 15: Decreasing Alphabet Triangle
// A B C D
// A B C
// A B
// A
void print15(int n) {
    for(int i=1;i<=n;i++){
        for(char ch='A';ch<='A'+n-i;ch++){
            cout<<ch <<" ";
        }
        cout<<endl;
    }
}


// Pattern 16: Same Alphabet in Each Row
// A
// B B
// C C C
// D D D D
void print16(int n) {
    for(int i=0;i<n;i++){
        char ch='A';

        for(int j=0;j<=i;j++){
            cout<<char(ch+i) <<" ";
        }

        cout<<endl;
    }
}


int main() {
    int t;
    cin >> t;

    for(int i=0;i<t;i++) {
        int n;
        cin>>n;

        print16(n);
    }
}
