#include<bits/stdc++.h>
using namespace std;

class Marks{
    public :
    int physics;
    int chem;
    int maths;

    // whenever you creat any object it will call constructor 
    // default constructor
    // constructor return type is your class 
    Marks (int physics , int maths , int chem){
      this->physics = physics;
      this->chem = chem;
      this->maths = maths;
      cout<<"Hi Everyone !!\n";
    }
};

int main(){
    // you can also give paramiter to that constructor like an function of setter 
    Marks light(91,95,90);
    Marks L(80,100,99);
    Marks Rhyok(50,45,50);

    cout<<light.physics<<" "<<light.chem<<" "<<light.maths<<endl;
    cout<<L.physics<<" "<<L.chem<<" "<<L.maths<<endl;
    cout<<Rhyok.physics<<" "<<Rhyok.chem<<" "<<Rhyok.maths<<endl;
}