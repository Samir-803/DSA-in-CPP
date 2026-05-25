#include<iostream>
using namespace std;
int main(){
    
  int n;
    cout<<"Enter the No of Rows/Colomn of Metix : ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter The Element of  Metix : ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //Using Extra Array
    // int transpoce[c1][r1];
    // for(int i=0;i<c1;i++){
    //     for(int j=0;j<r1;j++){
    //         transpoce[i][j] = arr[j][i];
    //     }
    // }   
    // for(int i=0;i<c1;i++){
    //     for(int j=0;j<r1;j++){
    //         cout<<transpoce[i][j]<<" ";
    //     }cout<<endl;
    // }

    //Without Using Extra Array
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int k=0;k<n;k++){
        int i=0;
        int j=n-1;
        while(i<=j){
        int temp = arr[k][i];
        arr[k][i] = arr[k][j];
        arr[k][j] = temp;
        i++;
        j--;
        }  
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
}