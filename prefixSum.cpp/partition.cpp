#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,5,6,10,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    //make pefixsum
    for(int i=1;i<n;i++) arr[i] += arr[i-1];

    //check partition
    bool flag = false;
    int idx;
    for(int i=0;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            flag = true;
            idx = i;
            break;
        }
    }
    if(flag){
        cout<<"in "<<idx<<" idex it can be partitioned in an equal sum both side";
    }
    else cout<<"It can't be partitioned";
}