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
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=n-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=0;i<=n-1;i++){
                cout<<arr[i][j]<<" ";
            }
        }
    }  
}