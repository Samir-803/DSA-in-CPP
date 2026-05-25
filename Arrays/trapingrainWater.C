#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Element of Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //previous greatest element 
    int prev[n];
    prev[0] = -1;
    int max =  arr[0];
    for(int i=1;i<n;i++){
        prev[i] = max;
        if(arr[i]>max) max = arr[i];
    }
    //next greatest element 
    int next[n];
    next[n-1] = -1;
    max =  arr[n-1];
    for(int i=n-2;i>=0;i--){
        next[i] = max;
        if(arr[i]>max) max = arr[i];
    }

    // int crr[n];
    // for(int i=0;i<n;i++){
    //     crr[i] = min(prev[i],next[i]);
    // }
    for(int i=0;i<n;i++){
        prev[i] = min(prev[i],next[i]);
    }
    int water = 0; 
    for(int i=1;i<n-1;i++){
    if(arr[i]<prev[i]) water += prev[i] - arr[i]; 
    }
    cout<<water;
    return 0;
}