#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        cout<<i;
    }cout<<endl;
 
    int nsp = 1;
    for(int i=1;i<=n-1;i++){
        int a = 1;
        for(int j=1;j<=n-i;j++){
            cout<<a;
            a++;
        }
        for(int k=1;k<=nsp;k++){
            cout<<" ";
            a++;
        }
        for(int x=1;x<=n-i;x++){
            cout<<a;
            a++;
        }
        nsp+=2;
        cout<<endl;
    }
}