#include<bits/stdc++.h>
using namespace std;

int main() {
    // int age;
    // cout<<"Enter your age: ";
    // cin >> age;
    // if(age>=18){
    //     cout<<"You are an adult";
    // }
    // else {
    //     cout<<"Not adult";
    // }



    // int mark;
    // cout<<"Enter you mark: ";
    // cin >> mark;
    // if (mark >=80 && mark <=100 ){
    //     cout<<"Your grade is A";
    // }
    // else if (mark >=60 && mark <=79 ){
    //     cout<<"Your grade is B";
    // }
    // else if (mark >=50 && mark <=59 ){
    //     cout<<"Your grade is c";
    // }
    // else if (mark >=45 && mark <=49 ){
    //     cout<<"Your grade is D";
    // }
    // else if (mark >=25 && mark <=44 ){
    //     cout<<"Your grade is E";
    // }
    // else if (mark <25 && mark >=0 ){
    //     cout<<"Your grade is F";
    // }
    // else {
    //     cout<< "Invalid mark";
    // }




    int age;
    cout << "Enter age: ";
    cin >> age;
    if (age<18){
        cout<<"not eligible for job";
    }
    else if (age<=57){
        cout<<"eligible for job";
        if (age>=55){
        cout<<",but retirement soon";
        }
    }
    
    else if (age>57){
        cout<<"retirement time";
    }
    

    return 0;
}