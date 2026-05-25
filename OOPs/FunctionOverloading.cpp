#include<bits/stdc++.h>
using namespace std;

class Player{
    public :
    int hp;
    int kill;

    // Same name ke fun ko diff argument dene se woh diff fun ki tarah behave karte hai !!!
    // us fun ke return type badlne se aur name same rakhne se kuch farak nahi padta !!
    // Fun Overloading use kahte hai jisme name same and argument alag hote hai !!
    Player(int h,int k) : hp(h) , kill(k) {};
    Player(int h) : hp(h) , kill(10) {};
    Player() : hp(20) , kill(15) {};
};

// ex
void add(int a,int b){
    cout<<a+b<<endl;
}

void add(int a){
    cout<<a+10<<endl;
}

// this is not a fun Overloading
// int add(int a,int b){
//     cout<<a+b<<endl;
// }

int main(){
    Player light(100,5);
    Player L(200);
    Player Rhyok;

    cout<<light.hp<<" "<<light.kill<<endl;
    cout<<L.hp<<" "<<L.kill<<endl;
    cout<<Rhyok.hp<<" "<<Rhyok.kill<<endl;
}