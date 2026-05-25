#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        cout<<"* ";
    }cout<<endl;
 
    int nsp=1;
    for(int x=1;x<=n-1;x++){
    for(int i=n-x;i>0;i--){
        cout<<"* ";
    }
    for(int k=1;k<=nsp;k++){
        cout<<"  ";
    }
    nsp+=2;
    
    for(int j=n-x;j>0;j--){
        cout<<"* ";
    }cout<<endl;
}
}