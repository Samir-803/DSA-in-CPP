#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "ABCDEFGHI";
    int length = s.length();
    cout<<s<<endl;
    // reverse(s.begin(),s.end());
    // cout<<s<<endl;
    // reverse(s.begin()+1,s.begin()+5); 
    reverse(s.begin()+1,s.end()-4);
    cout<<s<<endl;
}