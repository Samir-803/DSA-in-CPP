#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter The String : ";
    getline(cin,s);
    int n = s.length();
    sort(s.begin(),s.end());// it's sort String according to ASCII value
    cout<<s;
}