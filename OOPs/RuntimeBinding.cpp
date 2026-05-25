#include<bits/stdc++.h>
using namespace std;
  
// this is single inheritance    
class A{
    public :             // can be access can be inherited 
    int a_ka_public; 
    
    virtual void show(){
        cout<<"Me A ka Show hu \n";
    }
};


class B :  public A{
    public :
     int b_ka_public;

    void show(){
        cout<<"Me B ka Show hu \n";
    }
};

int main(){
    //compiler POV = bhai ye to A ka pointer hai isiliye matlab A ko call lagao !!
    // RunTime POV = bhai bhale hi A ka pointer hai lekin adress to B ka hai B ko call lagao !!
    // agar compiler ke POV se jaonge to A ko call lagega jise compile time binding kahte hai !! 
    // agar tum use virtual kardo to Runtime POV se B ko lagega !! 
    // jise run time binding kahte hai !!
   A* a;
   B  b;
   a = &b;
   a->show();
   a = new A;
   a->show();
}