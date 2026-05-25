#include<bits/stdc++.h>
using namespace std;
int main(){
    // First Method
    // string s;
    // cout<<"Enter The String : ";
    // getline(cin,s);
    // int n = s.length();
    // int max = 0;
    // for(int i=0;i<n-1;i++){
    //     int count = 1;
    //     for(int j=i+1;j<n;j++){
    //         if(s[i]==s[j]) count++;
    //     }
    //     if(max<count) max = count;
    // }
    // for(int i=0;i<n-1;i++){
    //     char ch=s[i];
    //     int count = 1;
    //     for(int j=i+1;j<n;j++){
    //         if(s[i]==s[j]) count++;
    //     }
    //     if(max==count) cout<<ch<<" "<<max<<endl;
    // }

    // Second Method
    string s;
    cout<<"Enter The String : ";
    getline(cin,s);
    int n = s.length();
    vector<int> arr(26,0);
    for(int i=0;i<n;i++){
        char ch = s[i];
        int ascii = (int)ch;
        arr[ascii-97]++;
    }
    int max = 0;
    for(int i=0;i<arr.size();i++){
     if(max<arr[i]) max = arr[i];
    }
    for(int i=0;i<26;i++){
    if(arr[i]==max){
        int ascii = i+97;
        cout<<(char)ascii<<" "<<max;
    }
    }
}