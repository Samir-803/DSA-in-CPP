#include<bits\stdc++.h>
using namespace std;
// Genrate Binary Without Consecutive 1's 
int n = 4 ;
void binary(string s){
    if(s.length()==n){
        cout<<s<<endl;
        return;
    }
    binary(s+'0');
    if(s=="" || s[s.length()-1]=='0') binary(s+'1');
}
int main(){
   binary("");   
}