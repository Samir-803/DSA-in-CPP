#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter The String :"<<endl;
    getline(cin,s);
    int n = s.length();
    cout<<s<<endl;
    reverse(s.begin()+n/2,s.end());
    // reverse(s.begin(),s.begin()+n/2);
    cout<<s;
}