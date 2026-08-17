#include<bits/stdc++.h>
using namespace std;

int f(int idx, int w, vector<int>& wt, vector<int>& val, vector<int>& dp){
    if(idx==0){
        if(wt[0] >= w) return val[0];
        return 0;
    }
    
    if(dp[idx][w] != -1) return dp[idx][w];
    int unpick = f(idx-1, w, wt, val, dp);
    int pick = INT_MIN;
    if(wt[idx] <= w) pick = f(idx-1, w-wt[idx], wt, val, dp);

    return dp[idx][w] = max(pick, unpick);
}