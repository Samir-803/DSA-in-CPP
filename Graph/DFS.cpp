#include<bits/stdc++.h>
using namespace std; 

vector<list<int > > graph;
void addedge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir) graph[dest].push_back(src);
}

vector<bool> visited;
void DFS(int src, int des, vector<int>& dis){
    visited[src] = true;
    dis.push_back(src);
    for(auto neigh : graph[src]){
        if(!visited[neigh]) DFS(neigh, des, dis);
    }
    return;
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
    vector<int> dis;
    DFS(0,6,dis);
    for(int i=0;i<dis.size();i++) cout<<dis[i]<<" ";
}