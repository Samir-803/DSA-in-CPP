#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Size of Array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the Element of Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int idx = -1;   
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            idx = i;
            break;
        }    
    }   

    if(idx==-1){
        cout<<"NO Next Permutation";
        return 0; 
    }

    int i=idx+1;
    int x=n-1;
    while(i<x){
        int temp = arr[i];
        arr[i] = arr[x];
        arr[x] = temp;
        i++;
        x--;
    }

   // finding just greater element then idx

   int j=-1;
   for(int i=idx+1;i<n;i++){
    if(arr[i]>arr[idx]){
        j = i;
        break;
    }
   }

   int temp = arr[idx];
   arr[idx] = arr[j];
   arr[j] = temp;
    
   for(int i=0;i<n;i++){
   cout<<arr[i]<<" "; 
   }
   
   return 0;
}