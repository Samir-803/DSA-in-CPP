#include<bits\stdc++.h>
using namespace std;
int main(){
    int arr[]  = {1,5,4,8,9,3,2,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    while(i<n){
        int idx = arr[i] - 1;
        if(i==idx) i++;
        else swap(arr[i],arr[idx]);
    }
    for(int ele : arr){
     cout<<ele<<" ";
    }
}