#include<bits/stdc++.h>
using namespace std;
void generate(string s,int open,int close,int n){
    if(s.size()==2*n){
       cout<<s<<endl;
       return;
    }
      if(open<n) generate(s+'(',open+1,close,n);
      if(close<open) generate(s+')',open,close+1,n);
}
int main(){
    int n;
    cout<<"Enter the no of Pairs of Parentheses : ";
    cin>>n;
    generate("",0,0,n);
}