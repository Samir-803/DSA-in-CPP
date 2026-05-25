#include<bits\stdc++.h>
using namespace std;

  void substring(string ans,string org,vector<string> &v,bool flag){
    if(org==""){
        v.push_back(ans);
        return;
    }
    char ch = org[0];
    if(org.length()==1){
        if(flag) substring(ans+ch,org.substr(1),v,true);
        substring(ans,org.substr(1),v,true);
        return;
    }
    char dh = org[1];
    if(ch==dh){
        if(flag) substring(ans+ch,org.substr(1),v,true);
        substring(ans,org.substr(1),v,false);
    }
    else{
        if(flag) substring(ans+ch,org.substr(1),v,true);
        substring(ans,org.substr(1),v,true);
    }
  }
int main(){
    string s;
    cout<<"Enter String : ";
    cin>>s;
    sort(s.begin(),s.end());
    vector<string> v;
    substring("",s,v,true);
    for(int i=0;i<v.size();i++) cout<<v[i]<<endl;
}