#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter the size of Vector : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int i = 0;
    int j = n-1;
    int maxarea = 0;
    while(i<j){
     int length = j - i;
     int width = min(v[i],v[j]);
     int area = length*width;
     maxarea = max(maxarea,area);
     if(v[i]<=v[j]) i++;
     else j--;
    }
    cout<<maxarea;
}