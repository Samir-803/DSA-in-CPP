#include<bits/stdc++.h>
using namespace std;
// If any Leetcode problem is premium search that que in lintcode

int minMetingRooms(vector<vector<int>>& v){
    vector<int> start, end;
    for(auto el : v){
        start.push_back(el[0]);
        end.push_back(el[1]);
    }
    sort(start.begin(),start.end());
    sort(end.begin(),end.end());

    int ans = 0;
    int rooms = 0;
    int i = 0, j = 0;
    while(i<start.size() and j<end.size()){
        if(start[i]<end[j]){
            rooms++;
            ans = max(rooms,ans);
            i++;
        }else if(start[i]>end[j]){
            rooms--;
            j++;
        }
        else{
            i++;
            j++;
        }
    }
    return ans;
}

int main(){
    int r, c;
    cin >> r >> c;
    vector<vector<int>> v(r,vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> v[i][j];
        }
    }
    cout<<minMetingRooms(v)<<endl;
}
/*
6
2
1 10
2 7 
3 19
8 12
10 20
11 30
4*/