#include<bits/stdc++.h>
using namespace std;

class Player{
    // we can access it outside class
    public :
    string name;
    int hp;
    int kill;

    // we can't access it outside the class
    protected :
    int i;

    // we can't access it outside the class 
    private:
    string weapon;
};

int main(){
    Player samir;
    samir.hp = 20;
    samir.name = "Samir";
    samir.kill = 5;
    cout<<samir.hp<<endl;
    cout<<samir.kill<<endl;
    cout<<samir.name<<endl;
}