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
    // First Method 
    // int max = arr[0];
    // for(int i=0;i<n;i++){
    //     if(arr[i]>max) max = arr[i];
    // }
    //  int sl = INT_MIN;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>sl && arr[i]!=max) sl = arr[i];
    // }

    // Second Method
    int max1 = INT_MIN,max2 = INT_MIN;

    for(int i=0;i<n;i++){
        if(max1<arr[i]){
            max2 = max1;
            max1 = arr[i];
        }
        else if(max2<arr[i] && max1!=arr[i]) max2 = arr[i];
    }
    cout<<"Second Largest Element is : "<<max2;
}