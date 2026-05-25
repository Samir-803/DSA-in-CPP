#include<bits/stdc++.h>
using namespace std;

class Marks{
    public :
    int physics;
    int chem;
    int maths;

    Marks (int physics , int maths , int chem){
      this->physics = physics;
      this->chem = chem;
      this->maths = maths;
    }
    
    // Copy Constructor Always Call by Reference
    // Marks(Marks &x){
    //   this->physics = x.physics;
    //   this->chem = x.chem;
    //   this->maths = x.maths;
    // }
    //Marks(){}
};

int main(){
  // Marks light(98,97,90);
  // Marks L(5,4,3);
  // L = light;   // shallow copy only works when you creat any pointer 
  // light.chem = 80;
  // cout<<L.chem<<" "<<light.chem<<endl;

  Marks light(98,97,90);
  Marks L(light);   // Deep copy // ye apne app hi ban jayenga iske liye koi alag constructor banane ki jarurart nhi hai
  light.chem = 80;
  cout<<L.chem<<" "<<light.chem<<endl;

    // Marks light(98,97,90);
    // Marks L(light);  
}