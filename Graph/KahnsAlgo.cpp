#include<bits/stdc++.h>
using namespace std; 

vector<list<int > > graph;
void addedge(int src, int dest, bool bi_dir = false){
    graph[src].push_back(dest);
    if(bi_dir) graph[dest].push_back(src);
}

vector<bool> visited;
void DFS(int src, stack<int>& st){
    visited[src] = true;
    for(auto neigh : graph[src]){
        if(!visited[neigh]) DFS(neigh, st);
    }
    st.push(src);
    return;
}

void kahn(vector<int>& topo, vector<int> indegree, int v){
    for(int i=0;i<v;i++){
        for(auto ele : graph[i]) indegree[ele]++;
    }
    queue<int> q;
    for(int i=0;i<v;i++){
        if(indegree[i]==0) q.push(i);
    }

    while(!q.empty()){
        int ele = q.front();
        q.pop();
        topo.push_back(ele);
        for(auto neigh : graph[ele]){
            indegree[neigh]--;
            if(indegree[neigh]==0) q.push(neigh);
        }
    }
    return;
}

int main(){
    int v;
    cout << "Enter Number Of Vertex : ";
    cin>>v;
    visited.resize(v);
    graph.resize(v, list<int>());
    vector<int> indegree(v, 0);
    int e;
    cout << "Enter Number Of Edges : ";
    cin>>e;
    while(e--){
        int s, d;
        cin>>s>>d;
        addedge(s,d);
    }

    vector<int> topo;

    kahn(topo, indegree, v);
    for(int i=0;i<topo.size();i++) cout<<topo[i]<<" ";
}