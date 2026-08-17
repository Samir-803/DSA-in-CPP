#include<bits/stdc++.h>
using namespace std;

int solve(int i, int j,int arr[], vector<vector<int>>& dp){
    if(i>=j)return 0;
    if(dp[i][j] != -1) return dp[i][j];
    int ans = INT_MAX;
    for(int k=i;k<=j-1;k++){
        int tempAns = solve(i,k,arr, dp) + solve(k+1,j,arr, dp) + arr[i-1]*arr[k]*arr[j];     
        ans = min(ans, tempAns);                        
    }
    return dp[i][j] = ans;
}

int matrixMultiplication(int N, int arr[]){
    // vector<vector<int>> dp(N, vector<int>(N, -1));
    // return solve(1 ,N-1 ,arr, dp);

    // Tabulation

    vector<vector<int>> dp(N, vector<int>(N, 0));

    for(int i=N-1;i<=1;i--){
        for(int j=i+1;j<N;j++){
            int ans = 1e9;
            for(int k=i;k<=j-1;k++){
                int tempAns = dp[i][k] + dp[k+1][j] + arr[i-1]*arr[k]*arr[j];     
                ans = min(ans, tempAns);                        
            }
            dp[i][j] = ans;
        }
    }
    return dp[1][N-1];
}