#include<bits/stdc++.h>
using namespace std;

class Cricketers{
    public :
    string name;
    int score;
};

int main(){
    Cricketers cricketers[2];
    for(int i=0;i<2;i++){
        cin>>cricketers[i].name>>cricketers[i].score;
    }
    for(int i=0;i<2;i++){
        cout<<cricketers[i].name<<endl<<cricketers[i].score<<endl;
    }
}