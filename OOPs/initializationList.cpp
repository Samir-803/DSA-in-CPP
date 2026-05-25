#include<bits/stdc++.h>
using namespace std;

class Marks{
    public :
    int physics;
    int chem;
    int maths;

    // Initialisation List 
    Marks (int p , int m , int c = 120) : physics(p),maths(m),chem(c){};  
};

int main(){
    Marks light(91,95,90);
    Marks L(80,100);

    cout<<light.physics<<" "<<light.chem<<" "<<light.maths<<endl;
    cout<<L.physics<<" "<<L.chem<<" "<<L.maths<<endl;
}