#include<iostream>
using namespace std;
int main(){
    int a = 10; // a is devidend
    int b=4;    // b is divisor
    int q=a/b;  //q is quotient
    int r;      // r is remainder
    // a = b*q + r;
    r = a - b*q;
    // modulus operator
    // r = a % b;
     cout<<r;
}