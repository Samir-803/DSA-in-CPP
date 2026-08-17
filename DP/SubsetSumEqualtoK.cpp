#include<bits/stdc++.h>
using namespace std;

bool f(int idx, int target, vector<int>& arr, vector<vector<int>>& dp){
    if(target == 0) return dp[idx][target] = true;
    if(idx == 0) return dp[idx][target] = (arr[idx] == target);
    if(dp[idx][target] != -1) return dp[idx][target];
    bool unpick = f(idx-1, target, arr, dp);
    bool pick = false;
    if(target >= arr[idx]) pick = f(idx-1, target-arr[idx], arr, dp); 
    return dp[idx][target] = unpick or pick;
}

bool subsetk(int n, int k, vector<int>& arr){
    vector<vector<bool>> dp(n, vector<bool>(k, 0));
    for(int i=0;i<n;i++) dp[i][0] = 1;
    dp[0][arr[0]] = 1;
    for(int idx=1;idx<n;idx++){
        for(int tar=1;tar<=k;tar++){
            bool unpick = dp[idx-1][tar];
            bool pick = false;
            if(tar >= arr[idx]) pick = dp[idx-1][tar-arr[idx]];
            dp[idx][tar] = unpick or pick;
        }
    }
    return dp[n-1][k];
}