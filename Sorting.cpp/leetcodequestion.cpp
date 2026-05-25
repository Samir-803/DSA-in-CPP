#include<bits/stdc++.h>
using namespace std;
int main(){
   int arr[] = {20,24,8,14,23,25,16};
   for(int i=0;i<7;i++){    
    cout<<arr[i]<<" "; 
   }cout<<endl;

   vector<int>v(7,0);
   int x=0;
   for(int i=0;i<7;i++){
    int min=INT_MAX;
    int minidx=-1;
    for(int j=0;j<7;j++){
        if(v[j]==1) continue;
        else{
            if(arr[j]<min){
                min = arr[j];
                minidx = j;
            }
        }
    }
    arr[minidx] = x;
    v[minidx] = 1;
    x++;
   }
   for(int ele : arr) cout<<ele<<" ";
}