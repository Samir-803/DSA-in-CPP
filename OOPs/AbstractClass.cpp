#include<bits/stdc++.h>
using namespace std;
  
// this is single inheritance    
class A{
    public :             // can be access can be inherited 
    int a_ka_public; 

    void Show(){
        cout<<"hi!!\n";
    }
    virtual void show() = 0;   // abstract class only define 
    virtual void display() = 0; // only define
};


class B : public A{
    public :
     int b_ka_public;

      // agar son me wo fun hai alag lekin honge sabhi me to iske liye virtual use karte hai
    void show(){                  // abstract class ki defination 
        cout<<"B ka Show!!\n"; // agar hum ise bhul gye to error dega
    }  
                                // koi bhi fun sub hum bhul na jaye isiliye
    void display(){
        cout<<"B ka Display\n";
    }                           
};

int main(){
  // A a;  ab ye abstract class hai ye sirf hai define ke liye baki ye kisi kam ka nhi hai
  // iske object hum nahi bana sakte
   B b;
   b.Show();
   b.show();
}