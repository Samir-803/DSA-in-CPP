#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number till you want to print GP : ";
    cin>>n;
    int a;
    cout<<"enter first number of your GP : ";
    cin>>a;
    int r;
    cout<<"enter common ratio of your GP : ";
    cin>>r;
    
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a=a*r;
    }
    
}