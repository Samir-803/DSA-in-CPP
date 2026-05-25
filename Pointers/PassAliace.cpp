#include<iostream>
using namespace std;

// Don't try to Understand it Just Feel it.....
void swap(float &a,float &b){
    float temp = a;
    a = b;
    b = temp;
    return ;
}
int main(){
   float x,y;
   
   cin>>x;
   cin>>y;
    
   swap(x,y); //swap(&x,&y);
   cout<<x<<" "<<y;
}