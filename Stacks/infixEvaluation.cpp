#include<bits/stdc++.h>
using namespace std;


int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}

int solve(int a,int b,char op){
    if(op=='+') return a+b;
    else if(op=='-') return a-b;
    else if(op=='*') return a*b;
    else return a/b;
}

int main(){
    string s = "9+4*4/2-2";
    stack<int>val;
    stack<char>op;
    for(int i=0;i<s.size();i++){
        if(s[i]>=48 && s[i]<=57)  val.push(s[i]-48);
        else{
            if(op.size()==0 || priority(s[i])>priority(op.top())) op.push(s[i]);
            else{
                while(op.size()>0 && priority(s[i])<=priority(op.top())){
                int val2 = val.top();
                val.pop();
                int val1 = val.top();
                val.pop();
                char opr = op.top();
                op.pop();
                int ans = solve(val1,val2,opr);
                val.push(ans);
                }
                op.push(s[i]); 
            }
        }
    }
    while(op.size()>0){
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        char opr = op.top();
        op.pop();
        int ans = solve(val1,val2,opr);
        val.push(ans);
        }
        cout<<val.top()<<endl;
        cout<<9+4*4/2-2;
    }