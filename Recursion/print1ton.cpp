#include<bits/stdc++.h>
using namespace std;
void print(int n,int x){
    cout<<x<<endl;
    if(x==n) return;
    print(n,x+1);
}
int main(){
    int n;
    cout<<"Enter a number : "; 
    cin>>n;
    int x = 1;
    print(n,x);
    }