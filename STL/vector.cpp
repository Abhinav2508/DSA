#include <bits/stdc++.h>
using namespace std;
int main() {
    // //Create vector
    // vector<int> v;
    // vector<int> v1(5,1); //vector of size 5 with all elements as 1
    // //size and capacity
    // cout<<"Size: "<<v.size()<<endl;
    // cout<<"Capacity: "<<v.capacity()<<endl;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // cout<<"Size: "<<v.size()<<endl;
    // cout<<"Capacity: "<<v.capacity()<<endl;
    // //update element
    // v[1]=25;
    // cout<<"size of v1: "<<v1.size()<<endl;
    // cout<<"capacity of v1: "<<v1.capacity()<<endl;
    // v1.push_back(2);
    // cout<<"size of v1 after push_back: "<<v1.size()<<endl;
    // cout<<"capacity of v1 after push_back: "<<v1.capacity()<<endl;

    // vector <int> v3 = {1,2,3,4,5};
    // cout<<"size of v3: "<<v3.size()<<endl;
    // cout<<"capacity of v3: "<<v3.capacity()<<endl;

    // //delete element from vector
    // vector<int> vnew;
    // vnew.push_back(100);
    // vnew.push_back(200);    
    // vnew.push_back(300);
    // vnew.push_back(400);
    // vnew.push_back(500);
    // cout<<"Before pop_back Size of vnew: "<<vnew.size()<<endl;
    // vnew.pop_back();
    // cout<<"After pop_back Size of vnew: "<<vnew.size()<<endl;
    // //delete elment at specific position
    // vnew.erase(vnew.begin()+1); //erases second element
    // cout<<"After erasing second element Size of vnew: "<<vnew.size()<<endl;
    // for(int i=0;i<vnew.size();i++){
    //     cout<<vnew[i]<<" ";
    // }

    // //insert element at specific position
    // vnew.insert(vnew.begin()+1,250); //inserts 250 at second position
    // cout<<endl<<"After inserting 250 at second position Size of vnew: "<<vnew.size()<<endl;
    // for(int i=0;i<vnew.size();i++){
    //     cout<<vnew[i]<<" ";
    // }
    // cout<<endl;
    // //update element
    // vnew[1]=200; //updating second element to 200
    // cout<<"After updating second element to 200 Size of vnew: "<<vnew.size()<<endl;
    // for(int i=0;i<vnew.size();i++){
    //     cout<<vnew[i]<<" ";
    // }

    // //clear vector
    // vnew.clear();
    // cout<<endl<<"After clearing Size of vnew: "<<vnew.size()<<endl;
    // cout<<"After clearing Capacity of vnew: "<<vnew.capacity()<<endl;
    // cout<<"Elements of vnew after clearing: ";
    // for(int i=0;i<vnew.size();i++){
    //     cout<<vnew[i]<<" ";
    // }

    // vector<int> arr;
    // arr.push_back(10); //adding elements
    // arr.push_back(20); 
    // arr.push_back(30);
    // arr.push_back(40);
    // arr.push_back(50);
    // cout<<arr[0]<<endl; //first element
    // cout<<arr.front()<<endl; //first element
    // cout<<arr[arr.size()-1]<<endl; //last element
    // cout<<arr.back()<<endl; //last element
    // cout<<arr.at(2)<<endl; //element at index 2
    // cout<<arr.empty()<<endl; //0 if not empty, 1 if empty

    // vector<int> a;
    // // copy value from arr to a
    // a=arr; 
    // cout<<a.size()<<endl;
    // for(auto it=arr.begin();it!=arr.end();it++){
    //     cout<<*it<<" ";
    // }
    // cout<<endl;
    // for(auto it:a){ 
    //     cout<<it<<" ";
    // }
    // cout<<endl;

    //Sorting Vector
    vector<int> vec={4,2,5,1,3};
    sort(vec.begin(),vec.end()); //ascending order
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }

    // //reverse sorting
    // cout<<endl;
    // sort(vec.begin(),vec.end(),greater<int>()); //or sort(vec.rbegin(),vec.rend());
    // for(int i=0;i<vec.size();i++){
    //     cout<<vec[i]<<" ";
    // }

    // search in binary search
    cout<<endl;
    cout<<binary_search(vec.begin(),vec.end(),3)<<endl; //returns 1 if found else 0
    cout<<binary_search(vec.begin(),vec.end(),6)<<endl; //returns 1 if found else 0

    cout<<find(vec.begin(),vec.end(),3)-vec.begin()<<endl; //returns index if found else vec.size()

    //count
    cout<<count(vec.begin(),vec.end(),3)<<endl; //returns frequency of 3

    //max and min
    cout<<*max_element(vec.begin(),vec.end())<<endl;
    cout<<*min_element(vec.begin(),vec.end())<<endl;

    //sum of elements
    cout<<accumulate(vec.begin(),vec.end(),0)<<endl; //0 is initial value

    //lower bound and upper bound
    cout<<lower_bound(vec.begin(),vec.end(),3)-vec.begin()<<endl; //index of first element >=3
    cout<<upper_bound(vec.begin(),vec.end(),3)-vec.begin()<<endl; //index of first element >3
    
    return 0;
}