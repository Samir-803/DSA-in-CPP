#include<bits/stdc++.h>
using namespace std;
// void permutation(string ans,string s){
//     if(s==""){
//         cout<<ans<<endl;
//     }
//     for(int i=0;i<s.size();i++){
//         char ch = s[i];
//         string right = s.substr(0,i);
//         string left = s.substr(i+1);
//         permutation(ans+ch,right+left);
//     }
// }

    void Ans(vector<string>&fans,string ans,string s,int n){
        if(s==""){
            fans.push_back(ans);
            return;
        }
        for(int i=0;i<s.size();i++){
        char ch = s[i];
        string right = s.substr(0,i);
        string left = s.substr(i+1);
        Ans(fans,ans+ch,right+left,n);
    }
    }

    string getPermutation(int n, int k){
    string s = "";
    for(int i=0;i<n;i++){
       s += to_string(i+1);  
    }
    vector<string>fans;
    Ans(fans,"",s,n);
    return fans[k-1];
    }

int main(){
    cout<<getPermutation(4,3);
}