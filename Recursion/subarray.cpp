#include<bits\stdc++.h>
using namespace std;

void subarray(vector<int> v,int arr[],int idx,int n){
    if(idx==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }cout<<endl;
        return;
    }
    subarray(v,arr,idx+1,n);
    if(v.size()==0 or arr[idx-1]==v[v.size()-1]){
        v.push_back(arr[idx]);
        subarray(v,arr,idx+1,n);
    }
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Element of array : ";
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> v;
    subarray(v,arr,0,n);
}
// Second Method
// for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             for(int k=i;k<=j;k++){
//                cout<<arr[k]<<" ";
//             }
//             cout<<endl;
//         }
//     }