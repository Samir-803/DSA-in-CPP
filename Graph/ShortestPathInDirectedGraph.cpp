#include<bits/stdc++.h>
using namespace std;
// Graph on 2D Matix

void topoSort(int src,  vector<pair<int,int>> graph[], 
    vector<int>& visited, stack<int>& st){
    visited[src] = 1;
    for(auto neigh : graph[src]){
        int v = neigh.first;
        if(visited[v] != 1) topoSort(v, graph, visited, st);
    }   
    st.push(src);
    return;
}

vector<int> ShortestPath(int n, int m, vector<vector<int>>& adj){
    vector<pair<int,int>> graph[n];
    for(int i=0;i<m;i++){
        int u = adj[i][0];
        int v = adj[i][1];
        int w = adj[i][2];

        graph[u].push_back({v,w});
    }

    vector<int> vis(n, 0);
    stack<int> st;
    for(int i=0;i<n;i++){
        if(!vis[i]) topoSort(i, graph, vis, st);
    }

    vector<int> dis(n, INT_MAX);

    dis[0] = 0;
    while(!st.empty()){
        int ele = st.top();
        st.pop();
        for(auto neigh : graph[ele]){
            int v = neigh.first;
            int wt = neigh.second;

            if(dis[ele] + wt < dis[v]) dis[v] = dis[ele] + wt;
        }
    }
    return dis;
}

int main(){
   int n, m;
   cin >> n >> m;
   vector<vector<int>> grid(m, vector<int>(3));
   for(int i=0;i<m;i++){
    for(int j=0;j<3;j++){
        cin >> grid[i][j];
    }
   }
   vector<int> ans = ShortestPath(n, m, grid);
   for(auto ele : ans) cout << ele << " ";
}