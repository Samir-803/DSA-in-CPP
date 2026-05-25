#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter a Number String : ";
    getline(cin,s);
    char max1 = '!',max2 = '!';
    for(int i=0;i<s.size();i++){
        if(max1<s[i]){
            max2 = max1;
            max1 = s[i];
        }
        else if(max2<s[i] && s[i] != max1) max2 = s[i];
    }
    if(max2=='!') cout<<"No Second Largest Element";
    else cout<<"Second Largest Element is "<<max2;
}