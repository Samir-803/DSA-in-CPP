#include<bits/stdc++.h>
using namespace std;

int f(int idx, int tar, vector<int>& coins, vector<vector<int>>& dp){
    if(idx==0){
        return (tar%coins[0] == 0);
    }
    if(dp[idx][tar] != -1) return dp[idx][tar];
    int unpick = f(idx-1, tar, coins, dp);
    int pick = 0;
    // If we Have Infinite Supply of Something Then in Pick Part we don't change our Idex
    if(coins[idx]<=tar) pick = f(idx, tar-coins[idx], coins, dp);
    return dp[idx][tar] = pick + unpick;
}

int tab(int tar, vector<int>& coins){
    int n = coins.size();
    vector<vector<int>> dp(n, vector<int>(tar+1, 0));
    for(int i=0;i<=tar;i++){
        if(i%coins[0] == 0) dp[0][i] = 1;
    }

    for(int i=1;i<n;i++){
        for(int j=0;j<=tar;j++){
            int unpick = dp[i-1][j];
            int pick = 0;
            if(coins[i]<=j) pick = dp[i][j - coins[i]];
            dp[i][j] = pick + unpick;
        }
    }
    return dp[n-1][tar];
}

int SO(int tar, vector<int>& coins){
    int n = coins.size();
    vector<int> prev(tar+1, 0), curr(tar+1, 0);
    for(int i=0;i<=tar;i++){
        if(i%coins[0] == 0) prev[i] = 1;
    }

    for(int i=1;i<n;i++){
        for(int j=0;j<=tar;j++){
            int unpick = prev[j];
            int pick = 0;
            if(coins[i]<=j) pick = curr[j - coins[i]];
            curr[j] = pick + unpick;
        }
        prev = curr;
    }
    return prev[tar];
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
    vector<vector<int>>dp(n, vector<int>(x+1, -1));
    cout << f(n-1, x, coins, dp) << endl;
    cout << tab(x, coins) << endl;
    cout << SO(x, coins) << endl;
}