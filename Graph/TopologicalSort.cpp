#include<bits/stdc++.h>
using namespace std; 

vector<list<int > > graph;
void addedge(int src, int dest, bool bi_dir = false){
    graph[src].push_back(dest);
    if(bi_dir) graph[dest].push_back(src);
}

void DFS(int src, stack<int>& st){
    visited[src] = true;
    for(auto neigh : graph[src]){
        if(!visited[neigh]) DFS(neigh, st);
    }
    st.push(src);
    return;
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

    stack<int> st;
    vector<int> topo;

    for(int i=0;i<v;i++){
        if(!visited[i]) DFS(i, st);
    }
    while(!st.empty()){
        topo.push_back(st.top());
        st.pop();
    }
    for(int i=0;i<topo.size();i++) cout<<topo[i]<<" ";
}