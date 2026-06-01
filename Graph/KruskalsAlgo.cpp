#include<bits/stdc++.h>
using namespace std;

class DisjointSet{
private :
    vector<int> parent, rank, Size;

public :
    DisjointSet(int n){
        parent.resize(n+1);
        rank.resize(n+1, 0);
        Size.resize(n+1, 1);
        for(int i=1;i<=n;i++) parent[i] = i;
    }

    int findUpar(int node){
        if(parent[node] == node) return node;
        return parent[node] = findUpar(parent[node]);
    }

    void unionByRank(int u, int v){
        int upu = findUpar(u);
        int upv = findUpar(v);

        if(upu == upv) return;
        if(rank[upu] < rank[upv]){
            parent[upu] = upv;
        }
        else if(rank[upu] > rank[upv]) parent[upv] = upu;
        else{
            parent[upv] = upu;
            rank[upu]++;
        }
    }

     void unionBySize(int u, int v){
        int upu = findUpar(u);
        int upv = findUpar(v);

        if(upu == upv) return;
        if(Size[upu] < Size[upv]){
            parent[upu] = upv;
            Size[upv] += Size[upu];
        }
        else{
            parent[upv] = upu;
            Size[upu] += Size[upv];
        }
    }
};

int spanningTree(int V, vector<vector<int>> adj[]){
    vector<pair<int, pair<int,int>>> edges;
    for(int i=0;i<V;i++){
        for(auto it : adj[i]){
            int adjnode = it[0];
            int wt = it[1];
            int node = i;

            edges.push_back({wt, {node, adjnode}});
        }
    }
    DisjointSet ds(V);
    sort(edges.begin(), edges.end());


    // M*4*alpha
    int mst = 0;
    for(auto it : edges){
        int wt = it.first;
        int u = it.second.first;
        int v = it.second.second;
  
        if(ds.findUpar(u) != ds.findUpar(v)){
            mst += wt;
            ds.unionBySize(u, v);
        }
    }
    return mst;
}