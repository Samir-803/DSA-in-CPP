#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int count=0;
    int sum=0;
    int ld;
    if(n==0) count=1,sum=0;
    while(n>0){
        count++;
        ld=n%10;
        sum+=ld;
        n=n/10;
    }
    cout<<"it is a "<<count<<" Digit number"<<endl;
     cout<<"Sum of a Digit is : "<<sum;
}
