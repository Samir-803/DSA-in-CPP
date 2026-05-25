#include<iostream>
#include<vector>
#include<unordered_map> 
using namespace std; 

vector<unordered_map<int,int> > graph;
void addedge(int src, int dest, int w, bool bi_dir = true){
    graph[src].insert({dest, w});
    if(bi_dir) graph[dest].insert({src, w});
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
    graph.resize(v, unordered_map<int,int>());
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