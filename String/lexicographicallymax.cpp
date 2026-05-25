#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter a String : ";
    getline(cin,s);
    stringstream ss(s);
    string temp;
    vector<string>v;
    while(ss>>temp){
    v.push_back(temp);
}
 string max = v[0];
 for(int i=0;i<v.size();i++){
  if(max<v[i]) max = v[i];
 }
 cout<<max;
}