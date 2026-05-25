#include<bits/stdc++.h>
using namespace std;
// Graph on 2D Matix

vector<int> ShortestPath(int n, int m, vector<vector<int>>& adj, int src){
    vector<int> graph[n];
    for(int i=0;i<m;i++){
        int u = adj[i][0];
        int v = adj[i][1];
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<int> dis(n, INT_MAX);

    dis[src] = 0;
    queue<int> q;
    q.push(src);
    while(!q.empty()){
        int ele = q.front();
        q.pop();
        for(auto neigh : graph[ele]){
            if(dis[ele] + 1 < dis[neigh]){
                dis[neigh] = dis[ele] + 1;
                q.push(neigh);
            }
            
        }
    }

    vector<int> ans(n, -1);
    for(int i=0;i<n;i++) if(dis[i] != INT_MAX) ans[i] = dis[i];
    return ans;
}

int main(){
   int n, m;
   cin >> n >> m;
   vector<vector<int>> grid(m, vector<int>(2));
   for(int i=0;i<m;i++){
    for(int j=0;j<2;j++){
        cin >> grid[i][j];
    }
   }
   vector<int> ans = ShortestPath(n, m, grid, 0);
   for(auto ele : ans) cout << ele << " ";
}