#include<bits/stdc++.h>
using namespace std;
void PIP(int n){
 if(n==0) return;
 cout<<"Pre "<<n<<endl;
 PIP(n-1);
 cout<<"IN "<<n<<endl;
 PIP(n-1); 
 cout<<"POST "<<n<<endl;   
}
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    PIP(n);
}