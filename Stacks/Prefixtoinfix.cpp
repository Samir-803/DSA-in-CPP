#include<bits/stdc++.h>
using namespace std;

// Prefix to Infix
// string solve(string a,string b,char op){
//     string ans = "";
//     ans += a;
//     ans.push_back(op);
//     ans += b;
//     return ans;
// }

// int main(){
//     string s = "-/*+79483";
//     stack<string>val;
//     for(int i=s.length()-1;i>=0;i--){
//         if(s[i]>=48 && s[i]<=57)  val.push(to_string(s[i]-48));
//         else{
//             string val1 = val.top();
//             val.pop();
//             string val2 = val.top();
//             val.pop();
//             string ans = solve(val1,val2,s[i]);
//             val.push(ans); 
//         }     
//     }
//         cout<<val.top()<<endl;
//     }

// Prefix to Postfix
string solve(string a,string b,char op){
string ans = "";
ans += a;
ans += b;
ans.push_back(op);
return ans;
}

int main(){
    string s = "-/*+79483";
    stack<string>val;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]>=48 && s[i]<=57)  val.push(to_string(s[i]-48));
        else{
            string val1 = val.top();
            val.pop();
            string val2 = val.top();
            val.pop();
            string ans = solve(val1,val2,s[i]);
            val.push(ans); 
        }     
    }
        cout<<val.top()<<endl;
    }
