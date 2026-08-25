#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cout << "enter rows and column: ";
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }

    cout << "\nWave traversal (column-wise):\n";
    for(int j = 0; j < m; j++){
        if(j % 2 == 0){
            for(int i = 0; i < n; i++){
                cout << matrix[i][j] << " ";
            }
        } else {
            for(int i = n - 1; i >= 0; i--){
                cout << matrix[i][j] << " ";
            }
        }
    }
}
