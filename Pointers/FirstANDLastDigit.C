#include<iostream>
using namespace std;

void FnL(int x,int* ld,int* fd){
    *ld = (x)%10;
    while((x)>10){
        x = (x)/10;
    }
    *fd = x;
}
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int ld;
    int fd;
    FnL(n,&ld,&fd);
    cout<<"Your Number is : "<<n<<endl;
    cout<<"First Digit is : "<<fd<<endl;
    cout<<"Last Digit is : "<<ld<<endl;
}