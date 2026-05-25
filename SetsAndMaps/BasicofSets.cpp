#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    // if you insert any element that already exists so it will not count it by 2 
    // it will only count only 1 like maths sets
    s.insert(1);
    s.insert(2);
    s.insert(3);
    cout<<s.size()<<endl;
    s.erase(6);

    for(int x : s) cout<<x<<" ";
    cout<<"\n";
    // to find any element in sets
    int target = 40;
    if(s.find(target)!=s.end()) cout<<"Exist"<<endl;
    else cout<<"Does Not Exist"<<endl;
}