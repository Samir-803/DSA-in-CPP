#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter The String : ";
    getline(cin,s);
    stringstream ss(s);
    string temp;
    vector<string>v;
    while(ss>>temp){
    v.push_back(temp);  
    }
    sort(v.begin(),v.end());
    int max = 1;
    int count = 1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1])  count++;
        else count = 1;
        if(max<count) max = count;
    }
    count = 1;
     for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1])  count++;
        else count = 1;
        if(count==max) cout<<v[i]<<" "<<max;
    }
    }