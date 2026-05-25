#include<bits/stdc++.h>
using namespace std;

string decimal_to_binary(int num){
string s = "";
while(num>0){
    if(num%2==0) s += "0";
    else s += "1";
    num = num >> 1; // num /= 2
}
reverse(s.begin(),s.end());
return s;
}

int setbit(int num){
   int temp;
   while(num>0){
       temp = num;
       num = (num)&(num-1);
   }
   return temp;
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"Max Power Smaller that num is : "<<setbit(num)<<endl<<" whose binary is : "<<decimal_to_binary(setbit(num));
}