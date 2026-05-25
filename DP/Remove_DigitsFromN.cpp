#include<bits/stdc++.h>
using namespace std;

vector<int> get(int n){
    vector<int> res;
    while(n>0){
        if(n%10 != 0){
           res.push_back(n%10); 
        }
        n = n/10;
    }
    return res;
}

int ftd(int n, vector<int>& dp){
    if(n==0) return 0;
    if(n<=9) return 1;
    if(dp[n]!=-1) return dp[n];
    int result = INT_MAX;
    vector<int> digit = get(n);
    for(int i=0;i<digit.size();i++) result = min(ftd(n-digit[i], dp), result);
    return dp[n] = 1 + result;
}

int main(){
    int num;
    cin>>num;
    // Bottom  up
    vector<int> dp(num+1, -1);
    dp[0] = 0;
    for(int i=1;i<=9;i++) dp[i] = 1;  
    for(int n=10;n<=num;n++){
        int res = INT_MAX;    
        vector<int> digit = get(n);
        for(int i=0;i<digit.size();i++) res = min(dp[n-digit[i]], res);   
        dp[n] = 1 + res;
    }
    cout<<dp[num]<<endl;
}