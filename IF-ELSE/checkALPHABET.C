#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a Character : ";
    cin>>ch;
    int ASCII=(int)ch;
    if(ASCII>=65 && ASCII<=90 || ASCII>=97 && ASCII<=122){
        cout<<"The Character is a Alphabet";
    }
    else cout<<"The Character is not a Alphabet";
}