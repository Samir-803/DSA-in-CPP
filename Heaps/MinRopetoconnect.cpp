#include<iostream>
#include<queue>
using namespace std;

int main(){
    int arr[] = {6,5,3,2,8,10,9};
    int n = sizeof(arr)/sizeof(arr[0]); 
    priority_queue<int,vector<int>,greater<int>> pq;

    // Best Method
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }   
    
    int cost = 0;
    while(pq.size()>1){
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        cost += x + y;
        pq.push(x+y);
    }
    cout<<cost<<endl;
}