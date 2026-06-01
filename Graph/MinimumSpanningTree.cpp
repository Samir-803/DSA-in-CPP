#include<bits/stdc++.h>
using namespace std;

// for to make min spanning tree you required a parent node also so in pq you should store 
// pair<int , pair<int,int>>
int minspanningTree(int v, vector<vector<int>> adj[]){
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0, 0});
    vector<int> vis(v, 0);

    int ans = 0;
    while(!pq.empty()){
        int node = pq.top().second;
        int wt = pq.top().first;
        pq.pop();
        if(vis[node] == 1) continue;
        vis[node] = 1;
        ans += wt;
        for(auto it : adj[node]){
            int neigh = it[0];
            int newt = it[1];
            if(!vis[neigh]){
                pq.push({newt, neigh});
            }
        }
    }
    return ans;
}