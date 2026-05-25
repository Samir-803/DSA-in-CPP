#include<bits/stdc++.h>
using namespace std;

vector<int> topoSort(vector<int> graph[], int v){
    vector<int> indegree(v, 0);
    for(int i=0;i<v;i++){
        for(auto ele : graph[i]) indegree[ele]++;
    }   

    queue<int> q;
    vector<int> topo;
    for(int i=0;i<v;i++){
        if(indegree[i]==0){
            q.push(i);
        }
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
    
   return topo;
}

string find(string dist[], int n, int k){
    // n = total string 
    // k = no of alphabets

    vector<int> adj[k];
    for(int i=0;i<n-1;i++){
        string s1 = dist[i];
        string s2 = dist[i+1];
        int len = min(s1.size(), s2.size());
        for(int i=0;i<len;i++){
            if(s1[i]!=s2[i]){
                adj[s1[i] - 'a'].push_back(s2[i] - 'a');
                break;
            }
        }
    }

    vector<int> topo = topoSort(adj, k);

    string ans = "";
    for(auto it : topo) ans += char(it + 'a');
    return ans;
}

int main(){
    int n, k;
    cin >> n >> k;
}