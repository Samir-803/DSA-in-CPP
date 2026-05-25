#include<iostream>
using namespace std;
int main(){
    
    int r1;
    cout<<"Enter the No of Rows of  Metix : ";
    cin>>r1;
    int c1;
    cout<<"Enter the No of Colomns of  Metix : ";
    cin>>c1; 
    int arr[r1][c1];
    cout<<"Enter The Element of  Metix : "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>arr[i][j];
        }
    }
    int minr=0;
    int maxr=r1-1;
    int minc=0;
    int maxc=c1-1;
    int count = 0;
    int n = r1*c1;
    while(count<n){
    for(int i=minc;i<=maxc && count<n;i++){
        cout<<arr[minr][i]<<" ";
        count++;
    }
    minr++;  
    for(int i=minr;i<=maxr && count<n;i++){
        cout<<arr[i][maxc]<<" ";
        count++;
    }
    maxc--; 
    for(int i=maxc;i>=minc && count<n;i--){
        cout<<arr[maxr][i]<<" ";
        count++;
    }
    maxr--; 
    for(int i=maxr;i>=minr && count<n;i--){
        cout<<arr[i][minc]<<" ";
        count++;
    }
    minc++; 
}   
}