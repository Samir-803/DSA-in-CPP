#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter The String :"<<endl;
    getline(cin,s);
    int n = s.length();
    cout<<s<<endl; 
    cout<<s.substr(n/2)<<endl;
    cout<<s.substr(n/2,2); // 2 means 2 length ki string leni hai n/2 ke bad
}
