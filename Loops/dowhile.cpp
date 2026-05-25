#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number which table you want to print : ";
    cin>>n;
    int i=1;
    //DO While loop atleast work one time 
    do{
        cout<<i*n<<" ";
        i++;
    }while(i<=10);
}