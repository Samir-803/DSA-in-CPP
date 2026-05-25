#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[8] = {1,2,5,3,9,4,3,12};

    // with extra array
    // int prefix[8];
    // prefix[0] = arr[0];
    // for(int i=1;i<8;i++) prefix[i] = prefix[i-1] + arr[i];
    // for(int ele : prefix) cout<<ele<<" "; 

    //without extra array
    for(int i=1;i<8;i++) arr[i] = arr[i] + arr[i-1];
    for(int ele : arr) cout<<ele<<" ";
}