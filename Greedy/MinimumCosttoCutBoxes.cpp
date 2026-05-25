#include<bits/stdc++.h>
using namespace std;


bool cmp(int a, int b){
    return a > b;
}

int mincost(int n, int m, vector<int>& x, vector<int>& y){
    sort(x.begin(),x.end(),cmp);
    sort(y.begin(),y.end(),cmp);
    int cost = 0;
    int i = 0;  
    int j = 0;
    while(i<x.size() && j<y.size()){
        if(x[i]>=y[j]){
            cost += x[i]*(j+1);
            i++;
        }
        else{
            cost += y[j]*(i+1);
            j++;
        }
    }
    if(i==x.size() && j<y.size()){
        while(j<y.size()){
            cost += y[j]*(i+1);
            j++;
        }
    }

    if(j==y.size() && i<x.size()){
        while(i<x.size()){
            cost += x[i]*(j+1);
            i++;
        }
    }

    return cost;
}
int main(){
    int n, m;
    cin>>m>>n;
    vector<int> x,y;
    for(int i=0;i<m-1;i++){
        int t;
        cin>>t;
        y.push_back(t);
    }
    for(int i=0;i<n-1;i++){
        int t;
        cin>>t;
        x.push_back(t);
    }
    cout<<mincost(n, m, x, y)<<endl;
}