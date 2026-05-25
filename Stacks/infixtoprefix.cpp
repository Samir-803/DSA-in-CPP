#include<bits/stdc++.h>
using namespace std;

int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}

string solve(string a,string b,char op){
    // prefix Evaluation = op val1 val2
   string ans = "";
   ans.push_back(op);
   ans += a;
   ans += b;
   return ans;
}

int main(){
    string s = "(7+9)*4/8-3";
    stack<string>val;
    stack<char>op;
    for(int i=0;i<s.size();i++){
        if(s[i]>=48 && s[i]<=57)  val.push(to_string(s[i]-48));
        else{
            if(op.size()==0 || s[i]=='(' || op.top()=='(') op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                string val2 = val.top();
                val.pop();
                string val1 = val.top();
                val.pop();
                char opr = op.top();
                op.pop();
                string ans = solve(val1,val2,opr);
                val.push(ans);    
                }
                op.pop();   
            }
            else if(priority(s[i])>priority(op.top())) op.push(s[i]);
            else{
                while(op.size()>0 && priority(s[i])<=priority(op.top())){
                string val2 = val.top();
                val.pop();
                string val1 = val.top();
                val.pop();
                char opr = op.top();
                op.pop();
                string ans = solve(val1,val2,opr);
                val.push(ans);
                }
                op.push(s[i]); 
            }
        }
    }
    while(op.size()>0){
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        char opr = op.top();
        op.pop();
        string ans = solve(val1,val2,opr);
        val.push(ans);
        }
        cout<<val.top()<<endl;
    }