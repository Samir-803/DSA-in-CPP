#include<bits/stdc++.h>
using namespace std;
// Remember This !!! 
int main(){
    string s;
    cout<<"Enter The String : ";
    getline(cin,s);
    stringstream ss(s);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
}