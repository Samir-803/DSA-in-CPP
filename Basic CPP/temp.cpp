#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        vector<int> b;
        vector<int> c;
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr.begin(),arr.end());
       if(arr[0]==arr[n-1]){
        cout<<"-1"<<endl;
        continue;
       }
       for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1]) b.push_back(arr[i]);
        else c.push_back(arr[i]);
       }
    cout<<b.size()<<" "<<c.size()<<endl;
    for(int i=0;i<b.size();i++) cout<<b[i]<<" ";
    cout<<endl;
    for(int i=0;i<c.size();i++) cout<<c[i]<<" ";
    cout<<endl;
}
}