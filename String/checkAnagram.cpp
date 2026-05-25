#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cout<<"Enter The 1st String : ";
    getline(cin,s);
    cout<<"Enter The 2nd String : ";
    getline(cin,t);
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) cout<<"True";
    else cout<<"False";
}