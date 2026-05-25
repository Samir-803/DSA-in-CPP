#include<bits/stdc++.h>
using namespace std;
void subset(vector<int>arr,vector<int>ans,int idx){
    if(idx==arr.size()){
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
        return;
    }
      subset(arr,ans,idx+1);
      ans.push_back(arr[idx]);
      subset(arr,ans,idx+1);
}
int main(){
    int n;
    cout<<"Enter Size of Array : ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int>ans;
    subset(arr,ans,0);
}