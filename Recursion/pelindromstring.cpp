#include<bits\stdc++.h>
using namespace std;
bool ispelindrom(string s,int i,int j){
    if(i>j) return true;
    if(s[i]==s[j]) ispelindrom(s,i+1,j-1);
    else return false;
}
int main(){
    string s;
    cout<<"Enter a String : ";
    getline(cin,s);

    if(ispelindrom(s,0,s.length()-1)) cout<<"True";
    else cout<<"False";
}