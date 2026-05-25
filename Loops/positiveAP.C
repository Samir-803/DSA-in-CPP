#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter first number of your AP : ";
    cin>>n;
    int d;
    cout<<"enter common difference of your AP : ";
    cin>>d;
    for(int i=n;i>0;i=i-d){
        cout<<i<<" ";
    }
}