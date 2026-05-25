#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;
     cout<<"Enter the element(0/1/2) of vector : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int noZ=0,noO=0,noT=0;
    for(int i=0;i<n;i++){
        if(v[i]==0) noZ++;
        else if(v[i]==1) noO++;
        else noT++;
    }
    for(int i=0;i<n;i++){
        if(i<noZ) v[i]=0;
        else if(i<(noZ+noO)) v[i]=1;
        else v[i]=2;    
    }
    for(int i=0;i<n;i++) cout<<v[i]<<" ";

    
    // Time Complexity = O(2*n)
    // Space Complexity = O(1)
}
