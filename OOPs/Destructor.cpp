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
    }

    // Destructor is like constructor 
    // it is free memory after work
    // whenever a object goes outside it's scope then it will call destructor 
    ~Marks(){
       cout<<"Gyi Tari Memory !!\n"; 
    }
};

int main(){
    Marks light(91,95,90);
    Marks L(80,100,99);
    Marks Rhyok(50,45,50);

    bool flag = true;
    if(flag){
        Marks Samy(99,98,97);
        cout<<Samy.physics<<" "<<Samy.chem<<" "<<Samy.maths<<endl;
    }

    cout<<light.physics<<" "<<light.chem<<" "<<light.maths<<endl;
    cout<<L.physics<<" "<<L.chem<<" "<<L.maths<<endl;
    cout<<Rhyok.physics<<" "<<Rhyok.chem<<" "<<Rhyok.maths<<endl;
}