#include<bits/stdc++.h>
using namespace std;
void change(vector<vector<int >>& v){
    v[1][1] = 100;
}
int main(){
    vector<int>v1;
    for(int i=0;i<3;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    vector<int>v2;
    for(int i=0;i<2;i++){
        int x;
        cin>>x;
        v2.push_back(x);
    }
    vector<int>v3;
    for(int i=0;i<1;i++){
        int x;
        cin>>x;
        v3.push_back(x);
    }
    vector<vector<int > >v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    cout<<v[1][1]<<endl;
    change(v);
    cout<<v[1][1];
}