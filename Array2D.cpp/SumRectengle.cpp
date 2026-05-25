#include<iostream>
using namespace std;
int main(){
    
    int r;
    cout<<"Enter the No of Rows of Metix : ";
    cin>>r;
    int c1;
    cout<<"Enter the No of Colomns of Metix : ";
    cin>>c1; 
    int arr[r][c1];
    cout<<"Enter The Element of Metix : "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c1;j++){
            cin>>arr[i][j];
        }
    } 
    int l1,r1,l2,r2;
    cout<<"Enter First Coordinate : ";
    cin>>l1;
    cin>>r1;
    cout<<"Enter Second Coordinate : ";
    cin>>l2;
    cin>>r2;
    int sum = 0;
    for(int i=min(l1,l2);i<=max(l1,l2);i++){
        for(int j=min(r1,r2);j<=max(r1,r2);j++){
            sum += arr[i][j];
        }
    } 
    cout<<"Sum Of That Rectengle Part is : "<<sum; 
}