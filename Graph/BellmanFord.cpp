#include<bits/stdc++.h>
using namespace std;

vector<int> bellman_ford(int v, vector<vector<int>>& edges, int src){
    vector<int> dis(v, 1e9);
    dis[src] = 0;

    for(int i=0;i<v-1;i++){
        for(auto it : edges){
            int u = it[0];
            int v = it[1];
            int wt = it[2];
            if(dis[u]!=1e9 && dis[u] + wt < dis[v]) dis[v] = dis[u] + wt;
        }
    }

    for(auto it : edges){
        int u = it[0];
        int v = it[1];
        int wt = it[2];
        if(dis[u]!=1e9 && dis[u] + wt < dis[v]) return {-1};
    }
    return dis;
}

// Time Complexity = O( V * E );
// Space Complexity = O(V);