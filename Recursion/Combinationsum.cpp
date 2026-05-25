#include<bits\stdc++.h>
using namespace std;
 void sum(vector<int> v,int arr[],int n,int target,int idx){
    if(target==0){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }cout<<endl;
        return;
    }  
    if(target<0) return;
    for(int i=idx;i<n;i++){
       v.push_back(arr[i]);
       sum(v,arr,n,target-arr[i],i);
       v.pop_back();
    }
}

int main(){
    int n;
    cout<<"Enter the Size of Array : ";
    cin>>n;
    cout<<"Enter the Element of Array : ";
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int t;
    cout<<"Enter Target : ";
    cin>>t;
    vector<int> v;
    sum(v,arr,n,t,0);
}