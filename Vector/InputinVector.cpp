#include<iostream>
#include<vector>
using namespace std;
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
    for(int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
    }
    cout<<endl<<"Capacity : "<<v.capacity();
    cout<<endl<<"Size : "<<v.size();
}