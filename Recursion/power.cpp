#include<bits/stdc++.h>
using namespace std;
int pow(int a,int b){
    // if(b==0) return 1.0;
    // return a*pow(a,b-1);
    if(b==0) return 1;
    if(b==1) return a;
    int ans = pow(a,b/2);
    if(b%2==0) return ans*ans; 
    else return ans*ans*a; 
}

int main(){
    int a,b;
    cout<<"Enter Base : ";
    cin>>a;
    cout<<"Enter Power : ";
    cin>>b;
    int x = pow(a,b);
    cout<<x;
}