#include<iostream>
using namespace std;

void swap(float* a,float* b){
    float temp = *a;
    *a = *b;
    *b = temp;
    return ;
}
int main(){
   float x,y;
   //int* p1=&x,p2=&y;  This Is Wrong
   float *p1=&x,*p2=&y;
   
   cin>>*p1;
   cin>>*p2;
    
   swap(p1,p2); //swap(&x,&y);
   cout<<x<<" "<<y;
}