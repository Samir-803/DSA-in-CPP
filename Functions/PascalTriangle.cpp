#include<iostream>
using namespace std;

int fact(int x){
   if(x==0) return 1;
   return x*fact(x-1); 
}
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;

    for(int i=0;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
        cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }cout<<endl;
    }

}