#include<bits/stdc++.h>
using namespace std;
int main(){
    // string arr[] = {"00123","0125","5412","4526","000325478"};
    // int max = stoi(arr[0]);
    // string maxS;
    // for(int i=0;i<5;i++){
    //     int x = stoi(arr[i]);
    //     if(max<x) max = x,maxS = arr[i];
    // }
    // cout<<maxS;
    /// long long max = stoll(arr[0]);

    // convert string to int without stoi
    string s;
    cout<<"Enter number string : ";
    getline(cin,s);
    int product = 1;
    int no = 0;
    for(int i=s.size()-1;i>=0;i--){
    no += (s[i]-'0')*product;
    product *= 10;
    }
    cout<<no;
}