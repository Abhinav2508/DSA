// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void fun(int *p){
    *p=*p+5;
}
void change(int **p){
    *p=*p+1;
}



int main() {
    int n=10;
    cout<<n<<endl;
    int *p1=&n;
    cout<<p1<<endl;
    int **p2=&p1;
    fun(p1);
    change(p2);
    cout<<n<<endl;
    cout<<p1<<endl;

    return 0;
}