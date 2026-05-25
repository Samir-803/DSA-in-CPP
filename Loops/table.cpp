#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number which table you want to print : ";
    cin>>n;
    for(int i=n;i<=n*10;i=i+n){
        cout<<i<<" ";
    }
    // for(int i=1;i<=10;i++){
    //     cout<<i*n<<" ";
    // }
}