#include<bits/stdc++.h>
using namespace std;
void subset(vector<int>arr,vector<int>ans,int idx,int k){
    if(idx==arr.size()){
        if(ans.size()==k){
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
        }
        return;
    }
    if(ans.size()+arr.size()-idx<k) return;
    subset(arr,ans,idx+1,k);  
    ans.push_back(arr[idx]);
    subset(arr,ans,idx+1,k);
}
int main(){
    int n;
    cout<<"Enter Size of Array : ";
    cin>>n;
    int k;
    cout<<"Enter Size of subarray : ";
    cin>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int>ans;
    subset(arr,ans,0,k);
}