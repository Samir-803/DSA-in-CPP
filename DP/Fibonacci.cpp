#include<bits/stdc++.h>
using namespace std;

// Memoization
// TC = O(n)
// SC = O(2n) 
int fib(int n, vector<int>& dp){
    if(n <= 1) return dp[n] = n;
    if(dp[n] != -1) return dp[n];
    return dp[n] = fib(n-1, dp) + fib(n-2, dp);
}

// Tabulation 
// TC = O(n)
// SC = O(n)
int tab(int n){
    vector<int> dp(n+1, -1);
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2;i<=n;i++) dp[i] = dp[i-1] + dp[i-2];
    return dp[n];
}

// Space Optimisation
// SC = O(1)
int tabSC(int n){
    int t3 = 0;
    int t2 = 1;
    int t1;
    for(int i=2;i<=n;i++){
        t1 = t2 + t3;
        t3 = t2;
        t2 = t1;
    }
    return t1;
}

int main(){
    int n;
    cin >> n;
    vector<int> dp(n+1, -1);
    cout << fib(n, dp) << endl;
    cout << tab(n) << endl;
    cout << tabSC(n) << endl;
}