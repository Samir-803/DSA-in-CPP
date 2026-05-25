#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[] = {'a','b','\0','d'};
    char ptr[] = "hello world";
    for(int i=0;ptr[i]!='\0';i++){
        cout<<ptr[i];
    }
    // if'\0' comes after that it doesn't print anything 
    cout<<endl<<str;
}
