#include<bits/stdc++.h>
using namespace std;

class Gun{
    public :
    int Amo;
    int damage;
    int scope;
};

class Player{
    private :
    int hp;
    int kill;
    Gun gun;

    public :
    // setter 
    // this->hp means hp of this class
    void sethp(int hp){
       this->hp = hp;
    }

    void setkill(int kill){
        this->kill = kill;
    }

    void setgun(Gun gun){
        this->gun = gun;
    }

    // getter
    int gethp(){
        return hp;
    }

    int getkill(){
        return kill;
    }

    Gun getgun(){
        return gun;
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

    Gun awm;
    awm.Amo = 15;
    awm.damage = 150;
    awm.scope = 8;
    samir.setgun(awm);

    Gun M10;
    M10.Amo = 36;
    M10.damage = 85;
    M10.scope = 0;

    Player jay;
    jay.sethp(120);
    jay.setkill(10);
    jay.setgun(M10);

    cout<<jay.getgun().Amo<<endl;
    cout<<samir.getgun().damage<<endl;
}