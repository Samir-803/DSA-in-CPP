#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter The String : "<<endl;
    getline(cin,s);
    s[0] = 'E';
    cout<<s<<endl;
    cout<<s.size()<<endl;  // it doesn't include null char 
    // cout<<s.length();  // same as s.size()
    // string s = "abcd";
    // s.push_back('E');
    // s.push_back('F');
    // cout<<s<<endl;
    // s.pop_back();
    // s.pop_back();
    // cout<<s<<endl;
}