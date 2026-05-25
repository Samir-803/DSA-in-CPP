#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Element of Array : ";
    for(int i=0;i<n;i++) cin>>arr[i];
    int k;
    cout<<"Enter the Size of Subarray : ";
    cin>>k;
    
    int i = 0;
    int j = k;
    int sum = 0;
    int Idx = -1;
    int maxSum = INT_MIN;
    for(int i=0;i<k;i++) sum += arr[i];
    while(j<n){
     sum = sum - arr[i] + arr[j];
     i++;
     j++;
     if(sum>maxSum){
            maxSum = sum;
            Idx = i;
        }
    }
    cout<<"maxSum of Subarray is "<<maxSum<<" from idex "<<Idx;
}