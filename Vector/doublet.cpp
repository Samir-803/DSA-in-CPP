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
    int x;
    cout<<"Enter a number whose doublet you want to find : ";
    cin>>x;

    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j]==x) cout<<"("<<i<<","<<j<<")"<<" ";
        }
    }
}