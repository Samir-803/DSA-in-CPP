#include<iostream>
using namespace std;
int main(){ 
  int n;
    cout<<"Enter the No of Rows/Colomn of First Metix : ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter The Element of First Metix : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    } 
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }  
}