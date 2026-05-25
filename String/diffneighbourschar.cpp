#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter a String : "<<endl;
    getline(cin,s);
    int n = s.size();
    int count = 0;
    for(int i=0;i<=n-1;i++){
    if(i==0){
        if(s[i]!=s[i+1]) count++,i++;
    }
    if(i==n-1){
        if(s[i]!=s[i-1]) count++;
    }
    else{
    if(s[i-1]!=s[i] && s[i+1]!=s[i]) count++;
    }
    } 
    if(n==1) count = 0;
    if(n==2) if(s[1]!=s[0]) count = 1;
    cout<<count;
}