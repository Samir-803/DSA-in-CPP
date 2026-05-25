#include<iostream>
using namespace std;
int main(){
   float x,y;
   //int* p1=&x,p2=&y;  This Is Wrong
   float *p1=&x,*p2=&y;
   cout<<"Enter 1st Number : ";
   cin>>*p1;
   cout<<"Enter 2nd Number : ";
   cin>>*p2;
   cout<<(x+y);
}