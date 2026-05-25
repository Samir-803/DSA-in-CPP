#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cout<<"Enter First Number : "; 
    cin>>x;
    int y;
    cout<<"Enter Second Number : ";
    cin>>y;
    cout<<"Min Flip Requied To change x Into y is : "<<__builtin_popcount(x^y);
}