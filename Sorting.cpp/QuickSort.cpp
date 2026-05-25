#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int si,int ei){
    int count = 0;
    for(int i=si+1;i<=ei;i++){
    if(arr[si]>=arr[i])  count++;
    }
    int pivotIndex = si + count;
    swap(arr[si],arr[pivotIndex]);
    int i = si , j = ei ;
    while(i<pivotIndex && j>pivotIndex){
     if(arr[i]<=arr[pivotIndex]) i++;
     if(arr[j]>arr[pivotIndex]) j--;
     else if(arr[i]>arr[pivotIndex] && arr[j]<arr[pivotIndex]){
        swap(arr[i],arr[j]);
        i++;
        j--;
     }
    }
    return pivotIndex;
}

void quicksort(int arr[],int si,int ei){
    if(si>=ei) return;
    int pi = partition(arr,si,ei);
    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);
}

int main(){
   int n;
   cout<<"Enter the Size of Array : ";
   cin>>n;
   int arr[n];
   cout<<"Enter the element of Array : ";
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   for(int i=0;i<n;i++) cout<<arr[i]<<" ";
   cout<<endl;
   quicksort(arr,0,n-1);
   for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
// Time Complexity : O(nlogn)
// Worse Case : O(n^2)