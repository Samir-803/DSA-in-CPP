#include<iostream>
#include<queue>
using namespace std;

int main(){
    int arr[] = {10,9,8,7,4,70,60,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"Enter k : ";
    cin>>k;
    int ans[n];
    priority_queue<int,vector<int>,greater<int>> pq;

    int x = 0;
    // Best Method
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            ans[x++] = pq.top();
            pq.pop();
        }
    }
    while(pq.size()>0){
        ans[x++] = pq.top();
        pq.pop();
    }
    for(int x : ans) cout<<x<<" ";

    // TC = O(nlogK)
    // SC = O(k)
}