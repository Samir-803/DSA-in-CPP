#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int i,int n){
   if(i==n) return;
   cout<<arr[i]<<" ";
   print(arr,i+1,n);
}
int main(){
    int n;
    cout<<"Enter the Size of Array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the Element of Array : ";
    for(int i=0;i<n;i++) cin>>a[i];
    int i=0;
    print(a,i,n); 
}