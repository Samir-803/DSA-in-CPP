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

int main(){
    int num = 13;
    cout<<decimal_to_binary(num);
}