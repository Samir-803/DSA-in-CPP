#include<iostream>
using namespace std;
int main(){
    int p = 10;
    int q = 10;
    int x = 20;
    cout<<(p==q==x)<<endl;
    p = 0;
    cout<<(p==(q==x));
    cout<<"\n";
    int y = 3;
    cout<<(y = 7);
}