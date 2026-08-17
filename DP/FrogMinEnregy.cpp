#include<bits/stdc++.h>
using namespace std;

int f(int idx, vector<int>& dp, vector<int>& energy){
    if(idx == 0) dp[0] = 0;
    if(dp[idx] != -1) return dp[idx];
    int left = f(idx-1, dp, energy) + abs(energy[idx] - energy[idx-1]);
    if(idx == 1) return dp[idx] = left;
    int right = f(idx-2, dp, energy) + abs(energy[idx] - energy[idx-2]);
    return dp[idx] = min(left, right);
}

int frogJump(int n, vector<int> energy){
    vector<int> dp(n+1, -1);
    return f(n, dp, energy); 
}

int taulation(int n, vector<int>& energy){
    vector<int> dp(n+1, -1);
    dp[0] = 0;
    dp[1] = abs(energy[0] - energy[1]);
    for(int i=2;i<=n;i++){
        dp[i] = min(dp[i-1] + abs(energy[i-1] - energy[i]), dp[i-2] + abs(energy[i-2] - energy[i]));
    }
    return dp[n]; 
}