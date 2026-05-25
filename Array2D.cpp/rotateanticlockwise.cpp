#include<iostream>
using namespace std;
int main(){ 
  int n;
    cout<<"Enter the No of Rows/Colomn of First Metix : ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter The Element of Metix : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //transpoce of metix 
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
           int temp = arr[i][j];
           arr[i][j] = arr[j][i];
           arr[j][i] = temp;
        }
    }
    //rotate anticlockwise 
    int s = 0;
    int l = n-1;
    while(s<=l){
        for(int i=0;i<n;i++){
            int temp = arr[s][i];
            arr[s][i] = arr[l][i];
            arr[l][i] = temp;
        }
        s++;
        l--;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
}