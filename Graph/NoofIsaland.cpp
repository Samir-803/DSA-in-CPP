#include<bits/stdc++.h>
using namespace std;
// Graph on 2D Matix

void bfs(vector<vector<int>>& grid, int ro, int co, vector<vector<int>>& vis){
    vis[ro][co] = 1;
    queue<pair<int,int>> q;
    q.push({ro, co});
    while(q.size()>0){
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
    for(int d=-1;d<=1;d++){
        for(int x=-1;x<=1;x++){
            int r = row + d;
            int c = col + x;
            if(r>=0 && r<grid.size() && c>=0 && 
            c<grid[0].size() && vis[r][c]==0 && grid[r][c] == 1){ 
                q.push({r, c});
                vis[r][c] = 1;
            }
        }
    }
}
}

int noI(vector<vector<int>>& grid){
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int> >vis(n, vector<int>(m,0));
    int cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j] == 1 && vis[i][j] == 0){
                cnt++;
                bfs(grid, i, j, vis);
            }
        }
    }
    return cnt;
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
    cout << noI(grid);
}