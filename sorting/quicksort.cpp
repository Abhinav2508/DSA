#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int low, int high)
{
    int pivot = arr[high];   // last element pivot
    int i = low - 1;         // place for smaller element

    for(int j = low; j < high; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1], arr[high]); // put pivot at correct place
    return i + 1;              // pivot index
}

void quickSort(vector<int>& arr, int low, int high)
{
    if(low < high){
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);   // left
        quickSort(arr, pi + 1, high);  // right
    }
}

int main()
{
    vector<int> arr = {7,3,9,2,8,5};

    quickSort(arr, 0, arr.size()-1);

    for(int x : arr)
        cout << x << " ";

    return 0;
}