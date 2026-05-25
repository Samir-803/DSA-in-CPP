#include<iostream>
#include<vector>
using namespace std;

void fun(vector<int>a){
    // When We Pass Vector by a Function it will Pass By value it make will make a new vector 
    // And we don't need to give size of that vector to function this is the help of vector 
    a[0] = 20;
    a[1] = 21;
    // for(int i=0;i<a.size();i++){
    //     cout<<a[i]<<" ";
    // }cout<<endl;
}
void sun(vector<int>&a){
    // When We Pass Vector by a Function it will Pass By value it make will make a new vector 
    // And we don't need to give size of that vector to function this is the help of vector 
    a[0] = 20;
    a[1] = 21;
}
int main(){
    vector<int>v;
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;
     cout<<"Enter the element of vector : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    fun(v);
     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    sun(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}