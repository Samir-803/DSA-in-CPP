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
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max) max = arr[i];
    }
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min) min = arr[i];
    }
    cout<<"Max And Min Element is "<<max<<" "<<min;
}