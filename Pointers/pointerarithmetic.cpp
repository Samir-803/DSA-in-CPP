#include<iostream>
using namespace std;
int main(){
    // if we increase or decrease a pointer then it will increase how many it's dats type stores 
    // means if we take char it will increase 1 bytes 
    int x;
    cin>>x;
    int* ptr = &x;    
    cout<<ptr<<endl;  //0x61ff08
    cout<<(*ptr)<<endl;//5
    ptr++;
    cout<<ptr<<endl;   //0x61ff0c
    cout<<(*ptr)<<endl;  //Random Number Because we lost our first address of "5"
}