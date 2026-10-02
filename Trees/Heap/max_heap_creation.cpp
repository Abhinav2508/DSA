#include <bits/stdc++.h>
using namespace std;

class MaxHeap{
    int *arr;
    int size; //number of elements in heap
    int total_size; // total size of heap

    public:
    MaxHeap(int n){
        arr=new int[n];
        size=0;
        total_size=n;
    }

    void insert(int value){
        if(size==total_size){
            cout<<"heap ovrflow"<<endl;
            return;
        }

        arr[size]=value;
        int index=size;
        size++;

        while(index>0 && arr[(index-1)/2]<arr[index]){
            swap(arr[(index-1)/2],arr[index]);
            index=(index-1)/2;
        }
        cout<<arr[index]<<" is inserted into heap"<<endl;
    }

    void print() {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
};

int main() {
    MaxHeap H1(6);
    H1.insert(10);
    H1.insert(20);
    H1.insert(40);
    H1.insert(1);
    H1.insert(15);
    H1.insert(50);
    H1.insert(10);

    H1.print();
    return 0;
}