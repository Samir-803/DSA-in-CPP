#include<iostream>
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
    int x;
    cout<<"Enter a Number you Want to find : ";
    cin>>x;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(arr[i]==x) flag = true;
    }
    if(flag==true) cout<<"This Element is Present in Array";
    else cout<<" This Element is Not Present in Array";
}

