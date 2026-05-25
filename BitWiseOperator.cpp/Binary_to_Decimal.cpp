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
int main(){
    string s = "0100011";
    cout<<binary_to_decimal(s);
}