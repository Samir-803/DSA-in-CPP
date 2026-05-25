#include<bits/stdc++.h>
// #include<string>
using namespace std;
int main(){
    // string str = "my name is Levi Ackerman";
    int n;
    cin>>n;
    string str;
    //Input in String
    // cin>>str;
    //if we took Input by cin then after space it doesn't print anything it will stop
    //for that we use getline(cin,str) for taking input in string
    getline(cin,str);
    cout<<n*2<<endl<<str;
}