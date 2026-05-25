#include<iostream>
#include<vector>
#include<list> 
using namespace std; 

vector<list<pair<int, int> > > graph;
void addedge(int src, int dest, int w, bool bi_dir = true){
    graph[src].push_back({dest, w});
    if(bi_dir) graph[dest].push_back({src, w});
}

void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<" -> ";
        for(auto ele : graph[i]) cout<<"("<<ele.first<<" "<<ele.second<<")"<<" , ";
        cout<<endl;
    }
}

int main(){
    int v;
    cout << "Enter Number Of Vertex : ";
    cin>>v;
    graph.resize(v, list<pair<int,int>>());
    int e;
    cout << "Enter Number Of Edges : ";
    cin>>e;
    while(e--){
        int s, d, w;
        cin>>s>>d>>w;
        addedge(s,d,w);
    }
    display();
}