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
int kthsmallest(int arr[],int si,int ei,int k){ 
    int pi = partition(arr,si,ei);
    if(pi+1==k) return arr[pi];
    else if(pi+1<k)  return kthsmallest(arr,pi+1,ei,k);
    else return kthsmallest(arr,si,pi-1,k);
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
   
   int k;
   cout<<"Which Smallest Number you want to find : ";
   cin>>k;
   
   cout<<kthsmallest(arr,0,n-1,k);
}
// Time Complexity : O(n)