#include<bits/stdc++.h>
using namespace std;

// Using Priority_queue
vector<int> dijkstra(int v, vector<vector<int>> adj[], int src){
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<int> dis(v, INT_MAX);
    dis[src] = 0;
    pq.push({0, src});

    while(!pq.empty()){
        int di = pq.top().first;
        int edge = pq.top().second;
        pq.pop();

        for(auto p : adj[edge]){
            int w = p[1];
            int node = p[0];
            if(di + w < dis[node]){
                dis[node] = di + w;
                pq.push({dis[node], node});
            }
        }
    }
    return dis;
}

// Using Set
vector<int> dijkstra(int v, vector<vector<int>> adj[], int src){
    set<pair<int,int>> s;
    vector<int> dis(v, INT_MAX);
    dis[src] = 0;
    s.insert({0, src});

    while(!s.empty()){
        auto it = *s.begin();
        int di = it.first;
        int edge = it.second;
        s.erase(it);

        for(auto p : adj[edge]){
            int w = p[1];
            int node = p[0];
            if(di + w < dis[node]){
                if(dis[node] != INT_MAX){
                    s.erase({dis[node], node});
                }
                dis[node] = w + di;
                s.insert({dis[node], w});
            }
        }
    }
    return dis;
}