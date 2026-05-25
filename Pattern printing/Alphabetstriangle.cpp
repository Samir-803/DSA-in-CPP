#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of Rows : ";
    cin>>n;
   
    // for(int i=1;i<=r;i++){
    //     for(int j=1;j<=c;j++){
    //         cout<<(char)(j+64)<<" ";
    //     }cout<<endl;
    // }
    //Second way to do this 
   
    for(int i=1;i<=n;i++){
        char ch = 'A';
        for(int j=1;j<=n+1-i;j++){
            cout<<ch<<" ";
            ch++;
        }cout<<endl;
    }

}
