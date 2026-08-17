#include<bits\stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(a==0) return b;
    else gcd(b%a,a);
}

int main(){
    int a;
    int b;
    cout<<"Enter Two Number : ";
    cin>>a>>b;
   cout<<"gcd of "<<a<<" and "<<b<<" is "<<gcd(a,b);
}