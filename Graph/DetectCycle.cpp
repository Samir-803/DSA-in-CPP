#include<bits/stdc++.h>
using namespace std; 

vector<list<int > > graph;
void addedge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir) graph[dest].push_back(src);
}

bool DFS(int node, int parent, vector<bool>& visited){
    visited[node] = true;
    for(auto neigh : graph[node]){
        if(!visited[neigh]){
            if(DFS(neigh, node, visited)) return true;
        }
        else if(neigh != parent) return true;
    }
    return false;
}

bool BFS(int src, vector<bool>& visited){
    queue<pair<int,int>> q;
    visited[src] = true;
    q.push({src,-1});
    while(q.size()>0){
        int curr = q.front().first;
        int parent = q.front().second;
        q.pop();
        for(auto neigh : graph[curr]){
           if(!visited[neigh]){
            q.push({neigh,curr});
            visited[neigh] = true;
           }else if(parent != neigh){
            return true;
           }
        }
    }
    return false;
}

bool detect(int v, vector<bool>& visited){
    for(int i=0;i<v;i++){
        if(!visited[i]){
            if(DFS(i, -1, visited)) return true;
        }
    }
    return false;
}

int main(){
    int v;
    cout << "Enter Number Of Vertex : ";
    cin>>v;
    vector<bool>visited(v, false);
    graph.resize(v, list<int>());
    int e;
    cout << "Enter Number Of Edges : ";
    cin>>e;
    while(e--){
        int s, d;
        cin>>s>>d;
        addedge(s,d);
    }
    cout<<detect(v, visited);
}