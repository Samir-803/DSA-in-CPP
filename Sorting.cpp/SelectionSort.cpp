#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cout<<"Enter the Size of Array : ";
   cin>>n;
   int arr[n];
   cout<<"Enter the element of Array : ";
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   for(int i=0;i<n-1;i++){
    int min = INT_MAX;
    int midx = -1;
    for(int j=i;j<n;j++){
        if(arr[j]<min){
            min = arr[j];
            midx = j;
        }
    }
    swap(arr[midx],arr[i]);
   }
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
}
// Best Case Time Complexity : O(n)
// Worse Case Time Complexity : O(n^2)