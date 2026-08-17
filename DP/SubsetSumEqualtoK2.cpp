#include<bits/stdc++.h>
using namespace std;

int f(int idx, int target, int n, vector<int>& arr, vector<vector<int>>& dp){
    if(target == 0) return dp[idx][target] = 1;
    if(idx == n) return dp[idx][target] = 0;
    if(dp[idx][target] != -1) return dp[idx][target];
    int unpick = f(idx+1, target, n, arr, dp);
    int pick = 0;
    if(target >= arr[idx]) pick = f(idx+1, target-arr[idx], n, arr, dp);
    return dp[idx][target] = pick + unpick;
}

int main(){
    int n;
    cout << "Enter The Size Of Array : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter The Element : " << endl;
    for(int i=0;i<n;i++) cin >> arr[i];
    int target;
    cout << "Enter The Target : ";
    cin >> target;
    vector<vector<int>> dp(n, vector<int>(target+1, 0));
    // cout<<f(0, target, n, arr, dp);

    // Tabulation

    for(int i=0;i<n;i++) dp[i][0] = 1;
    if(arr[0] <= target) dp[0][arr[0]] = 1;
    for(int i=1;i<n;i++){
        for(int sum=0;sum<=target;sum++){
            int unpick = dp[i-1][sum];
            int pick = 0;
            if(sum >= arr[i]) pick = dp[i-1][sum-arr[i]];
            dp[i][sum] = pick + unpick;
        }
    }
    cout << dp[n-1][target];
} 

// Count Partition With A Given Difference 
// in that You have to partition array into 2 part
// s1 >= s2 && s1-s2 = D
// so Totalsum - s2 - s2 = D
// (TS - D)/2 = s2
// Ts - D >=0 && Even 
// f(0, (TS - D)/2, n, arr, dp)
