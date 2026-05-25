#include<bits/stdc++.h>
#include<vector>
using namespace std;
void display(vector<int>a){
    for(int i=0;i<a.size();i++){
        cout<<a.at(i)<<" ";
    }cout<<endl;
}

void reverse(int i,int j,vector<int>&a){
    while(i<=j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}
int main(){
    vector<int>v;
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;
    cout<<"Enter the element of vector : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k;
    cout<<"How Many times you want to rotate : ";
    cin>>k;
    if(k>n) k=k%n;
    reverse(0,n-1,v);
    reverse(0,k-1,v);
    reverse(k,n-1,v);
    display(v);
}