#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(5,7); // v(5,7) Means vector with size 5 and value of each element is 7
    v[0] = 5;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}