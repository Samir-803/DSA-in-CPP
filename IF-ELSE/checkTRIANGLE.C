#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter 1st Side : ";
    cin>>a;
     int b;
    cout<<"Enter 2nd Side : ";
    cin>>b;
     int c;
    cout<<"Enter 3rd Side : ";
    cin>>c;

    if(a+b>c && b+c>a && c+a>b) cout<<a<<","<<b<<","<<c<<" Can Make Triangle";
    else cout<<"This Sides Can not Make Triangle";
}