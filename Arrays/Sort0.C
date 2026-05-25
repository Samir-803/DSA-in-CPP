#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Element of Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    int j=0;
    while(arr[i]<n and arr[j]<n){
        if(arr[i]==0 and arr[j]!=0){
            if(j>i) swap(arr[i],arr[j]);
            else j++;
        }
        else if(arr[i]!=0) i++;
        else if(arr[j]==0) j++;
    }
}