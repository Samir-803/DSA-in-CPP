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
    cout<<"Enter The Element of First Metix : ";
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
    cout<<"Enter The Element of Second Metix : ";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>brr[i][j];
        }
    }   
    if(r1!=r2 || c1!=c2){
        cout<<"Sum is not Possible";
        return 0;
    }
    else{
        int res[r1][c1];
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                res[i][j] = arr[i][j] + brr[i][j];
            }
        }
        for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<res[i][j]<<" ";
        }cout<<endl;
    }   
    }
}