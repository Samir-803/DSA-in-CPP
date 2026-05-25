#include<bits/stdc++.h>
using namespace std;
  
// this is single inheritance    
class A{
    public :             // can be access can be inherited 
     int a_ka_public; 
    
    void show(){
        cout<<"Me A ka Show hu \n";
    }
};


class B : public A{
    public :
     int b_ka_public;

    void show(){
        cout<<"Me B ka Show hu \n";
    }
};

int main(){
    A a;
    a.show();
    B b;
    b.show();   // this fun override it's parent fun 
    b.A::show();  // to access it we use :: (means iska);

    A *q;
    // int a;
    // q = &a // same data type hona chahiye !!
    A w;
    q = &w;
    B v;
    q = &v; // A uske child ke object ka address bhi store kar sakta hai !!
}