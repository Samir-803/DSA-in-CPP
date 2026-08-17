#include<bits/stdc++.h>
using namespace std;

// Strongly Connected Component

void dfs(int i, vector<int>& vis, stack<int>& st, vector<int> adj[]){
    vis[i] = 1;
    for(auto neigh : adj[i]) if(!vis[neigh]) dfs(neigh, vis, st, adj);
    st.push(i);
} 

void dfsn(int i, vector<int>& vis, vector<int> adjT[]){
    vis[i] = 1;
    for(auto neigh : adjT[i]) if(!vis[neigh]) dfsn(neigh, vis, adjT);
}

int kosaraju(int v, vector<int> adj[]){
    vector<int> vis(v);
    stack<int> st;
    for(int i=0;i<v;i++){
        if(!vis[i]){
            dfs(i, vis, st, adj);
        }
    }

    vector<int> adjT[v];
    for(int i=0;i<v;i++){
        vis[i] = 0;
        for(auto neigh : adj[i]){
            adjT[neigh].push_back(i);
        }
    }

    int ssc = 0;
    while(!st.empty()){
        int node = st.top();
        st.pop();
        if(!vis[node]){
            dfsn(node, vis, adjT);
            ssc++;
        }
    }
    return ssc;
}