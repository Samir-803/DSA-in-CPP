#include<bits/stdc++.h>
using namespace std; 

vector<list<int > > graph;
vector<bool>visited;
vector<bool>pathvis;
void addedge(int src, int dest, bool bi_dir = false){
    graph[src].push_back(dest);
    if(bi_dir) graph[dest].push_back(src);
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

bool DFS(int node){
    visited[node] = true;
    pathvis[node] = true;

    for(auto neigh : graph[node]){
        if(!visited[neigh]){
            if(DFS(neigh)) return true;
        }
        else if(pathvis[neigh]) return true;
    }
    
    pathvis[node] = 0;
    return false;
}

bool detect(int v, vector<bool>& visited){
    for(int i=0;i<v;i++){
        if(!visited[i]){
            if(DFS(i)) return true;
        }
    } 
    return false;
}

int main(){
    int v;
    cout << "Enter Number Of Vertex : ";
    cin>>v;

    graph.resize(v, list<int>());
    visited.resize(v, false);
    pathvis.resize(v, false);

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