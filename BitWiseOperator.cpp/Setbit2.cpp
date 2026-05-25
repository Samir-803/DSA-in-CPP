// set bit means total number of 1 present in give number's Binary
// for count setbit there is a built in function __builtin_popcount(number)
#include<bits/stdc++.h>
using namespace std;

// Most Efficient Method
int setbit(int num){
    int count = 0;
    while(num>0){
    num = (num)&(num-1);
    count++;
   }
   return count;
}

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"set bit of this number is : "<<setbit(num);
}