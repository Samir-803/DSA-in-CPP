#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v; // you don't need to mention it's size
    // you didn't metioned it's size so you can't write v[0] you have to write
    v.push_back(1); // push_back make a space to store element 
    // v[1] = 5;  we can't write is cause we didn't have a space
    v.push_back(2); // push_back double the size of v
    v.push_back(3);
    v.push_back(4);
    for(int i=0;i<4;i++){
        cout<<v[i]<<" ";
    } cout<<"\n";
    v[3] = 5;
    // now you can change or print the element of array v
    for(int i=0;i<4;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.front()<<" "<<v.back();
    
}
