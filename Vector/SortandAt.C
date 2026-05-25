#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;

    int x;
    cout<<"Enter the size of array : ";
    cin>>x;

    cout<<"Enter the element of vector : "<<endl;
    for(int i=0;i<x;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    // At is used to change value of a perticular element of vector 
    v[2] = 5;
    v.at(1) = 10;
    for(int i=0;i<v.size();i++){
      cout<<v.at(i)<<" ";
    }

    cout<<endl;

    // Sorting of Vector // for Sorting we have to include header file <algorithm> 
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
      cout<<v.at(i)<<" ";
    }

    cout<<endl<<"Capacity : "<<v.capacity();
    cout<<endl<<"Size : "<<v.size();
}