#include<bits/stdc++.h>
using namespace std;

    // for Positive Numbers Only
    int f(int idx, vector<int>& nums, vector<int>& dp){
        if(idx == 0) return dp[idx] = max(0, nums[idx]);
        if(idx<0) return 0;
        if(dp[idx] != -1) return dp[idx];
        int pick = nums[idx] + f(idx-2, nums, dp);
        int nopick = f(idx-1, nums, dp);
        return dp[idx] = max(pick, nopick); 
    }
    int maximumSumSubsequence(vector<int>& nums, vector<vector<int>>& queries) {
        long long sum = 0;
        int mod = 1e9 + 7;
        for(auto it : queries){
            int val = nums[it[0]];
            nums[it[0]] = it[1];
            vector<int> dp(nums.size(), -1);
            sum = (sum + f(nums.size()-1, nums, dp))%mod;
            nums[it[0]] = val;
        }
        return sum;
    }