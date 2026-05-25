#include<bits/stdc++.h>
using namespace std;

class Player{
    private :
    string name;
    int hp;
    int kill;

    public :
    // setter 
    void sethp(int h){
        cout<<"Someone Trying to Change hp"<<endl;
        hp = h;
    }
    void setkill(int k){
        cout<<"Someone Trying to Change KILL"<<endl;
        kill = k;
    }

    // getter
    int gethp(){
        return hp;
    }
    int getkill(){
        return kill;
    }
};

int main(){
  Player samir;
  samir.sethp(10);
  samir.setkill(5);

  cout<<samir.gethp()<<endl<<samir.getkill();
}