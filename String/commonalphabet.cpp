#include<bits/stdc++.h>
using namespace std;
int main(){
    string arr[] = {"black","blow","block"};
    vector<string>v;
    for(int i=0;i<3;i++){
        v.push_back(arr[i]);
    } 
    sort(v.begin(),v.end());
    string first = v[0];
    string last = v[v.size()-1];
    string s = "";
    for(int i=0;i<min(first.size(),last.size());i++){
    if(first[i]==last[i]) s += first[i];
    else break;
    }
    cout<<s;
}