#include<bits/stdc++.h>
using namespace std;
int flip(int n){
    int temp = n;
    temp = temp|temp>>1;
    temp = temp|temp>>2;
    temp = temp|temp>>4;
    temp = temp|temp>>8;
    temp = temp|temp>>16;
    return n^temp;

    /* int temp = num;
    int temp2 = num;
    while(num>0){
       temp = num;
       num = (num)&(num-1);
    }
    temp = temp<<1;
    temp = temp - 1;
    return temp2^temp;*/
}
int main(){
    int n;
    cout<<"Enter Number Whose Binary you Want to Flip : ";
    cin>>n;
    cout<<flip(n);
}