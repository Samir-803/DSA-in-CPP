#include<bits/stdc++.h>
using namespace std;
                                                             
class vehical{
    public :    
    int tyre;
    int engine;                                   
     
    vehical(){
        cout<<"Vehical ko call laga\n";
    }
    // you can also access fun of vehical through Bike(his child)
};

class Bike : public vehical{// bike is a child of vehical we can access all member of it
    public :
    string comapany;

    Bike(){
    cout<<"Bike ko call laga\n";
    }
};
class car : public vehical{
    public :
    string Company;

    car(){
        cout<<"Car ko call hua\n";
    }
};

int main(){
    Bike Honda;
    Honda.comapany = "Honda";
    Honda.engine = 50;
    Honda.tyre = 2;

    car swift;
    swift.Company = "Swift";
    swift.engine = 100;
    swift.tyre = 4;

    cout<<Honda.comapany<<" "<<swift.engine<<endl;
}