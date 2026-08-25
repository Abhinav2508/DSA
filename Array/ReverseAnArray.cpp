// // Using Temp Array

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[5] = {2,5,8,9,10};

//     cout << "Original array: ";
//     for(int i=0;i<5;i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     int temp[5];
//     int i = 4, j = 0;

//     while(i >= 0){
//         temp[j] = arr[i];
//         j++;
//         i--;
//     }

//     cout << "Reversed array: ";
//     for(int i=0;i<5;i++){
//         cout << temp[i] << " ";
//     }

//     return 0;
// }


// using swap function
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {2,5,8,9,10};

    cout << "Original array: ";
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int i=0,j=4;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    cout << "Reversed array: ";
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }

    return 0;
}
