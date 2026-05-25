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
    for(int i=1;i<n;i++){
    int j = i;
    while(j>=1 and arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
        j--;
    }
   }
   for(int ele : arr){
    cout<<ele<<" ";
   }
}
// Best Case Time Complexity : O(n)
// Worse Case Time Complexity : O(n^2)