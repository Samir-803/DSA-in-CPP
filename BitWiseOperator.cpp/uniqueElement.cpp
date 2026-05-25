#include<bits/stdc++.h>
using namespace std;
// XOR is Comutative
int main(){
    int arr[] = {1,2,3,6,5,1,3,2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = 0;
    for(int i=0;i<n;i++){
       res = res^arr[i];
    }
    cout<<"Unique Element is : "<<res;
}