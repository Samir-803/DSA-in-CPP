#include<bits/stdc++.h>
using namespace std;

int f2(int n, vector<int>& coins, vector<int>& dp){
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    int res = INT_MAX;
    for(int i=0;i<coins.size();i++){
        if(n-coins[i]<0) continue; 
        res = min(res, f2(n-coins[i], coins, dp));
    }
    if(res==INT_MAX) dp[n] = INT_MAX;
    return dp[n] = 1 + res;
}

int f(int idx, int tar, vector<int>& coins, vector<vector<int>>& dp){
    if(idx==0){
        if(tar%coins[0]==0) return tar/coins[0];
        else return 1e9;
    }
    if(dp[idx][tar] != -1) return dp[idx][tar];
    int unpick = 0 + f(idx-1, tar, coins, dp);
    int pick = INT_MAX;
    // If we Have Infinite Supply of Something Then in Pick Part we don't change our Idex
    if(coins[idx]<=tar) pick = 1 + f(idx, tar-coins[idx], coins, dp);
    return dp[idx][tar] = min(pick, unpick);
}

int tab(int tar, vector<int>& coins){
    int n = coins.size();
    vector<vector<int>> dp(n, vector<int>(tar+1, -1));
    for(int i=0;i<=tar;i++){
        if(i%coins[0] == 0) dp[0][i] = i/coins[0];
        else dp[0][i] = 1e9;
    }

    for(int i=1;i<n;i++){
        for(int j=0;j<=tar;j++){
            int unpick = 0 + dp[i-1][j];
            int pick = INT_MAX;
            if(coins[i]<=j) pick = 1 + dp[i][j - coins[i]];
            dp[i][j] = min(pick, unpick);
        }
    }
    return dp[n-1][tar];
}

int main(){
    int n; 
    cout<<"Number of Coins : ";
    cin>>n;
    vector<int> coins(n);
    cout<<"Enter Coins Value\n";
    for(int i=0;i<n;i++) cin>>coins[i];
    int x;
    cout<<"Enter Desire Sum : ";
    cin>>x; 
    vector<int> dp(x+1, -1);
    cout<<"Minimum coins to get n is : "<<f2(x, coins, dp)<<endl;
    // if(ans==INT_MAX) return -1;

    vector<vector<int>>dp2(n, vector<int>(x+1, -1));
    cout<<"Minimum coins to get n is : "<<f(n-1, x, coins, dp2)<<endl;
    cout<<"Minimum coins to get n is : "<<tab(x, coins)<<endl;
}