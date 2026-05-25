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
  
   int i = 0;
   int j = n-1;
   while(i<j){
    if(arr[i]==0) i++;
    if(arr[j]==1) j--;
    if(arr[j]==0 && arr[i]==1){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
   }

   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
}