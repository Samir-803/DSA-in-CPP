#include<bits/stdc++.h>
using namespace std;
int path(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return path(n-1) + path(n-2);
}

int main(){
    int n;
    cout<<"Enter the number of Stair : ";
    cin>>n;
    cout<<path(n);
}