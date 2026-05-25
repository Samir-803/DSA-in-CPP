#include<bits/stdc++.h>
using namespace std;
int main(){
    // char str[] = {'a','b','c'};
    char str[] = "Samir is my name";
    str[2] = 'r';
    cout<<str<<endl;
    cout<<str[2]<<endl;
    cout<<(int)str[16];//this is a null character 
    //null character comes in end of the string and it denots by '/0'
    //size of string is total character + 1(null character)
}