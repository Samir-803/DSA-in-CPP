#include<bits/stdc++.h>
using namespace std;

vector<int> dijkstra(int n, vector<vector<int>>& edges, int src){

    vector<pair<int, int>> adj[n+1];
    for(auto it : edges){
        adj[it[0]].push_back({it[1], it[2]});
        adj[it[1]].push_back({it[0], it[2]});
    }

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<int> dis(n+1, INT_MAX), parent(n+1);
    dis[src] = 0;
    for(int i=1;i<=n;i++) parent[i] = i;
    pq.push({0, src});

    while(!pq.empty()){
        int di = pq.top().first;
        int edge = pq.top().second;
        pq.pop();

        for(auto p : adj[edge]){
            int w = p.second;
            int node = p.first;
            if(di + w < dis[node]){
                dis[node] = di + w;
                pq.push({dis[node], node});
                parent[node] = edge;
            }
        }
    }
    if(dis[n] == INT_MAX) return {-1};
    vector<int> path;
    int node = n;
    while(parent[node] != src){ 
        path.push_back(node); 
        node = parent[node];
    }
    path.push_back(src);
    reverse(path.begin(), path.end());
    return path;
}