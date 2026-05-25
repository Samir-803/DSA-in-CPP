#include<bits/stdc++.h>
using namespace std;
// Graph on 2D Matix

void DFS(int ro, int co, vector<vector<int>>& grid,
     vector<vector<int>>& vis, vector<pair<int,int>>& v, int r0, int c0){
    int n = grid.size();
    int m = grid[0].size();
    vis[ro][co] = 1;
    v.push_back({ro-r0, co-c0});
    int dr[]  = {-1,0,1,0};
    int dc[] = {0,-1,0,1};
    for(int i=0;i<4;i++){
        int nr = ro + dr[i];
        int nc = co + dc[i];
        if(nr>=0 && nc>=0 && nr<n && nc<m && !vis[nr][nc] && grid[nr][nc]==1){
            DFS(nr, nc, grid, vis, v, r0, c0);
        }
    }  
    return; 
}

int countIsalnd(vector<vector<int>>& grid){
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> visited(n, vector<int>(m,0));
    set<vector<pair<int,int> > > s;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!visited[i][j] && grid[i][j]==1){
                vector<pair<int,int>>v;
                DFS(i, j, grid, visited, v, i, j);
                s.insert(v);
            }
        }
    }
    return s.size();
}

int main(){
   int n, m;
   cin >> n >> m;
   vector<vector<int>> grid(n, vector<int>(m));
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin >> grid[i][j];
    }
   }
   cout << countIsalnd(grid);
}