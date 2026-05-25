#include<bits/stdc++.h>
using namespace std;

class Marks{
    public :
    // static means it will same for all object means doesn't depend on any object 
    static int  nos;
    int physics;
    int chem;
    int maths;

    Marks (int physics , int maths , int chem){
      this->physics = physics;
      this->chem = chem;
      this->maths = maths;
    }

    // does not belong to any object it belong to class
    // static fun can access static members
    static void increas(){
        nos++;
    }
};

int Marks::nos = 10;
// in this function whenever you call this fun it will creat an new b and make it value 10 
// so b++ is illrelevent 
void print(){
    int b = 10;
    cout<<b<<" ";
    b++;
}

// static means it will creat only one time and remember it's value
void print2(){
    static int b = 10;
    cout<<b<<" ";
    b++;
}

int main(){
    // you can also give paramiter to that constructor like an function of setter 
    Marks light(91,95,90);
    Marks L(80,100,99);
    Marks Rhyok(50,45,50);

    // it will same for every object
    light.increas();
    cout<<light.nos<<" "<<L.nos<<endl;

    L.increas();
    cout<<light.nos<<" "<<L.nos<<endl;

    Marks ::increas();
    cout<<light.nos<<" "<<L.nos<<endl;

    // print();
    // print();
    // print();
    // cout<<endl;
    // print2();
    // print2();
    // print2();

    // cout<<light.physics<<" "<<light.chem<<" "<<light.maths<<endl;
    // cout<<L.physics<<" "<<L.chem<<" "<<L.maths<<endl;
    // cout<<Rhyok.physics<<" "<<Rhyok.chem<<" "<<Rhyok.maths<<endl;
}