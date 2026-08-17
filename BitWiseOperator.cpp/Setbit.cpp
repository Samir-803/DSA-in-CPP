// set bit means total number of 1 present in give number's Binary
// for count setbit there is a built in function __builtin_popcount(number)
#include<bits/stdc++.h>
using namespace std;

int setbit(int num){
    string ans = "";
    int count = 0;
    while(num>0){
        if(num%2==0){
            ans = ans + "0";
        }
        else {
        ans = ans + "1";
        count++;
    }
    num /= 2; // num>>1;
    }
    return count;  //  __builtin_popcount(number)
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"set bit of this number is : "<<setbit(num);
}