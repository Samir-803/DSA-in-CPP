#include<iostream>
#include<climits>
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
    for(int i=0,j=n-1;i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}