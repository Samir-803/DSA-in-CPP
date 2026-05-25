#include<bits/stdc++.h>
using namespace std;
    
class A{
    public :             // can be access can be inherited 
     int a_ka_public; 
    protected :          // can't be access can be inherited 
     int a_ka_protected;
    private :            // can't be access can't be inherited 
     int a_ka_private;
};


class B : virtual public A{
    public :
     int b_ka_public;
    protected :
     int b_ka_protected;
    private :
     int b_ka_private; 
};

class C : virtual public A{
    public :
    int c_ka_public;
    protected :
    int c_ka_protected;
    private :
    int c_ka_private;
};

class D : public B,public C{
    public :                
       int d_ka_public;

    void show(){                 // D get a_ka_public from B and C so this will give error
        cout<<a_ka_public<<endl; // for that we use virtual public means agar jyada bar hai to ek bar hi aayenga !!
    }
};

int main(){
   A a;
   B b; 
   C c; 
   D d;
   d.a_ka_public =  10;
   d.show();  
}