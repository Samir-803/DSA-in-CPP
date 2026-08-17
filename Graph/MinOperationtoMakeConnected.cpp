#include<bits/stdc++.h>
using namespace std;

class DisjointSet{  
public :
    vector<int> parent, rank, Size;

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

int Solve(int n, vector<vector<int>>& edges){
    DisjointSet ds(n);
    int cntextra = 0;

    for(auto it : edges){
        int u = it[0];
        int v = it[1];
        if(ds.findUpar(u) == ds.findUpar(v)) cntextra++;
        else ds.unionBySize(u, v);
    }

    int cntC = 0;
    for(int i=0;i<n;i++){
        if(ds.parent[i] == i) cntC++;
    }
    int ans = cntC - 1;
    if(cntextra >= ans) return ans;
    else return -1;
}