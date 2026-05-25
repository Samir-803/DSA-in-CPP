#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int rev = 0;
    int ld;
    while(n>0){
    rev *= 10;
    ld = n%10;
    rev += ld;
    n=n/10;
    }
    cout<<"reverse of your given number is : "<<rev;
}