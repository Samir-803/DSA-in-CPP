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
    int maxSum = INT_MIN;
    int Idx = -1;
    for(int i=0;i<=n-k;i++){
        int sum = 0;
        for(int j=i;j<i+k;j++){
        sum += arr[j];
        }
        if(sum>maxSum){
            maxSum = sum;
            Idx = i;
        }
    }
    cout<<"maxSum of Subarray is "<<maxSum<<" from idex "<<Idx;
}