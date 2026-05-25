#include<bits/stdc++.h>
using namespace std;
  
// this is single inheritance    
class A{
    public :             // can be access can be inherited 
     int a_ka_public; 
    protected :          // can't be access can be inherited 
     int a_ka_protected;
    private :            // can't be access can't be inherited 
     int a_ka_private;

    public :
    A(){
    cout<<"A ka Constructor call hua !!\n";
    }
};


class B {
    public :
     int b_ka_public;
    protected :
     int b_ka_protected;
    private :
     int b_ka_private; 

    public :
    B(){
        cout<<"B ka Constructor call hua !!\n";
    }
};

// this is multiple inheritance
class C : public B , public A{
    public :
     int c_ka_public;
    protected :
     int c_ka_protected;
    private :
     int c_ka_private;
     
    public :
    C(){
        cout<<"C ka Constructor call hua !!\n";
    }
};

int main(){
   A a;
   B b; 
   C c;    
   // then hierarchical inheritance means one parent multiple child
   // then hybrid inclue all and also include multiple parent some common child
}