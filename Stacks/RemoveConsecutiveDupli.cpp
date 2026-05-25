#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

string isbalanced(string s){
    stack<char>st;
    st.push(s[0]);
    for(int i=1;i<s.size();i++){
        if(st.top()==s[i]) continue;
        else st.push(s[i]);
    }
    string ans = "";
    while(st.size()>0){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    string s = "aaabcbbbbccccdddaaaeee";
    cout<<isbalanced(s);
}