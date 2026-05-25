#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x;
    cout<<"Enter A Number : ";
    cin>>x;
    int y;
    cout<<"Enter A Number : ";
    cin>>y;
    cout<<"Min : "<<min(x,y)<<endl;
    cout<<"Max : "<<max(x,y)<<endl;
    cout<<"Sqare Root : "<<sqrt(x)<<endl;
    cout<<"Power : "<<pow(x,y)<<endl;
    cout<<"Cube Root : "<<cbrt(x)<<endl;
}
