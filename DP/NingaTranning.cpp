#include<bits/stdc++.h>
using namespace std;

int maxpoint(int n, vector<vector<int>>& points){
    vector<vector<int>> dp(n, vector<int>(4, -1));

    // DP[day][last]
    dp[0][0] = max(points[0][1], points[0][2]);
    dp[0][1] = max(points[0][0], points[0][2]);
    dp[0][2] = max(points[0][1], points[0][0]);
    dp[0][3] = max(points[0][1], max(points[0][0], points[0][2]));

    for(int day=1;day<n;day++){
        for(int l=0;l<4;l++){
            for(int task=0;task<3;task++){
                if(task != l){
                    int point = points[day][task] + dp[day-1][task];
                    dp[day][l] = max(dp[day][l], point);
                }
            }
        }
    }
    return dp[n-1][3];
}