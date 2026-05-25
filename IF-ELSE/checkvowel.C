#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a Character : ";
    cin>>ch;
    int ASCII=(int)ch;
    if(ASCII>=65 && ASCII<=90 || ASCII>=97 && ASCII<=122){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'||ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        cout<<"The character is Vowel";
        }
    else cout<<"The character is consonant";
    }
    else cout<<"The Character is not a Alphabet";
}