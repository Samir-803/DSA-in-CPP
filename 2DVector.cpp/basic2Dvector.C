#include<bits/stdc++.h>
using namespace std;
int main(){
    //if we do pop back then it remove last element
    vector<vector< int > >v(4,vector<int> (3,2));
    // this means we creat a 2D array with 4 rows and 4 colomn and value of each element is 2
    // then we use this as we use any 2D array
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }

    // no of Rows 
    cout<<v.size()<<endl;
    cout<<v[2].size()<<endl;
}