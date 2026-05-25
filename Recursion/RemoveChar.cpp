#include<bits/stdc++.h>
using namespace std;
void remove(string ans,string s,char ch,int idx){
   if(idx==s.size()){
    cout<<ans;
    return;
   }
   char c = s[idx];
   if(c==ch) remove(ans,s,ch,idx+1);
   else remove(ans+c,s,ch,idx+1);
}

int main(){
    string s;
    getline(cin,s);
    char ch;
    cout<<"Enter a character you Want to Remove : ";
    cin>>ch;
    remove("",s,ch,0);
}