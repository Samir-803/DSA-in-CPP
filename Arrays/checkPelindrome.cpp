#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
    cout<<"Enter the Size of Array : ";
    cin>>n;
int arr[n];
    cout<<"Enter the Element of Array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
    bool flag = true;
    for(int i=0,j=n-1;i<=j;i++,j--){
        if(arr[i] != arr[j]) {
            flag = false;
            break;
        }
    }
    if(flag==false) cout<<"This array is not Pelindrome";
    else cout<<"This array is Pelindrome"; 
}