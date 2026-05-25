#include<bits/stdc++.h>
using namespace std;

int binary_to_decimal(string s){
int result = 0;
int num;
for(int i=0;i<s.size();i++){
    num = s[i] - '0';
   result += num*(pow(2,s.size()-1-i)); // num*(1<<(s.size()-1-i));
}
return result;
}

int flip(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]=='0') s[i]='1';
        else s[i]='0';
    }
   return binary_to_decimal(s);
}
int decimal_to_binary(int num){
string s = "";
while(num>0){
    if(num%2==0) s += "0";
    else s += "1";
    num = num >> 1; // num /= 2
}
reverse(s.begin(),s.end());
return flip(s);
}

int main(){
    int n;
    cout<<"Give a Number Whose Binary you Want to flip : ";
    cin>>n;
    cout<<"Number After Fip Binary is : "<<decimal_to_binary(n);
}