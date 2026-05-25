#include<bits/stdc++.h>
using namespace std;

int f(int n, vector<int>& coins, vector<int>& dp){
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    int res = INT_MAX;
    for(int i=0;i<coins.size();i++){
        if(n-coins[i]<0) continue; 
        res = min(res, f(n-coins[i], coins, dp));
    }
    if(res==INT_MAX) dp[n] = INT_MAX;
    return dp[n] = 1 + res;
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
    cout<<"Minimum coins to get n is : "<<f(x, coins, dp)<<endl;
    // if(ans==INT_MAX) return -1;
}