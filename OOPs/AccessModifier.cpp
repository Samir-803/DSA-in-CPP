#include<bits/stdc++.h>
using namespace std;

// you can go from low to high but can't go from high to low  
// this is single inheritance    
class A{
    // we can't access protected and private outside the class 
    // but diff is protected can be inherited
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


// this is multi-level inheritance
class B : protected A{
    // if you take public then you can access public and protected   
    // if you take private then you can't access anything
    // if you take protected then you can access public and protected but the public become protected
    public :
     int b_ka_public;
    protected :
     int b_ka_protected;
    private :
     int b_ka_private; 
     
    void show(){
        a_ka_protected = 20;
    }

    public :
    B(){
        cout<<"B ka Constructor call hua !!\n";
    }
};

class C : public B{
    public :
    int c_ka_public;
    protected :
    int c_ka_protected;
    private :
    int c_ka_private;
     
    void show(){
        a_ka_protected = 20;
    }

    public :
    C(){
        cout<<"C ka Constructor call hua !!\n";
    }
};

int main(){
   A a;
   B b; 
   C c;    
}