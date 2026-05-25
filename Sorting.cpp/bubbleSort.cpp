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
// Kharab bubble Sort
//    for(int i=0;i<n;i++){
//     for(int j=0;j<=n-1-i;j++){
//     if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
//     }
//    }

//Optimise bubble sort
for(int i=0;i<n;i++){
    bool flag = true;
    for(int j=0;j<=n-1-i;j++){
    if(arr[j]>arr[j+1]) {
        swap(arr[j],arr[j+1]);
        flag = false ;
    }
}
    if(flag == true) break;//pehle se hi sorted hai !! 
}
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
}
// Best Case Time Complexity : O(n)
// Worse Case Time Complexity : O(n^2)