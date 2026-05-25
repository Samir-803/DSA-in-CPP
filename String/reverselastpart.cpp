#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter The String :"<<endl;
    getline(cin,s);
    int n = s.length();
    cout<<s<<endl; 
    s = s.substr(n/2);
    reverse(s.begin(),s.end());
    cout<<s;
}