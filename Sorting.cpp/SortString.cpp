#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   string ss = "";
   getline(cin,s);
   for(int i=0;i<s.size();i++){
   if(s[i]>='x') ss.push_back(s[i]);
   }
   
   // bubble Sort
   for(int i=0;i<ss.size();i++){
    bool flag = true;
    for(int j=0;j<ss.size()-1-i;j++){
    if(ss[j]>ss[j+1]) {
        swap(ss[j],ss[j+1]);
        flag = false ;
    }
}
    if(flag == true) break;//pehle se hi sorted hai !! 
}
  cout<<ss;   
}