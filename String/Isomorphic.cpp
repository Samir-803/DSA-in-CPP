#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "dcfc";
    string t = "baba";
    if(s.size()!=t.size()){
        cout<<"False";
        return 0;
    }

    // by s perspective
//    vector<int> v(150,150);
//    for(int i=0;i<s.size();i++){
//     int idx = (int)s[i];
//     if(v[idx]==150) v[idx] = s[i] - t[i];
//     else if(v[idx]!=(s[i]-t[i])){
//         cout<<"False";
//         return 0;
//     }
//    }
    // by t perspective
    bool flag = false;
    vector<int> v(150,1000); 
    for(int i=0;i<s.size();i++){
        int idx = (int)t[i];
        if(v[idx]==1000) v[idx] = t[i] - s[i];
        else if(v[idx]!=(t[i] - s[i])){
           flag = true;
           break;
        }
    }
    if(flag) cout<<"False";
    else cout<<"True";
}