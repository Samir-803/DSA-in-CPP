#include<bits/stdc++.h>
using namespace std; 

// BFS use to calculate shortest path
vector<list<int > > graph;
void addedge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir) graph[dest].push_back(src);
}

vector<bool> visited;
void BFS(int src, int des, vector<int>& dis){
    queue<int> q;
    visited[src] = true;
    q.push(src);
    while(q.size()>0){
        int curr = q.front();
        q.pop();
        for(auto neigh : graph[curr]){
           if(!visited[neigh]){
            q.push(neigh);
            visited[neigh] = true;
            dis[neigh] = dis[curr] + 1; 
           }
        }
    }
}

int main(){
    int v;
    cout << "Enter Number Of Vertex : ";
    cin>>v;
    visited.resize(v);
    graph.resize(v, list<int>());
    int e;
    cout << "Enter Number Of Edges : ";
    cin>>e;
    while(e--){
        int s, d;
        cin>>s>>d;
        addedge(s,d);
    }
    vector<int> dis(v, 0);
    BFS(0,6,dis);
    for(int i=0;i<dis.size();i++) cout<<dis[i]<<" ";
}