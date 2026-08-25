#include <bits/stdc++.h>
using namespace std;

void conert(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        char upperCh = ch - ('a' - 'A');
        cout << upperCh << endl;
    } else if (ch >= 'A' && ch <= 'Z') {
        char lowerCh = ch + ('a' - 'A');
        cout << lowerCh << endl;
    } else {
        cout << "Invalid character" << endl;
    }
}

int main() {
    char ch;
    cin >> ch;
    conert(ch);
    return 0;
}

