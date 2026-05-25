#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"enter cost price : ";
    cin>>cp;
     int sp;
    cout<<"enter selling price : ";
    cin>>sp;
    if(sp==cp) cout<<"No Profit,No Loss";
    if(sp>cp) cout<<"Profit = "<<(sp-cp);
    if(cp>sp) cout<<"Loss = "<<(cp-sp);
}
   