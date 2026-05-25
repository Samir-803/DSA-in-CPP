#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Element of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        if(v[arr[i]]==0) v[arr[i]] = 1;
        else if(v[arr[i]]==1){
            cout<<"Dulicate Element is : "<<arr[i];
            break;
        }
    }
}