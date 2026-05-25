#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;
     cout<<"Enter the element(0/1) of vector : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int i=0,j=n-1;
    while(i<j){
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        if(i>j) break;
        if(v[i]==1 && v[j]==0) swap(v[i],v[j]);
    
    }    
    for(int i=0;i<n;i++) cout<<v[i]<<" ";

    // Time Complexity = O(n)
    // Space Complexity = O(1)
}