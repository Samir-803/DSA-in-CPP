#include<iostream>
using namespace std;
int main(){ 
   int r1;
    cout<<"Enter the No of Rows of First Metix : ";
    cin>>r1;
    int c1;
    cout<<"Enter the No of Colomns of First Metix : ";
    cin>>c1; 
    int arr[r1][c1];
    cout<<"Enter The Element of First Metix :"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>arr[i][j];
        }
    }   
    int r2;
    cout<<"Enter the No of Rows of Second Metix : ";
    cin>>r2;
    int c2;
    cout<<"Enter the No of Colomns of Second Metix : ";
    cin>>c2; 
    int brr[r2][c2];
    cout<<"Enter The Element of Second Metix :"<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>brr[i][j];
        }
    }
    if(r2!=c1){
        cout<<"Multiplication Not Possible";
        return 0;
    }
    int res[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            res[i][j] = 0;
            for(int k=0;k<c1;k++){
                res[i][j] += arr[i][k]*brr[k][j];
            }
        }
    }  
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<res[i][j]<<" ";
        }cout<<endl;
    } 
}