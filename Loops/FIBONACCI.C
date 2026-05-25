#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

   int fib1=0;
   int fib2=1;
   int fib;
   for(int i=1;i<n;i++){
    fib = fib1 + fib2 ;
    if(i==2) fib = 1;
    cout<<fib<<" ";
    fib1 = fib2;
    fib2 = fib;
   }
  
}