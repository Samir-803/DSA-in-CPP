#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Element of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    int s = (n-1)*(n)/2;
    cout<<"Dulicate Element is : "<<(sum-s);
}