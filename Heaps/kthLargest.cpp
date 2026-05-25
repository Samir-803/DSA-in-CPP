#include<iostream>
#include<queue>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Size of array : ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int k;
    cout<<"Enter Which Samllest number You want to Find : ";
    cin>>k;
    priority_queue<int,vector<int>,greater<int>> pq;

    // Best Method
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<k<<" Largest number is : "<<pq.top();

    // TC = O(nlogK)
    // SC = O(k)
}