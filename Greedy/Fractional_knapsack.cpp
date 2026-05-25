#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>& p1, pair<int,int>& p2){
    double r1 = (p1.first*1.0)/(p1.second*1.0);
    double r2 = (p2.first*1.0)/(p2.second*1.0);
    return r1 > r2;
}

double fractionalknapsack(vector<int>& weight, vector<int>& profit, int n, int W){
    vector<pair<int,int>> arr;
    for(int i=0;i<n;i++) arr.push_back({profit[i],weight[i]});
    sort(arr.begin(),arr.end(),cmp);
    double kamani = 0;
    for(int i=0;i<n;i++){ 
        if(arr[i].second <= W){
            kamani += arr[i].first;
            W -= arr[i].second;
        }  
        else{
            kamani += ((arr[i].first*1.0)/(arr[i].second*1.0))*W;
            W = 0;
            break;
        }
    }
    return kamani;
}

int main(){
    vector<int> profit = {60, 100, 120};
    vector<int> weight = {10, 20, 30};
    int W = 50;
    int n = 3;
    cout<<fractionalknapsack(weight, profit, n, W); 
}