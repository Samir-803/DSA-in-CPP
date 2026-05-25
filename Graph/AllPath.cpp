#include<iostream>
#include<vector>
#include<list> 
using namespace std; 

vector<list<int > > graph;
vector<vector<int>> result;
void addedge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir) graph[dest].push_back(src);
}

vector<bool> visited;
void Allpath(int curr, int end, vector<int>& path){
    if(curr == end){
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }
    visited[curr] = true;
    path.push_back(curr);
    for(auto neigh : graph[curr]){
        if(!visited[neigh]){
           Allpath(neigh, end, path);
        }
    }
    path.pop_back();
    visited[curr] = false;
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
    vector<int> x;
    Allpath(0,6, x);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++)  cout<<result[i][j]<<" ";
        cout<<endl;
    }
}