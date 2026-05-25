#include<bits/stdc++.h>
#define mod 10000000007
using namespace std;

int f(int n, vector<int>& dp){
    if(n==0) return 1;
    if(dp[n]!=-1) return dp[n];
    int sum = 0;
    for(int i=1;i<=6;i++){
        if(n-i<0) break; 
        sum = (sum%mod + f(n-i, dp)%mod)%mod;
    }
    return dp[n] = sum%mod;
}

int fbu(int n, vector<int>& dp){
    dp[0] = 1;
    for(int k=1;k<=n;k++){
        int sum = 0;
        for(int i=1;i<=6;i++){
            if(k-i<0) break; 
            sum = (sum%mod + dp[k-i]%mod)%mod;
        }
        dp[k] = sum%mod;
    }
    return dp[n];
}

int main(){
    int n; 
    cin>>n;
    vector<int> dp(n+1, -1);
    cout<<"Total Ways to get n is : "<<fbu(n, dp)<<endl;
}