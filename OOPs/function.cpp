#include<bits/stdc++.h>
using namespace std;

class Player{
    // we can access it outside class
    public :
    string name;
    int hp;
    int kill;

    void showhealth(){
        cout<<"health is : "<<hp<<endl;
    }

    void showkill(){
        cout<<"kill is : "<<kill<<endl;
    }
};

int main(){
   Player player[3];

   player[0].hp = 20;
   player[0].kill = 5;

   Player samir;
   samir.hp = 30;

   player[1] = samir;

   samir.kill = 10;
   player[0].showhealth();
   player[0].showkill();
   player[1].showhealth();
   samir.showkill();
}