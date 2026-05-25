#include<bits/stdc++.h>
using namespace std;
int printmax(int arr[],int i,int n){
   if(i==n) return INT_MIN;
   return max(arr[i],printmax(arr,i+1,n));
}

int main(){
    int n;
    cout<<"Enter the Size of Array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the Element of Array : ";
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<printmax(a,0,n);
}