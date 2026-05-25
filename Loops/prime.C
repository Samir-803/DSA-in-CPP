#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    bool flag=true;
    for(int i=2;i<n;i++){
    if(n%i==0) flag = false; 
    }
    if(n==1) cout<<"1 is neither prime nor composite";
    else if(flag==true) cout<<n<<" is a prime number";
    else cout<<n<<" is a composite number";
}