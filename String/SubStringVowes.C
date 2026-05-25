#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter The String :"<<endl;
    getline(cin,s);
    int n = s.length();
    int count = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u') count++;
        else{
            ans += count*(count+1)/2;
            count = 0;
        }  
    }
    ans += count*(count+1)/2;
    cout<<ans; 
}