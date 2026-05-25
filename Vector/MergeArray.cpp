#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"Enter the size of 1st vector : ";
    cin>>n;
     cout<<"Enter the element of 1st vector : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int>v1;
    int n1;
    cout<<"Enter the size of 2nd vector : ";
    cin>>n1;
     cout<<"Enter the element of 2nd vector : ";
    for(int i=0;i<n1;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    vector<int>v2((n + n1));
    int i=0,j=0,k=0;
    while(i<n && j<n1){
        if(v[i]<=v1[j]){
            v2[k] = v[i];
            i++;
        }
        else{
            v2[k] = v1[j];
            j++;
        }
        k++;
    }
    if(i==n){
        while(j<n1){
            v2[k] = v1[j];
            j++;
            k++;
        }
    }
    if(j==n1){
        while(i<n){
            v2[k] = v[i];
            i++;
            k++;
        }
    }
    for(int x=0;x<v2.size();x++) cout<<v2[x]<<" ";
    return 0;
}