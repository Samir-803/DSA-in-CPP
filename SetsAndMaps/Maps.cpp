#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    // One Type of STL
    // pair<string,int>p;
    // p.first = "Samir";
    // p.second = 28;
    // cout<<p.first<<" "<<p.second<<endl;

    unordered_map<string,int> m;
    pair<string,int> p1;
    p1.first = "Samir";
    p1.second = 41;
    m.insert(p1);
    pair<string,int> p2;
    p2.first = "Nik";
    p2.second = 42;
    m.insert(p2);
    pair<string,int> p3;
    p3.first = "Smit";
    p3.second = 43;
    m.insert(p3);

    // for(pair<string,int> p : m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }

    m["Samir"] = 41;
    m["Nik"] = 42;
    m["Smit"] = 43;
    cout<<m.size()<<endl;
    
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    m.erase("Samir");

    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
}