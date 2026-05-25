#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Size of Array : ";
    cin>>n;

    vector<int>arr(n);

    cout<<"Enter the Element of Array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int j=0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}