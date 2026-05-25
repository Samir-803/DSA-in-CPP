#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter number of Rows : ";
    cin>>r;
    int c;
    cout<<"Enter number of Colomns : "; 
    cin>>c;

    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cout<<"* ";
        }cout<<endl;
    }

}