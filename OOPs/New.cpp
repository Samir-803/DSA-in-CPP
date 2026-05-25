#include<bits/stdc++.h>
using namespace std;

class Player{
    private :
    int hp;
    int kill;

    public :
    // setter 
    // this->hp means hp of this class
    void sethp(int hp){
       this->hp = hp;
    }

    void setkill(int kill){
        this->kill = kill;
    }

    // getter
    int gethp(){
        return hp;
    }

    int getkill(){
        return kill;
    }
};


int addhp(Player a,Player b){
    return a.gethp() + b.gethp();
}

Player mostkill(Player a,Player b){
    if(a.getkill()>b.getkill()) 
         return a;
    else 
        return b;
}
int main(){
    Player samir;
    samir.sethp(100);
    samir.setkill(5);

    Player jay;
    jay.sethp(120);
    jay.setkill(10);

    cout<<addhp(samir,jay)<<endl;
    Player Nik = mostkill(samir,jay);
    cout<<Nik.getkill();
}