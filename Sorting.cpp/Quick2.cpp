#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int si,int ei){
    int count = 0;
    int pivotElement = arr[(si+ei)/2];
    for(int i=si;i<=ei;i++){
    if(i==(si+ei)/2) continue;
    if(pivotElement>=arr[i])  count++;
    }
    int pivotIndex = si + count;
    swap(pivotElement,arr[pivotIndex]);
    int i = si , j = ei ;
    while(i<pivotIndex && j>pivotIndex){
     if(arr[i]<=pivotElement) i++;
     if(arr[j]>pivotElement) j--;
     else if(arr[i]>pivotElement && arr[j]<pivotElement){
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
// Space Complexity : O(logn)