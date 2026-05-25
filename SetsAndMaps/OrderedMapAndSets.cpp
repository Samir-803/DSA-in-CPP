#include<iostream>
#include<set>
#include<map>
using namespace std;

int main(){
    // Ordered Set ans Map always store element in Sorted Order 
    // set<int> s;
    // s.insert(10);
    // s.insert(60);
    // s.insert(50);
    // s.insert(40);
    // s.insert(80);
    // for(auto x : s) cout<<x<<" ";


    // In Map Sorting Depends only On key it not Depends on value
    // map<int,int> m;
    // m[2] = 7;
    // m[1] = 6;
    // m[3] = 4;
    // for(auto x : m) cout<<x.first<<" ";
    // cout<<endl;
    // for(auto x : m) cout<<x.second<<" ";

    // Lexographically Sorted
    map<string,int> m;
    m["samir"]  = 20;
    m["Nik"] = 60;
    m["Smit"] = 40;
    for(auto x : m) cout<<x.first<<" ";
    cout<<endl;
    for(auto x : m) cout<<x.second<<" ";
}