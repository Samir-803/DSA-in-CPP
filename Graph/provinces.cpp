#include<iostream>
#include<vector>
#include<list> 
using namespace std; 

// The Second Method is Using Disjoint Set in that you need to travels in the node 
// and if the parent[node] == node then do cnt++ and la
// i mean just different ultimate parent you need to find
vector<list<int > > graph;
void addedge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir) graph[dest].push_back(src);
}

void dfs(vector<list<int>>graph, int start, vector<bool>& visited){
    visited[start] = true;
    for(auto neigh : graph[start]){
        if(!visited[neigh]){
            dfs(graph, neigh, visited);
        }
    }
    return;
}

int provinces(vector<list<int>> graph, int V){
    vector<bool> visited(V,false);
    int cnt = 0;
    for(int i=0;i<V;i++){
        if(!visited[i]){
            cnt++;
            dfs(graph, i, visited);
        }
    }
    return cnt;
}

int main(){
    int v;
    cout << "Enter Number Of Vertex : ";
    cin>>v;
    graph.resize(v, list<int>());
    int e;
    cout << "Enter Number Of Edges : ";
    cin>>e;
    while(e--){
        int s, d;
        cin>>s>>d;
        addedge(s,d);
    }
    cout<<provinces(graph, v);
}