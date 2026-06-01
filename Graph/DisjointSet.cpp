#include<bits/stdc++.h>
using namespace std;

class DisjointSet{
private :
    vector<int> parent, rank, Size;

public :
    DisjointSet(int n){
        parent.resize(n+1);
        rank.resize(n+1, 0);
        Size.resize(n+1, 1);
        for(int i=1;i<=n;i++) parent[i] = i;
    }

    int findUpar(int node){
        if(parent[node] == node) return node;
        return parent[node] = findUpar(parent[node]);
    }

    void unionByRank(int u, int v){
        int upu = findUpar(u);
        int upv = findUpar(v);

        if(upu == upv) return;
        if(rank[upu] < rank[upv]){
            parent[upu] = upv;
        }
        else if(rank[upu] > rank[upv]) parent[upv] = upu;
        else{
            parent[upv] = upu;
            rank[upu]++;
        }
    }

    void unionBySize(int u, int v){
        int upu = findUpar(u);
        int upv = findUpar(v);

        if(upu == upv) return;
        if(Size[upu] < Size[upv]){
            parent[upu] = upv;
            Size[upv] += Size[upu];
        }
        else{
            parent[upv] = upu;
            Size[upu] += Size[upv];
        }
    }
};
    int main(){
        DisjointSet ds(7);
        ds.unionBySize(1, 2);
        ds.unionBySize(2, 3);
        ds.unionBySize(4, 5);
        ds.unionBySize(6, 7);

        // check if 3 and 7 are in same component or not
        if(ds.findUpar(3) == ds.findUpar(7)) cout<<"Same"<<endl;
        else cout<<"Not Same"<<endl;
        ds.unionBySize(3, 7);
        if(ds.findUpar(3) == ds.findUpar(7)) cout<<"Same"<<endl;
        else cout<<"Not Same"<<endl;
    }