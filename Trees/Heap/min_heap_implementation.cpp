#include <bits/stdc++.h>
using namespace std;

class MinHeap{
    int *arr;
    int size;
    int total_size;

    public:
    MinHeap(int n){
        arr=new int[n];
        size=0;
        total_size=n;
    }

    void insert(int value){
        if(size==total_size){
            cout<<"heap overflow"<<endl;
            return;
        }
        arr[size]=value;
        int index=size;
        size++;

        while(index>0 && arr[(index-1)/2]>arr[index]){
            swap(arr[(index-1)/2],arr[index]);
            index=(index-1)/2;
        }

        cout<<arr[index]<<" is inserted into heap"<<endl;
    }

    void heapify(int index){
        int smallest=index;
        int left= 2*index+1;
        int right=2*index+2;

        if(left<size && arr[left]<arr[smallest])
            smallest=left;
        if(right<size && arr[right]<arr[smallest])
            smallest=right;

        if(smallest !=index){
            swap(arr[index],arr[smallest]);
            heapify(smallest);
        }
    }

    void Delete(){
        if(size==0){
            cout<<"heap underflow"<<endl;
            return;
        }
        arr[0]=arr[size-1];
        size--;
        heapify(0);
    }

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main() {
    MinHeap H1(6);
    H1.insert(20);
    H1.insert(40);
    H1.insert(1);
    H1.insert(15);
    H1.insert(50);
    H1.insert(10);
    H1.Delete();
    H1.print();
    return 0;
}