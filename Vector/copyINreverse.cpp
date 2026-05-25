#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>a){
    for(int i=0;i<a.size();i++){
        cout<<a.at(i)<<" ";
    }cout<<endl;
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
    display(v);
    
    vector<int>v1(v.size());
    for(int i=0;i<v.size();i++){
      v1[i] = v[v.size()-1-i]; 
    }
    display(v1);
    // this is a built in function for only vector 
    // reverse(v.begin(),v.end());
    display(v1);

}